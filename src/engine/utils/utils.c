#include "./utils.h"
#ifdef __EMSCRIPTEN__
    #define NO_ANSI
#endif

char * type[LOG_LEVEL_LEN] = {
    "DEBUG",
    "SUCCESS",
    "WARN",
    "ERR"
}; 

char * colors[LOG_LEVEL_LEN] = {
    "\x1b[0m",
    "\x1b[32m",
    "\x1b[1;33m",
    "\x1b[31m"
};

time_t current_time;
struct tm * m_time; 

void get_time() {
    time(&current_time);
    m_time = localtime(&current_time);
}

void ulogger_log(LOG_LEVEL level, const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
        get_time();
        #ifndef NO_ANSI 
            printf("%s", colors[level]);
        #endif
        
        printf("[%d/%d/%d -> %d:%d:%d][%s] ", m_time -> tm_mday,
                                        m_time -> tm_mon,
                                        m_time -> tm_year + 1900,
                                        m_time -> tm_hour, 
                                        m_time -> tm_min, 
                                        m_time -> tm_sec,
                                        type[level]); 
        vfprintf(stdout, fmt, args);
        printf("\n%s", colors[LOG_DBG]);
    va_end(args);
}

void * ualloc_raw(sz_t num_of_items, sz_t item_size, const char * type) {
    void * ptr = calloc(num_of_items, item_size);
    if (ptr) {
        // bruh("Allocated %u bytes at %p of type: %s", num_of_items * item_size, ptr, type);
        return ptr;
    }
    clog("Failed to allocate %u bytes of type: %s", num_of_items * item_size, type);
    return NULL;
}

void ufree(void * ptr) {
    bruh("Freed pointer %p", ptr);
    free(ptr);
}


char * ustr_dup(const char * src) {
    u64 len = strlen(src);
    char * str = ualloc(len + 1, char);
    strncpy(str, src, len);
    str[len] = '\0';
    return str;
}


// BE CAREFULE WITH THIS FUNCTION POTENTIAL ERRORS
// FIX IF REQUIREDD
// 128  BYTES
char * ui32_to_str(i32 num, char * special_str, u32 char_number) {
    // char * string = calloc(64, sizeof(char)); 
    memset(special_str, 0, char_number * sizeof(char));
    // uassert(string != NULL);
    snprintf(special_str, char_number, "%d", num); 
    return special_str;
}

char * uf64_to_str(f64 num, char * special_str) {
    memset(special_str, 0, 128 * sizeof(char));
    // uassert(string != NULL);
    snprintf(special_str, 128, "%f", num); 
    return special_str;   
}

// From: https://github.com/TheAlgorithms/C
i32 ustr_to_i32(char * string) {
    int i;
    int sign;
    long value;
    long prev;

    i = 0;
    sign = 1;
    value = 0;

    while (((string[i] <= 13 && string[i] >= 9) || string[i] == 32) && string[i] != '\0')
        i++;

    if (string[i] == '-') {
        sign = -1;
        i++;
    }

    else if (string[i] == '+') {
        sign = 1;
        i++;
    }

    while (string[i] >= 48 && string[i] <= 57 && string[i] != '\0') {
        prev = value;
        value = value * 10 + sign * (string[i] - '0');

        if (sign == 1 && prev > value)
            return (-1);
        else if (sign == -1 && prev < value)
            return (0);
        i++;
    }
    return (value); 
}

u64 uhash_id(char * id) {
    u64 hash = 0xcbf29ce484222325; // FNV_offset_basis
    while (*id) hash = (hash ^ (u08)*id++) * 0x100000001b3; // FNV_prime
    return hash;   
}

sz_t uis_prime(const sz_t x) {
    if (x < 2) { return 0; }
    if (x < 4) { return 1; }
    if ((x % 2) == 0) { return 0; }
    for (sz_t i = 3; i <= floor(sqrt((f64) x)); i += 2) {
        if ((x % i) == 0) {
            return 0;
        }
    }
    return 1;
}



sz_t unext_prime(sz_t x) {
    while (uis_prime(x) != 1) {
        x++;
    }
    return x;
}
FILE * ufile_exists(const char * path) {
    return fopen(path, "rb");
}

char * utxt_file_query(const char * path) {
    FILE * f = ufile_exists(path);
    if (f) {
        // path needed for hot reloading
        uassert(fseek(f, 0, SEEK_END) == 0);
        sz_t len = ftell(f);    
        uassert(len != 0);
        char * content = ualloc(len + 1, char);
        uassert(fseek(f, 0, SEEK_SET) == 0);
        uassert(fread(content, sizeof(char), len, f) == len);
        content[len] = '\0';
        uassert(fclose(f) == 0);
        bruh("Loaded file %s", path);
        return content;
    }
    clog("Failed to open file: %s", path);
    return NULL;
}

i08 utxt_file_write(const char * content, const char * path) {
    FILE * f = fopen(path, "wb");
    if (f) {
        uassert(fwrite(content, sizeof(char), strlen(content), f) == strlen(content));
        uassert(fclose(f) == 0);
        bruh("Wrote to file %s", path);
        return 1;
    } 
    bruh("Failed to write to file %s", path);
    return -1;
}

