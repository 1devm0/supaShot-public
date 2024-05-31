#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <signal.h>


typedef uint8_t  u08;
typedef uint16_t u16;
typedef uint32_t u32; 
typedef uint64_t u64;

typedef int8_t  i08;
typedef int16_t i16; 
typedef int32_t i32;
typedef int64_t i64;

typedef float f32;
typedef double f64;

typedef size_t sz_t;

#define i08_min -128
#define i16_min -32768
#define i32_min -2147483647 - 1
#define i64_min -9223372036854775807LL - 1

#define i08_max  127 
#define i16_max  32767
#define i32_max  2147483647
#define i64_max  9223372036854775807LL

#define u08_max  0xff
#define u16_max  0xffff
#define u32_max  0xffffffff
#define u64_max  0xffffffffffffffffULL 

#pragma once

// https://stackoverflow.com/questions/3437404/min-and-max-in-c 
#define min(a,b) \
({ __typeof__ (a) _a = (a); \
   __typeof__ (b) _b = (b); \
 _a > _b ? _b : _a; })



/*
////////////////////////////////////////
////////////////////////////////////////
/// Logger:
///     ulogger_log: Takes in a LOG_LEVEL enum and the usual printf arguments and does colored outputting
////////////////////////////////////////
////////////////////////////////////////
*/
typedef enum {
    LOG_DBG,
    LOG_SUCCESS,
    LOG_WARN,
    LOG_ERR,
    LOG_LEVEL_LEN
} LOG_LEVEL;

void ulogger_log(LOG_LEVEL level, const char * fmt, ...);

#ifdef DBG
    #define uassert(...) assert(__VA_ARGS__)
    #ifndef __EMSCRIPTEN__
        #define huh(...) ulogger_log(LOG_DBG, __VA_ARGS__)
        #define hah(...) ulogger_log(LOG_SUCCESS, __VA_ARGS__)
        #define bruh(...) ulogger_log(LOG_WARN, __VA_ARGS__)
        #define clog(...) ulogger_log(LOG_ERR, __VA_ARGS__)
    #else 
        #define huh(...) ulogger_log(LOG_DBG, __VA_ARGS__)
        #define hah(...) ulogger_log(LOG_DBG, __VA_ARGS__)
        #define bruh(...) ulogger_log(LOG_DBG, __VA_ARGS__)
        #define clog(...) ulogger_log(LOG_DBG, __VA_ARGS__)
    #endif
#else 
    #define uassert(...) assert(__VA_ARGS__) 
    #define huh(...) 
    #define hah(...) 
    #define bruh(...) 
    #define clog(...) 
#endif

/*
////////////////////////////////////////
////////////////////////////////////////
/// Allocation Functions
////////////////////////////////////////
////////////////////////////////////////
*/

// implement garbage collector?

void * ualloc_raw(sz_t num_of_items, sz_t item_size, const char * type);

#define ualloc(num_of_items, type) ualloc_raw(num_of_items, sizeof(type), #type);

void ufree(void * ptr);


/*
////////////////////////////////////////
////////////////////////////////////////
/// Utility Functions
////////////////////////////////////////
////////////////////////////////////////
*/

// copied from a bunch of things
char * ustr_dup(const char * src);
char * ui32_to_str(i32 i, char * special_str, u32 char_number);
// char * uf64_to_str(f64 num, char * special_str);
i32 ustr_to_i32(char * str);


u64 uhash_id(const char * id);

sz_t uis_prime(const sz_t x);
sz_t unext_prime(sz_t x); 

/*
////////////////////////////////////////
////////////////////////////////////////
/// File I/O Functions:
///     file_info_t struct
///     file_exists: Takes in a filepath and checks if it exists
///     txt_file_query: Takes in a filepath and loads its data into a string (ONLY FOR .TXT FILES)
///     txt_file165write: Writes a string to a given filepath 
////////////////////////////////////////
////////////////////////////////////////
*/

FILE * ufile_exists(const char * path);
char * utxt_file_query(const char * path);
i08 utxt_file_write(const char * content, const char * path); 

/*
////////////////////////////////////////
////////////////////////////////////////
/// Profiler:
///     prof_t: only important data for user is elapsed which stores elapsed time 
///     prof_start: starts profiling
///     prof_end: ends profiling and stores the time in the elapsed variable
///    *Note: elapsed time is stored in milliseconds
////////////////////////////////////////
////////////////////////////////////////
*/

#ifdef __WIN32__
    #include <Windows.h>
    #include <psapi.h>
    typedef struct {
        LARGE_INTEGER frequency;
        LARGE_INTEGER t1, t2;
    } uprof_timer_t;
#else
    #include <sys/time.h>  
    #include <sys/resource.h>
    #include <unistd.h>
    typedef struct {
        struct timeval t1, t2;
    } uprof_timer_t;
#endif


typedef struct {
    uprof_timer_t timer;
    i64 mb_mem_used; // megabytes
    f64 ms_elapsed;
} uprof_t;


void uprof_start(uprof_t * profiler);
void uprof_end(uprof_t * profiler);

/*
////////////////////////////////////////
////////////////////////////////////////
/// Data Structures:
///     uvectors: Dynamic arrays of any specified type with the following functions:
///         uvec_uht_name_pair_t: uvector of a given type 
///         uvec_name_t: uvector of a given type 
///         uvec_name_mk: makes a uvector with a given size
///         uvec_name_add: adds an element to a given uvector 
///         uvec_name_add_at: adds an element to a given uvector at a given index 
///         uvec_name_rm_at: removes an element from a given uvector at a given index 
///         uvec_name_rm: removes a uvector by freeing it 
///     Hash Tables: Hash tables of any specified type with the following functions:
///         Keep in mind the key cannot be bigger than 128 characters
///         uht_name_mk: makes a hash table with a given size and takes in a uvec_uht_name_pair_t* (this type is defined by the macro itself)
///         uht_name_add: adds a key and value to the hash table 
///         uht_name_get: gets a value based on the given key in a given hash table 
///         uht_name_rm_pair: removes an element from the given hash table based on the given key 
///         uht_name_rm: removes a hash table by freeing it
///
///      In all of these functions, the name is defined by the user so i.e Cuvec_DEF(phys_obj, obj) means 
///      that it will create a uvector that stores the type phys_obj with the name obj. The user may 
///      define more types for these structures as long as they are not part of the pre-defined types
///      that come in the library
///
/// Pre-defined types for uvectors and hash tables:
///     u08, u16, u32, u64, u08_arr, u16_arr, u32_arr, u64_arr
///     i08, i16, i32, i64, i08_arr, i16_arr, i32_arr, i64_arr
///     f32, f64, f32_arr, f64_arr
///     char, char_arr (string)
///     void *
///   Hash table has an extra special definition for holding lists of strings as it is used by the parser:
///     uvec_char_arr
///
/// TODO: Linked lists...etc..
/// Maybe use linked lists to resolve collisions in hash tables
////////////////////////////////////////
////////////////////////////////////////
*/
#define CVEC_DEF(tn, name) \
    typedef struct _uvec_##name##_t { tn * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_##name##_t; \
    void uvec_##name##_mk(uvec_##name##_t * v, u64 sz); \
    void uvec_##name##_incr(uvec_##name##_t * v); \
    u64 uvec_##name##_add(uvec_##name##_t * v, tn i);  \
    u64 uvec_##name##_add_at(uvec_##name##_t * v, u64 idx, tn i); \
    u08 uvec_##name##_rm_at(uvec_##name##_t * v, u64 idx); \
    void uvec_##name##_rm(uvec_##name##_t * v); \