i32 get_mem_used() {
    #ifdef __WIN32__
        PROCESS_MEMORY_COUNTERS_EX pmc;
        GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
        u64 virtualMemUsedByMe = pmc.PrivateUsage;
        return (i32)roundl(virtualMemUsedByMe / 1000000.0);
    #else

        struct rusage usage;
        getrusage(RUSAGE_SELF, &usage);
        return (i32) roundl(usage.ru_maxrss / 1000000);
    #endif
}



#ifdef __WIN32__
    void uprof_start(uprof_t * profiler) {
        uassert(profiler != NULL);
        profiler -> ms_elapsed = 0.0f;
        profiler -> mb_mem_used = 0;
        QueryPerformanceFrequency(&profiler -> timer.frequency);
        QueryPerformanceCounter(&profiler -> timer.t1);
    }

    void uprof_end(uprof_t * profiler) {
        uassert(profiler != NULL);
        QueryPerformanceCounter(&profiler -> timer.t2);
        LARGE_INTEGER t1, t2, frequency; 
        t1 = profiler -> timer.t1;
        t2 = profiler -> timer.t2;
        frequency = profiler -> timer.frequency;
        // stored in milliseconds
        profiler -> ms_elapsed = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        profiler -> mb_mem_used = get_mem_used(); 
    }

#else
    void uprof_start(uprof_t * profiler) {
        uassert(profiler != NULL);
        profiler -> ms_elapsed = 0.0f;
        profiler -> mb_mem_used = 0;
        gettimeofday(&profiler -> timer.t1, NULL);
    }

    void uprof_end(uprof_t * profiler) {
        uassert(profiler != NULL);
        gettimeofday(&profiler -> timer.t2, NULL);
        struct timeval t1, t2;
        t1 = profiler -> timer.t1;
        t2 = profiler -> timer.t2;
        
        f64 elapsedTime = 0;
        elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
        elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms

        // milliseconds time
        profiler -> ms_elapsed = elapsedTime;
        profiler -> mb_mem_used = get_mem_used(); 
    }

#endif


CVEC_IMPL(u08, u08); CVEC_IMPL(u16, u16); CVEC_IMPL(u32, u32); CVEC_IMPL(u64, u64);
CVEC_IMPL(i08, i08); CVEC_IMPL(i16, i16); CVEC_IMPL(i32, i32); CVEC_IMPL(i64, i64);
CVEC_IMPL(f32, f32); CVEC_IMPL(f64, f64);
CVEC_IMPL(u08 *, u08_arr); CVEC_IMPL(u16 *, u16_arr); CVEC_IMPL(u32 *, u32_arr); CVEC_IMPL(u64 *, u64_arr);
CVEC_IMPL(i08 *, i08_arr); CVEC_IMPL(i16 *, i16_arr); CVEC_IMPL(i32 *, i32_arr); CVEC_IMPL(i64 *, i64_arr);
CVEC_IMPL(f32 *, f32_arr); CVEC_IMPL(f64 *, f64_arr);
CVEC_IMPL(char, char); CVEC_IMPL(char *, char_arr);
CVEC_IMPL(void *, void);

CHT_IMPL(u08, u08); CHT_IMPL(u16, u16); CHT_IMPL(u32, u32); CHT_IMPL(u64, u64);
CHT_IMPL(i08, i08); CHT_IMPL(i16, i16); CHT_IMPL(i32, i32); CHT_IMPL(i64, i64);
CHT_IMPL(f32, f32); CHT_IMPL(f64, f64);
CHT_IMPL(u08 *, u08_arr); CHT_IMPL(u16 *, u16_arr); CHT_IMPL(u32 *, u32_arr); CHT_IMPL(u64 *, u64_arr);
CHT_IMPL(i08 *, i08_arr); CHT_IMPL(i16 *, i16_arr); CHT_IMPL(i32 *, i32_arr); CHT_IMPL(i64 *, i64_arr);
CHT_IMPL(f32 *, f32_arr); CHT_IMPL(f64 *, f64_arr);
CHT_IMPL(char, char); CHT_IMPL(char *, char_arr);
CHT_IMPL(void *, void);
// hold pointer to a vector of strings or a list of strings
CHT_IMPL(uvec_char_arr_t, vec_char_arr);


u64 uhash_bytes(void * ptr, u64 size) {
    if (ptr != NULL) {
        unsigned char * bytePtr = ptr;
        u64 hash = 0xcbf29ce484222325; // FNV_offset_basis
        for (size_t i = 0; i < size; i++) {
            hash ^= (u64)bytePtr[i];
            hash *= 0x100000001b3; // FNV_prime
        }
        return hash;
    }
    printf("BROKE HASH FUNCTION\n");
    return -1;
}