#define CVEC_IMPL(tn, name) \
    void uvec_##name##_mk(uvec_##name##_t * v, u64 sz) { \
        v -> sz = unext_prime(sz); \
        v -> e = ualloc(v -> sz, tn); \
        v -> last_accessed_idx = 0; \
        v -> used = 0; \
    } \
    void uvec_##name##_incr(uvec_##name##_t * v) { \
        v -> sz = unext_prime(v -> sz * v -> sz); \
        v -> e = realloc(v -> e, sizeof(tn) * v -> sz); \
    } \
    u64 uvec_##name##_add(uvec_##name##_t * v, tn i) { \
        if (v -> last_accessed_idx < v -> sz) { \
            v -> e[v -> last_accessed_idx] = i; \
        } else { \
            uvec_##name##_incr(v); \
            v -> e[v -> last_accessed_idx] = i; \
        } \
        v -> last_accessed_idx++; \
        v -> used++; \
        return v -> last_accessed_idx - 1; \
    } \
    u64 uvec_##name##_add_at(uvec_##name##_t * v, u64 idx, tn i) { \
        if (idx < v -> sz) { \
            v -> e[idx] = i; \
            if (v -> last_accessed_idx < idx) v -> last_accessed_idx = idx; v -> used++; \
        } else { \
            uvec_##name##_incr(v); \
            v -> e[idx] = i; \
            if (v -> last_accessed_idx < idx) v -> last_accessed_idx = idx; v -> used++; \
        } \
        return v -> last_accessed_idx; \
    } \
    u08 uvec_##name##_rm_at(uvec_##name##_t * v, u64 idx) { \
        u64 u = idx; \
        while (u < v -> sz) { \
            v -> e[u] = v -> e[u + 1]; \
            u++; \
        } \
        return 1; \
    } \
    void uvec_##name##_rm(uvec_##name##_t * v) { \
        free(v -> e); \
        v -> last_accessed_idx = 0; \
        v -> sz = 0; \
        v -> used = 0; \
    }

// implement removing pairs
#define CHT_DEF(tn, name) \
    typedef struct _uht_##name##_t { char * id; tn data; struct _uht_##name##_t * next; } uht_##name##_pair_t; \
    typedef struct { uht_##name##_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_##name##_t; \
    void uht_##name##_mk(uht_##name##_t * t, sz_t sz);\
    void uht_##name##_check_resize(uht_##name##_t * t); \
    u08 uht_##name##_add(uht_##name##_t * t, char * id, tn data); \
    tn * uht_##name##_get(uht_##name##_t * t, char * id, tn * p); \
    u08 uht_##name##_has(uht_##name##_t * t, char * id); \
    void uht_##name##_rm(uht_##name##_t * t);

#define CHT_IMPL(tn, name) \
    void uht_##name##_mk(uht_##name##_t * t, sz_t sz) { \
        t -> sz = unext_prime(sz); \
        t -> e = ualloc(t -> sz, uht_##name##_pair_t); \
        uht_##name##_pair_t * ptr = NULL; \
        for (u32 u = 0; u < t -> sz; u++) { t -> e[u] = NULL;  }; \
        t -> used = 0; \
    } \
    u08 uht_##name##_add(uht_##name##_t * t, char * id, tn data) { \
        uht_##name##_pair_t * p = ualloc(1, uht_##name##_pair_t); \
        p -> id = ustr_dup(id); \
        p -> data = data; \
        p -> next = NULL; \
        uht_##name##_check_resize(t); \
        u64 idx = uhash_id(id) % t -> sz; \
        if (!t -> e[idx]) { t -> e[idx] = p; t -> used++; return 1; } \
        t -> collisions++; \
        uht_##name##_pair_t * current = t -> e[idx]; \
        while (current -> next && strcmp(id, current -> id)) { current = current -> next; } \
        if (!strcmp(current -> id, id)) { free(t -> e[idx]); t -> e[idx] = p; return 2; } \
        current -> next = p; \
        t -> used++; \
        return 3; \
    } \
    void uht_##name##_check_resize(uht_##name##_t * t) { \
        if (((f32) t -> used / t -> sz) > 0.7) { \
            uht_##name##_t * n = ualloc(1, uht_##name##_t); \
            uht_##name##_mk(n, t -> sz * 3.5); \
            for (u64 u = 0; u < t -> sz; u++) { \
                uht_##name##_pair_t * current = t -> e[u]; \
                while (current) { \
                    uht_##name##_add(n, current -> id, current -> data); \
                    current = current -> next; \
                } \
            } \
            uht_##name##_rm(t); \
            t -> e = n -> e; \
            t -> sz = n -> sz; \
            t -> used = n -> used; \
        } \
    } \
    tn * uht_##name##_get(uht_##name##_t * t, char * id, tn * p) { \
        u64 idx = uhash_id(id) % t -> sz; \
        uht_##name##_pair_t * current = t -> e[idx]; \
        while (current) { \
            if (!strcmp(current -> id, id)) { *p = current -> data; return p; } \
            current = current -> next; \
        } \
        return p;\
    } \
    u08 uht_##name##_has(uht_##name##_t * t, char * id) { \
        u64 idx = uhash_id(id) % t -> sz; \
        u08 found = 0; \
        uht_##name##_pair_t * current = t -> e[idx]; \
        while (current) { \
            if (!strcmp(current -> id, id)) { return 1; } \
            current = current -> next; \
        } \
        return 0;\
    } \
    void uht_##name##_rm(uht_##name##_t * t) { \
        ufree(t -> e); \
        t -> e = NULL; \
        t -> used = 0; \
        t -> sz = 0; \
    }