void uparse_config_str(char * str, uht_vec_char_arr_t * config) { 
    /* 
    This parser works by first finding the 
    maximum lengths of lines, keys, variable list, and values
    the syntax for a typical string parsed by this parser
    would be: 
        WINDOW_SIZE = [1280, 720];
        VIRTUAL_SCREEN_SIZE = [640, 480];
    */
    u64 current_line_len = 0;
    u64 current_key_len = 0;
    u64 current_var_list_len = 0; 
    u64 current_var_len = 0;

    u64 number_of_lines = 0;

    u64 longest_line_len = 0; 
    u64 longest_key_len = 0;
    u64 longest_var_list_len = 0; 
    u64 longest_var_len = 0;
    
    u32 offset = 1;

    for (u64 u = 0; u < strlen(str); u++) {
        if (str[u] != ';') {
            current_line_len++;
        }
        if (str[u] == ';') {
            if (current_line_len > longest_line_len) {
                // we count the ';' as well
                longest_line_len = current_line_len + 1;
            }
            current_line_len = 0;
            number_of_lines++;
        }

        if (str[u] == ':') {
            u64 n = u;
            current_key_len = 0;
            while (n) {
                if (str[n] != ';' && str[n] != '\n') {
                    current_key_len++;
                    n--;
                } else {
                    current_key_len--;
                    break;
                }
            }
            if (current_key_len > longest_key_len) {
                longest_key_len = current_key_len;
            }
        }
        if (str[u] == ',' || str[u] == ']') {
            u32 sp_offset = 1;
            while (str[u - sp_offset] != ',' && str[u - sp_offset] != '[') {
                sp_offset++;
            }
            current_var_len = sp_offset - 1;
            if (current_var_len > longest_var_len) {
                longest_var_len = current_var_len;
            }

        }

        if (u > 0) {
            if (str[u - offset] == '[' && str[u] != ']') {
                offset++;
                current_var_list_len++; 
            }
        }
        if (str[u] == ']') {
            if (current_var_list_len > longest_var_list_len) {
                longest_var_list_len = current_var_list_len;
            }

            offset = 1;
            current_var_list_len = 0;
        }
    }
    
    char * line = ualloc(longest_line_len + 1, char);
    char * key = ualloc(longest_key_len + 1, char);
    char * var_list = ualloc(longest_var_list_len + 1, char);
    char * var = ualloc(longest_var_len + 1, char);

    u32 line_char_idx = 0;
    u32 line_curr_char_idx = 0;

    u32 key_char_idx = 0;
    u32 key_curr_char_idx = 0;

    u32 var_list_char_idx = 0;
    u32 var_list_curr_char_idx = 0;

    u32 var_char_idx = 0;
    u32 var_curr_char_idx = 0;


    u32 u = 0;
    while (u < strlen(str)) {
        u32 curr_idx = u;
        if (str[curr_idx] != '\n' && str[curr_idx] != ' ' && str[curr_idx] != ';') {
            memset(line, 0, strlen(line) + 1);
            memset(key, 0, strlen(key) + 1);
            memset(var_list, 0, strlen(var_list) + 1);

            line_char_idx = 0;
            line_curr_char_idx = 0;

            key_char_idx = 0;
            key_curr_char_idx = 0;

            var_list_char_idx = 0;
            var_list_curr_char_idx = 0;

            // look for semi colon and keep on setting the chars until then
            while (str[curr_idx] != ';') {
                line[line_char_idx] = str[curr_idx];
                line_char_idx++;
                curr_idx++;
            }
            // printf("%s\n", line);

            // start handling individual lines
            while (line[line_curr_char_idx] != ':') {
                key[key_char_idx] = line[line_curr_char_idx];
                key_char_idx++;
                line_curr_char_idx++;
            }

            // printf("%s\n", key);

            while (!isalnum(line[line_curr_char_idx])) {
                line_curr_char_idx++;
            }           
            
            while (line[line_curr_char_idx] != ']') {
                var_list[var_list_char_idx] = line[line_curr_char_idx]; 
                var_list_char_idx++;
                line_curr_char_idx++;
            }
            var_list[var_list_char_idx] = line[line_curr_char_idx]; 
            
            i32 args = 1;
            for (u32 s = 0; s < strlen(var_list); s++) {
                if (var_list[s] == ',') args++;
            }

            uvec_char_arr_t config_vec;

            uvec_char_arr_mk(&config_vec, args);


            for (u32 l = 0; l < strlen(var_list); l++) {
                if (var_list[l] != ',' && var_list[l] != ']') {
                    var[var_char_idx] = var_list[l];
                    var_char_idx++;
                }
                if (var_list[l] == ',' || var_list[l] == ']') {
                    // printf("var: %s\n", var);
                    uvec_char_arr_add(&config_vec, ustr_dup(var));
                    memset(var, 0, strlen(var));
                    var_char_idx = 0;
                }
            }

            uht_vec_char_arr_add(config, ustr_dup(key), config_vec);
            
        }
        // update
        u += (curr_idx - u);
        while (!isalnum(str[u])) { u++; }
    }


    // printf(" size: %u\n", config.file.len);
}



// no need to create hash table structure and just stick to vectors

f32 udist2D(f32 x1, f32 y1, f32 x2, f32 y2) {
    return sqrt(usq(x2 - x1) + usq(y2 - y1));
}

f32 udir2D(f32 x1, f32 y1, f32 x2, f32 y2) {
    return atan2(y2 - y1, x2 - x1);  
}

f32 uilerp(f32 start, f32 stop, f32 amt) {
    return start + (stop - start) * amt; 
}

i64 urandnum_gen(i64 lower, i64 upper) {
    return (rand() % (upper - lower + 1)) + lower;
}