// shitty free


CVEC_DEF(u08, u08); CVEC_DEF(u16, u16); CVEC_DEF(u32, u32); CVEC_DEF(u64, u64);
CVEC_DEF(i08, i08); CVEC_DEF(i16, i16); CVEC_DEF(i32, i32); CVEC_DEF(i64, i64);
CVEC_DEF(f32, f32); CVEC_DEF(f64, f64);
CVEC_DEF(u08 *, u08_arr); CVEC_DEF(u16 *, u16_arr); CVEC_DEF(u32 *, u32_arr); CVEC_DEF(u64 *, u64_arr);
CVEC_DEF(i08 *, i08_arr); CVEC_DEF(i16 *, i16_arr); CVEC_DEF(i32 *, i32_arr); CVEC_DEF(i64 *, i64_arr);
CVEC_DEF(f32 *, f32_arr); CVEC_DEF(f64 *, f64_arr);
CVEC_DEF(char, char); CVEC_DEF(char *, char_arr);
CVEC_DEF(void *, void);


CHT_DEF(u08, u08); CHT_DEF(u16, u16); CHT_DEF(u32, u32); CHT_DEF(u64, u64);
CHT_DEF(i08, i08); CHT_DEF(i16, i16); CHT_DEF(i32, i32); CHT_DEF(i64, i64);
CHT_DEF(f32, f32); CHT_DEF(f64, f64);
CHT_DEF(u08 *, u08_arr); CHT_DEF(u16 *, u16_arr); CHT_DEF(u32 *, u32_arr); CHT_DEF(u64 *, u64_arr);
CHT_DEF(i08 *, i08_arr); CHT_DEF(i16 *, i16_arr); CHT_DEF(i32 *, i32_arr); CHT_DEF(i64 *, i64_arr);
CHT_DEF(f32 *, f32_arr); CHT_DEF(f64 *, f64_arr);
CHT_DEF(char, char); CHT_DEF(char *, char_arr);
CHT_DEF(void *, void);
// hold pointer to a vector of strings or a list of strings
CHT_DEF(uvec_char_arr_t, vec_char_arr);