uv2_t uv2_mk(f32 x, f32 y) {
    return (uv2_t) {x, y};
}
uv2_t uv2_add(uv2_t v1, uv2_t v2) {
    return uv2_mk(v1.x + v2.x, v1.y + v2.y);
}

uv2_t uv2_sub(uv2_t v1, uv2_t v2) {
    return uv2_mk(v2.x - v1.x, v2.y - v1.y);
}

uv2_t uv2_lerp(uv2_t v1, uv2_t v2, f32 amt) {
    uv2_t vec;
    vec.x = uilerp(v1.x, v2.x, amt);
    vec.y = uilerp(v1.y, v2.y, amt);
    return vec;
}


void uv2_scale(uv2_t * v, f32 scalar) {
    assert(v != NULL);
    v -> x *= scalar;
    v -> y *= scalar;
}

f32 uv2_mag(uv2_t v) {
    return (sqrt(usq(v.x) + usq(v.y))); 
}


void uv2_normalize(uv2_t * v) {
    assert(v != NULL);
    f32 mag = uv2_mag(*v);

    if (mag != 1.0f) {
        v -> x = v -> x / mag;
        v -> y = v -> y / mag;  
    }
}


void uv2_limit(uv2_t * v, f32 scalar) {
    assert(v != NULL);
    f32 len = v -> x * v -> x + v -> y * v -> y;
    f32 len_t = scalar * scalar;
    if (len > len_t) {
        uv2_normalize(v);
        uv2_scale(v, scalar);
    }         
}

void uv2_rotate(uv2_t * v, f32 theta) {
    assert(v != NULL);
    f32 temp = v -> x;
    v -> x = temp * cosf(theta) - v -> y * sinf(theta);
    v -> y = temp * sinf(theta) + v -> y * cosf(theta);
}

void uv2_mag_set(uv2_t * v, f32 scalar) {
    assert(v != NULL);
    uv2_normalize(v);
    uv2_scale(v, scalar);
}

void uv2_negate(uv2_t * v) {
    assert(v != NULL);
    v -> x = -v -> x;
    v -> y = -v -> y;   
}

f32 uv2_angle(uv2_t v) {
    return atan2(v.y, v.x);
}

f32 uv2_dot_prod(uv2_t v1, uv2_t v2) {
    return v1.x * v2.x + v1.y * v2.y; 
}

f32 uv2_dist_between(uv2_t v1, uv2_t v2) {
    f32 dx = v1.x - v2.x;
    f32 dy = v1.y - v2.y;
    return sqrt(usq(dx) + usq(dy));
}

f32 uv2_angle_between(uv2_t v1, uv2_t v2) {
    if (v1.x == 0 && v1.y == 0) return 0.0f;
    if (v2.x == 0 && v2.y == 0) return 0.0f;

    f32 dot = uv2_dot_prod(v1, v2);
    f32 v1mag = uv2_mag(v1);
    f32 v2mag = uv2_mag(v2);
    f32 amt = dot / (v1mag * v2mag);

    if (amt <= -1) {
        return uPI;
    } else if (amt >= 1) {
        return 0;
    }
    return acos(amt);
}

uv2_t uv2_projection(uv2_t v1, uv2_t v2) {
    f32 dot = uv2_dot_prod(v1, v2);
    f32 len = uv2_dot_prod(v2, v2);
    if (len == 0.0f) return v2;

    uv2_t return_val = v2;
    uv2_scale(&return_val, dot / len);
    return return_val;
}


uv3_t uv3_mk(f32 x, f32 y, f32 z) {
    return (uv3_t) {x, y, z};
}

uv3_t uv3_add(uv3_t v1, uv3_t v2) {
    return uv3_mk(v1.x + v2.x,
                v1.y + v2.y,
                v1.z + v2.z);
}

uv3_t uv3_sub(uv3_t v1, uv3_t v2) {
    return uv3_mk(v2.x - v1.x,
                v2.y - v1.y,
                v2.z - v1.z);
}

void uv3_scale(uv3_t * v, f32 scalar) {
    assert(v != NULL);
    v -> x *= scalar;
    v -> y *= scalar;
    v -> z *= scalar;
}

f32 uv3_mag(uv3_t v) {
    return (sqrt(usq(v.x) + usq(v.y) + usq(v.z))); 
}

void uv3_normalize(uv3_t * v) {
    assert(v != NULL);
    f32 mag = uv3_mag(*v);


    if (mag != 1.0f) {
        v -> x = v -> x / mag;
        v -> y = v -> y / mag;
        v -> z = v -> z / mag;
    }
}

void uv3_mag_set(uv3_t * v, f32 scalar) {
    assert(v != NULL);
    uv3_normalize(v);
    uv3_scale(v, scalar);
}

uv3_t uv3_lerp(uv3_t v1, uv3_t v2, f32 amt) {
    v1.x = uilerp(v1.x, v2.x, amt);
    v1.y = uilerp(v1.y, v2.y, amt);   
    v1.z = uilerp(v1.z, v2.z, amt);
    return v1;
}

void uv3_limit(uv3_t * v, f32 scalar) {
    assert(v != NULL);
    f32 len = usq(v -> x) + usq(v -> y);
    f32 len_t = usq(scalar);
    if (len > len_t) {
        uv3_normalize(v);
        uv3_scale(v, scalar);
    }   
}

void uv3_negate(uv3_t * v) {
    assert(v != NULL);
    v -> x = -v -> x;
    v -> y = -v -> y;
    v -> z = -v -> z;
}

f32 uv3_dot_prod(uv3_t v1, uv3_t v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;  
}

uv3_t uv3_cross_prod(uv3_t v1, uv3_t v2) {
    uv3_t v_o;
    v_o.x = v1.y * v2.z - v1.z * v2.y;
    v_o.y = v1.z * v2.x - v1.z * v2.z;
    v_o.z = v1.x * v2.y - v1.y * v2.x;
    return v_o;
}


f32 uv3_dist_between(uv3_t v1, uv3_t v2) {
    f32 dx = v2.x - v1.x;
    f32 dy = v2.y - v1.y;
    f32 dz = v2.z - v1.z;
    return sqrt(usq(dx) + usq(dy) + usq(dz)); 
}



f32 uv3_angle_between(uv3_t v1, uv3_t v2) {
    if (v1.x == 0 && v1.y == 0) return 0.0f;
    if (v2.x == 0 && v2.y == 0) return 0.0f;
    if (v2.z == 0 && v2.z == 0) return 0.0f;

    f32 dot = uv3_dot_prod(v1, v2);
    f32 v1mag = uv3_mag(v1);
    f32 v2mag = uv3_mag(v2);
    f32 amt = dot / (v1mag * v2mag);

    if (amt <= -1) {
        return uPI;
    } else if (amt >= 1) {
        return 0;
    }
    return acos(amt);   
}

uv3_t uv3_projection(uv3_t v1, uv3_t v2) {
    f32 dot = uv3_dot_prod(v1, v2);
    f32 len = uv3_dot_prod(v2, v2);
    if (len == 0.0f) return v2;

    uv3_t return_val = v2;
    uv3_scale(&return_val, dot / len);
    return return_val;   
}


uv4_t uv4_mk(f32 x, f32 y, f32 z, f32 w) {
    return (uv4_t) {x, y, z, w};
}

uv4_t uv4_add(uv4_t v1, uv4_t v2) {
    return uv4_mk((v1.x + v2.x),
        (v1.y + v2.y),
        (v1.z + v2.z),
        (v1.w + v2.w));  
}

uv4_t uv4_sub(uv4_t v1, uv4_t v2) {
    return uv4_mk((v2.x - v1.x),
        (v2.y - v1.y),
        (v2.z - v1.z),
        (v2.w - v1.w));    
}

uv4_t uv4_lerp(uv4_t v1, uv4_t v2, f32 amt) {
    uv4_t vec;
    vec.x = uilerp(v1.x, v2.x, amt);
    vec.y = uilerp(v1.y, v2.y, amt);   
    vec.z = uilerp(v1.z, v2.z, amt);
    vec.w = uilerp(v1.w, v2.w, amt);
    return vec;
}


f32 uv4_mag(uv4_t v) {
    return (sqrt(usq(v.x) + usq(v.y) + usq(v.z) + usq(v.w))); 
}


void uv4_normalize(uv4_t * v) {
    assert(v != NULL);
    f32 mag = uv4_mag(*v);
    if (mag != 1.0f) {
        v -> x = v -> x / mag;
        v -> y = v -> y / mag;
        v -> z = v -> z / mag;
        v -> w = v -> w / mag;
    }
}

void uv4_scale(uv4_t * v, f32 scalar) {
    assert(v != NULL);
    v -> x *= scalar;
    v -> y *= scalar;  
    v -> z *= scalar;
    v -> w *= scalar;
}

void uv4_mag_set(uv4_t * v, f32 scalar) {
    assert(v != NULL);
    uv4_normalize(v);
    uv4_scale(v, scalar); 
}



void uv4_limit(uv4_t * v, f32 scalar) {
    assert(v != NULL);
    f32 len = usq(v -> x) + usq(v -> y);
    f32 len_t = usq(scalar);
    if (len > len_t) {
        uv4_normalize(v);
        uv4_scale(v, scalar);
    }        
}

void uv4_negate(uv4_t * v) {
    assert(v != NULL);
    v -> x = -v -> x;
    v -> y = -v -> y;
    v -> z = -v -> z;
    v -> w = -v -> w;
}

f32 uv4_dot_prod(uv4_t v1, uv4_t v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;  
}

f32 uv4_dist_between(uv4_t v1, uv4_t v2) {
    f32 dx = v2.x - v1.x;
    f32 dy = v2.y - v1.y;
    f32 dz = v2.z - v1.z;
    f32 dw = v2.w - v1.w;
    return sqrt(usq(dx) + usq(dy) + usq(dz) + usq(dw)); 
}

// projects v1 on v2
uv4_t uv4_projection(uv4_t v1, uv4_t v2) {
    f32 dot = uv4_dot_prod(v1, v2);
    f32 len = uv4_dot_prod(v2, v2);
    if (len == 0.0f) return v2;

    uv4_t return_val = v2;
    uv4_scale(&return_val, dot / len);
    return return_val;   
}