/*
////////////////////////////////////////
////////////////////////////////////////
/// Config String Parser:
///     parse_config_str: Parses a given string and stores its config data in a hash table vector
///     write_config_str: Parses a hash table vector and returns the data compiled into a string readable by parse_config_str
////////////////////////////////////////
////////////////////////////////////////
*/
void uparse_config_str(char * str, uht_vec_char_arr_t * config); 
// TODO
char * uwrite_config_str(uht_vec_char_arr_t * config);

/*
////////////////////////////////////////
////////////////////////////////////////
/// Math & Physics Functions:
///     Not going to elaborate much but contains functions for the following types:
///         v2_t : 2d vectors
///         uv3_t : 3d vectors
///         uv4_t : 4d vectors
///         um4x4_t : 4x4 matrices
///         phys_obj : physics object
///         and some utility functions like dist2D and ilerp 
///         grids (bitset)
/// TODO: physics and rects...etc...
/// Taken mainly from Gunslinger (check on GitHub) and my past projects 
////////////////////////////////////////
////////////////////////////////////////
*/
#define uPI 3.141592653589793238462643383279
#define udeg_to_rad(deg) deg * (uPI / 180)
#define urad_to_deg(rad) rad * (180 / uPI)
#define usq(e) (e) * (e)

f32 udist2D(f32 x1, f32 y1, f32 x2, f32 y2);
f32 udir2D(f32 x1, f32 y1, f32 x2, f32 y2);
f32 uilerp(f32 start, f32 stop, f32 amt);
i64 urandnum_gen(i64 lower, i64 upper);

// Note projection functions 
// project v1 onto v2

typedef struct {
    f32 x, y;
} uv2_t;

uv2_t uv2_mk(f32 x, f32 y);
uv2_t uv2_add(uv2_t v1, uv2_t v2);
uv2_t uv2_sub(uv2_t v1, uv2_t v2);
uv2_t uv2_lerp(uv2_t v1, uv2_t v2, f32 amt);
void uv2_scale(uv2_t * v, f32 scalar);
void uv2_normalize(uv2_t * v);
void uv2_limit(uv2_t * v, f32 scalar);
void uv2_rotate(uv2_t * v, f32 theta);
void uv2_mag_set(uv2_t * v, f32 scalar);
void uv2_negate(uv2_t * v);

f32 uv2_mag(uv2_t v);
f32 uv2_angle(uv2_t v);
f32 uv2_dot_prod(uv2_t v1, uv2_t v2);
f32 uv2_dist_between(uv2_t v1, uv2_t v2);
f32 uv2_angle_between(uv2_t v1, uv2_t v2);
uv2_t uv2_projection(uv2_t v1, uv2_t v2);


typedef struct {
    union {
        f32 x, r;
    };
    union {
        f32 y, g;
    };
    union {
        f32 z, b;
    };
} uv3_t;

uv3_t uv3_mk(f32 x, f32 y, f32 z);
uv3_t uv3_add      (uv3_t v1, uv3_t v2);
uv3_t uv3_sub      (uv3_t v1, uv3_t v2);
uv3_t uv3_lerp     (uv3_t v1, uv3_t v2, f32 amt);
void uv3_limit    (uv3_t * v, f32 scalar);
void uv3_scale    (uv3_t * v, f32 scalar);
void uv3_normalize(uv3_t * v);
void uv3_mag_set  (uv3_t * v, f32 scalar);
void uv3_negate   (uv3_t * v);

f32   uv3_mag          (uv3_t v);
f32   uv3_dot_prod     (uv3_t v1, uv3_t v2);
uv3_t  uv3_cross_prod   (uv3_t v1, uv3_t v2);
f32   uv3_dist_between (uv3_t v1, uv3_t v2); 
f32   uv3_angle_between(uv3_t v1, uv3_t v2);
uv3_t  uv3_projection   (uv3_t v1, uv3_t v2);

typedef struct {
    union {
        f32 x, r;
    };
    union {
        f32 y, g;
    };
    union {
        f32 z, b;
    };
    union {
        f32 w, a;
    }; 
} uv4_t;