uv3_t uuv2_to_uv3(const uv2_t v) {
    return uv3_mk(v.x, v.y, 1);
}

uv4_t uv3_to_uv4(const uv3_t v) {
    return uv4_mk(v.x, v.y, v.z, 1);
}

uv3_t uv4_to_uv3(const uv4_t v) {
    return uv3_mk(v.x, v.y, v.z);
}

uv2_t uv3_to_v2(const uv3_t v) {
    return uv2_mk(v.x, v.y);
}

um4x4_t um4x4_mk(f32 m00, f32 m01, f32 m02, f32 m03,
            f32 m04, f32 m05, f32 m06, f32 m07,
            f32 m08, f32 m09, f32 m10, f32 m11,
            f32 m12, f32 m13, f32 m14, f32 m15) { 
    um4x4_t mat = {{
        {m00, m01, m02, m03},
        {m04, m05, m06, m07},
        {m08, m09, m10, m11},
        {m12, m13, m14, m15}
    }};

    return mat;
}

um4x4_t um4x4_mk_zero() {
    return um4x4_mk( 
                    0, 0, 0, 0,
                    0, 0, 0, 0, 
                    0, 0, 0, 0, 
                    0, 0, 0, 0
                );
}

um4x4_t um4x4_mk_identity() {
    return um4x4_mk(
                    1, 0, 0, 0,
                    0, 1, 0, 0,
                    0, 0, 1, 0,
                    0, 0, 0, 1
                    
                );
}

um4x4_t um4x4_mk_diag(f32 val) {
    return um4x4_mk(
                    val, 000, 000, 000,
                    000, val, 000, 000,
                    000, 000, val, 000,
                    000, 000, 000, val
                );
}

um4x4_t um4x4_add(um4x4_t m1, um4x4_t m2) {
    for (u16 i = 0; i < 4; i++) {
        for (u16 j = 0; j < 4; j++) {
            m1.elems[i][j] += m2.elems[i][j];
        }
    }
    um4x4_t mat = m1;
    return mat;
}

um4x4_t um4x4_sub(um4x4_t m1, um4x4_t m2) {    
    for (u16 i = 0; i < 4; i++) {
        for (u16 j = 0; j < 4; j++) {
            m2.elems[i][j] -= m1.elems[i][j];
        }
    }
    um4x4_t mat = m2;
    return mat;
} 
um4x4_t um4x4_mult(um4x4_t m1, um4x4_t m2) {
    um4x4_t result = um4x4_mk_zero(); 
    for (u32 y = 0; y < 4; ++y) {
        for (u32 x = 0; x < 4; ++x) {
            f32 sum = 0.0f;
            for (u32 e = 0; e < 4; ++e) {
                sum += m1.elems[e][x] * m2.elems[y][e];
            }
            result.elems[y][x] = sum;
        }
    }

    return result;
} 

um4x4_t um4x4_mult_n(u32 um4x4_count, ...) {
    va_list matrices;
    va_start(matrices, um4x4_count);
        um4x4_t ident = um4x4_mk_identity();
        for (u32 i = 0; i < um4x4_count; ++i) {
            ident = um4x4_mult(ident, va_arg(matrices, um4x4_t));
        }

    va_end(matrices);

    return ident;
}

uv4_t um4x4_mult_uv4(um4x4_t m, uv4_t v) {
    return uv4_mk(
                m.elems[0][0] * v.x + m.elems[1][0] * v.y + m.elems[2][0] * v.z + m.elems[3][0] * v.w,  
                m.elems[0][1] * v.x + m.elems[1][1] * v.y + m.elems[2][1] * v.z + m.elems[3][1] * v.w,  
                m.elems[0][2] * v.x + m.elems[1][2] * v.y + m.elems[2][2] * v.z + m.elems[3][2] * v.w,  
                m.elems[0][3] * v.x + m.elems[1][3] * v.y + m.elems[2][3] * v.z + m.elems[3][3] * v.w
        );
}

uv3_t um4x4_mult_uv3(um4x4_t m, uv3_t v) {
    return uv4_to_uv3(um4x4_mult_uv4(m, uv4_mk(v.x, v.y, v.z, 1)));
}

um4x4_t um4x4_scale_by_uv3(um4x4_t mat, const uv3_t vector) {
    mat.elems[0][0] *= vector.x;
    mat.elems[1][1] *= vector.y;
    mat.elems[2][2] *= vector.z;
    return mat;
}

// Takes in an identity matrix
um4x4_t um4x4_translate_by_uv3(um4x4_t mat, const uv3_t vector) {
    mat.elems[3][0] += vector.x;
    mat.elems[3][1] += vector.y;
    mat.elems[3][2] += vector.z;
    return mat;
}