#define mk_uv4_zero()          (uv4_t) { 0.0f, 0.0f, 0.0f, 0.0f }
#define mk_uv4_one ()          (uv4_t) { 1.0f, 1.0f, 1.0f, 1.0f }


uv4_t uv4_mk(f32 x, f32 y, f32 z, f32 w);
uv4_t uv4_add      (uv4_t v1, uv4_t v2);
uv4_t uv4_sub      (uv4_t v1, uv4_t v2);
uv4_t uv4_lerp     (uv4_t v1, uv4_t v2, f32 amt);
void uv4_limit    (uv4_t * v, f32 scalar);
void uv4_scale    (uv4_t * v, f32 scalar);
void uv4_normalize(uv4_t * v);
void uv4_mag_set  (uv4_t * v, f32 scalar);
void uv4_negate   (uv4_t * v);

f32  uv4_mag         (uv4_t v);
f32  uv4_dot_prod    (uv4_t v1, uv4_t v2);
f32  uv4_dist_between(uv4_t v1, uv4_t v2); 
uv4_t uv4_projection  (uv4_t v1, uv4_t v2);


uv3_t uv2_to_uv3(const uv2_t v);
uv4_t uv3_to_uv4(const uv3_t v);
uv3_t uv4_to_uv3(const uv4_t v);
uv2_t uv3_to_v2(const uv3_t v);

// Note projection functions 
// project v1 onto v2


typedef struct {
    f32 elems[4][4];
} um4x4_t;

um4x4_t um4x4_mk(f32 m00, f32 m01, f32 m02, f32 m03,
               f32 m04, f32 m05, f32 m06, f32 m07,
               f32 m08, f32 m09, f32 m10, f32 m11,
               f32 m12, f32 m13, f32 m14, f32 m15);
// Some of the code has been taken from
// https://github.com/MrFrenik/gunslinger/blob/v0.02-alpha/include/math/gs_math.h
// https://github.com/arkanis/single-header-file-c-libs/blob/master/math_3d.h
// learnopengl.com/Getting-started/Transformations
um4x4_t um4x4_mk_zero();
um4x4_t um4x4_mk_identity();
um4x4_t um4x4_mk_diag(f32 val);

um4x4_t um4x4_add    (um4x4_t m1, um4x4_t m2); 
um4x4_t um4x4_sub    (um4x4_t m1, um4x4_t m2); 
um4x4_t um4x4_mult   (um4x4_t m1, um4x4_t m2); 
um4x4_t um4x4_mult_n (u32 um4x4_count, ...);
uv3_t   um4x4_mult_uv3(um4x4_t m, uv3_t v);
uv4_t   um4x4_mult_uv4(um4x4_t m, uv4_t v);

um4x4_t um4x4_scale_by_uv3    (um4x4_t mat, const uv3_t vector);
um4x4_t um4x4_translate_by_uv3(um4x4_t mat, const uv3_t vector);
um4x4_t um4x4_rotate_by_uv3   (f32 degrees, uv3_t axis);

um4x4_t um4x4_orthographic_projection(f32 l, f32 r, f32 b, 
                                    f32 t, f32 n, f32 f);

um4x4_t um4x4_perspective_projection(f32 fov, f32 w, f32 h, f32 n, f32 f);
um4x4_t um4x4_lookat                (uv3_t pos, uv3_t target, uv3_t up);

typedef i08 movement_t;
typedef i08 coll_t;

typedef struct {
    uv2_t pos; 
    uv2_t vel;       
    uv2_t acc;

    uv2_t size;

    u08 move_r; // right 
    u08 move_l; // left 
    u08 move_u; // up 
    u08 move_d; // down  

    u08 coll_l;    // Left Collision
    u08 coll_r;    // Right Collision
    u08 coll_b;    // Bottom Collision
    u08 coll_t;    // Top Collision
    
    uv2_t cam_true_scroll;

    i32 flip;
} uphys_obj_t;



// Make sure the acceleration is in negative for the y to move up
// Takes in an obj pointer

void uphys_obj_mk(uphys_obj_t * o, uv2_t pos, uv2_t acc, uv2_t size);

/* 
    SAT; handle x -> handle collision -> handle y -> handle collision
*/ 
#define uphys_obj_coll_detect(o1, o2) \
    (o1.pos.x + o1.size.x >= o2.pos.x) &&  \
    (o2.pos.x + o2.size.x >= o1.pos.x) &&  \
    (o1.pos.y + o1.size.y >= o2.pos.y) &&  \
    (o2.pos.y + o2.size.y >= o1.pos.y)

#define uphys_point_coll_detect(point, point_size, o2) \
    (point.x + point_size >= o2.pos.x) &&  \
    (point.y + point_size >= o2.pos.y) &&  \
    (o2.pos.x + o2.size.x >= point.x) &&  \
    (o2.pos.y + o2.size.y >= point.y)

// problem with scroll on particles vs sparks

uv2_t uphys_obj_get_scroll(uphys_obj_t * o, uv2_t render_target_size, f32 speed);

// void uphys_obj_update_vel(uphys_obj_t * o, uv2_t reset_vel, f64 dt);
void uphys_obj_update(uphys_obj_t * o, const uphys_obj_t * tiles, const u32 len, i32 max_gravity_val, f64 dt);
/*

    def update(self, move_speed, tiles=None, gravity=1, custom_movement=None):
        if custom_movement == None:
            movement = [move_speed * (self.movement["right"] - self.movement["left"]),  move_speed * (self.movement["down"] - self.movement["up"])]
            f_movement = (movement[0] + self.vel[0], movement[1] + self.vel[1])
        else:
            f_movement = custom_movement



    def update(self, tiles, gravity=1, movement=[0, 0]):
        f_movement = [movement[0] + self.vel[0], movement[1] + self.vel[1]]

        collision_types = {
            "right" : 0,
            "left" : 0,
            "up" : 0,
            "down" : 0
        }
        self.rects = tiles

        self.rect.x += f_movement[0]
        if tiles != None:
            for tile in tiles:
                if tile.colliderect(self.rect):
                    if f_movement[0] > 0:
                        self.rect.right = tile.left 
                        collision_types["right"] = True

                    if f_movement[0] < 0:
                        self.rect.left = tile.right
                        collision_types["left"] = True

        self.rect.y += f_movement[1]
        if tiles != None:
            for tile in tiles:
                if tile.colliderect(self.rect):
                    if f_movement[1] > 0:
                        self.rect.bottom = tile.top 
                        collision_types["down"] = True

                    if f_movement[1] < 0:
                        self.rect.top = tile.bottom
                        collision_types["up"] = True
           
        if gravity:
            # max gravity
            self.vel[1] = min(8, self.vel[1] + 0.5)

        self.last_movement = movement
        self.collision = collision_types

        if self.collision["down"] or self.collision["up"]:
            self.vel[1] = 0

    def dbg_draw(self, display, offset):
        new_rect = pg.Rect(self.rect.x - offset[0], self.rect.y - offset[1], self.rect.w, self.rect.h)
        pg.draw.rect(display, (255, 255, 255), new_rect, width=1)

        rr = self.rects
        for i in rr:
            i.x -= offset[0]
            i.y -= offset[1]
        for i in rr:
            pg.draw.rect(display, (255, 255, 255), i, width=1)

 */


typedef struct {
    u08 * cells;
    uv2_t size; // total_size = size.x * size.y
    uv2_t cell_size;
} ugrid_t;

void ugrid_mk(ugrid_t * g, u32 w, u32 h, u32 s_w, u32 s_h);
void ugrid_set_px(ugrid_t * g, u32 x, u32 y, u32 val);
u32 ugrid_get_px(ugrid_t * g, u32 x, u32 y);
void ugrid_rm(ugrid_t * g);    