um4x4_t um4x4_rotate_by_uv3(f32 degrees, uv3_t axis) {
    um4x4_t mat = um4x4_mk_identity();

    f32 a = degrees;
    f32 c = (f32)cosf(a);
    f32 s = (f32)sinf(a);

    uv3_normalize(&axis);
    f32 x = axis.x;
    f32 y = axis.y;
    f32 z = axis.z;

    //First column
    mat.elems[0][0] = c + (x * x) * (1 - c);
    mat.elems[0][1] = x * y * (1 - c) - (z * s);
    mat.elems[0][2] = x * z * (1 - c) + (y * s);

    //Second column
    mat.elems[1][0] = y * x * (1 - c) + z * s;
    mat.elems[1][1] = c + y * y * (1 - c);
    mat.elems[1][2] = y * z * (1 - c) - x * s;

    //Third column
    mat.elems[2][0] = z * x * (1 - c) - y * s;
    mat.elems[2][1] = z * y * (1 - c) + x * s;
    mat.elems[2][2] = c + z * z * (1 - c);

    return mat;

}

um4x4_t um4x4_orthographic_projection(f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {
    return um4x4_mk
    (
        
        2.0f / (r - l), 0, 0,  0,
        0, +2.0f / (t - b), 0, 0,
        0, 0, -2.0f / (f - n), 0,
        -(r + l) / (r - l), -(t + b) / (t - b), -(f + n) / (f - n), 1.0f
            
    );
}

um4x4_t um4x4_perspective_projection(f32 fov, f32 w, f32 h, f32 n, f32 f) {
    f32 asp_ratio = w/h;
    um4x4_t m_res = um4x4_mk_diag(0.0);

    f32 q = 1.0f / (f32)tan(udeg_to_rad(0.5f * fov));
    m_res.elems[0][0] = q; // 0
    m_res.elems[1][1] = q; // 1 + 1 * 4
    m_res.elems[2][2] = -f / (f-n); // 2 + 2 * 4
    m_res.elems[3][2] = -f * n / (f - n); // 3 + 2* 4
    m_res.elems[2][3] = -1; // 2 + 3 * 4

    return m_res;
}

void uphys_obj_mk(uphys_obj_t * o, uv2_t pos, uv2_t acc, uv2_t size) {
    memset(o, 0, sizeof(uphys_obj_t)); 
    o -> pos = pos; 
    o -> acc = acc; 
    o -> size = size; 
}

uv2_t uphys_obj_get_scroll(uphys_obj_t * o, uv2_t render_target_size, f32 speed) {
    f32 centerx = o -> pos.x + o -> size.x / 2;
    f32 centery = o -> pos.y + o -> size.y / 2;

    o -> cam_true_scroll.x += (centerx - o -> cam_true_scroll.x - render_target_size.x / 2) * speed; 
    o -> cam_true_scroll.y += (centery - o -> cam_true_scroll.y - render_target_size.y / 2) * speed;

    uv2_t rnd = { round(o -> cam_true_scroll.x), round(o -> cam_true_scroll.y) };

    return rnd;
}
void uphys_obj_update(uphys_obj_t * o, const uphys_obj_t * tiles, const u32 len, i32 max_gravity_val, f64 dt) {
    uv2_t frame_movement;

    // move_u must be subtractedd from move_d because move_u is the negative one
    frame_movement = (uv2_t) {(o -> move_r - o -> move_l) * o -> acc.x + o -> vel.x, 
                              (o -> move_d - o -> move_u) * o -> acc.y + o -> vel.y };

    o -> coll_l = 0;
    o -> coll_r = 0;
    o -> pos.x += frame_movement.x * dt;
    if (tiles) {
        for (u32 u = 0; u < len; u++) {
            if (uphys_obj_coll_detect((*o), tiles[u])) {
                // assuming non flip is to the right
                // ALSO NOTE: COLLISIONS ARE WEIRD WITH DIFFERENT SIZED IMAGES SO MAKE SURE TO 
                // STORE IMAGE SIZE AND RECT SIZE IN 2 DIFF PLACES
                // GENERALLY, FIND IMAGE SIZE AND THEN MAKE THE RECT CENTERED
                if (frame_movement.x > 0) {
                    // right collision
                    // since the collision 2 is deteceted after collision 1, we neeed to sub player
                    o -> pos.x = tiles[u].pos.x - o -> size.x - 0.001;
                    // o -> pos.x -= fabs(frame_movement.x * dt) - (o -> acc.x * dt);
                    // o -> pos.x = tiles[u].pos.x - o -> size.x - 1;
                    o -> coll_r = 1;
                    // o -> coll_l = 0;
                } else if (frame_movement.x < 0) {
                    // left collision (left of the player)
                    // o -> pos.x = tiles[u].pos.x + tiles[u].size.x + o -> size.x + 1;
                    o -> pos.x = tiles[u].pos.x + tiles[u].size.x + 0.001;
                    // o -> pos.x += fabs(frame_movement.x * dt) + (o -> acc.x * dt);
                    o -> coll_l = 1;
                    // o -> coll_r = 0;
                }
                /*if ((frame_movement.x > 0 || o -> flip == 0) && o -> move_r == 1) {
                    // right collision
                    // since the collision 2 is deteceted after collision 1, we neeed to sub player
                    o -> pos.x = tiles[u].pos.x - o -> size.x - 0.001;
                    // o -> pos.x -= fabs(frame_movement.x * dt) - (o -> acc.x * dt);
                    // o -> pos.x = tiles[u].pos.x - o -> size.x - 1;
                    o -> coll_r = 1;
                }  
                if ((frame_movement.x < 0 || o -> flip == 1) && o -> move_l == 1) {
                    // left collision (left of the player)
                    // o -> pos.x = tiles[u].pos.x + tiles[u].size.x + o -> size.x + 1;
                    o -> pos.x = tiles[u].pos.x + tiles[u].size.x + 0.001;
                    // o -> pos.x += fabs(frame_movement.x * dt) + (o -> acc.x * dt);
                    o -> coll_l = 1;
                }*/


            }
        }
    }


    o -> coll_b = 0;
    o -> coll_t = 0;
    o -> pos.y += frame_movement.y * dt;
    if (tiles) {
        for (u32 u = 0; u < len; u++) {
            if (uphys_obj_coll_detect((*o), tiles[u])) {
                if (frame_movement.y > 0) {
                    // bottom collision of the plpayers feet
                    // o -> pos.y = tiles[u].pos.y - o -> size.y - 1;
                    // o -> pos.y = tiles[u].pos.y - o -> size.y - 1;
                    o -> pos.y = tiles[u].pos.y - o -> size.y - 0.001;
                    // o -> pos.y -= fabs(frame_movement.y * dt) - (o -> acc.y * dt);
                    o -> coll_b = 1;
                } else if (frame_movement.y < 0) {
                    // top collision of the players head
                    // o -> pos.y = tiles[u].pos.y + o -> size.y + tiles[u].size.y + 1;
                    // o -> pos.y = tiles[u].pos.y + o -> size.y + 1;
                    o -> pos.y = tiles[u].pos.y + tiles[u].size.y + 0.001;
                    // o -> pos.y += fabs(frame_movement.y * dt) + (o -> acc.y * dt);
                    o -> coll_t = 1;
                }
            }
        }
    }
    frame_movement = uv2_mk(0, 0); 

    if (max_gravity_val > 0) {
        // mess with the number value
        o -> vel.y += 0.3 * dt;
        // o -> vel.y = min(max_gravity_val, o -> vel.y);
        o -> vel.y = min(max_gravity_val, o -> vel.y);
    }
    if (o -> coll_t) {
        o -> vel.y += 3 * dt;
    }

    if (o -> coll_b == 1) {
        o -> vel.y = 0;
    }
}
/*
void uphys_obj_update_pos(uphys_obj_t * o1, const uphys_obj_t * o2, const u32 o2_len, f64 dt) {
    o1 -> vel.x += o1 -> extra_momentum.x * dt; 

    o1 -> pos.x += o1 -> vel.x * dt;
    o1 -> h_coll = 0;
    if (o2) {
        for (u32 u = 0; u < o2_len; u++) {
            if (uphys_obj_coll_detect((*o1), o2[u])) {
                if (o1 -> vel.x > 0) {
                    // o1 -> pos.x -= o1 -> vel.x * dt;
                    // o1 -> pos.x -= fabsf(o1 -> vel.x * dt);
                    o1 -> pos.x -= fabs(o1 -> vel.x * dt);
                    // if collision breaks, do while loop and subtract
                    o1 -> h_coll = 1;
                }

                else if (o1 -> vel.x < 0) {
                    // o1 -> pos.x -= o1 -> vel.x * dt;
                    o1 -> pos.x += fabs(o1 -> vel.x * dt);
                    // o1 -> pos.x -= fabsf(o1 -> vel.x) * dt;
                    o1 -> h_coll = -1;
                } 
            }
        }
    }

    o1 -> vel.y += o1 -> extra_momentum.y * dt; 
    o1 -> pos.y += o1 -> vel.y * dt;
    o1 -> v_coll = 0;
    if (o2) {
        for (u32 u = 0; u < o2_len; u++) {
            if (uphys_obj_coll_detect((*o1), o2[u])) {
                if (o1 -> vel.y > 0) {
                    // o1 -> pos.x -= o1 -> vel.x * dt;
                    o1 -> pos.y -= fabs(o1 -> vel.y * dt);
                    // if collision breaks, do while loop and subtract
                    o1 -> v_coll = 1;
                }

                else if (o1 -> vel.y < 0) {
                    // o1 -> pos.x -= o1 -> vel.x * dt;
                    o1 -> pos.y += fabs(o1 -> vel.y * dt);
                    // o1 -> pos.x -= fabsf(o1 -> vel.x) * dt;
                    o1 -> v_coll = -1;
                } 
            }
        }
    }

}

*/

void ugrid_mk(ugrid_t * g, u32 w, u32 h, u32 s_w, u32 s_h) {
    g -> cells = ualloc(w * h, u08);
    g -> size = uv2_mk(w, h);
    g -> cell_size = uv2_mk(s_w / w, s_h / h);
}
void ugrid_set_px(ugrid_t * g, u32 x, u32 y, u32 val) {
    if (x < g -> size.x && y < g -> size.y) {
        i32 idx = y * g -> size.x + x;
        g -> cells[idx] = val;
    }   
}
u32 ugrid_get_px(ugrid_t * g, u32 x, u32 y) {
    if (x < g -> size.x && y < g -> size.y) {
        i32 idx = y * g -> size.x + x;
        return g -> cells[idx];
    }
    return 0;
}
void ugrid_rm(ugrid_t * g) {
    ufree(g -> cells);
}
