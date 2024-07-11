# 1 "src/engine.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "src/engine.h"
       

# 1 "src/./engine/utils/utils.h" 1
# 1 "c:\\mingw\\include\\stdio.h" 1 3
# 38 "c:\\mingw\\include\\stdio.h" 3
       
# 39 "c:\\mingw\\include\\stdio.h" 3
# 56 "c:\\mingw\\include\\stdio.h" 3
# 1 "c:\\mingw\\include\\_mingw.h" 1 3
# 55 "c:\\mingw\\include\\_mingw.h" 3
       
# 56 "c:\\mingw\\include\\_mingw.h" 3
# 66 "c:\\mingw\\include\\_mingw.h" 3
# 1 "c:\\mingw\\include\\msvcrtver.h" 1 3
# 35 "c:\\mingw\\include\\msvcrtver.h" 3
       
# 36 "c:\\mingw\\include\\msvcrtver.h" 3
# 67 "c:\\mingw\\include\\_mingw.h" 2 3






# 1 "c:\\mingw\\include\\w32api.h" 1 3
# 35 "c:\\mingw\\include\\w32api.h" 3
       
# 36 "c:\\mingw\\include\\w32api.h" 3
# 59 "c:\\mingw\\include\\w32api.h" 3
# 1 "c:\\mingw\\include\\sdkddkver.h" 1 3
# 35 "c:\\mingw\\include\\sdkddkver.h" 3
       
# 36 "c:\\mingw\\include\\sdkddkver.h" 3
# 60 "c:\\mingw\\include\\w32api.h" 2 3
# 74 "c:\\mingw\\include\\_mingw.h" 2 3
# 57 "c:\\mingw\\include\\stdio.h" 2 3
# 69 "c:\\mingw\\include\\stdio.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 216 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4

# 216 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 328 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef short unsigned int wchar_t;
# 357 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef short unsigned int wint_t;
# 70 "c:\\mingw\\include\\stdio.h" 2 3
# 94 "c:\\mingw\\include\\stdio.h" 3
# 1 "c:\\mingw\\include\\sys/types.h" 1 3
# 34 "c:\\mingw\\include\\sys/types.h" 3
       
# 35 "c:\\mingw\\include\\sys/types.h" 3
# 62 "c:\\mingw\\include\\sys/types.h" 3
  typedef long __off32_t;




  typedef __off32_t _off_t;







  typedef _off_t off_t;
# 91 "c:\\mingw\\include\\sys/types.h" 3
  typedef long long __off64_t;






  typedef __off64_t off64_t;
# 115 "c:\\mingw\\include\\sys/types.h" 3
  typedef int _ssize_t;







  typedef _ssize_t ssize_t;
# 95 "c:\\mingw\\include\\stdio.h" 2 3







# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 1 3 4
# 40 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 103 "c:\\mingw\\include\\stdio.h" 2 3
# 210 "c:\\mingw\\include\\stdio.h" 3
typedef struct _iobuf
{
  char *_ptr;
  int _cnt;
  char *_base;
  int _flag;
  int _file;
  int _charbuf;
  int _bufsiz;
  char *_tmpfname;
} FILE;
# 239 "c:\\mingw\\include\\stdio.h" 3
extern __attribute__((__dllimport__)) FILE _iob[];
# 252 "c:\\mingw\\include\\stdio.h" 3








 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * fopen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * freopen (const char *, const char *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fflush (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fclose (FILE *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int remove (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rename (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * tmpfile (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * tmpnam (char *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_tempnam (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _rmtmp (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _unlink (const char *);
# 289 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * tempnam (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rmtmp (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int unlink (const char *);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int setvbuf (FILE *, char *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void setbuf (FILE *, char *);
# 342 "c:\\mingw\\include\\stdio.h" 3
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,3))) __mingw_fprintf(FILE*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,1,2))) __mingw_printf(const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,3))) __mingw_sprintf(char*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,4))) __mingw_snprintf(char*, size_t, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,0))) __mingw_vfprintf(FILE*, const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,1,0))) __mingw_vprintf(const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,0))) __mingw_vsprintf(char*, const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,0))) __mingw_vsnprintf(char*, size_t, const char*, __builtin_va_list);
# 376 "c:\\mingw\\include\\stdio.h" 3
extern unsigned int _mingw_output_format_control( unsigned int, unsigned int );
# 453 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fprintf (FILE *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int printf (const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int sprintf (char *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vfprintf (FILE *, const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vprintf (const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vsprintf (char *, const char *, __builtin_va_list);
# 478 "c:\\mingw\\include\\stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,3))) __msvcrt_fprintf(FILE *, const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,1,2))) __msvcrt_printf(const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,3))) __msvcrt_sprintf(char *, const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,0))) __msvcrt_vfprintf(FILE *, const char *, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,1,0))) __msvcrt_vprintf(const char *, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,0))) __msvcrt_vsprintf(char *, const char *, __builtin_va_list);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _snprintf (char *, size_t, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vsnprintf (char *, size_t, const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vscprintf (const char *, __builtin_va_list);
# 501 "c:\\mingw\\include\\stdio.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,4)))
int snprintf (char *, size_t, const char *, ...);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,0)))
int vsnprintf (char *, size_t, const char *, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vscanf (const char * __restrict__, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vfscanf (FILE * __restrict__, const char * __restrict__, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vsscanf (const char * __restrict__, const char * __restrict__, __builtin_va_list);
# 646 "c:\\mingw\\include\\stdio.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) ssize_t
getdelim (char ** __restrict__, size_t * __restrict__, int, FILE * __restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) ssize_t
getline (char ** __restrict__, size_t * __restrict__, FILE * __restrict__);
# 666 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fscanf (FILE *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int scanf (const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int sscanf (const char *, const char *, ...);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * fgets (char *, int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputc (int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputs (const char *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * gets (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int puts (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ungetc (int, FILE *);
# 687 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _filbuf (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _flsbuf (int, FILE *);



extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getc (FILE *);
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getc (FILE * __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) *__F->_ptr++
    : _filbuf (__F);
}

extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putc (int, FILE *);
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putc (int __c, FILE * __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) (*__F->_ptr++ = (char)__c)
    : _flsbuf (__c, __F);
}

extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getchar (void);
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getchar (void)
{
  return (--(&_iob[0])->_cnt >= 0)
    ? (int) (unsigned char) *(&_iob[0])->_ptr++
    : _filbuf ((&_iob[0]));
}

extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putchar(int);
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putchar(int __c)
{
  return (--(&_iob[1])->_cnt >= 0)
    ? (int) (unsigned char) (*(&_iob[1])->_ptr++ = (char)__c)
    : _flsbuf (__c, (&_iob[1]));}
# 734 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t fread (void *, size_t, size_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t fwrite (const void *, size_t, size_t, FILE *);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fseek (FILE *, long, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long ftell (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void rewind (FILE *);
# 787 "c:\\mingw\\include\\stdio.h" 3
typedef long long fpos_t;




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetpos (FILE *, fpos_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fsetpos (FILE *, const fpos_t *);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int feof (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ferror (FILE *);
# 808 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void clearerr (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void perror (const char *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _popen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _pclose (FILE *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * popen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int pclose (FILE *);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _flushall (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fgetchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fputchar (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _fdopen (int, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fileno (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fcloseall (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _fsopen (const char *, const char *, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _getmaxstdio (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _setmaxstdio (int);
# 859 "c:\\mingw\\include\\stdio.h" 3
unsigned int __attribute__((__cdecl__)) __mingw_get_output_format (void);
unsigned int __attribute__((__cdecl__)) __mingw_set_output_format (unsigned int);







int __attribute__((__cdecl__)) __mingw_get_printf_count_output (void);
int __attribute__((__cdecl__)) __mingw_set_printf_count_output (int);
# 885 "c:\\mingw\\include\\stdio.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) unsigned int __attribute__((__cdecl__)) _get_output_format (void)
{ return __mingw_get_output_format (); }

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) unsigned int __attribute__((__cdecl__)) _set_output_format (unsigned int __style)
{ return __mingw_set_output_format (__style); }
# 910 "c:\\mingw\\include\\stdio.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) int __attribute__((__cdecl__)) _get_printf_count_output (void)
{ return 0 ? 1 : __mingw_get_printf_count_output (); }

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) int __attribute__((__cdecl__)) _set_printf_count_output (int __mode)
{ return 0 ? 1 : __mingw_set_printf_count_output (__mode); }



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputchar (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * fdopen (int, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fileno (FILE *);
# 930 "c:\\mingw\\include\\stdio.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) FILE * __attribute__((__cdecl__)) __attribute__((__nothrow__)) fopen64 (const char *, const char *);
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
FILE * __attribute__((__cdecl__)) __attribute__((__nothrow__)) fopen64 (const char * filename, const char * mode)
{ return fopen (filename, mode); }

int __attribute__((__cdecl__)) __attribute__((__nothrow__)) fseeko64 (FILE *, __off64_t, int);






extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __off64_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) ftello64 (FILE *);
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__off64_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) ftello64 (FILE * stream)
{ fpos_t __pos; return (fgetpos(stream, &__pos)) ? -1LL : (__off64_t)(__pos); }
# 958 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwprintf (FILE *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wprintf (const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vfwprintf (FILE *, const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vwprintf (const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _snwprintf (wchar_t *, size_t, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vscwprintf (const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vsnwprintf (wchar_t *, size_t, const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwscanf (FILE *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wscanf (const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int swscanf (const wchar_t *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fgetwc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fputwc (wchar_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t ungetwc (wchar_t, FILE *);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int swprintf (wchar_t *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vswprintf (wchar_t *, const wchar_t *, __builtin_va_list);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * fgetws (wchar_t *, int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputws (const wchar_t *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t getwc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t getwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t putwc (wint_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t putwchar (wint_t);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _getws (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putws (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfdopen(int, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfopen (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfreopen (const wchar_t *, const wchar_t *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfsopen (const wchar_t *, const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _wtmpnam (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _wtempnam (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wrename (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wremove (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _wperror (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wpopen (const wchar_t *, const wchar_t *);






__attribute__((__cdecl__)) __attribute__((__nothrow__)) int snwprintf (wchar_t *, size_t, const wchar_t *, ...);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int vsnwprintf (wchar_t *, size_t, const wchar_t *, __builtin_va_list);
# 1016 "c:\\mingw\\include\\stdio.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int vwscanf (const wchar_t *__restrict__, __builtin_va_list);
__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vfwscanf (FILE *__restrict__, const wchar_t *__restrict__, __builtin_va_list);
__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vswscanf (const wchar_t *__restrict__, const wchar_t * __restrict__, __builtin_va_list);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * wpopen (const wchar_t *, const wchar_t *);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t _fgetwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t _fputwchar (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _getw (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putw (int, FILE *);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fgetwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fputwchar (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getw (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putw (int, FILE *);





# 2 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\include\\assert.h" 1 3
# 38 "c:\\mingw\\include\\assert.h" 3
 void __attribute__((__cdecl__)) __attribute__((__nothrow__)) _assert (const char*, const char*, int) __attribute__((__noreturn__));
# 3 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\include\\stdlib.h" 1 3
# 34 "c:\\mingw\\include\\stdlib.h" 3
       
# 35 "c:\\mingw\\include\\stdlib.h" 3
# 55 "c:\\mingw\\include\\stdlib.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 56 "c:\\mingw\\include\\stdlib.h" 2 3
# 90 "c:\\mingw\\include\\stdlib.h" 3

# 99 "c:\\mingw\\include\\stdlib.h" 3
extern int _argc;
extern char **_argv;




extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__p___argc(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char ***__p___argv(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t ***__p___wargv(void);
# 142 "c:\\mingw\\include\\stdlib.h" 3
   extern __attribute__((__dllimport__)) int __mb_cur_max;
# 166 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *_errno(void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__doserrno(void);







extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char ***__p__environ(void);

extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t ***__p__wenviron(void);
# 202 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) int _sys_nerr;
# 227 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) char *_sys_errlist[];
# 238 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__osver(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winver(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winmajor(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winminor(void);
# 250 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) unsigned int _osver;
extern __attribute__((__dllimport__)) unsigned int _winver;
extern __attribute__((__dllimport__)) unsigned int _winmajor;
extern __attribute__((__dllimport__)) unsigned int _winminor;
# 289 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char **__p__pgmptr(void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t **__p__wpgmptr(void);
# 325 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) int _fmode;
# 335 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int atoi (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long atol (const char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double strtod (const char *, char **);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double atof (const char *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _wtof (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wtoi (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long _wtol (const wchar_t *);
# 378 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
float strtof (const char *__restrict__, char **__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long double strtold (const char *__restrict__, char **__restrict__);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long strtol (const char *, char **, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long strtoul (const char *, char **, int);







 __attribute__((__cdecl__)) __attribute__((__nothrow__))
long wcstol (const wchar_t *, wchar_t **, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long wcstoul (const wchar_t *, wchar_t **, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double wcstod (const wchar_t *, wchar_t **);





__attribute__((__cdecl__)) __attribute__((__nothrow__))
float wcstof (const wchar_t *__restrict__, wchar_t **__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long double wcstold (const wchar_t *__restrict__, wchar_t **__restrict__);
# 451 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetenv (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wputenv (const wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wsearchenv (const wchar_t *, const wchar_t *, wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wsystem (const wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wmakepath (wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *,
    const wchar_t *
  );

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wsplitpath (const wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
wchar_t *_wfullpath (wchar_t *, const wchar_t *, size_t);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcstombs (char *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wctomb (char *, wchar_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mblen (const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbstowcs (wchar_t *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mbtowc (wchar_t *, const char *, size_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rand (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void srand (unsigned int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *calloc (size_t, size_t) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *malloc (size_t) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *realloc (void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void free (void *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void abort (void) __attribute__((__noreturn__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void exit (int) __attribute__((__noreturn__));



int __attribute__((__cdecl__)) __attribute__((__nothrow__)) atexit (void (*)(void));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int system (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *getenv (const char *);






 __attribute__((__cdecl__)) void *bsearch
(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));

 __attribute__((__cdecl__)) void qsort
(void *, size_t, size_t, int (*)(const void *, const void *));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int abs (int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long labs (long) __attribute__((__const__));
# 519 "c:\\mingw\\include\\stdlib.h" 3
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) div_t div (int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) ldiv_t ldiv (long, long) __attribute__((__const__));






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _exit (int) __attribute__((__noreturn__));





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _atoi64 (const char *);
# 545 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _beep (unsigned int, unsigned int) __attribute__((__deprecated__));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _seterrormode (int) __attribute__((__deprecated__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _sleep (unsigned long) __attribute__((__deprecated__));



typedef int (* _onexit_t)(void);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) _onexit_t _onexit( _onexit_t );

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putenv (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _searchenv (const char *, const char *, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ecvt (double, int, int *, int *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_fcvt (double, int, int *, int *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_gcvt (double, int, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _makepath (char *, const char *, const char *, const char *, const char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _splitpath (const char *, char *, char *, char *, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_fullpath (char*, const char*, size_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_itoa (int, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ltoa (long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ultoa(unsigned long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_itow (int, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_ltow (long, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_ultow (unsigned long, wchar_t *, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* _i64toa (long long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* _ui64toa (unsigned long long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _wtoi64 (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t* _i64tow (long long, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t* _ui64tow (unsigned long long, wchar_t *, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int (_rotl)(unsigned int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int (_rotr)(unsigned int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long (_lrotl)(unsigned long, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long (_lrotr)(unsigned long, int) __attribute__((__const__));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _set_error_mode (int);
# 628 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putenv (const char*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void searchenv (const char*, const char*, char*);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* itoa (int, char*, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* ltoa (long, char*, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* ecvt (double, int, int*, int*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* fcvt (double, int, int*, int*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* gcvt (double, int, char*);
# 649 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) void _Exit(int) __attribute__((__noreturn__));






typedef struct { long long quot, rem; } lldiv_t;
__attribute__((__cdecl__)) __attribute__((__nothrow__)) lldiv_t lldiv (long long, long long) __attribute__((__const__));

__attribute__((__cdecl__)) __attribute__((__nothrow__)) long long llabs (long long);
# 670 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
long long strtoll (const char *__restrict__, char **__restrict, int);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long long strtoull (const char *__restrict__, char **__restrict__, int);





__attribute__((__cdecl__)) __attribute__((__nothrow__)) long long atoll (const char *);
# 726 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) long long wtoll (const wchar_t *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) char *lltoa (long long, char *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) char *ulltoa (unsigned long long , char *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) wchar_t *lltow (long long, wchar_t *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) wchar_t *ulltow (unsigned long long, wchar_t *, int);
# 766 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkstemp (char *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __mingw_mkstemp (int, char *);
# 808 "c:\\mingw\\include\\stdlib.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkstemp (char *__filename_template)
{ return __mingw_mkstemp( 0, __filename_template ); }
# 819 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mkdtemp (char *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *__mingw_mkdtemp (char *);

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mkdtemp (char *__dirname_template)
{ return __mingw_mkdtemp( __dirname_template ); }






__attribute__((__cdecl__)) __attribute__((__nothrow__)) int setenv( const char *, const char *, int );
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int unsetenv( const char * );

__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __mingw_setenv( const char *, const char *, int );

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int setenv( const char *__n, const char *__v, int __f )
{ return __mingw_setenv( __n, __v, __f ); }

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int unsetenv( const char *__name )
{ return __mingw_setenv( __name, ((void *)0), 1 ); }





# 4 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\include\\string.h" 1 3
# 34 "c:\\mingw\\include\\string.h" 3
       
# 35 "c:\\mingw\\include\\string.h" 3
# 53 "c:\\mingw\\include\\string.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 54 "c:\\mingw\\include\\string.h" 2 3
# 62 "c:\\mingw\\include\\string.h" 3
# 1 "c:\\mingw\\include\\strings.h" 1 3
# 33 "c:\\mingw\\include\\strings.h" 3
       
# 34 "c:\\mingw\\include\\strings.h" 3
# 59 "c:\\mingw\\include\\strings.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 60 "c:\\mingw\\include\\strings.h" 2 3



int __attribute__((__cdecl__)) __attribute__((__nothrow__)) strcasecmp( const char *, const char * );
int __attribute__((__cdecl__)) __attribute__((__nothrow__)) strncasecmp( const char *, const char *, size_t );
# 80 "c:\\mingw\\include\\strings.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _stricmp( const char *, const char * );
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _strnicmp( const char *, const char *, size_t );
# 100 "c:\\mingw\\include\\strings.h" 3

# 63 "c:\\mingw\\include\\string.h" 2 3







 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memchr (const void *, int, size_t) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int memcmp (const void *, const void *, size_t) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memcpy (void *, const void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memmove (void *, const void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memset (void *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strcat (char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strchr (const char *, int) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strcmp (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strcoll (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strcpy (char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t strcspn (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strerror (int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t strlen (const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strncat (char *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strncmp (const char *, const char *, size_t) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strncpy (char *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strpbrk (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strrchr (const char *, int) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t strspn (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strstr (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strtok (char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t strxfrm (char *, const char *, size_t);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strerror (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *_memccpy (void *, const void *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _memicmp (const void *, const void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strdup (const char *) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _strcmpi (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _stricoll (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strlwr (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strnset (char *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strrev (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strset (char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strupr (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _swab (const char *, char *, size_t);
# 126 "c:\\mingw\\include\\string.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _strncoll(const char *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _strnicoll(const char *, const char *, size_t);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memccpy (void *, const void *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int memicmp (const void *, const void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strdup (const char *) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strcmpi (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int stricmp (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int stricoll (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strlwr (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strnicmp (const char *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strnset (char *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strrev (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strset (char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strupr (char *);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void swab (const char *, char *, size_t);
# 170 "c:\\mingw\\include\\string.h" 3
# 1 "c:\\mingw\\include\\wchar.h" 1 3
# 35 "c:\\mingw\\include\\wchar.h" 3
       
# 36 "c:\\mingw\\include\\wchar.h" 3
# 392 "c:\\mingw\\include\\wchar.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcscat (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcschr (const wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcscmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcscoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcscpy (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcscspn (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcslen (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsncat (wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsncmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsncpy (wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcspbrk (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsrchr (const wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsspn (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsstr (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcstok (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsxfrm (wchar_t *, const wchar_t *, size_t);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsdup (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsicmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsicoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcslwr (wchar_t*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsnicmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsnset (wchar_t *, wchar_t, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsrev (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsset (wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsupr (wchar_t *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsncoll (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsnicoll (const wchar_t *, const wchar_t *, size_t);
# 445 "c:\\mingw\\include\\wchar.h" 3
int __attribute__((__cdecl__)) __attribute__((__nothrow__)) wcscmpi (const wchar_t *, const wchar_t *);
# 457 "c:\\mingw\\include\\wchar.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsdup (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsicmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsicoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcslwr (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsnicmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsnset (wchar_t *, wchar_t, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsrev (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsset (wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsupr (wchar_t *);
# 491 "c:\\mingw\\include\\wchar.h" 3
extern size_t __mingw_wcsnlen (const wchar_t *, size_t);


extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) size_t wcsnlen (const wchar_t *__text, size_t __maxlen)
{ return __mingw_wcsnlen (__text, __maxlen); }
# 171 "c:\\mingw\\include\\string.h" 2 3
# 193 "c:\\mingw\\include\\string.h" 3
extern size_t __mingw_strnlen (const char *, size_t);


extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) size_t strnlen (const char *__text, size_t __maxlen)
{ return __mingw_strnlen (__text, __maxlen); }
# 212 "c:\\mingw\\include\\string.h" 3
extern int strerror_r (int, char *, size_t);
# 227 "c:\\mingw\\include\\string.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) int strerror_s (char *__buf, size_t __len, int __err)
{ return strerror_r (__err, __buf, __len); }





# 5 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\include\\math.h" 1 3
# 35 "c:\\mingw\\include\\math.h" 3
       
# 36 "c:\\mingw\\include\\math.h" 3
# 111 "c:\\mingw\\include\\math.h" 3

# 151 "c:\\mingw\\include\\math.h" 3
struct _exception
{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};

 double __attribute__((__cdecl__)) sin (double);
 double __attribute__((__cdecl__)) cos (double);
 double __attribute__((__cdecl__)) tan (double);
 double __attribute__((__cdecl__)) sinh (double);
 double __attribute__((__cdecl__)) cosh (double);
 double __attribute__((__cdecl__)) tanh (double);
 double __attribute__((__cdecl__)) asin (double);
 double __attribute__((__cdecl__)) acos (double);
 double __attribute__((__cdecl__)) atan (double);
 double __attribute__((__cdecl__)) atan2 (double, double);
 double __attribute__((__cdecl__)) exp (double);
 double __attribute__((__cdecl__)) log (double);
 double __attribute__((__cdecl__)) log10 (double);
 double __attribute__((__cdecl__)) pow (double, double);
 double __attribute__((__cdecl__)) sqrt (double);
 double __attribute__((__cdecl__)) ceil (double);
 double __attribute__((__cdecl__)) floor (double);
 double __attribute__((__cdecl__)) fabs (double);
 double __attribute__((__cdecl__)) ldexp (double, int);
 double __attribute__((__cdecl__)) frexp (double, int*);
 double __attribute__((__cdecl__)) modf (double, double*);
 double __attribute__((__cdecl__)) fmod (double, double);
# 225 "c:\\mingw\\include\\math.h" 3
struct _complex
{



  double x;
  double y;
};

 double __attribute__((__cdecl__)) _cabs (struct _complex);

 double __attribute__((__cdecl__)) _hypot (double, double);
 double __attribute__((__cdecl__)) _j0 (double);
 double __attribute__((__cdecl__)) _j1 (double);
 double __attribute__((__cdecl__)) _jn (int, double);
 double __attribute__((__cdecl__)) _y0 (double);
 double __attribute__((__cdecl__)) _y1 (double);
 double __attribute__((__cdecl__)) _yn (int, double);
 int __attribute__((__cdecl__)) _matherr (struct _exception *);
# 252 "c:\\mingw\\include\\math.h" 3
 double __attribute__((__cdecl__)) _chgsign (double);
 double __attribute__((__cdecl__)) _copysign (double, double);
 double __attribute__((__cdecl__)) _logb (double);
 double __attribute__((__cdecl__)) _nextafter (double, double);
 double __attribute__((__cdecl__)) _scalb (double, long);

 int __attribute__((__cdecl__)) _finite (double);
 int __attribute__((__cdecl__)) _fpclass (double);
 int __attribute__((__cdecl__)) _isnan (double);
# 269 "c:\\mingw\\include\\math.h" 3
 double __attribute__((__cdecl__)) j0 (double);
 double __attribute__((__cdecl__)) j1 (double);
 double __attribute__((__cdecl__)) jn (int, double);
 double __attribute__((__cdecl__)) y0 (double);
 double __attribute__((__cdecl__)) y1 (double);
 double __attribute__((__cdecl__)) yn (int, double);

 double __attribute__((__cdecl__)) chgsign (double);
# 285 "c:\\mingw\\include\\math.h" 3
 int __attribute__((__cdecl__)) finite (double);
 int __attribute__((__cdecl__)) fpclass (double);
# 355 "c:\\mingw\\include\\math.h" 3
  typedef long double float_t;
  typedef long double double_t;
# 391 "c:\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __fpclassifyf (float);
extern int __attribute__((__cdecl__)) __fpclassify (double);
extern int __attribute__((__cdecl__)) __fpclassifyl (long double);
# 417 "c:\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __isnan (double);
extern int __attribute__((__cdecl__)) __isnanf (float);
extern int __attribute__((__cdecl__)) __isnanl (long double);
# 457 "c:\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __signbit (double);
extern int __attribute__((__cdecl__)) __signbitf (float);
extern int __attribute__((__cdecl__)) __signbitl (long double);
# 486 "c:\\mingw\\include\\math.h" 3
extern float __attribute__((__cdecl__)) sinf (float);
extern long double __attribute__((__cdecl__)) sinl (long double);

extern float __attribute__((__cdecl__)) cosf (float);
extern long double __attribute__((__cdecl__)) cosl (long double);

extern float __attribute__((__cdecl__)) tanf (float);
extern long double __attribute__((__cdecl__)) tanl (long double);

extern float __attribute__((__cdecl__)) asinf (float);
extern long double __attribute__((__cdecl__)) asinl (long double);

extern float __attribute__((__cdecl__)) acosf (float);
extern long double __attribute__((__cdecl__)) acosl (long double);

extern float __attribute__((__cdecl__)) atanf (float);
extern long double __attribute__((__cdecl__)) atanl (long double);

extern float __attribute__((__cdecl__)) atan2f (float, float);
extern long double __attribute__((__cdecl__)) atan2l (long double, long double);



extern float __attribute__((__cdecl__)) sinhf (float);




extern long double __attribute__((__cdecl__)) sinhl (long double);

extern float __attribute__((__cdecl__)) coshf (float);




extern long double __attribute__((__cdecl__)) coshl (long double);

extern float __attribute__((__cdecl__)) tanhf (float);




extern long double __attribute__((__cdecl__)) tanhl (long double);



extern double __attribute__((__cdecl__)) acosh (double);
extern float __attribute__((__cdecl__)) acoshf (float);
extern long double __attribute__((__cdecl__)) acoshl (long double);


extern double __attribute__((__cdecl__)) asinh (double);
extern float __attribute__((__cdecl__)) asinhf (float);
extern long double __attribute__((__cdecl__)) asinhl (long double);


extern double __attribute__((__cdecl__)) atanh (double);
extern float __attribute__((__cdecl__)) atanhf (float);
extern long double __attribute__((__cdecl__)) atanhl (long double);



extern float __attribute__((__cdecl__)) expf (float);




extern long double __attribute__((__cdecl__)) expl (long double);


extern double __attribute__((__cdecl__)) exp2(double);
extern float __attribute__((__cdecl__)) exp2f(float);
extern long double __attribute__((__cdecl__)) exp2l(long double);



extern double __attribute__((__cdecl__)) expm1(double);
extern float __attribute__((__cdecl__)) expm1f(float);
extern long double __attribute__((__cdecl__)) expm1l(long double);


extern float __attribute__((__cdecl__)) frexpf (float, int*);




extern long double __attribute__((__cdecl__)) frexpl (long double, int*);




extern int __attribute__((__cdecl__)) ilogb (double);
extern int __attribute__((__cdecl__)) ilogbf (float);
extern int __attribute__((__cdecl__)) ilogbl (long double);


extern float __attribute__((__cdecl__)) ldexpf (float, int);




extern long double __attribute__((__cdecl__)) ldexpl (long double, int);


extern float __attribute__((__cdecl__)) logf (float);
extern long double __attribute__((__cdecl__)) logl (long double);


extern float __attribute__((__cdecl__)) log10f (float);
extern long double __attribute__((__cdecl__)) log10l (long double);


extern double __attribute__((__cdecl__)) log1p(double);
extern float __attribute__((__cdecl__)) log1pf(float);
extern long double __attribute__((__cdecl__)) log1pl(long double);


extern double __attribute__((__cdecl__)) log2 (double);
extern float __attribute__((__cdecl__)) log2f (float);
extern long double __attribute__((__cdecl__)) log2l (long double);


extern double __attribute__((__cdecl__)) logb (double);
extern float __attribute__((__cdecl__)) logbf (float);
extern long double __attribute__((__cdecl__)) logbl (long double);
# 644 "c:\\mingw\\include\\math.h" 3
extern float __attribute__((__cdecl__)) modff (float, float*);
extern long double __attribute__((__cdecl__)) modfl (long double, long double*);


extern double __attribute__((__cdecl__)) scalbn (double, int);
extern float __attribute__((__cdecl__)) scalbnf (float, int);
extern long double __attribute__((__cdecl__)) scalbnl (long double, int);

extern double __attribute__((__cdecl__)) scalbln (double, long);
extern float __attribute__((__cdecl__)) scalblnf (float, long);
extern long double __attribute__((__cdecl__)) scalblnl (long double, long);



extern double __attribute__((__cdecl__)) cbrt (double);
extern float __attribute__((__cdecl__)) cbrtf (float);
extern long double __attribute__((__cdecl__)) cbrtl (long double);


extern float __attribute__((__cdecl__)) fabsf (float x);
extern long double __attribute__((__cdecl__)) fabsl (long double x);


extern double __attribute__((__cdecl__)) hypot (double, double);
extern float __attribute__((__cdecl__)) hypotf (float, float);
extern long double __attribute__((__cdecl__)) hypotl (long double, long double);


extern float __attribute__((__cdecl__)) powf (float, float);
extern long double __attribute__((__cdecl__)) powl (long double, long double);


extern float __attribute__((__cdecl__)) sqrtf (float);
extern long double __attribute__((__cdecl__)) sqrtl (long double);


extern double __attribute__((__cdecl__)) erf (double);
extern float __attribute__((__cdecl__)) erff (float);
extern long double __attribute__((__cdecl__)) erfl (long double);


extern double __attribute__((__cdecl__)) erfc (double);
extern float __attribute__((__cdecl__)) erfcf (float);
extern long double __attribute__((__cdecl__)) erfcl (long double);


extern double __attribute__((__cdecl__)) lgamma (double);
extern float __attribute__((__cdecl__)) lgammaf (float);
extern long double __attribute__((__cdecl__)) lgammal (long double);


extern double __attribute__((__cdecl__)) tgamma (double);
extern float __attribute__((__cdecl__)) tgammaf (float);
extern long double __attribute__((__cdecl__)) tgammal (long double);


extern float __attribute__((__cdecl__)) ceilf (float);
extern long double __attribute__((__cdecl__)) ceill (long double);


extern float __attribute__((__cdecl__)) floorf (float);
extern long double __attribute__((__cdecl__)) floorl (long double);


extern double __attribute__((__cdecl__)) nearbyint ( double);
extern float __attribute__((__cdecl__)) nearbyintf (float);
extern long double __attribute__((__cdecl__)) nearbyintl (long double);



extern double __attribute__((__cdecl__)) rint (double);
extern float __attribute__((__cdecl__)) rintf (float);
extern long double __attribute__((__cdecl__)) rintl (long double);


extern long __attribute__((__cdecl__)) lrint (double);
extern long __attribute__((__cdecl__)) lrintf (float);
extern long __attribute__((__cdecl__)) lrintl (long double);

extern long long __attribute__((__cdecl__)) llrint (double);
extern long long __attribute__((__cdecl__)) llrintf (float);
extern long long __attribute__((__cdecl__)) llrintl (long double);
# 805 "c:\\mingw\\include\\math.h" 3
extern double __attribute__((__cdecl__)) round (double);
extern float __attribute__((__cdecl__)) roundf (float);
extern long double __attribute__((__cdecl__)) roundl (long double);


extern long __attribute__((__cdecl__)) lround (double);
extern long __attribute__((__cdecl__)) lroundf (float);
extern long __attribute__((__cdecl__)) lroundl (long double);

extern long long __attribute__((__cdecl__)) llround (double);
extern long long __attribute__((__cdecl__)) llroundf (float);
extern long long __attribute__((__cdecl__)) llroundl (long double);



extern double __attribute__((__cdecl__)) trunc (double);
extern float __attribute__((__cdecl__)) truncf (float);
extern long double __attribute__((__cdecl__)) truncl (long double);


extern float __attribute__((__cdecl__)) fmodf (float, float);
extern long double __attribute__((__cdecl__)) fmodl (long double, long double);


extern double __attribute__((__cdecl__)) remainder (double, double);
extern float __attribute__((__cdecl__)) remainderf (float, float);
extern long double __attribute__((__cdecl__)) remainderl (long double, long double);


extern double __attribute__((__cdecl__)) remquo(double, double, int *);
extern float __attribute__((__cdecl__)) remquof(float, float, int *);
extern long double __attribute__((__cdecl__)) remquol(long double, long double, int *);


extern double __attribute__((__cdecl__)) copysign (double, double);
extern float __attribute__((__cdecl__)) copysignf (float, float);
extern long double __attribute__((__cdecl__)) copysignl (long double, long double);


extern double __attribute__((__cdecl__)) nan(const char *tagp);
extern float __attribute__((__cdecl__)) nanf(const char *tagp);
extern long double __attribute__((__cdecl__)) nanl(const char *tagp);
# 855 "c:\\mingw\\include\\math.h" 3
extern double __attribute__((__cdecl__)) nextafter (double, double);
extern float __attribute__((__cdecl__)) nextafterf (float, float);
extern long double __attribute__((__cdecl__)) nextafterl (long double, long double);


extern double __attribute__((__cdecl__)) nexttoward (double, long double);
extern float __attribute__((__cdecl__)) nexttowardf (float, long double);
extern long double __attribute__((__cdecl__)) nexttowardl (long double, long double);



extern double __attribute__((__cdecl__)) fdim (double x, double y);
extern float __attribute__((__cdecl__)) fdimf (float x, float y);
extern long double __attribute__((__cdecl__)) fdiml (long double x, long double y);







extern double __attribute__((__cdecl__)) fmax (double, double);
extern float __attribute__((__cdecl__)) fmaxf (float, float);
extern long double __attribute__((__cdecl__)) fmaxl (long double, long double);


extern double __attribute__((__cdecl__)) fmin (double, double);
extern float __attribute__((__cdecl__)) fminf (float, float);
extern long double __attribute__((__cdecl__)) fminl (long double, long double);



extern double __attribute__((__cdecl__)) fma (double, double, double);
extern float __attribute__((__cdecl__)) fmaf (float, float, float);
extern long double __attribute__((__cdecl__)) fmal (long double, long double, long double);
# 931 "c:\\mingw\\include\\math.h" 3

# 6 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\include\\time.h" 1 3
# 33 "c:\\mingw\\include\\time.h" 3
       
# 34 "c:\\mingw\\include\\time.h" 3
# 45 "c:\\mingw\\include\\time.h" 3
# 1 "c:\\mingw\\include\\sys\\types.h" 1 3
# 34 "c:\\mingw\\include\\sys\\types.h" 3
       
# 35 "c:\\mingw\\include\\sys\\types.h" 3
# 139 "c:\\mingw\\include\\sys\\types.h" 3
  typedef long __time32_t;
  typedef long long __time64_t;
# 149 "c:\\mingw\\include\\sys\\types.h" 3
   typedef __time32_t time_t;
# 46 "c:\\mingw\\include\\time.h" 2 3
# 115 "c:\\mingw\\include\\time.h" 3
struct timespec
{







  __time64_t tv_sec;
  long tv_nsec;
};


struct __mingw32_expanded_timespec
{





  union
  {



    __time64_t __tv64_sec;
    __time32_t __tv32_sec;
    time_t tv_sec;
  };
  long tv_nsec;
};
# 155 "c:\\mingw\\include\\time.h" 3


extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))







struct __mingw32_expanded_timespec *mingw_timespec( struct timespec *__tv )
{ return (struct __mingw32_expanded_timespec *)(__tv); }


# 178 "c:\\mingw\\include\\time.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 179 "c:\\mingw\\include\\time.h" 2 3




typedef long clock_t;

struct tm
{




  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
};



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) clock_t clock (void);
# 214 "c:\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) time_t time (time_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double difftime (time_t, time_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) time_t mktime (struct tm *);
# 228 "c:\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *asctime (const struct tm *);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *ctime (const time_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct tm *gmtime (const time_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct tm *localtime (const time_t *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t strftime (char *, size_t, const char *, const struct tm *);


extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _tzset (void);


extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) void tzset (void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strdate (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strtime (char *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) __time64_t _time64( __time64_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) __time64_t _mktime64 (struct tm *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ctime64 (const __time64_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct tm *_gmtime64 (const __time64_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct tm *_localtime64 (const __time64_t *);
# 344 "c:\\mingw\\include\\time.h" 3
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__p__daylight (void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) long *__p__timezone (void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char **__p__tzname (void);

extern __attribute__((__dllimport__)) int _daylight;
extern __attribute__((__dllimport__)) long _timezone;
extern __attribute__((__dllimport__)) char *_tzname[2];
# 381 "c:\\mingw\\include\\time.h" 3
extern __attribute__((__dllimport__)) int daylight;
extern __attribute__((__dllimport__)) long timezone;
extern __attribute__((__dllimport__)) char *tzname[2];
# 407 "c:\\mingw\\include\\time.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
int nanosleep( const struct timespec *, struct timespec * );
# 428 "c:\\mingw\\include\\time.h" 3

# 440 "c:\\mingw\\include\\time.h" 3



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wasctime (const struct tm *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wstrdate (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wstrtime (wchar_t *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wctime64 (const __time64_t *);
# 466 "c:\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wctime (const time_t *);
# 495 "c:\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t wcsftime (wchar_t *, size_t, const wchar_t *, const struct tm *);


# 7 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 1 3 4
# 99 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 8 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdint.h" 1 3 4
# 9 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdint.h" 3 4
# 1 "c:\\mingw\\include\\stdint.h" 1 3 4
# 34 "c:\\mingw\\include\\stdint.h" 3 4
       
# 35 "c:\\mingw\\include\\stdint.h" 3
# 54 "c:\\mingw\\include\\stdint.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 55 "c:\\mingw\\include\\stdint.h" 2 3



typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
typedef long long int_least64_t;
typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
typedef long long int_fast64_t;
typedef unsigned long long uint_fast64_t;
# 106 "c:\\mingw\\include\\stdint.h" 3
 typedef int __intptr_t;

typedef __intptr_t intptr_t;
# 118 "c:\\mingw\\include\\stdint.h" 3
 typedef unsigned int __uintptr_t;

typedef __uintptr_t uintptr_t;







typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 10 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdint.h" 2 3 4
# 9 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 149 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 426 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 10 "src/./engine/utils/utils.h" 2

# 1 "c:\\mingw\\include\\ctype.h" 1 3
# 33 "c:\\mingw\\include\\ctype.h" 3
       
# 34 "c:\\mingw\\include\\ctype.h" 3
# 59 "c:\\mingw\\include\\ctype.h" 3
# 1 "c:\\mingw\\include\\wctype.h" 1 3
# 33 "c:\\mingw\\include\\wctype.h" 3
       
# 34 "c:\\mingw\\include\\wctype.h" 3
# 87 "c:\\mingw\\include\\wctype.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 88 "c:\\mingw\\include\\wctype.h" 2 3

typedef wchar_t wctype_t;










 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswalnum (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswalpha (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswascii (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswcntrl (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswctype (wint_t, wctype_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswdigit (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswgraph (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswlower (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswprint (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswpunct (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswspace (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswupper (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswxdigit (wint_t);

__attribute__((__deprecated__))





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int is_wctype (wint_t, wctype_t);


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswblank (wint_t);







 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towlower (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towupper (wint_t);
# 182 "c:\\mingw\\include\\wctype.h" 3

# 60 "c:\\mingw\\include\\ctype.h" 2 3
# 68 "c:\\mingw\\include\\ctype.h" 3


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isalnum(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isalpha(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscntrl(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isdigit(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isgraph(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int islower(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isleadbyte (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isprint(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ispunct(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isspace(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isupper(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isxdigit(int);


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int isblank (int);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _isctype (int, int);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int tolower (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int toupper (int);
# 108 "c:\\mingw\\include\\ctype.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _tolower (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _toupper (int);
# 140 "c:\\mingw\\include\\ctype.h" 3
  extern __attribute__((__dllimport__)) unsigned short _ctype[];



  extern __attribute__((__dllimport__)) unsigned short *_pctype;
# 240 "c:\\mingw\\include\\ctype.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isleadbyte (int c)
{ return (_pctype[(unsigned char)(c)] & 0x8000); }


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __isascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __toascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __iscsymf (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __iscsym (int);
# 267 "c:\\mingw\\include\\ctype.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int isascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int toascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscsymf (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscsym (int);





# 12 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\include\\signal.h" 1 3
# 46 "c:\\mingw\\include\\signal.h" 3
typedef int sig_atomic_t;
# 60 "c:\\mingw\\include\\signal.h" 3
typedef void (*__p_sig_fn_t)(int);
# 84 "c:\\mingw\\include\\signal.h" 3
 __p_sig_fn_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) signal(int, __p_sig_fn_t);




 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) raise (int);
# 13 "src/./engine/utils/utils.h" 2



# 15 "src/./engine/utils/utils.h"
typedef uint8_t u08;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t i08;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef float f32;
typedef double f64;

typedef size_t sz_t;
# 45 "src/./engine/utils/utils.h"
       
# 70 "src/./engine/utils/utils.h"
typedef enum {
    LOG_DBG,
    LOG_SUCCESS,
    LOG_WARN,
    LOG_ERR,
    LOG_LEVEL_LEN
} LOG_LEVEL;

void ulogger_log(LOG_LEVEL level, const char * fmt, ...);
# 111 "src/./engine/utils/utils.h"
void * ualloc_raw(sz_t num_of_items, sz_t item_size, const char * type);



void ufree(void * ptr);
# 127 "src/./engine/utils/utils.h"
char * ustr_dup(const char * src);
char * ui32_to_str(i32 i, char * special_str, u32 char_number);

i32 ustr_to_i32(char * str);


u64 uhash_id(char * id);

sz_t uis_prime(const sz_t x);
sz_t unext_prime(sz_t x);
# 150 "src/./engine/utils/utils.h"
FILE * ufile_exists(const char * path);
char * utxt_file_query(const char * path);
i08 utxt_file_write(const char * content, const char * path);
# 167 "src/./engine/utils/utils.h"
# 1 "c:\\mingw\\include\\windows.h" 1 3
# 33 "c:\\mingw\\include\\windows.h" 3
       
# 34 "c:\\mingw\\include\\windows.h" 3
# 42 "c:\\mingw\\include\\windows.h" 3
# 1 "c:\\mingw\\include\\windef.h" 1 3
# 34 "c:\\mingw\\include\\windef.h" 3
       
# 35 "c:\\mingw\\include\\windef.h" 3
# 44 "c:\\mingw\\include\\windef.h" 3

# 245 "c:\\mingw\\include\\windef.h" 3

# 245 "c:\\mingw\\include\\windef.h" 3
typedef unsigned long DWORD;
typedef int WINBOOL,*PWINBOOL,*LPWINBOOL;



typedef WINBOOL BOOL;



typedef unsigned char BYTE;

typedef BOOL *PBOOL,*LPBOOL;
typedef unsigned short WORD;
typedef float FLOAT;
typedef FLOAT *PFLOAT;
typedef BYTE *PBYTE,*LPBYTE;
typedef int *PINT,*LPINT;
typedef WORD *PWORD,*LPWORD;
typedef long *LPLONG;
typedef DWORD *PDWORD,*LPDWORD;
typedef const void *PCVOID,*LPCVOID;
typedef int INT;
typedef unsigned int UINT,*PUINT,*LPUINT;

# 1 "c:\\mingw\\include\\winnt.h" 1 3
# 33 "c:\\mingw\\include\\winnt.h" 3
       
# 34 "c:\\mingw\\include\\winnt.h" 3




# 1 "c:\\mingw\\include\\windef.h" 1 3
# 39 "c:\\mingw\\include\\winnt.h" 2 3







# 1 "c:\\mingw\\include\\winerror.h" 1 3
# 34 "c:\\mingw\\include\\winerror.h" 3
       
# 35 "c:\\mingw\\include\\winerror.h" 3
# 47 "c:\\mingw\\include\\winnt.h" 2 3





# 91 "c:\\mingw\\include\\winnt.h" 3
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef char CCHAR, *PCCHAR;
typedef unsigned char UCHAR, *PUCHAR;
typedef unsigned short USHORT, *PUSHORT;
typedef unsigned long ULONG, *PULONG;
typedef char *PSZ;

typedef void *PVOID, *LPVOID;





typedef void * PVOID64;
# 119 "c:\\mingw\\include\\winnt.h" 3
typedef wchar_t WCHAR;
typedef WCHAR *PWCHAR, *LPWCH, *PWCH, *NWPSTR, *LPWSTR, *PWSTR;
typedef const WCHAR *LPCWCH, *PCWCH, *LPCWSTR, *PCWSTR;
typedef CHAR *PCHAR, *LPCH, *PCH, *NPSTR, *LPSTR, *PSTR;
typedef const CHAR *LPCCH, *PCSTR, *LPCSTR;
# 134 "c:\\mingw\\include\\winnt.h" 3
typedef CHAR TCHAR;
typedef CHAR _TCHAR;


typedef TCHAR TBYTE, *PTCH, *PTBYTE;
typedef TCHAR *LPTCH, *PTSTR, *LPTSTR, *LP, *PTCHAR;
typedef const TCHAR *LPCTSTR;
# 159 "c:\\mingw\\include\\winnt.h" 3
typedef SHORT *PSHORT;
typedef LONG *PLONG;

typedef void *HANDLE;





typedef HANDLE *PHANDLE, *LPHANDLE;
typedef DWORD LCID;
typedef PDWORD PLCID;
typedef WORD LANGID;
# 181 "c:\\mingw\\include\\winnt.h" 3
typedef long long LONGLONG;
typedef unsigned long long DWORDLONG;



typedef LONGLONG *PLONGLONG;
typedef DWORDLONG *PDWORDLONG;
typedef DWORDLONG ULONGLONG, *PULONGLONG;
typedef LONGLONG USN;
# 199 "c:\\mingw\\include\\winnt.h" 3
typedef BYTE BOOLEAN, *PBOOLEAN;





typedef BYTE FCHAR;
typedef WORD FSHORT;
typedef DWORD FLONG;


# 1 "c:\\mingw\\include\\basetsd.h" 1 3



       
# 5 "c:\\mingw\\include\\basetsd.h" 3
# 50 "c:\\mingw\\include\\basetsd.h" 3
typedef signed char INT8;
typedef signed short INT16;
typedef int LONG32, *PLONG32;

typedef int INT32, *PINT32;

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;
typedef unsigned int UINT32, *PUINT32;
# 101 "c:\\mingw\\include\\basetsd.h" 3
typedef int INT_PTR, *PINT_PTR;
typedef unsigned int UINT_PTR, *PUINT_PTR;
typedef long LONG_PTR, *PLONG_PTR;
typedef unsigned long ULONG_PTR, *PULONG_PTR;
typedef unsigned short UHALF_PTR, *PUHALF_PTR;
typedef short HALF_PTR, *PHALF_PTR;
typedef unsigned long HANDLE_PTR;


typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
typedef long long LONG64, *PLONG64;
typedef long long INT64, *PINT64;
typedef unsigned long long ULONG64, *PULONG64;
typedef unsigned long long DWORD64, *PDWORD64;
typedef unsigned long long UINT64, *PUINT64;
# 211 "c:\\mingw\\include\\winnt.h" 2 3
# 1786 "c:\\mingw\\include\\winnt.h" 3


typedef DWORD ACCESS_MASK, *PACCESS_MASK;







typedef struct _GUID
{ unsigned long Data1;
  unsigned short Data2;
  unsigned short Data3;
  unsigned char Data4[8];
} GUID, *REFGUID, *LPGUID;



typedef struct _GENERIC_MAPPING
{ ACCESS_MASK GenericRead;
  ACCESS_MASK GenericWrite;
  ACCESS_MASK GenericExecute;
  ACCESS_MASK GenericAll;
} GENERIC_MAPPING, *PGENERIC_MAPPING;

typedef struct _ACE_HEADER
{ BYTE AceType;
  BYTE AceFlags;
  WORD AceSize;
} ACE_HEADER, *PACE_HEADER;

typedef struct _ACCESS_ALLOWED_ACE
{ ACE_HEADER Header;
  ACCESS_MASK Mask;
  DWORD SidStart;
} ACCESS_ALLOWED_ACE, *PACCESS_ALLOWED_ACE;

typedef struct _ACCESS_DENIED_ACE
{ ACE_HEADER Header;
  ACCESS_MASK Mask;
  DWORD SidStart;
} ACCESS_DENIED_ACE, *PACCESS_DENIED_ACE;

typedef struct _SYSTEM_AUDIT_ACE
{ ACE_HEADER Header;
  ACCESS_MASK Mask;
  DWORD SidStart;
} SYSTEM_AUDIT_ACE;
typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;

typedef struct _SYSTEM_ALARM_ACE
{ ACE_HEADER Header;
  ACCESS_MASK Mask;
  DWORD SidStart;
} SYSTEM_ALARM_ACE, *PSYSTEM_ALARM_ACE;

typedef struct _ACCESS_ALLOWED_OBJECT_ACE
{ ACE_HEADER Header;
  ACCESS_MASK Mask;
  DWORD Flags;
  GUID ObjectType;
  GUID InheritedObjectType;
  DWORD SidStart;
} ACCESS_ALLOWED_OBJECT_ACE, *PACCESS_ALLOWED_OBJECT_ACE;

typedef struct _ACCESS_DENIED_OBJECT_ACE
{ ACE_HEADER Header;
  ACCESS_MASK Mask;
  DWORD Flags;
  GUID ObjectType;
  GUID InheritedObjectType;
  DWORD SidStart;
} ACCESS_DENIED_OBJECT_ACE, *PACCESS_DENIED_OBJECT_ACE;

typedef struct _SYSTEM_AUDIT_OBJECT_ACE
{ ACE_HEADER Header;
  ACCESS_MASK Mask;
  DWORD Flags;
  GUID ObjectType;
  GUID InheritedObjectType;
  DWORD SidStart;
} SYSTEM_AUDIT_OBJECT_ACE, *PSYSTEM_AUDIT_OBJECT_ACE;

typedef struct _SYSTEM_ALARM_OBJECT_ACE
{ ACE_HEADER Header;
  ACCESS_MASK Mask;
  DWORD Flags;
  GUID ObjectType;
  GUID InheritedObjectType;
  DWORD SidStart;
} SYSTEM_ALARM_OBJECT_ACE, *PSYSTEM_ALARM_OBJECT_ACE;

typedef struct _ACL
{ BYTE AclRevision;
  BYTE Sbz1;
  WORD AclSize;
  WORD AceCount;
  WORD Sbz2;
} ACL, *PACL;

typedef struct _ACL_REVISION_INFORMATION
{ DWORD AclRevision;
} ACL_REVISION_INFORMATION;

typedef struct _ACL_SIZE_INFORMATION
{ DWORD AceCount;
  DWORD AclBytesInUse;
  DWORD AclBytesFree;
} ACL_SIZE_INFORMATION;
# 1913 "c:\\mingw\\include\\winnt.h" 3
typedef struct _FLOATING_SAVE_AREA
{ DWORD ControlWord;
  DWORD StatusWord;
  DWORD TagWord;
  DWORD ErrorOffset;
  DWORD ErrorSelector;
  DWORD DataOffset;
  DWORD DataSelector;
  BYTE RegisterArea[80];
  DWORD Cr0NpxState;
} FLOATING_SAVE_AREA;

typedef struct _CONTEXT
{ DWORD ContextFlags;
  DWORD Dr0;
  DWORD Dr1;
  DWORD Dr2;
  DWORD Dr3;
  DWORD Dr6;
  DWORD Dr7;
  FLOATING_SAVE_AREA FloatSave;
  DWORD SegGs;
  DWORD SegFs;
  DWORD SegEs;
  DWORD SegDs;
  DWORD Edi;
  DWORD Esi;
  DWORD Ebx;
  DWORD Edx;
  DWORD Ecx;
  DWORD Eax;
  DWORD Ebp;
  DWORD Eip;
  DWORD SegCs;
  DWORD EFlags;
  DWORD Esp;
  DWORD SegSs;
  BYTE ExtendedRegisters[512];
} CONTEXT;
# 2436 "c:\\mingw\\include\\winnt.h" 3
typedef CONTEXT *PCONTEXT, *LPCONTEXT;

typedef struct _EXCEPTION_RECORD
{ DWORD ExceptionCode;
  DWORD ExceptionFlags;
  struct _EXCEPTION_RECORD *ExceptionRecord;
  PVOID ExceptionAddress;
  DWORD NumberParameters;
  DWORD ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD, *LPEXCEPTION_RECORD;

typedef struct _EXCEPTION_POINTERS
{ PEXCEPTION_RECORD ExceptionRecord;
  PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS, *LPEXCEPTION_POINTERS;

typedef union _LARGE_INTEGER
{ struct
  { DWORD LowPart;
    LONG HighPart;
  } u;

  __extension__ struct
  { DWORD LowPart;
    LONG HighPart;
  };

  LONGLONG QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;

typedef union _ULARGE_INTEGER
{ struct
  { DWORD LowPart;
    DWORD HighPart;
  } u;

  __extension__ struct
  { DWORD LowPart;
    DWORD HighPart;
  };

  ULONGLONG QuadPart;
} ULARGE_INTEGER, *PULARGE_INTEGER;

typedef struct _LUID
{ DWORD LowPart;
  LONG HighPart;
} LUID, *PLUID;
#pragma pack(push,4)

typedef struct _LUID_AND_ATTRIBUTES
{ LUID Luid;
  DWORD Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES;
#pragma pack(pop)
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;

typedef struct _PRIVILEGE_SET
{ DWORD PrivilegeCount;
  DWORD Control;
  LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET, *PPRIVILEGE_SET;

typedef struct _SECURITY_ATTRIBUTES
{ DWORD nLength;
  LPVOID lpSecurityDescriptor;
  BOOL bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;

typedef enum _SECURITY_IMPERSONATION_LEVEL
{ SecurityAnonymous,
  SecurityIdentification,
  SecurityImpersonation,
  SecurityDelegation
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE, *PSECURITY_CONTEXT_TRACKING_MODE;

typedef struct _SECURITY_QUALITY_OF_SERVICE
{ DWORD Length;
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
  BOOLEAN EffectiveOnly;
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE;
typedef PVOID PACCESS_TOKEN;

typedef struct _SE_IMPERSONATION_STATE
{ PACCESS_TOKEN Token;
  BOOLEAN CopyOnOpen;
  BOOLEAN EffectiveOnly;
  SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE, *PSE_IMPERSONATION_STATE;

typedef struct _SID_IDENTIFIER_AUTHORITY
{ BYTE Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY, *LPSID_IDENTIFIER_AUTHORITY;
typedef PVOID PSID;

typedef struct _SID
{ BYTE Revision;
  BYTE SubAuthorityCount;
  SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
  DWORD SubAuthority[1];
} SID, *PISID;

typedef struct _SID_AND_ATTRIBUTES
{ PSID Sid;
  DWORD Attributes;
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES;
typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[1];
typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;
# 2558 "c:\\mingw\\include\\winnt.h" 3
typedef struct _TOKEN_SOURCE
{ CHAR SourceName[8];
  LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE;

typedef struct _TOKEN_CONTROL
{ LUID TokenId;
  LUID AuthenticationId;
  LUID ModifiedId;
  TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL;

typedef struct _TOKEN_DEFAULT_DACL
{ PACL DefaultDacl;
} TOKEN_DEFAULT_DACL, *PTOKEN_DEFAULT_DACL;

typedef struct _TOKEN_GROUPS
{ DWORD GroupCount;
  SID_AND_ATTRIBUTES Groups[1];
} TOKEN_GROUPS, *PTOKEN_GROUPS, *LPTOKEN_GROUPS;

typedef struct _TOKEN_OWNER
{ PSID Owner;
} TOKEN_OWNER, *PTOKEN_OWNER;

typedef struct _TOKEN_PRIMARY_GROUP
{ PSID PrimaryGroup;
} TOKEN_PRIMARY_GROUP, *PTOKEN_PRIMARY_GROUP;

typedef struct _TOKEN_PRIVILEGES
{ DWORD PrivilegeCount;
  LUID_AND_ATTRIBUTES Privileges[1];
} TOKEN_PRIVILEGES, *PTOKEN_PRIVILEGES, *LPTOKEN_PRIVILEGES;

typedef enum tagTOKEN_TYPE
{ TokenPrimary = 1,
  TokenImpersonation
} TOKEN_TYPE, *PTOKEN_TYPE;

typedef struct _TOKEN_STATISTICS
{ LUID TokenId;
  LUID AuthenticationId;
  LARGE_INTEGER ExpirationTime;
  TOKEN_TYPE TokenType;
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  DWORD DynamicCharged;
  DWORD DynamicAvailable;
  DWORD GroupCount;
  DWORD PrivilegeCount;
  LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS;

typedef struct _TOKEN_USER
{ SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;
# 2642 "c:\\mingw\\include\\winnt.h" 3
typedef DWORD SECURITY_INFORMATION, *PSECURITY_INFORMATION;
typedef WORD SECURITY_DESCRIPTOR_CONTROL, *PSECURITY_DESCRIPTOR_CONTROL;

typedef struct _SECURITY_DESCRIPTOR
{ BYTE Revision;
  BYTE Sbz1;
  SECURITY_DESCRIPTOR_CONTROL Control;
  PSID Owner;
  PSID Group;
  PACL Sacl;
  PACL Dacl;
} SECURITY_DESCRIPTOR, *PSECURITY_DESCRIPTOR, *PISECURITY_DESCRIPTOR;

typedef enum _TOKEN_INFORMATION_CLASS
{ TokenUser = 1,
  TokenGroups,
  TokenPrivileges,
  TokenOwner,
  TokenPrimaryGroup,
  TokenDefaultDacl,
  TokenSource,
  TokenType,
  TokenImpersonationLevel,
  TokenStatistics,
  TokenRestrictedSids,
  TokenSessionId,
  TokenGroupsAndPrivileges,
  TokenSessionReference,
  TokenSandBoxInert,
  TokenAuditPolicy,
  TokenOrigin,
# 2686 "c:\\mingw\\include\\winnt.h" 3
  MaxTokenInfoClass
} TOKEN_INFORMATION_CLASS;

typedef enum _SID_NAME_USE
{ SidTypeUser = 1,
  SidTypeGroup,
  SidTypeDomain,
  SidTypeAlias,
  SidTypeWellKnownGroup,
  SidTypeDeletedAccount,
  SidTypeInvalid,
  SidTypeUnknown,
  SidTypeComputer
} SID_NAME_USE, *PSID_NAME_USE;

typedef struct _QUOTA_LIMITS
{ SIZE_T PagedPoolLimit;
  SIZE_T NonPagedPoolLimit;
  SIZE_T MinimumWorkingSetSize;
  SIZE_T MaximumWorkingSetSize;
  SIZE_T PagefileLimit;
  LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS;

typedef struct _IO_COUNTERS
{ ULONGLONG ReadOperationCount;
  ULONGLONG WriteOperationCount;
  ULONGLONG OtherOperationCount;
  ULONGLONG ReadTransferCount;
  ULONGLONG WriteTransferCount;
  ULONGLONG OtherTransferCount;
} IO_COUNTERS, *PIO_COUNTERS;

typedef struct _FILE_NOTIFY_INFORMATION
{ DWORD NextEntryOffset;
  DWORD Action;
  DWORD FileNameLength;
  WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION, *PFILE_NOTIFY_INFORMATION;

typedef struct _TAPE_ERASE
{ DWORD Type;
  BOOLEAN Immediate;
} TAPE_ERASE, *PTAPE_ERASE;

typedef struct _TAPE_GET_DRIVE_PARAMETERS
{ BOOLEAN ECC;
  BOOLEAN Compression;
  BOOLEAN DataPadding;
  BOOLEAN ReportSetmarks;
  DWORD DefaultBlockSize;
  DWORD MaximumBlockSize;
  DWORD MinimumBlockSize;
  DWORD MaximumPartitionCount;
  DWORD FeaturesLow;
  DWORD FeaturesHigh;
  DWORD EOTWarningZoneSize;
} TAPE_GET_DRIVE_PARAMETERS, *PTAPE_GET_DRIVE_PARAMETERS;

typedef struct _TAPE_GET_MEDIA_PARAMETERS
{ LARGE_INTEGER Capacity;
  LARGE_INTEGER Remaining;
  DWORD BlockSize;
  DWORD PartitionCount;
  BOOLEAN WriteProtected;
} TAPE_GET_MEDIA_PARAMETERS, *PTAPE_GET_MEDIA_PARAMETERS;

typedef struct _TAPE_GET_POSITION
{ ULONG Type;
  ULONG Partition;
  ULONG OffsetLow;
  ULONG OffsetHigh;
} TAPE_GET_POSITION, *PTAPE_GET_POSITION;

typedef struct _TAPE_PREPARE
{ DWORD Operation;
  BOOLEAN Immediate;
} TAPE_PREPARE, *PTAPE_PREPARE;

typedef struct _TAPE_SET_DRIVE_PARAMETERS
{ BOOLEAN ECC;
  BOOLEAN Compression;
  BOOLEAN DataPadding;
  BOOLEAN ReportSetmarks;
  ULONG EOTWarningZoneSize;
} TAPE_SET_DRIVE_PARAMETERS, *PTAPE_SET_DRIVE_PARAMETERS;

typedef struct _TAPE_SET_MEDIA_PARAMETERS
{ ULONG BlockSize;
} TAPE_SET_MEDIA_PARAMETERS, *PTAPE_SET_MEDIA_PARAMETERS;

typedef struct _TAPE_SET_POSITION
{ DWORD Method;
  DWORD Partition;
  LARGE_INTEGER Offset;
  BOOLEAN Immediate;
} TAPE_SET_POSITION, *PTAPE_SET_POSITION;

typedef struct _TAPE_WRITE_MARKS
{ DWORD Type;
  DWORD Count;
  BOOLEAN Immediate;
} TAPE_WRITE_MARKS, *PTAPE_WRITE_MARKS;

typedef struct _TAPE_CREATE_PARTITION
{ DWORD Method;
  DWORD Count;
  DWORD Size;
} TAPE_CREATE_PARTITION, *PTAPE_CREATE_PARTITION;

typedef struct _MEMORY_BASIC_INFORMATION
{ PVOID BaseAddress;
  PVOID AllocationBase;
  DWORD AllocationProtect;
  DWORD RegionSize;
  DWORD State;
  DWORD Protect;
  DWORD Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;

typedef struct _MESSAGE_RESOURCE_ENTRY
{ WORD Length;
  WORD Flags;
  BYTE Text[1];
} MESSAGE_RESOURCE_ENTRY, *PMESSAGE_RESOURCE_ENTRY;

typedef struct _MESSAGE_RESOURCE_BLOCK
{ DWORD LowId;
  DWORD HighId;
  DWORD OffsetToEntries;
} MESSAGE_RESOURCE_BLOCK, *PMESSAGE_RESOURCE_BLOCK;

typedef struct _MESSAGE_RESOURCE_DATA
{ DWORD NumberOfBlocks;
  MESSAGE_RESOURCE_BLOCK Blocks[1];
} MESSAGE_RESOURCE_DATA, *PMESSAGE_RESOURCE_DATA;

typedef struct _LIST_ENTRY
{ struct _LIST_ENTRY *Flink;
  struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY;

typedef struct _SINGLE_LIST_ENTRY
{ struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY;







typedef union _SLIST_HEADER
{ ULONGLONG Alignment;
  __extension__ struct
  { SINGLE_LIST_ENTRY Next;
    WORD Depth;
    WORD Sequence;
  } ;
} SLIST_HEADER, *PSLIST_HEADER;


typedef struct _RTL_CRITICAL_SECTION_DEBUG
{ WORD Type;
  WORD CreatorBackTraceIndex;
  struct _RTL_CRITICAL_SECTION *CriticalSection;
  LIST_ENTRY ProcessLocksList;
  DWORD EntryCount;
  DWORD ContentionCount;
  DWORD Spare[2];
} RTL_CRITICAL_SECTION_DEBUG, *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION
{ PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
  LONG LockCount;
  LONG RecursionCount;
  HANDLE OwningThread;
  HANDLE LockSemaphore;
  DWORD Reserved;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION;

typedef struct _EVENTLOGRECORD
{ DWORD Length;
  DWORD Reserved;
  DWORD RecordNumber;
  DWORD TimeGenerated;
  DWORD TimeWritten;
  DWORD EventID;
  WORD EventType;
  WORD NumStrings;
  WORD EventCategory;
  WORD ReservedFlags;
  DWORD ClosingRecordNumber;
  DWORD StringOffset;
  DWORD UserSidLength;
  DWORD UserSidOffset;
  DWORD DataLength;
  DWORD DataOffset;
} EVENTLOGRECORD, *PEVENTLOGRECORD;

typedef struct _OSVERSIONINFOA
{ DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  CHAR szCSDVersion[128];
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;

typedef struct _OSVERSIONINFOW
{ DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  WCHAR szCSDVersion[128];
} OSVERSIONINFOW, *POSVERSIONINFOW, *LPOSVERSIONINFOW;

typedef struct _OSVERSIONINFOEXA
{ DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  CHAR szCSDVersion[128];
  WORD wServicePackMajor;
  WORD wServicePackMinor;
  WORD wSuiteMask;
  BYTE wProductType;
  BYTE wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;

typedef struct _OSVERSIONINFOEXW
{ DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  WCHAR szCSDVersion[128];
  WORD wServicePackMajor;
  WORD wServicePackMinor;
  WORD wSuiteMask;
  BYTE wProductType;
  BYTE wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW;

#pragma pack(push,2)
typedef struct _IMAGE_VXD_HEADER
{ WORD e32_magic;
  BYTE e32_border;
  BYTE e32_worder;
  DWORD e32_level;
  WORD e32_cpu;
  WORD e32_os;
  DWORD e32_ver;
  DWORD e32_mflags;
  DWORD e32_mpages;
  DWORD e32_startobj;
  DWORD e32_eip;
  DWORD e32_stackobj;
  DWORD e32_esp;
  DWORD e32_pagesize;
  DWORD e32_lastpagesize;
  DWORD e32_fixupsize;
  DWORD e32_fixupsum;
  DWORD e32_ldrsize;
  DWORD e32_ldrsum;
  DWORD e32_objtab;
  DWORD e32_objcnt;
  DWORD e32_objmap;
  DWORD e32_itermap;
  DWORD e32_rsrctab;
  DWORD e32_rsrccnt;
  DWORD e32_restab;
  DWORD e32_enttab;
  DWORD e32_dirtab;
  DWORD e32_dircnt;
  DWORD e32_fpagetab;
  DWORD e32_frectab;
  DWORD e32_impmod;
  DWORD e32_impmodcnt;
  DWORD e32_impproc;
  DWORD e32_pagesum;
  DWORD e32_datapage;
  DWORD e32_preload;
  DWORD e32_nrestab;
  DWORD e32_cbnrestab;
  DWORD e32_nressum;
  DWORD e32_autodata;
  DWORD e32_debuginfo;
  DWORD e32_debuglen;
  DWORD e32_instpreload;
  DWORD e32_instdemand;
  DWORD e32_heapsize;
  BYTE e32_res3[12];
  DWORD e32_winresoff;
  DWORD e32_winreslen;
  WORD e32_devid;
  WORD e32_ddkver;
} IMAGE_VXD_HEADER, *PIMAGE_VXD_HEADER;
#pragma pack(pop)

#pragma pack(push,4)
typedef struct _IMAGE_FILE_HEADER
{ WORD Machine;
  WORD NumberOfSections;
  DWORD TimeDateStamp;
  DWORD PointerToSymbolTable;
  DWORD NumberOfSymbols;
  WORD SizeOfOptionalHeader;
  WORD Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

typedef struct _IMAGE_DATA_DIRECTORY
{ DWORD VirtualAddress;
  DWORD Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

typedef struct _IMAGE_OPTIONAL_HEADER
{ WORD Magic;
  BYTE MajorLinkerVersion;
  BYTE MinorLinkerVersion;
  DWORD SizeOfCode;
  DWORD SizeOfInitializedData;
  DWORD SizeOfUninitializedData;
  DWORD AddressOfEntryPoint;
  DWORD BaseOfCode;
  DWORD BaseOfData;
  DWORD ImageBase;
  DWORD SectionAlignment;
  DWORD FileAlignment;
  WORD MajorOperatingSystemVersion;
  WORD MinorOperatingSystemVersion;
  WORD MajorImageVersion;
  WORD MinorImageVersion;
  WORD MajorSubsystemVersion;
  WORD MinorSubsystemVersion;
  DWORD Win32VersionValue;
  DWORD SizeOfImage;
  DWORD SizeOfHeaders;
  DWORD CheckSum;
  WORD Subsystem;
  WORD DllCharacteristics;
  DWORD SizeOfStackReserve;
  DWORD SizeOfStackCommit;
  DWORD SizeOfHeapReserve;
  DWORD SizeOfHeapCommit;
  DWORD LoaderFlags;
  DWORD NumberOfRvaAndSizes;
  IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct _IMAGE_OPTIONAL_HEADER64
{ WORD Magic;
  BYTE MajorLinkerVersion;
  BYTE MinorLinkerVersion;
  DWORD SizeOfCode;
  DWORD SizeOfInitializedData;
  DWORD SizeOfUninitializedData;
  DWORD AddressOfEntryPoint;
  DWORD BaseOfCode;
  ULONGLONG ImageBase;
  DWORD SectionAlignment;
  DWORD FileAlignment;
  WORD MajorOperatingSystemVersion;
  WORD MinorOperatingSystemVersion;
  WORD MajorImageVersion;
  WORD MinorImageVersion;
  WORD MajorSubsystemVersion;
  WORD MinorSubsystemVersion;
  DWORD Win32VersionValue;
  DWORD SizeOfImage;
  DWORD SizeOfHeaders;
  DWORD CheckSum;
  WORD Subsystem;
  WORD DllCharacteristics;
  ULONGLONG SizeOfStackReserve;
  ULONGLONG SizeOfStackCommit;
  ULONGLONG SizeOfHeapReserve;
  ULONGLONG SizeOfHeapCommit;
  DWORD LoaderFlags;
  DWORD NumberOfRvaAndSizes;
  IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;




typedef IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER32 PIMAGE_OPTIONAL_HEADER;


typedef struct _IMAGE_ROM_OPTIONAL_HEADER
{ WORD Magic;
  BYTE MajorLinkerVersion;
  BYTE MinorLinkerVersion;
  DWORD SizeOfCode;
  DWORD SizeOfInitializedData;
  DWORD SizeOfUninitializedData;
  DWORD AddressOfEntryPoint;
  DWORD BaseOfCode;
  DWORD BaseOfData;
  DWORD BaseOfBss;
  DWORD GprMask;
  DWORD CprMask[4];
  DWORD GpValue;
} IMAGE_ROM_OPTIONAL_HEADER, *PIMAGE_ROM_OPTIONAL_HEADER;
#pragma pack(pop)

#pragma pack(push,2)
typedef struct _IMAGE_DOS_HEADER
{ WORD e_magic;
  WORD e_cblp;
  WORD e_cp;
  WORD e_crlc;
  WORD e_cparhdr;
  WORD e_minalloc;
  WORD e_maxalloc;
  WORD e_ss;
  WORD e_sp;
  WORD e_csum;
  WORD e_ip;
  WORD e_cs;
  WORD e_lfarlc;
  WORD e_ovno;
  WORD e_res[4];
  WORD e_oemid;
  WORD e_oeminfo;
  WORD e_res2[10];
  LONG e_lfanew;
} IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

typedef struct _IMAGE_OS2_HEADER
{ WORD ne_magic;
  CHAR ne_ver;
  CHAR ne_rev;
  WORD ne_enttab;
  WORD ne_cbenttab;
  LONG ne_crc;
  WORD ne_flags;
  WORD ne_autodata;
  WORD ne_heap;
  WORD ne_stack;
  LONG ne_csip;
  LONG ne_sssp;
  WORD ne_cseg;
  WORD ne_cmod;
  WORD ne_cbnrestab;
  WORD ne_segtab;
  WORD ne_rsrctab;
  WORD ne_restab;
  WORD ne_modtab;
  WORD ne_imptab;
  LONG ne_nrestab;
  WORD ne_cmovent;
  WORD ne_align;
  WORD ne_cres;
  BYTE ne_exetyp;
  BYTE ne_flagsothers;
  WORD ne_pretthunks;
  WORD ne_psegrefbytes;
  WORD ne_swaparea;
  WORD ne_expver;
} IMAGE_OS2_HEADER, *PIMAGE_OS2_HEADER;
#pragma pack(pop)

#pragma pack(push,4)
typedef struct _IMAGE_NT_HEADERS
{ DWORD Signature;
  IMAGE_FILE_HEADER FileHeader;
  IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

typedef struct _IMAGE_NT_HEADERS64
{ DWORD Signature;
  IMAGE_FILE_HEADER FileHeader;
  IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;




typedef IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS;
typedef PIMAGE_NT_HEADERS32 PIMAGE_NT_HEADERS;


typedef struct _IMAGE_ROM_HEADERS
{ IMAGE_FILE_HEADER FileHeader;
  IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
} IMAGE_ROM_HEADERS, *PIMAGE_ROM_HEADERS;

typedef struct _IMAGE_SECTION_HEADER
{ BYTE Name[8];
  union
  { DWORD PhysicalAddress;
    DWORD VirtualSize;
  } Misc;
  DWORD VirtualAddress;
  DWORD SizeOfRawData;
  DWORD PointerToRawData;
  DWORD PointerToRelocations;
  DWORD PointerToLinenumbers;
  WORD NumberOfRelocations;
  WORD NumberOfLinenumbers;
  DWORD Characteristics;
} IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;
#pragma pack(pop)

#pragma pack(push,2)
typedef struct _IMAGE_SYMBOL
{ union
  { BYTE ShortName[8];
    struct
    { DWORD Short;
      DWORD Long;
    } Name;
    PBYTE LongName[2];
  } N;
  DWORD Value;
  SHORT SectionNumber;
  WORD Type;
  BYTE StorageClass;
  BYTE NumberOfAuxSymbols;
} IMAGE_SYMBOL, *PIMAGE_SYMBOL;

typedef union _IMAGE_AUX_SYMBOL
{ struct
  { DWORD TagIndex;
    union
    { struct
      { WORD Linenumber;
 WORD Size;
      } LnSz;
      DWORD TotalSize;
    } Misc;
    union
    { struct
      { DWORD PointerToLinenumber;
 DWORD PointerToNextFunction;
      } Function;
      struct
      { WORD Dimension[4];
      } Array;
    } FcnAry;
    WORD TvIndex;
  } Sym;
  struct
  { BYTE Name[18];
  } File;
  struct
  { DWORD Length;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD CheckSum;
    SHORT Number;
    BYTE Selection;
  } Section;
} IMAGE_AUX_SYMBOL, *PIMAGE_AUX_SYMBOL;

typedef struct _IMAGE_COFF_SYMBOLS_HEADER
{ DWORD NumberOfSymbols;
  DWORD LvaToFirstSymbol;
  DWORD NumberOfLinenumbers;
  DWORD LvaToFirstLinenumber;
  DWORD RvaToFirstByteOfCode;
  DWORD RvaToLastByteOfCode;
  DWORD RvaToFirstByteOfData;
  DWORD RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER, *PIMAGE_COFF_SYMBOLS_HEADER;

typedef struct _IMAGE_RELOCATION
{ __extension__ union
  { DWORD VirtualAddress;
    DWORD RelocCount;
  } ;
  DWORD SymbolTableIndex;
  WORD Type;
} IMAGE_RELOCATION, *PIMAGE_RELOCATION;
#pragma pack(pop)

#pragma pack(push,4)
typedef struct _IMAGE_BASE_RELOCATION
{ DWORD VirtualAddress;
  DWORD SizeOfBlock;
} IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;
#pragma pack(pop)

#pragma pack(push,2)
typedef struct _IMAGE_LINENUMBER
{ union
  { DWORD SymbolTableIndex;
    DWORD VirtualAddress;
  } Type;
  WORD Linenumber;
} IMAGE_LINENUMBER, *PIMAGE_LINENUMBER;
#pragma pack(pop)

#pragma pack(push,4)
typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER
{ BYTE Name[16];
  BYTE Date[12];
  BYTE UserID[6];
  BYTE GroupID[6];
  BYTE Mode[8];
  BYTE Size[10];
  BYTE EndHeader[2];
} IMAGE_ARCHIVE_MEMBER_HEADER, *PIMAGE_ARCHIVE_MEMBER_HEADER;

typedef struct _IMAGE_EXPORT_DIRECTORY
{ DWORD Characteristics;
  DWORD TimeDateStamp;
  WORD MajorVersion;
  WORD MinorVersion;
  DWORD Name;
  DWORD Base;
  DWORD NumberOfFunctions;
  DWORD NumberOfNames;
  DWORD AddressOfFunctions;
  DWORD AddressOfNames;
  DWORD AddressOfNameOrdinals;
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;

typedef struct _IMAGE_IMPORT_BY_NAME
{ WORD Hint;
  BYTE Name[1];
} IMAGE_IMPORT_BY_NAME, *PIMAGE_IMPORT_BY_NAME;

typedef struct _IMAGE_THUNK_DATA32
{ union
  { DWORD ForwarderString;
    DWORD Function;
    DWORD Ordinal;
    DWORD AddressOfData;
  } u1;
} IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

typedef struct _IMAGE_THUNK_DATA64
{ union
  { ULONGLONG ForwarderString;
    ULONGLONG Function;
    ULONGLONG Ordinal;
    ULONGLONG AddressOfData;
  } u1;
} IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;




typedef IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA;
typedef PIMAGE_THUNK_DATA32 PIMAGE_THUNK_DATA;


typedef struct _IMAGE_IMPORT_DESCRIPTOR
{ __extension__ union
  { DWORD Characteristics;
    DWORD OriginalFirstThunk;
  } ;
  DWORD TimeDateStamp;
  DWORD ForwarderChain;
  DWORD Name;
  DWORD FirstThunk;
} IMAGE_IMPORT_DESCRIPTOR, *PIMAGE_IMPORT_DESCRIPTOR;

typedef struct _IMAGE_BOUND_IMPORT_DESCRIPTOR
{ DWORD TimeDateStamp;
  WORD OffsetModuleName;
  WORD NumberOfModuleForwarderRefs;
} IMAGE_BOUND_IMPORT_DESCRIPTOR, *PIMAGE_BOUND_IMPORT_DESCRIPTOR;

typedef struct _IMAGE_BOUND_FORWARDER_REF
{ DWORD TimeDateStamp;
  WORD OffsetModuleName;
  WORD Reserved;
} IMAGE_BOUND_FORWARDER_REF, *PIMAGE_BOUND_FORWARDER_REF;
typedef void(__attribute__((__stdcall__)) *PIMAGE_TLS_CALLBACK)(PVOID,DWORD,PVOID);

typedef struct _IMAGE_TLS_DIRECTORY32
{ DWORD StartAddressOfRawData;
  DWORD EndAddressOfRawData;
  DWORD AddressOfIndex;
  DWORD AddressOfCallBacks;
  DWORD SizeOfZeroFill;
  DWORD Characteristics;
} IMAGE_TLS_DIRECTORY32, *PIMAGE_TLS_DIRECTORY32;

typedef struct _IMAGE_TLS_DIRECTORY64
{ ULONGLONG StartAddressOfRawData;
  ULONGLONG EndAddressOfRawData;
  ULONGLONG AddressOfIndex;
  ULONGLONG AddressOfCallBacks;
  DWORD SizeOfZeroFill;
  DWORD Characteristics;
} IMAGE_TLS_DIRECTORY64, *PIMAGE_TLS_DIRECTORY64;




typedef IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY;
typedef PIMAGE_TLS_DIRECTORY32 PIMAGE_TLS_DIRECTORY;


typedef struct _IMAGE_RESOURCE_DIRECTORY
{ DWORD Characteristics;
  DWORD TimeDateStamp;
  WORD MajorVersion;
  WORD MinorVersion;
  WORD NumberOfNamedEntries;
  WORD NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

__extension__ typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY
{ __extension__ union
  { __extension__ struct
    { DWORD NameOffset : 31;
      DWORD NameIsString : 1;
    } ;
    DWORD Name;
    WORD Id;
  } ;
  __extension__ union
  { DWORD OffsetToData;
    __extension__ struct
    { DWORD OffsetToDirectory:31;
      DWORD DataIsDirectory:1;
    } ;
  } ;
} IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING
{ WORD Length;
  CHAR NameString[1];
} IMAGE_RESOURCE_DIRECTORY_STRING, *PIMAGE_RESOURCE_DIRECTORY_STRING;

typedef struct _IMAGE_RESOURCE_DIR_STRING_U
{ WORD Length;
  WCHAR NameString[1];
} IMAGE_RESOURCE_DIR_STRING_U, *PIMAGE_RESOURCE_DIR_STRING_U;

typedef struct _IMAGE_RESOURCE_DATA_ENTRY
{ DWORD OffsetToData;
  DWORD Size;
  DWORD CodePage;
  DWORD Reserved;
} IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

typedef struct _IMAGE_LOAD_CONFIG_DIRECTORY
{ DWORD Characteristics;
  DWORD TimeDateStamp;
  WORD MajorVersion;
  WORD MinorVersion;
  DWORD GlobalFlagsClear;
  DWORD GlobalFlagsSet;
  DWORD CriticalSectionDefaultTimeout;
  DWORD DeCommitFreeBlockThreshold;
  DWORD DeCommitTotalFreeThreshold;
  PVOID LockPrefixTable;
  DWORD MaximumAllocationSize;
  DWORD VirtualMemoryThreshold;
  DWORD ProcessHeapFlags;
  DWORD Reserved[4];
} IMAGE_LOAD_CONFIG_DIRECTORY, *PIMAGE_LOAD_CONFIG_DIRECTORY;

typedef struct
{ DWORD Characteristics;
  DWORD TimeDateStamp;
  WORD MajorVersion;
  WORD MinorVersion;
  DWORD GlobalFlagsClear;
  DWORD GlobalFlagsSet;
  DWORD CriticalSectionDefaultTimeout;
  ULONGLONG DeCommitFreeBlockThreshold;
  ULONGLONG DeCommitTotalFreeThreshold;
  ULONGLONG LockPrefixTable;
  ULONGLONG MaximumAllocationSize;
  ULONGLONG VirtualMemoryThreshold;
  ULONGLONG ProcessAffinityMask;
  DWORD ProcessHeapFlags;
  WORD CSDFlags;
  WORD Reserved1;
  ULONGLONG EditList;
  DWORD Reserved[2];
} IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY
{ DWORD BeginAddress;
  DWORD EndAddress;
  PVOID ExceptionHandler;
  PVOID HandlerData;
  DWORD PrologEndAddress;
} IMAGE_RUNTIME_FUNCTION_ENTRY, *PIMAGE_RUNTIME_FUNCTION_ENTRY;

typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY
{ unsigned int FuncStart:32;
  unsigned int PrologLen:8;
  unsigned int FuncLen:22;
  unsigned int ThirtyTwoBit:1;
  unsigned int ExceptionFlag:1;
} IMAGE_CE_RUNTIME_FUNCTION_ENTRY, *PIMAGE_CE_RUNTIME_FUNCTION_ENTRY;

typedef struct _IMAGE_DEBUG_DIRECTORY
{ DWORD Characteristics;
  DWORD TimeDateStamp;
  WORD MajorVersion;
  WORD MinorVersion;
  DWORD Type;
  DWORD SizeOfData;
  DWORD AddressOfRawData;
  DWORD PointerToRawData;
} IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

typedef struct _FPO_DATA
{ DWORD ulOffStart;
  DWORD cbProcSize;
  DWORD cdwLocals;
  WORD cdwParams;
  WORD cbProlog:8;
  WORD cbRegs:3;
  WORD fHasSEH:1;
  WORD fUseBP:1;
  WORD reserved:1;
  WORD cbFrame:2;
} FPO_DATA, *PFPO_DATA;

typedef struct _IMAGE_DEBUG_MISC
{ DWORD DataType;
  DWORD Length;
  BOOLEAN Unicode;
  BYTE Reserved[3];
  BYTE Data[1];
} IMAGE_DEBUG_MISC, *PIMAGE_DEBUG_MISC;

typedef struct _IMAGE_FUNCTION_ENTRY
{ DWORD StartingAddress;
  DWORD EndingAddress;
  DWORD EndOfPrologue;
} IMAGE_FUNCTION_ENTRY, *PIMAGE_FUNCTION_ENTRY;

typedef struct _IMAGE_FUNCTION_ENTRY64
{ ULONGLONG StartingAddress;
  ULONGLONG EndingAddress;
  __extension__ union
  { ULONGLONG EndOfPrologue;
    ULONGLONG UnwindInfoAddress;
  } ;
} IMAGE_FUNCTION_ENTRY64, *PIMAGE_FUNCTION_ENTRY64;

typedef struct _IMAGE_SEPARATE_DEBUG_HEADER
{ WORD Signature;
  WORD Flags;
  WORD Machine;
  WORD Characteristics;
  DWORD TimeDateStamp;
  DWORD CheckSum;
  DWORD ImageBase;
  DWORD SizeOfImage;
  DWORD NumberOfSections;
  DWORD ExportedNamesSize;
  DWORD DebugDirectorySize;
  DWORD SectionAlignment;
  DWORD Reserved[2];
} IMAGE_SEPARATE_DEBUG_HEADER, *PIMAGE_SEPARATE_DEBUG_HEADER;
#pragma pack(pop)

typedef enum _CM_SERVICE_NODE_TYPE
{ DriverType = 1,
  FileSystemType = 2,
  Win32ServiceOwnProcess = 16,
  Win32ServiceShareProcess = 32,
  AdapterType = 4,
  RecognizerType = 8
} SERVICE_NODE_TYPE;

typedef enum _CM_SERVICE_LOAD_TYPE
{ BootLoad = 0,
  SystemLoad = 1,
  AutoLoad = 2,
  DemandLoad = 3,
  DisableLoad = 4
} SERVICE_LOAD_TYPE;

typedef enum _CM_ERROR_CONTROL_TYPE
{ IgnoreError = 0,
  NormalError = 1,
  SevereError = 2,
  CriticalError = 3
} SERVICE_ERROR_TYPE;

typedef struct _NT_TIB
{ struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
  PVOID StackBase;
  PVOID StackLimit;
  PVOID SubSystemTib;
  __extension__ union
  { PVOID FiberData;
    DWORD Version;
  } ;
  PVOID ArbitraryUserPointer;
  struct _NT_TIB *Self;
} NT_TIB, *PNT_TIB;

typedef struct _REPARSE_DATA_BUFFER
{ DWORD ReparseTag;
  WORD ReparseDataLength;
  WORD Reserved;
  __extension__ union
  { struct
    { WORD SubstituteNameOffset;
      WORD SubstituteNameLength;
      WORD PrintNameOffset;
      WORD PrintNameLength;
      ULONG Flags;
      WCHAR PathBuffer[1];
    } SymbolicLinkReparseBuffer;
    struct
    { WORD SubstituteNameOffset;
      WORD SubstituteNameLength;
      WORD PrintNameOffset;
      WORD PrintNameLength;
      WCHAR PathBuffer[1];
    } MountPointReparseBuffer;
    struct
    { BYTE DataBuffer[1];
    } GenericReparseBuffer;
  } ;
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER;

typedef struct _REPARSE_GUID_DATA_BUFFER
{ DWORD ReparseTag;
  WORD ReparseDataLength;
  WORD Reserved;
  GUID ReparseGuid;
  struct
  { BYTE DataBuffer[1];
  } GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;

typedef struct _REPARSE_POINT_INFORMATION
{ WORD ReparseDataLength;
  WORD UnparsedNameLength;
} REPARSE_POINT_INFORMATION, *PREPARSE_POINT_INFORMATION;


typedef union _FILE_SEGMENT_ELEMENT
{ PVOID64 Buffer;
  ULONGLONG Alignment;
} FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;
# 3686 "c:\\mingw\\include\\winnt.h" 3
typedef enum _JOBOBJECTINFOCLASS
{ JobObjectBasicAccountingInformation = 1,
  JobObjectBasicLimitInformation,
  JobObjectBasicProcessIdList,
  JobObjectBasicUIRestrictions,
  JobObjectSecurityLimitInformation,
  JobObjectEndOfJobTimeInformation,
  JobObjectAssociateCompletionPortInformation,
  JobObjectBasicAndIoAccountingInformation,
  JobObjectExtendedLimitInformation,
  JobObjectJobSetInformation,
  MaxJobObjectInfoClass
} JOBOBJECTINFOCLASS;

typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION
{ LARGE_INTEGER TotalUserTime;
  LARGE_INTEGER TotalKernelTime;
  LARGE_INTEGER ThisPeriodTotalUserTime;
  LARGE_INTEGER ThisPeriodTotalKernelTime;
  DWORD TotalPageFaultCount;
  DWORD TotalProcesses;
  DWORD ActiveProcesses;
  DWORD TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION;

typedef struct _JOBOBJECT_BASIC_LIMIT_INFORMATION
{ LARGE_INTEGER PerProcessUserTimeLimit;
  LARGE_INTEGER PerJobUserTimeLimit;
  DWORD LimitFlags;
  SIZE_T MinimumWorkingSetSize;
  SIZE_T MaximumWorkingSetSize;
  DWORD ActiveProcessLimit;
  ULONG_PTR Affinity;
  DWORD PriorityClass;
  DWORD SchedulingClass;
} JOBOBJECT_BASIC_LIMIT_INFORMATION, *PJOBOBJECT_BASIC_LIMIT_INFORMATION;

typedef struct _JOBOBJECT_BASIC_PROCESS_ID_LIST
{ DWORD NumberOfAssignedProcesses;
  DWORD NumberOfProcessIdsInList;
  ULONG_PTR ProcessIdList[1];
} JOBOBJECT_BASIC_PROCESS_ID_LIST, *PJOBOBJECT_BASIC_PROCESS_ID_LIST;

typedef struct _JOBOBJECT_BASIC_UI_RESTRICTIONS
{ DWORD UIRestrictionsClass;
} JOBOBJECT_BASIC_UI_RESTRICTIONS, *PJOBOBJECT_BASIC_UI_RESTRICTIONS;

typedef struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION
{ DWORD SecurityLimitFlags;
  HANDLE JobToken;
  PTOKEN_GROUPS SidsToDisable;
  PTOKEN_PRIVILEGES PrivilegesToDelete;
  PTOKEN_GROUPS RestrictedSids;
} JOBOBJECT_SECURITY_LIMIT_INFORMATION, *PJOBOBJECT_SECURITY_LIMIT_INFORMATION;

typedef struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION
{ DWORD EndOfJobTimeAction;
} JOBOBJECT_END_OF_JOB_TIME_INFORMATION, *PJOBOBJECT_END_OF_JOB_TIME_INFORMATION;

typedef struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT
{ PVOID CompletionKey;
  HANDLE CompletionPort;
} JOBOBJECT_ASSOCIATE_COMPLETION_PORT, *PJOBOBJECT_ASSOCIATE_COMPLETION_PORT;

typedef struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION
{ JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
  IO_COUNTERS IoInfo;
} JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION;

typedef struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION
{ JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
  IO_COUNTERS IoInfo;
  SIZE_T ProcessMemoryLimit;
  SIZE_T JobMemoryLimit;
  SIZE_T PeakProcessMemoryUsed;
  SIZE_T PeakJobMemoryUsed;
} JOBOBJECT_EXTENDED_LIMIT_INFORMATION, *PJOBOBJECT_EXTENDED_LIMIT_INFORMATION;

typedef struct _JOBOBJECT_JOBSET_INFORMATION
{ DWORD MemberLevel;
} JOBOBJECT_JOBSET_INFORMATION, *PJOBOBJECT_JOBSET_INFORMATION;



# 1 "c:\\mingw\\include\\pshpack4.h" 1 3

#pragma pack(push,4)
# 3771 "c:\\mingw\\include\\winnt.h" 2 3







typedef enum _LATENCY_TIME
{ LT_DONT_CARE,
  LT_LOWEST_LATENCY
} LATENCY_TIME, *PLATENCY_TIME;


typedef enum _SYSTEM_POWER_STATE
{ PowerSystemUnspecified,
  PowerSystemWorking,
  PowerSystemSleeping1,
  PowerSystemSleeping2,
  PowerSystemSleeping3,
  PowerSystemHibernate,
  PowerSystemShutdown,
  PowerSystemMaximum
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;


typedef enum
{ PowerActionNone,
  PowerActionReserved,
  PowerActionSleep,
  PowerActionHibernate,
  PowerActionShutdown,
  PowerActionShutdownReset,
  PowerActionShutdownOff,
  PowerActionWarmEject
} POWER_ACTION, *PPOWER_ACTION;
# 3818 "c:\\mingw\\include\\winnt.h" 3
typedef enum _DEVICE_POWER_STATE
{ PowerDeviceUnspecified,
  PowerDeviceD0,
  PowerDeviceD1,
  PowerDeviceD2,
  PowerDeviceD3,
  PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;


typedef struct
{ DWORD Granularity;
  DWORD Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;


typedef struct _POWER_ACTION_POLICY
{ POWER_ACTION Action;
  ULONG Flags;
  ULONG EventCode;
} POWER_ACTION_POLICY, *PPOWER_ACTION_POLICY;
# 3867 "c:\\mingw\\include\\winnt.h" 3
typedef struct _SYSTEM_POWER_LEVEL
{ BOOLEAN Enable;
  UCHAR Spare[3];
  ULONG BatteryLevel;
  POWER_ACTION_POLICY PowerPolicy;
  SYSTEM_POWER_STATE MinSystemState;
} SYSTEM_POWER_LEVEL, *PSYSTEM_POWER_LEVEL;

typedef struct _SYSTEM_POWER_POLICY
{ ULONG Revision;
  POWER_ACTION_POLICY PowerButton;
  POWER_ACTION_POLICY SleepButton;
  POWER_ACTION_POLICY LidClose;
  SYSTEM_POWER_STATE LidOpenWake;
  ULONG Reserved;
  POWER_ACTION_POLICY Idle;
  ULONG IdleTimeout;
  UCHAR IdleSensitivity;
  UCHAR DynamicThrottle;
  UCHAR Spare2[2];
  SYSTEM_POWER_STATE MinSleep;
  SYSTEM_POWER_STATE MaxSleep;
  SYSTEM_POWER_STATE ReducedLatencySleep;
  ULONG WinLogonFlags;
  ULONG Spare3;
  ULONG DozeS4Timeout;
  ULONG BroadcastCapacityResolution;
  SYSTEM_POWER_LEVEL DischargePolicy[4];
  ULONG VideoTimeout;
  BOOLEAN VideoDimDisplay;
  ULONG VideoReserved[3];
  ULONG SpindownTimeout;
  BOOLEAN OptimizeForPower;
  UCHAR FanThrottleTolerance;
  UCHAR ForcedThrottle;
  UCHAR MinThrottle;
  POWER_ACTION_POLICY OverThrottled;
} SYSTEM_POWER_POLICY, *PSYSTEM_POWER_POLICY;


typedef struct _SYSTEM_POWER_CAPABILITIES
{ BOOLEAN PowerButtonPresent;
  BOOLEAN SleepButtonPresent;
  BOOLEAN LidPresent;
  BOOLEAN SystemS1;
  BOOLEAN SystemS2;
  BOOLEAN SystemS3;
  BOOLEAN SystemS4;
  BOOLEAN SystemS5;
  BOOLEAN HiberFilePresent;
  BOOLEAN FullWake;
  BOOLEAN VideoDimPresent;
  BOOLEAN ApmPresent;
  BOOLEAN UpsPresent;
  BOOLEAN ThermalControl;
  BOOLEAN ProcessorThrottle;
  UCHAR ProcessorMinThrottle;
  UCHAR ProcessorMaxThrottle;
  BOOLEAN FastSystemS4;
  UCHAR spare2[3];
  BOOLEAN DiskSpinDown;
  UCHAR spare3[8];
  BOOLEAN SystemBatteriesPresent;
  BOOLEAN BatteriesAreShortTerm;
  BATTERY_REPORTING_SCALE BatteryScale[3];
  SYSTEM_POWER_STATE AcOnLineWake;
  SYSTEM_POWER_STATE SoftLidWake;
  SYSTEM_POWER_STATE RtcWake;
  SYSTEM_POWER_STATE MinDeviceWakeState;
  SYSTEM_POWER_STATE DefaultLowLatencyWake;
} SYSTEM_POWER_CAPABILITIES, *PSYSTEM_POWER_CAPABILITIES;


typedef struct _SYSTEM_BATTERY_STATE
{ BOOLEAN AcOnLine;
  BOOLEAN BatteryPresent;
  BOOLEAN Charging;
  BOOLEAN Discharging;
  BOOLEAN Spare1[4];
  ULONG MaxCapacity;
  ULONG RemainingCapacity;
  ULONG Rate;
  ULONG EstimatedTime;
  ULONG DefaultAlert1;
  ULONG DefaultAlert2;
} SYSTEM_BATTERY_STATE, *PSYSTEM_BATTERY_STATE;


typedef enum _POWER_INFORMATION_LEVEL
{ SystemPowerPolicyAc,
  SystemPowerPolicyDc,
  VerifySystemPolicyAc,
  VerifySystemPolicyDc,
  SystemPowerCapabilities,
  SystemBatteryState,
  SystemPowerStateHandler,
  ProcessorStateHandler,
  SystemPowerPolicyCurrent,
  AdministratorPowerPolicy,
  SystemReserveHiberFile,
  ProcessorInformation,
  SystemPowerInformation,
  ProcessorStateHandler2,
  LastWakeTime,
  LastSleepTime,
  SystemExecutionState,
  SystemPowerStateNotifyHandler,
  ProcessorPowerPolicyAc,
  ProcessorPowerPolicyDc,
  VerifyProcessorPowerPolicyAc,
  VerifyProcessorPowerPolicyDc,
  ProcessorPowerPolicyCurrent
} POWER_INFORMATION_LEVEL;


typedef LONG (__attribute__((__stdcall__)) *PVECTORED_EXCEPTION_HANDLER)(PEXCEPTION_POINTERS);



typedef struct _SYSTEM_POWER_INFORMATION
{ ULONG MaxIdlenessAllowed;
  ULONG Idleness;
  ULONG TimeRemaining;
  UCHAR CoolingMode;
} SYSTEM_POWER_INFORMATION, *PSYSTEM_POWER_INFORMATION;
# 4061 "c:\\mingw\\include\\winnt.h" 3
typedef struct _PROCESSOR_POWER_POLICY_INFO
{ ULONG TimeCheck;
  ULONG DemoteLimit;
  ULONG PromoteLimit;
  UCHAR DemotePercent;
  UCHAR PromotePercent;
  UCHAR Spare[2];
  ULONG AllowDemotion : 1;
  ULONG AllowPromotion : 1;
  ULONG Reserved : 30;
} PROCESSOR_POWER_POLICY_INFO, *PPROCESSOR_POWER_POLICY_INFO;

typedef struct _PROCESSOR_POWER_POLICY
{ ULONG Revision;
  UCHAR DynamicThrottle;
  UCHAR Spare[3];
  ULONG Reserved;
  ULONG PolicyCount;
  PROCESSOR_POWER_POLICY_INFO Policy[3];
} PROCESSOR_POWER_POLICY, *PPROCESSOR_POWER_POLICY;

typedef struct _ADMINISTRATOR_POWER_POLICY
{ SYSTEM_POWER_STATE MinSleep;
  SYSTEM_POWER_STATE MaxSleep;
  ULONG MinVideoTimeout;
  ULONG MaxVideoTimeout;
  ULONG MinSpindownTimeout;
  ULONG MaxSpindownTimeout;
} ADMINISTRATOR_POWER_POLICY, *PADMINISTRATOR_POWER_POLICY;
# 1 "c:\\mingw\\include\\poppack.h" 1 3

#pragma pack(pop)
# 4091 "c:\\mingw\\include\\winnt.h" 2 3



typedef void (__attribute__((__stdcall__)) *WAITORTIMERCALLBACKFUNC)(PVOID,BOOLEAN);






typedef OSVERSIONINFOA OSVERSIONINFO, *POSVERSIONINFO, *LPOSVERSIONINFO;
typedef OSVERSIONINFOEXA OSVERSIONINFOEX, *POSVERSIONINFOEX, *LPOSVERSIONINFOEX;



ULONGLONG __attribute__((__stdcall__)) VerSetConditionMask(ULONGLONG,DWORD,BYTE);
# 4142 "c:\\mingw\\include\\winnt.h" 3
static __inline__ PVOID GetCurrentFiber (void)
{
  void *ret;
  __asm__ __volatile__ (
      "mov{%z0}\t{%%" "fs:0x10" ", %0|%0," "fs:0x10" "}"
      : "=a" (ret)
    );
  return ret;
}

static __inline__ PVOID GetFiberData (void)
{
  void *ret;
  __asm__ __volatile__ (
      "mov{%z0}\t{%%" "fs:0x10" ", %0|%0, " "fs:0x10" "}\n\t"
      "mov{%z0}\t{(%0), %0|%0, [%0]}"
      : "=r" (ret)
    );
  return ret;
}

static __inline__ struct _TEB *NtCurrentTeb (void)
{
  struct _TEB *ret;
  __asm__ __volatile__ (
      "mov{%z0}\t{%%" "fs:0x18" ", %0|%0, " "fs:0x18" "}"
      : "=a" (ret)
      :
    );
  return ret;
}
# 4324 "c:\\mingw\\include\\winnt.h" 3
static __inline__ __attribute__((__always_inline__)) void MemoryBarrier (void)
{ __atomic_thread_fence(5); }
# 4334 "c:\\mingw\\include\\winnt.h" 3

# 270 "c:\\mingw\\include\\windef.h" 2 3

typedef UINT_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;

typedef LONG HRESULT;



typedef WORD ATOM;

typedef HANDLE HHOOK;
typedef HANDLE HGLOBAL;
typedef HANDLE HLOCAL;
typedef HANDLE GLOBALHANDLE;
typedef HANDLE LOCALHANDLE;
typedef void *HGDIOBJ;
typedef struct HACCEL__{int i;}*HACCEL;
typedef struct HBITMAP__{int i;}*HBITMAP;
typedef struct HBRUSH__{int i;}*HBRUSH;
typedef struct HCOLORSPACE__{int i;}*HCOLORSPACE;
typedef struct HDC__{int i;}*HDC;
typedef struct HGLRC__{int i;}*HGLRC;
typedef struct HDESK__{int i;}*HDESK;
typedef struct HENHMETAFILE__{int i;}*HENHMETAFILE;
typedef struct HFONT__{int i;}*HFONT;
typedef struct HICON__{int i;}*HICON;
typedef struct HKEY__{int i;}*HKEY;

typedef struct HMONITOR__{int i;}*HMONITOR;

typedef struct HTERMINAL__{int i;}*HTERMINAL;
typedef struct HWINEVENTHOOK__{int i;}*HWINEVENTHOOK;

typedef HKEY *PHKEY;
typedef struct HMENU__{int i;}*HMENU;
typedef struct HMETAFILE__{int i;}*HMETAFILE;
typedef struct HINSTANCE__{int i;}*HINSTANCE;
typedef HINSTANCE HMODULE;
typedef struct HPALETTE__{int i;}*HPALETTE;
typedef struct HPEN__{int i;}*HPEN;
typedef struct HRGN__{int i;}*HRGN;
typedef struct HRSRC__{int i;}*HRSRC;
typedef struct HSTR__{int i;}*HSTR;
typedef struct HTASK__{int i;}*HTASK;
typedef struct HWND__{int i;}*HWND;
typedef struct HWINSTA__{int i;}*HWINSTA;
typedef struct HKL__{int i;}*HKL;
typedef int HFILE;
typedef HICON HCURSOR;
typedef DWORD COLORREF;
typedef int (__attribute__((__stdcall__)) *FARPROC)();
typedef int (__attribute__((__stdcall__)) *NEARPROC)();
typedef int (__attribute__((__stdcall__)) *PROC)();
typedef struct tagRECT {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECT,*PRECT,*LPRECT;
typedef const RECT *LPCRECT;
typedef struct tagRECTL {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECTL,*PRECTL,*LPRECTL;
typedef const RECTL *LPCRECTL;
typedef struct tagPOINT {
 LONG x;
 LONG y;
} POINT,POINTL,*PPOINT,*LPPOINT,*PPOINTL,*LPPOINTL;
typedef struct tagSIZE {
 LONG cx;
 LONG cy;
} SIZE,SIZEL,*PSIZE,*LPSIZE,*PSIZEL,*LPSIZEL;
typedef struct tagPOINTS {
 SHORT x;
 SHORT y;
} POINTS,*PPOINTS,*LPPOINTS;


# 43 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\wincon.h" 1 3



       
# 5 "c:\\mingw\\include\\wincon.h" 3
# 62 "c:\\mingw\\include\\wincon.h" 3
typedef struct _CHAR_INFO {
 union {
  WCHAR UnicodeChar;
  CHAR AsciiChar;
 } Char;
 WORD Attributes;
} CHAR_INFO, *PCHAR_INFO;
typedef struct _SMALL_RECT {
 SHORT Left;
 SHORT Top;
 SHORT Right;
 SHORT Bottom;
} SMALL_RECT, *PSMALL_RECT;
typedef struct _CONSOLE_CURSOR_INFO {
 DWORD dwSize;
 BOOL bVisible;
} CONSOLE_CURSOR_INFO,*PCONSOLE_CURSOR_INFO;
typedef struct _COORD {
 SHORT X;
 SHORT Y;
} COORD, *PCOORD;
typedef struct _CONSOLE_FONT_INFO {
 DWORD nFont;
 COORD dwFontSize;
} CONSOLE_FONT_INFO, *PCONSOLE_FONT_INFO;
typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
 COORD dwSize;
 COORD dwCursorPosition;
 WORD wAttributes;
 SMALL_RECT srWindow;
 COORD dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO,*PCONSOLE_SCREEN_BUFFER_INFO;
typedef BOOL(__attribute__((__stdcall__)) *PHANDLER_ROUTINE)(DWORD);
typedef struct _KEY_EVENT_RECORD {
 BOOL bKeyDown;
 WORD wRepeatCount;
 WORD wVirtualKeyCode;
 WORD wVirtualScanCode;
 union {
  WCHAR UnicodeChar;
  CHAR AsciiChar;
 } uChar;
 DWORD dwControlKeyState;
}


 __attribute__((packed))

KEY_EVENT_RECORD;

typedef struct _MOUSE_EVENT_RECORD {
 COORD dwMousePosition;
 DWORD dwButtonState;
 DWORD dwControlKeyState;
 DWORD dwEventFlags;
} MOUSE_EVENT_RECORD;
typedef struct _WINDOW_BUFFER_SIZE_RECORD { COORD dwSize; } WINDOW_BUFFER_SIZE_RECORD;
typedef struct _MENU_EVENT_RECORD { UINT dwCommandId; } MENU_EVENT_RECORD,*PMENU_EVENT_RECORD;
typedef struct _FOCUS_EVENT_RECORD { BOOL bSetFocus; } FOCUS_EVENT_RECORD;
typedef struct _INPUT_RECORD {
 WORD EventType;
 union {
  KEY_EVENT_RECORD KeyEvent;
  MOUSE_EVENT_RECORD MouseEvent;
  WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
  MENU_EVENT_RECORD MenuEvent;
  FOCUS_EVENT_RECORD FocusEvent;
 } Event;
} INPUT_RECORD,*PINPUT_RECORD;

BOOL __attribute__((__stdcall__)) AllocConsole(void);




HANDLE __attribute__((__stdcall__)) CreateConsoleScreenBuffer(DWORD,DWORD,const SECURITY_ATTRIBUTES*,DWORD,LPVOID);
BOOL __attribute__((__stdcall__)) FillConsoleOutputAttribute(HANDLE,WORD,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) FillConsoleOutputCharacterA(HANDLE,CHAR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) FillConsoleOutputCharacterW(HANDLE,WCHAR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) FlushConsoleInputBuffer(HANDLE);
BOOL __attribute__((__stdcall__)) FreeConsole(void);
BOOL __attribute__((__stdcall__)) GenerateConsoleCtrlEvent(DWORD,DWORD);
UINT __attribute__((__stdcall__)) GetConsoleCP(void);
BOOL __attribute__((__stdcall__)) GetConsoleCursorInfo(HANDLE,PCONSOLE_CURSOR_INFO);
BOOL __attribute__((__stdcall__)) GetConsoleMode(HANDLE,PDWORD);
UINT __attribute__((__stdcall__)) GetConsoleOutputCP(void);
BOOL __attribute__((__stdcall__)) GetConsoleScreenBufferInfo(HANDLE,PCONSOLE_SCREEN_BUFFER_INFO);
DWORD __attribute__((__stdcall__)) GetConsoleTitleA(LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetConsoleTitleW(LPWSTR,DWORD);

BOOL __attribute__((__stdcall__)) GetConsoleDisplayMode(LPDWORD);
HWND __attribute__((__stdcall__)) GetConsoleWindow(void);




COORD __attribute__((__stdcall__)) GetLargestConsoleWindowSize(HANDLE);
BOOL __attribute__((__stdcall__)) GetNumberOfConsoleInputEvents(HANDLE,PDWORD);
BOOL __attribute__((__stdcall__)) GetNumberOfConsoleMouseButtons(PDWORD);
BOOL __attribute__((__stdcall__)) PeekConsoleInputA(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) PeekConsoleInputW(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleA(HANDLE,PVOID,DWORD,PDWORD,PVOID);
BOOL __attribute__((__stdcall__)) ReadConsoleW(HANDLE,PVOID,DWORD,PDWORD,PVOID);
BOOL __attribute__((__stdcall__)) ReadConsoleInputA(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleInputW(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputAttribute(HANDLE,LPWORD,DWORD,COORD,LPDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputCharacterA(HANDLE,LPSTR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputCharacterW(HANDLE,LPWSTR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputA(HANDLE,PCHAR_INFO,COORD,COORD,PSMALL_RECT);
BOOL __attribute__((__stdcall__)) ReadConsoleOutputW(HANDLE,PCHAR_INFO,COORD,COORD,PSMALL_RECT);
BOOL __attribute__((__stdcall__)) ScrollConsoleScreenBufferA(HANDLE,const SMALL_RECT*,const SMALL_RECT*,COORD,const CHAR_INFO*);
BOOL __attribute__((__stdcall__)) ScrollConsoleScreenBufferW(HANDLE,const SMALL_RECT*,const SMALL_RECT*,COORD,const CHAR_INFO*);
BOOL __attribute__((__stdcall__)) SetConsoleActiveScreenBuffer(HANDLE);
BOOL __attribute__((__stdcall__)) SetConsoleCP(UINT);
BOOL __attribute__((__stdcall__)) SetConsoleCtrlHandler(PHANDLER_ROUTINE,BOOL);
BOOL __attribute__((__stdcall__)) SetConsoleCursorInfo(HANDLE,const CONSOLE_CURSOR_INFO*);
BOOL __attribute__((__stdcall__)) SetConsoleCursorPosition(HANDLE,COORD);



BOOL __attribute__((__stdcall__)) SetConsoleMode(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetConsoleOutputCP(UINT);
BOOL __attribute__((__stdcall__)) SetConsoleScreenBufferSize(HANDLE,COORD);
BOOL __attribute__((__stdcall__)) SetConsoleTextAttribute(HANDLE,WORD);
BOOL __attribute__((__stdcall__)) SetConsoleTitleA(LPCSTR);
BOOL __attribute__((__stdcall__)) SetConsoleTitleW(LPCWSTR);
BOOL __attribute__((__stdcall__)) SetConsoleWindowInfo(HANDLE,BOOL,const SMALL_RECT*);
BOOL __attribute__((__stdcall__)) WriteConsoleA(HANDLE,PCVOID,DWORD,PDWORD,PVOID);
BOOL __attribute__((__stdcall__)) WriteConsoleW(HANDLE,PCVOID,DWORD,PDWORD,PVOID);
BOOL __attribute__((__stdcall__)) WriteConsoleInputA(HANDLE,const INPUT_RECORD*,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) WriteConsoleInputW(HANDLE,const INPUT_RECORD*,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputA(HANDLE,const CHAR_INFO*,COORD,COORD,PSMALL_RECT);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputW(HANDLE,const CHAR_INFO*,COORD,COORD,PSMALL_RECT);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputAttribute(HANDLE,const WORD*,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputCharacterA(HANDLE,LPCSTR,DWORD,COORD,PDWORD);
BOOL __attribute__((__stdcall__)) WriteConsoleOutputCharacterW(HANDLE,LPCWSTR,DWORD,COORD,PDWORD);
# 44 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\winbase.h" 1 3
# 33 "c:\\mingw\\include\\winbase.h" 3
       
# 34 "c:\\mingw\\include\\winbase.h" 3
# 64 "c:\\mingw\\include\\winbase.h" 3

# 759 "c:\\mingw\\include\\winbase.h" 3
typedef struct _FILETIME
{ DWORD dwLowDateTime;
  DWORD dwHighDateTime;
} FILETIME, *PFILETIME, *LPFILETIME;

typedef struct _BY_HANDLE_FILE_INFORMATION
{ DWORD dwFileAttributes;
  FILETIME ftCreationTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime;
  DWORD dwVolumeSerialNumber;
  DWORD nFileSizeHigh;
  DWORD nFileSizeLow;
  DWORD nNumberOfLinks;
  DWORD nFileIndexHigh;
  DWORD nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION, *LPBY_HANDLE_FILE_INFORMATION;

typedef struct _DCB
{ DWORD DCBlength;
  DWORD BaudRate;
  DWORD fBinary:1;
  DWORD fParity:1;
  DWORD fOutxCtsFlow:1;
  DWORD fOutxDsrFlow:1;
  DWORD fDtrControl:2;
  DWORD fDsrSensitivity:1;
  DWORD fTXContinueOnXoff:1;
  DWORD fOutX:1;
  DWORD fInX:1;
  DWORD fErrorChar:1;
  DWORD fNull:1;
  DWORD fRtsControl:2;
  DWORD fAbortOnError:1;
  DWORD fDummy2:17;
  WORD wReserved;
  WORD XonLim;
  WORD XoffLim;
  BYTE ByteSize;
  BYTE Parity;
  BYTE StopBits;
  char XonChar;
  char XoffChar;
  char ErrorChar;
  char EofChar;
  char EvtChar;
  WORD wReserved1;
} DCB, *LPDCB;

typedef struct _COMM_CONFIG
{ DWORD dwSize;
  WORD wVersion;
  WORD wReserved;
  DCB dcb;
  DWORD dwProviderSubType;
  DWORD dwProviderOffset;
  DWORD dwProviderSize;
  WCHAR wcProviderData[1];
} COMMCONFIG, *LPCOMMCONFIG;

typedef struct _COMMPROP
{ WORD wPacketLength;
  WORD wPacketVersion;
  DWORD dwServiceMask;
  DWORD dwReserved1;
  DWORD dwMaxTxQueue;
  DWORD dwMaxRxQueue;
  DWORD dwMaxBaud;
  DWORD dwProvSubType;
  DWORD dwProvCapabilities;
  DWORD dwSettableParams;
  DWORD dwSettableBaud;
  WORD wSettableData;
  WORD wSettableStopParity;
  DWORD dwCurrentTxQueue;
  DWORD dwCurrentRxQueue;
  DWORD dwProvSpec1;
  DWORD dwProvSpec2;
  WCHAR wcProvChar[1];
} COMMPROP, *LPCOMMPROP;

typedef struct _COMMTIMEOUTS
{ DWORD ReadIntervalTimeout;
  DWORD ReadTotalTimeoutMultiplier;
  DWORD ReadTotalTimeoutConstant;
  DWORD WriteTotalTimeoutMultiplier;
  DWORD WriteTotalTimeoutConstant;
} COMMTIMEOUTS, *LPCOMMTIMEOUTS;

typedef struct _COMSTAT
{ DWORD fCtsHold:1;
  DWORD fDsrHold:1;
  DWORD fRlsdHold:1;
  DWORD fXoffHold:1;
  DWORD fXoffSent:1;
  DWORD fEof:1;
  DWORD fTxim:1;
  DWORD fReserved:25;
  DWORD cbInQue;
  DWORD cbOutQue;
} COMSTAT, *LPCOMSTAT;

typedef DWORD (__attribute__((__stdcall__)) *LPTHREAD_START_ROUTINE)(LPVOID);

typedef struct _CREATE_PROCESS_DEBUG_INFO
{ HANDLE hFile;
  HANDLE hProcess;
  HANDLE hThread;
  LPVOID lpBaseOfImage;
  DWORD dwDebugInfoFileOffset;
  DWORD nDebugInfoSize;
  LPVOID lpThreadLocalBase;
  LPTHREAD_START_ROUTINE lpStartAddress;
  LPVOID lpImageName;
  WORD fUnicode;
} CREATE_PROCESS_DEBUG_INFO, *LPCREATE_PROCESS_DEBUG_INFO;

typedef struct _CREATE_THREAD_DEBUG_INFO
{ HANDLE hThread;
  LPVOID lpThreadLocalBase;
  LPTHREAD_START_ROUTINE lpStartAddress;
} CREATE_THREAD_DEBUG_INFO, *LPCREATE_THREAD_DEBUG_INFO;

typedef struct _EXCEPTION_DEBUG_INFO
{ EXCEPTION_RECORD ExceptionRecord;
  DWORD dwFirstChance;
} EXCEPTION_DEBUG_INFO, *LPEXCEPTION_DEBUG_INFO;

typedef struct _EXIT_THREAD_DEBUG_INFO
{ DWORD dwExitCode;
} EXIT_THREAD_DEBUG_INFO, *LPEXIT_THREAD_DEBUG_INFO;

typedef struct _EXIT_PROCESS_DEBUG_INFO
{ DWORD dwExitCode;
} EXIT_PROCESS_DEBUG_INFO, *LPEXIT_PROCESS_DEBUG_INFO;

typedef struct _LOAD_DLL_DEBUG_INFO
{ HANDLE hFile;
  LPVOID lpBaseOfDll;
  DWORD dwDebugInfoFileOffset;
  DWORD nDebugInfoSize;
  LPVOID lpImageName;
  WORD fUnicode;
} LOAD_DLL_DEBUG_INFO, *LPLOAD_DLL_DEBUG_INFO;

typedef struct _UNLOAD_DLL_DEBUG_INFO
{ LPVOID lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO, *LPUNLOAD_DLL_DEBUG_INFO;

typedef struct _OUTPUT_DEBUG_STRING_INFO
{ LPSTR lpDebugStringData;
  WORD fUnicode;
  WORD nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO, *LPOUTPUT_DEBUG_STRING_INFO;

typedef struct _RIP_INFO
{ DWORD dwError;
  DWORD dwType;
} RIP_INFO, *LPRIP_INFO;

typedef struct _DEBUG_EVENT
{ DWORD dwDebugEventCode;
  DWORD dwProcessId;
  DWORD dwThreadId;
  union
  { EXCEPTION_DEBUG_INFO Exception;
    CREATE_THREAD_DEBUG_INFO CreateThread;
    CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
    EXIT_THREAD_DEBUG_INFO ExitThread;
    EXIT_PROCESS_DEBUG_INFO ExitProcess;
    LOAD_DLL_DEBUG_INFO LoadDll;
    UNLOAD_DLL_DEBUG_INFO UnloadDll;
    OUTPUT_DEBUG_STRING_INFO DebugString;
    RIP_INFO RipInfo;
  } u;
} DEBUG_EVENT, *LPDEBUG_EVENT;

typedef struct _OVERLAPPED
{ ULONG_PTR Internal;
  ULONG_PTR InternalHigh;
  __extension__ union
  { __extension__ struct
    { DWORD Offset;
      DWORD OffsetHigh;
    };
    PVOID Pointer;
  };
  HANDLE hEvent;
} OVERLAPPED, *POVERLAPPED, *LPOVERLAPPED;

typedef struct _STARTUPINFOA
{ DWORD cb;
  LPSTR lpReserved;
  LPSTR lpDesktop;
  LPSTR lpTitle;
  DWORD dwX;
  DWORD dwY;
  DWORD dwXSize;
  DWORD dwYSize;
  DWORD dwXCountChars;
  DWORD dwYCountChars;
  DWORD dwFillAttribute;
  DWORD dwFlags;
  WORD wShowWindow;
  WORD cbReserved2;
  PBYTE lpReserved2;
  HANDLE hStdInput;
  HANDLE hStdOutput;
  HANDLE hStdError;
} STARTUPINFOA, *LPSTARTUPINFOA;

typedef struct _STARTUPINFOW
{ DWORD cb;
  LPWSTR lpReserved;
  LPWSTR lpDesktop;
  LPWSTR lpTitle;
  DWORD dwX;
  DWORD dwY;
  DWORD dwXSize;
  DWORD dwYSize;
  DWORD dwXCountChars;
  DWORD dwYCountChars;
  DWORD dwFillAttribute;
  DWORD dwFlags;
  WORD wShowWindow;
  WORD cbReserved2;
  PBYTE lpReserved2;
  HANDLE hStdInput;
  HANDLE hStdOutput;
  HANDLE hStdError;
} STARTUPINFOW, *LPSTARTUPINFOW;

typedef STARTUPINFOA STARTUPINFO, *LPSTARTUPINFO;

typedef struct _PROCESS_INFORMATION
{ HANDLE hProcess;
  HANDLE hThread;
  DWORD dwProcessId;
  DWORD dwThreadId;
} PROCESS_INFORMATION, *PPROCESS_INFORMATION, *LPPROCESS_INFORMATION;

typedef struct _CRITICAL_SECTION_DEBUG
{ WORD Type;
  WORD CreatorBackTraceIndex;
  struct _CRITICAL_SECTION *CriticalSection;
  LIST_ENTRY ProcessLocksList;
  DWORD EntryCount;
  DWORD ContentionCount;
  DWORD Spare[2];
} CRITICAL_SECTION_DEBUG, *PCRITICAL_SECTION_DEBUG;

typedef struct _CRITICAL_SECTION
{ PCRITICAL_SECTION_DEBUG DebugInfo;
  LONG LockCount;
  LONG RecursionCount;
  HANDLE OwningThread;
  HANDLE LockSemaphore;
  DWORD SpinCount;
} CRITICAL_SECTION, *PCRITICAL_SECTION, *LPCRITICAL_SECTION;

typedef struct _SYSTEMTIME
{ WORD wYear;
  WORD wMonth;
  WORD wDayOfWeek;
  WORD wDay;
  WORD wHour;
  WORD wMinute;
  WORD wSecond;
  WORD wMilliseconds;
} SYSTEMTIME, *LPSYSTEMTIME;

typedef struct _WIN32_FILE_ATTRIBUTE_DATA
{ DWORD dwFileAttributes;
  FILETIME ftCreationTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime;
  DWORD nFileSizeHigh;
  DWORD nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA, *LPWIN32_FILE_ATTRIBUTE_DATA;

typedef struct _WIN32_FIND_DATAA
{ DWORD dwFileAttributes;
  FILETIME ftCreationTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime;
  DWORD nFileSizeHigh;
  DWORD nFileSizeLow;



  DWORD dwReserved0;
  DWORD dwReserved1;

  CHAR cFileName[260];

  CHAR cAlternateFileName[14];

} WIN32_FIND_DATAA, *PWIN32_FIND_DATAA, *LPWIN32_FIND_DATAA;

typedef struct _WIN32_FIND_DATAW
{ DWORD dwFileAttributes;
  FILETIME ftCreationTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime;
  DWORD nFileSizeHigh;
  DWORD nFileSizeLow;



  DWORD dwReserved0;
  DWORD dwReserved1;

  WCHAR cFileName[260];

  WCHAR cAlternateFileName[14];

} WIN32_FIND_DATAW, *PWIN32_FIND_DATAW, *LPWIN32_FIND_DATAW;

typedef WIN32_FIND_DATAA WIN32_FIND_DATA, *PWIN32_FIND_DATA, *LPWIN32_FIND_DATA;

typedef struct _WIN32_STREAM_ID
{ DWORD dwStreamId;
  DWORD dwStreamAttributes;
  LARGE_INTEGER Size;
  DWORD dwStreamNameSize;
  WCHAR cStreamName[1];
} WIN32_STREAM_ID, *LPWIN32_STREAM_ID;

typedef enum _FINDEX_INFO_LEVELS
{ FindExInfoStandard,
  FindExInfoMaxInfoLevel
} FINDEX_INFO_LEVELS;

typedef enum _FINDEX_SEARCH_OPS
{ FindExSearchNameMatch,
  FindExSearchLimitToDirectories,
  FindExSearchLimitToDevices,
  FindExSearchMaxSearchOp
} FINDEX_SEARCH_OPS;

typedef enum _ACL_INFORMATION_CLASS
{ AclRevisionInformation=1,
  AclSizeInformation
} ACL_INFORMATION_CLASS;

typedef struct tagHW_PROFILE_INFOA
{ DWORD dwDockInfo;
  CHAR szHwProfileGuid[39];
  CHAR szHwProfileName[80];
} HW_PROFILE_INFOA, *LPHW_PROFILE_INFOA;

typedef struct tagHW_PROFILE_INFOW
{ DWORD dwDockInfo;
  WCHAR szHwProfileGuid[39];
  WCHAR szHwProfileName[80];
} HW_PROFILE_INFOW, *LPHW_PROFILE_INFOW;

typedef HW_PROFILE_INFOA HW_PROFILE_INFO, *LPHW_PROFILE_INFO;

typedef enum _GET_FILEEX_INFO_LEVELS
{ GetFileExInfoStandard,
  GetFileExMaxInfoLevel
} GET_FILEEX_INFO_LEVELS;

typedef struct _SYSTEM_INFO
{ __extension__ union
  { DWORD dwOemId;
    __extension__ struct
    { WORD wProcessorArchitecture;
      WORD wReserved;
    } ;
  } ;
  DWORD dwPageSize;
  PVOID lpMinimumApplicationAddress;
  PVOID lpMaximumApplicationAddress;
  DWORD dwActiveProcessorMask;
  DWORD dwNumberOfProcessors;
  DWORD dwProcessorType;
  DWORD dwAllocationGranularity;
  WORD wProcessorLevel;
  WORD wProcessorRevision;
} SYSTEM_INFO, *LPSYSTEM_INFO;

typedef struct _SYSTEM_POWER_STATUS
{ BYTE ACLineStatus;
  BYTE BatteryFlag;
  BYTE BatteryLifePercent;
  BYTE Reserved1;
  DWORD BatteryLifeTime;
  DWORD BatteryFullLifeTime;
} SYSTEM_POWER_STATUS, *LPSYSTEM_POWER_STATUS;

typedef struct _TIME_ZONE_INFORMATION
{ LONG Bias;
  WCHAR StandardName[32];
  SYSTEMTIME StandardDate;
  LONG StandardBias;
  WCHAR DaylightName[32];
  SYSTEMTIME DaylightDate;
  LONG DaylightBias;
} TIME_ZONE_INFORMATION, *LPTIME_ZONE_INFORMATION;

typedef struct _MEMORYSTATUS
{ DWORD dwLength;
  DWORD dwMemoryLoad;
  DWORD dwTotalPhys;
  DWORD dwAvailPhys;
  DWORD dwTotalPageFile;
  DWORD dwAvailPageFile;
  DWORD dwTotalVirtual;
  DWORD dwAvailVirtual;
} MEMORYSTATUS, *LPMEMORYSTATUS;

typedef struct _LDT_ENTRY
{ WORD LimitLow;
  WORD BaseLow;
  union
  { struct
    { BYTE BaseMid;
      BYTE Flags1;
      BYTE Flags2;
      BYTE BaseHi;
    } Bytes;
    struct
    { DWORD BaseMid:8;
      DWORD Type:5;
      DWORD Dpl:2;
      DWORD Pres:1;
      DWORD LimitHi:4;
      DWORD Sys:1;
      DWORD Reserved_0:1;
      DWORD Default_Big:1;
      DWORD Granularity:1;
      DWORD BaseHi:8;
    } Bits;
  } HighWord;
} LDT_ENTRY, *PLDT_ENTRY, *LPLDT_ENTRY;

typedef struct _PROCESS_HEAP_ENTRY
{ PVOID lpData;
  DWORD cbData;
  BYTE cbOverhead;
  BYTE iRegionIndex;
  WORD wFlags;
  __extension__ union
  { struct
    { HANDLE hMem;
      DWORD dwReserved[3];
    } Block;
    struct
    { DWORD dwCommittedSize;
      DWORD dwUnCommittedSize;
      LPVOID lpFirstBlock;
      LPVOID lpLastBlock;
    } Region;
  } ;
} PROCESS_HEAP_ENTRY, *LPPROCESS_HEAP_ENTRY;

typedef struct _OFSTRUCT
{ BYTE cBytes;
  BYTE fFixedDisk;
  WORD nErrCode;
  WORD Reserved1;
  WORD Reserved2;
  CHAR szPathName[128];
} OFSTRUCT, *LPOFSTRUCT, *POFSTRUCT;

typedef struct _WIN_CERTIFICATE
{ DWORD dwLength;
  WORD wRevision;
  WORD wCertificateType;
  BYTE bCertificate[1];
} WIN_CERTIFICATE, *LPWIN_CERTIFICATE;

typedef DWORD (__attribute__((__stdcall__)) *LPPROGRESS_ROUTINE)
( LARGE_INTEGER, LARGE_INTEGER, LARGE_INTEGER, LARGE_INTEGER,
  DWORD, DWORD, HANDLE, HANDLE, LPVOID
);
typedef void (__attribute__((__stdcall__)) *LPFIBER_START_ROUTINE)(PVOID);


typedef BOOL (__attribute__((__stdcall__)) *ENUMRESLANGPROCA)(HMODULE, LPCSTR, LPCSTR, WORD, LONG);
typedef BOOL (__attribute__((__stdcall__)) *ENUMRESLANGPROCW)
(HMODULE, LPCWSTR, LPCWSTR, WORD, LONG);


typedef BOOL (__attribute__((__stdcall__)) *ENUMRESNAMEPROCA)(HMODULE, LPCSTR, LPSTR, LONG);
typedef BOOL (__attribute__((__stdcall__)) *ENUMRESNAMEPROCW)(HMODULE, LPCWSTR, LPWSTR, LONG);


typedef BOOL (__attribute__((__stdcall__)) *ENUMRESTYPEPROCA)(HMODULE, LPSTR, LONG);
typedef BOOL (__attribute__((__stdcall__)) *ENUMRESTYPEPROCW)(HMODULE, LPWSTR, LONG);

typedef void (__attribute__((__stdcall__)) *LPOVERLAPPED_COMPLETION_ROUTINE)
(DWORD, DWORD, LPOVERLAPPED);
typedef LONG (__attribute__((__stdcall__)) *PTOP_LEVEL_EXCEPTION_FILTER)(LPEXCEPTION_POINTERS);
typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;
typedef void (__attribute__((__stdcall__)) *PAPCFUNC)(ULONG_PTR);
typedef void (__attribute__((__stdcall__)) *PTIMERAPCROUTINE)(PVOID, DWORD, DWORD);





int __attribute__((__stdcall__)) WinMain (HINSTANCE, HINSTANCE, LPSTR, int);




int __attribute__((__stdcall__)) wWinMain (HINSTANCE, HINSTANCE, LPWSTR, int);

 long __attribute__((__stdcall__)) _hread (HFILE, LPVOID, long);
 long __attribute__((__stdcall__)) _hwrite (HFILE, LPCSTR, long);
 HFILE __attribute__((__stdcall__)) _lclose (HFILE);
 HFILE __attribute__((__stdcall__)) _lcreat (LPCSTR, int);
 LONG __attribute__((__stdcall__)) _llseek (HFILE, LONG, int);
 HFILE __attribute__((__stdcall__)) _lopen (LPCSTR, int);
 UINT __attribute__((__stdcall__)) _lread (HFILE, LPVOID, UINT);
 UINT __attribute__((__stdcall__)) _lwrite (HFILE, LPCSTR, UINT);



 BOOL __attribute__((__stdcall__)) AccessCheck
( PSECURITY_DESCRIPTOR, HANDLE, DWORD, PGENERIC_MAPPING, PPRIVILEGE_SET,
  PDWORD, PDWORD, PBOOL
);


 BOOL __attribute__((__stdcall__)) AccessCheckAndAuditAlarmA
( LPCSTR, LPVOID, LPSTR, LPSTR, PSECURITY_DESCRIPTOR, DWORD, PGENERIC_MAPPING,
  BOOL, PDWORD, PBOOL, PBOOL
);
 BOOL __attribute__((__stdcall__)) AccessCheckAndAuditAlarmW
( LPCWSTR, LPVOID, LPWSTR, LPWSTR, PSECURITY_DESCRIPTOR, DWORD,
  PGENERIC_MAPPING, BOOL, PDWORD, PBOOL, PBOOL
);

 BOOL __attribute__((__stdcall__)) AddAccessAllowedAce (PACL, DWORD, DWORD, PSID);
 BOOL __attribute__((__stdcall__)) AddAccessDeniedAce (PACL, DWORD, DWORD, PSID);
 BOOL __attribute__((__stdcall__)) AddAce (PACL, DWORD, DWORD, PVOID, DWORD);


 ATOM __attribute__((__stdcall__)) AddAtomA (LPCSTR);
 ATOM __attribute__((__stdcall__)) AddAtomW (LPCWSTR);

 BOOL __attribute__((__stdcall__)) AddAuditAccessAce (PACL, DWORD, DWORD, PSID, BOOL, BOOL);
 BOOL __attribute__((__stdcall__)) AdjustTokenGroups
(HANDLE, BOOL, PTOKEN_GROUPS, DWORD, PTOKEN_GROUPS, PDWORD);
 BOOL __attribute__((__stdcall__)) AdjustTokenPrivileges
(HANDLE, BOOL, PTOKEN_PRIVILEGES, DWORD, PTOKEN_PRIVILEGES, PDWORD);
 BOOL __attribute__((__stdcall__)) AllocateAndInitializeSid
( PSID_IDENTIFIER_AUTHORITY, BYTE, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD,
  DWORD, DWORD, PSID *
);
 BOOL __attribute__((__stdcall__)) AllocateLocallyUniqueId (PLUID);
 BOOL __attribute__((__stdcall__)) AreAllAccessesGranted (DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) AreAnyAccessesGranted (DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) AreFileApisANSI (void);


 BOOL __attribute__((__stdcall__)) BackupEventLogA (HANDLE, LPCSTR);
 BOOL __attribute__((__stdcall__)) BackupEventLogW (HANDLE, LPCWSTR);

 BOOL __attribute__((__stdcall__)) BackupRead
(HANDLE, LPBYTE, DWORD, LPDWORD, BOOL, BOOL, LPVOID *);
 BOOL __attribute__((__stdcall__)) BackupSeek
(HANDLE, DWORD, DWORD, LPDWORD, LPDWORD, LPVOID *);
 BOOL __attribute__((__stdcall__)) BackupWrite
(HANDLE, LPBYTE, DWORD, LPDWORD, BOOL, BOOL, LPVOID *);
 BOOL __attribute__((__stdcall__)) Beep (DWORD, DWORD);


 HANDLE __attribute__((__stdcall__)) BeginUpdateResourceA (LPCSTR, BOOL);
 HANDLE __attribute__((__stdcall__)) BeginUpdateResourceW (LPCWSTR, BOOL);


 BOOL __attribute__((__stdcall__)) BuildCommDCBA (LPCSTR, LPDCB);
 BOOL __attribute__((__stdcall__)) BuildCommDCBW (LPCWSTR, LPDCB);


 BOOL __attribute__((__stdcall__)) BuildCommDCBAndTimeoutsA (LPCSTR, LPDCB, LPCOMMTIMEOUTS);
 BOOL __attribute__((__stdcall__)) BuildCommDCBAndTimeoutsW
(LPCWSTR, LPDCB, LPCOMMTIMEOUTS);


 BOOL __attribute__((__stdcall__)) CallNamedPipeA
(LPCSTR, PVOID, DWORD, PVOID, DWORD, PDWORD, DWORD);
 BOOL __attribute__((__stdcall__)) CallNamedPipeW
(LPCWSTR, PVOID, DWORD, PVOID, DWORD, PDWORD, DWORD);

 BOOL __attribute__((__stdcall__)) CancelDeviceWakeupRequest (HANDLE);
 BOOL __attribute__((__stdcall__)) CancelIo (HANDLE);
 BOOL __attribute__((__stdcall__)) CancelWaitableTimer (HANDLE);
 BOOL __attribute__((__stdcall__)) ClearCommBreak (HANDLE);
 BOOL __attribute__((__stdcall__)) ClearCommError (HANDLE, PDWORD, LPCOMSTAT);


 BOOL __attribute__((__stdcall__)) ClearEventLogA (HANDLE, LPCSTR);
 BOOL __attribute__((__stdcall__)) ClearEventLogW (HANDLE, LPCWSTR);

 BOOL __attribute__((__stdcall__)) CloseEventLog (HANDLE);
 BOOL __attribute__((__stdcall__)) CloseHandle (HANDLE);


 BOOL __attribute__((__stdcall__)) CommConfigDialogA (LPCSTR, HWND, LPCOMMCONFIG);
 BOOL __attribute__((__stdcall__)) CommConfigDialogW (LPCWSTR, HWND, LPCOMMCONFIG);

 LONG __attribute__((__stdcall__)) CompareFileTime (const FILETIME *, const FILETIME *);
 BOOL __attribute__((__stdcall__)) ConnectNamedPipe (HANDLE, LPOVERLAPPED);
 BOOL __attribute__((__stdcall__)) ContinueDebugEvent (DWORD, DWORD, DWORD);
 PVOID __attribute__((__stdcall__)) ConvertThreadToFiber (PVOID);


 BOOL __attribute__((__stdcall__)) CopyFileA (LPCSTR, LPCSTR, BOOL);
 BOOL __attribute__((__stdcall__)) CopyFileW (LPCWSTR, LPCWSTR, BOOL);


 BOOL __attribute__((__stdcall__)) CopyFileExA
(LPCSTR, LPCSTR, LPPROGRESS_ROUTINE, LPVOID, LPBOOL, DWORD);
 BOOL __attribute__((__stdcall__)) CopyFileExW
(LPCWSTR, LPCWSTR, LPPROGRESS_ROUTINE, LPVOID, LPBOOL, DWORD);
# 1390 "c:\\mingw\\include\\winbase.h" 3
 BOOL __attribute__((__stdcall__)) CopySid (DWORD, PSID, PSID);


 BOOL __attribute__((__stdcall__)) CreateDirectoryA (LPCSTR, LPSECURITY_ATTRIBUTES);
 BOOL __attribute__((__stdcall__)) CreateDirectoryW (LPCWSTR, LPSECURITY_ATTRIBUTES);


 BOOL __attribute__((__stdcall__)) CreateDirectoryExA
(LPCSTR, LPCSTR, LPSECURITY_ATTRIBUTES);
 BOOL __attribute__((__stdcall__)) CreateDirectoryExW
(LPCWSTR, LPCWSTR, LPSECURITY_ATTRIBUTES);


 HANDLE __attribute__((__stdcall__)) CreateEventA
(LPSECURITY_ATTRIBUTES, BOOL, BOOL, LPCSTR);
 HANDLE __attribute__((__stdcall__)) CreateEventW
(LPSECURITY_ATTRIBUTES, BOOL, BOOL, LPCWSTR);

 LPVOID __attribute__((__stdcall__)) CreateFiber (SIZE_T, LPFIBER_START_ROUTINE, LPVOID);


 HANDLE __attribute__((__stdcall__)) CreateFileA
(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
 HANDLE __attribute__((__stdcall__)) CreateFileW
(LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);


 HANDLE __attribute__((__stdcall__)) CreateFileMappingA
(HANDLE, LPSECURITY_ATTRIBUTES, DWORD, DWORD, DWORD, LPCSTR);
 HANDLE __attribute__((__stdcall__)) CreateFileMappingW
(HANDLE, LPSECURITY_ATTRIBUTES, DWORD, DWORD, DWORD, LPCWSTR);

 HANDLE __attribute__((__stdcall__)) CreateIoCompletionPort
(HANDLE, HANDLE, ULONG_PTR, DWORD);


 HANDLE __attribute__((__stdcall__)) CreateMailslotA
(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES);
 HANDLE __attribute__((__stdcall__)) CreateMailslotW
(LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES);


 HANDLE __attribute__((__stdcall__)) CreateMutexA (LPSECURITY_ATTRIBUTES, BOOL, LPCSTR);
 HANDLE __attribute__((__stdcall__)) CreateMutexW (LPSECURITY_ATTRIBUTES, BOOL, LPCWSTR);


 HANDLE __attribute__((__stdcall__)) CreateNamedPipeA
(LPCSTR, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, LPSECURITY_ATTRIBUTES);
 HANDLE __attribute__((__stdcall__)) CreateNamedPipeW
(LPCWSTR, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, LPSECURITY_ATTRIBUTES);

 BOOL __attribute__((__stdcall__)) CreatePipe
(PHANDLE, PHANDLE, LPSECURITY_ATTRIBUTES, DWORD);
 BOOL __attribute__((__stdcall__)) CreatePrivateObjectSecurity
( PSECURITY_DESCRIPTOR, PSECURITY_DESCRIPTOR, PSECURITY_DESCRIPTOR *, BOOL,
  HANDLE, PGENERIC_MAPPING
);


 BOOL __attribute__((__stdcall__)) CreateProcessA
( LPCSTR, LPSTR, LPSECURITY_ATTRIBUTES, LPSECURITY_ATTRIBUTES, BOOL, DWORD,
  PVOID, LPCSTR, LPSTARTUPINFOA, LPPROCESS_INFORMATION
);
 BOOL __attribute__((__stdcall__)) CreateProcessW
( LPCWSTR, LPWSTR, LPSECURITY_ATTRIBUTES, LPSECURITY_ATTRIBUTES, BOOL,
  DWORD, PVOID, LPCWSTR, LPSTARTUPINFOW, LPPROCESS_INFORMATION
);


 BOOL __attribute__((__stdcall__)) CreateProcessAsUserA
( HANDLE, LPCSTR, LPSTR, LPSECURITY_ATTRIBUTES, LPSECURITY_ATTRIBUTES, BOOL,
  DWORD, PVOID, LPCSTR, LPSTARTUPINFOA, LPPROCESS_INFORMATION
);
 BOOL __attribute__((__stdcall__)) CreateProcessAsUserW
( HANDLE, LPCWSTR, LPWSTR, LPSECURITY_ATTRIBUTES, LPSECURITY_ATTRIBUTES,
  BOOL, DWORD, PVOID, LPCWSTR, LPSTARTUPINFOW, LPPROCESS_INFORMATION
);

 HANDLE __attribute__((__stdcall__)) CreateRemoteThread
( HANDLE, LPSECURITY_ATTRIBUTES, DWORD, LPTHREAD_START_ROUTINE,
  LPVOID, DWORD, LPDWORD
);


 HANDLE __attribute__((__stdcall__)) CreateSemaphoreA
(LPSECURITY_ATTRIBUTES, LONG, LONG, LPCSTR);
 HANDLE __attribute__((__stdcall__)) CreateSemaphoreW
(LPSECURITY_ATTRIBUTES, LONG, LONG, LPCWSTR);

 DWORD __attribute__((__stdcall__)) CreateTapePartition (HANDLE, DWORD, DWORD, DWORD);
 HANDLE __attribute__((__stdcall__)) CreateThread
(LPSECURITY_ATTRIBUTES, DWORD, LPTHREAD_START_ROUTINE, PVOID, DWORD, PDWORD);


 HANDLE __attribute__((__stdcall__)) CreateWaitableTimerA
(LPSECURITY_ATTRIBUTES, BOOL, LPCSTR);
 HANDLE __attribute__((__stdcall__)) CreateWaitableTimerW
(LPSECURITY_ATTRIBUTES, BOOL, LPCWSTR);

 BOOL __attribute__((__stdcall__)) DebugActiveProcess (DWORD);
 void __attribute__((__stdcall__)) DebugBreak (void);


 BOOL __attribute__((__stdcall__)) DefineDosDeviceA (DWORD, LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) DefineDosDeviceW (DWORD, LPCWSTR, LPCWSTR);



 BOOL __attribute__((__stdcall__)) DeleteAce (PACL, DWORD);
 ATOM __attribute__((__stdcall__)) DeleteAtom (ATOM);
 void __attribute__((__stdcall__)) DeleteCriticalSection (PCRITICAL_SECTION);
 void __attribute__((__stdcall__)) DeleteFiber (PVOID);


 BOOL __attribute__((__stdcall__)) DeleteFileA (LPCSTR);
 BOOL __attribute__((__stdcall__)) DeleteFileW (LPCWSTR);

 BOOL __attribute__((__stdcall__)) DeregisterEventSource (HANDLE);
 BOOL __attribute__((__stdcall__)) DestroyPrivateObjectSecurity (PSECURITY_DESCRIPTOR *);
 BOOL __attribute__((__stdcall__)) DeviceIoControl
(HANDLE, DWORD, PVOID, DWORD, PVOID, DWORD, PDWORD, POVERLAPPED);
 BOOL __attribute__((__stdcall__)) DisableThreadLibraryCalls (HMODULE);
 BOOL __attribute__((__stdcall__)) DisconnectNamedPipe (HANDLE);
 BOOL __attribute__((__stdcall__)) DosDateTimeToFileTime (WORD, WORD, LPFILETIME);
 BOOL __attribute__((__stdcall__)) DuplicateHandle
(HANDLE, HANDLE, HANDLE, PHANDLE, DWORD, BOOL, DWORD);
 BOOL __attribute__((__stdcall__)) DuplicateToken
(HANDLE, SECURITY_IMPERSONATION_LEVEL, PHANDLE);
 BOOL __attribute__((__stdcall__)) DuplicateTokenEx
( HANDLE, DWORD, LPSECURITY_ATTRIBUTES, SECURITY_IMPERSONATION_LEVEL,
  TOKEN_TYPE, PHANDLE
);


 BOOL __attribute__((__stdcall__)) EncryptFileA (LPCSTR);
 BOOL __attribute__((__stdcall__)) EncryptFileW (LPCWSTR);


 BOOL __attribute__((__stdcall__)) EndUpdateResourceA (HANDLE, BOOL);
 BOOL __attribute__((__stdcall__)) EndUpdateResourceW (HANDLE, BOOL);

 void __attribute__((__stdcall__)) EnterCriticalSection (LPCRITICAL_SECTION);


 BOOL __attribute__((__stdcall__)) EnumResourceLanguagesA
(HMODULE, LPCSTR, LPCSTR, ENUMRESLANGPROCA, LONG_PTR);
 BOOL __attribute__((__stdcall__)) EnumResourceLanguagesW
(HMODULE, LPCWSTR, LPCWSTR, ENUMRESLANGPROCW, LONG_PTR);


 BOOL __attribute__((__stdcall__)) EnumResourceNamesA
(HMODULE, LPCSTR, ENUMRESNAMEPROCA, LONG_PTR);
 BOOL __attribute__((__stdcall__)) EnumResourceNamesW
(HMODULE, LPCWSTR, ENUMRESNAMEPROCW, LONG_PTR);


 BOOL __attribute__((__stdcall__)) EnumResourceTypesA (HMODULE, ENUMRESTYPEPROCA, LONG_PTR);
 BOOL __attribute__((__stdcall__)) EnumResourceTypesW (HMODULE, ENUMRESTYPEPROCW, LONG_PTR);

 BOOL __attribute__((__stdcall__)) EqualPrefixSid (PSID, PSID);
 BOOL __attribute__((__stdcall__)) EqualSid (PSID, PSID);
 DWORD __attribute__((__stdcall__)) EraseTape (HANDLE, DWORD, BOOL);
 BOOL __attribute__((__stdcall__)) EscapeCommFunction (HANDLE, DWORD);
__attribute__((noreturn)) void __attribute__((__stdcall__)) ExitProcess (UINT);
__attribute__((noreturn)) void __attribute__((__stdcall__)) ExitThread (DWORD);


 DWORD __attribute__((__stdcall__)) ExpandEnvironmentStringsA (LPCSTR, LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) ExpandEnvironmentStringsW (LPCWSTR, LPWSTR, DWORD);


 void __attribute__((__stdcall__)) FatalAppExitA (UINT, LPCSTR);
 void __attribute__((__stdcall__)) FatalAppExitW (UINT, LPCWSTR);

 void __attribute__((__stdcall__)) FatalExit (int);


 BOOL __attribute__((__stdcall__)) FileEncryptionStatusA (LPCSTR, LPDWORD);
 BOOL __attribute__((__stdcall__)) FileEncryptionStatusW (LPCWSTR, LPDWORD);

 BOOL __attribute__((__stdcall__)) FileTimeToDosDateTime (const FILETIME *, LPWORD, LPWORD);
 BOOL __attribute__((__stdcall__)) FileTimeToLocalFileTime (const FILETIME *, LPFILETIME);
 BOOL __attribute__((__stdcall__)) FileTimeToSystemTime (const FILETIME *, LPSYSTEMTIME);


 ATOM __attribute__((__stdcall__)) FindAtomA (LPCSTR);
 ATOM __attribute__((__stdcall__)) FindAtomW (LPCWSTR);

 BOOL __attribute__((__stdcall__)) FindClose (HANDLE);
 BOOL __attribute__((__stdcall__)) FindCloseChangeNotification (HANDLE);


 HANDLE __attribute__((__stdcall__)) FindFirstChangeNotificationA (LPCSTR, BOOL, DWORD);
 HANDLE __attribute__((__stdcall__)) FindFirstChangeNotificationW (LPCWSTR, BOOL, DWORD);


 HANDLE __attribute__((__stdcall__)) FindFirstFileA (LPCSTR, LPWIN32_FIND_DATAA);
 HANDLE __attribute__((__stdcall__)) FindFirstFileW (LPCWSTR, LPWIN32_FIND_DATAW);


 HANDLE __attribute__((__stdcall__)) FindFirstFileExA
(LPCSTR, FINDEX_INFO_LEVELS, PVOID, FINDEX_SEARCH_OPS, PVOID, DWORD);
 HANDLE __attribute__((__stdcall__)) FindFirstFileExW
(LPCWSTR, FINDEX_INFO_LEVELS, PVOID, FINDEX_SEARCH_OPS, PVOID, DWORD);

 BOOL __attribute__((__stdcall__)) FindFirstFreeAce (PACL, PVOID *);
 BOOL __attribute__((__stdcall__)) FindNextChangeNotification (HANDLE);


 BOOL __attribute__((__stdcall__)) FindNextFileA (HANDLE, LPWIN32_FIND_DATAA);
 BOOL __attribute__((__stdcall__)) FindNextFileW (HANDLE, LPWIN32_FIND_DATAW);


 HRSRC __attribute__((__stdcall__)) FindResourceA (HMODULE, LPCSTR, LPCSTR);
 HRSRC __attribute__((__stdcall__)) FindResourceW (HINSTANCE, LPCWSTR, LPCWSTR);


 HRSRC __attribute__((__stdcall__)) FindResourceExA (HINSTANCE, LPCSTR, LPCSTR, WORD);
 HRSRC __attribute__((__stdcall__)) FindResourceExW (HINSTANCE, LPCWSTR, LPCWSTR, WORD);

 BOOL __attribute__((__stdcall__)) FlushFileBuffers (HANDLE);
 BOOL __attribute__((__stdcall__)) FlushInstructionCache (HANDLE, PCVOID, DWORD);
 BOOL __attribute__((__stdcall__)) FlushViewOfFile (PCVOID, DWORD);


 DWORD __attribute__((__stdcall__)) FormatMessageA
(DWORD, PCVOID, DWORD, DWORD, LPSTR, DWORD, va_list *);
 DWORD __attribute__((__stdcall__)) FormatMessageW
(DWORD, PCVOID, DWORD, DWORD, LPWSTR, DWORD, va_list *);


 BOOL __attribute__((__stdcall__)) FreeEnvironmentStringsA (LPSTR);
 BOOL __attribute__((__stdcall__)) FreeEnvironmentStringsW (LPWSTR);

 BOOL __attribute__((__stdcall__)) FreeLibrary (HMODULE);
__attribute__((noreturn)) void __attribute__((__stdcall__)) FreeLibraryAndExitThread
(HMODULE, DWORD);





 BOOL __attribute__((__stdcall__)) FreeResource (HGLOBAL);


 PVOID __attribute__((__stdcall__)) FreeSid (PSID);
 BOOL __attribute__((__stdcall__)) GetAce (PACL, DWORD, LPVOID *);
 BOOL __attribute__((__stdcall__)) GetAclInformation
(PACL, PVOID, DWORD, ACL_INFORMATION_CLASS);


 UINT __attribute__((__stdcall__)) GetAtomNameA (ATOM, LPSTR, int);
 UINT __attribute__((__stdcall__)) GetAtomNameW (ATOM, LPWSTR, int);


 BOOL __attribute__((__stdcall__)) GetBinaryTypeA (LPCSTR, PDWORD);
 BOOL __attribute__((__stdcall__)) GetBinaryTypeW (LPCWSTR, PDWORD);


 LPSTR __attribute__((__stdcall__)) GetCommandLineA (void);
 LPWSTR __attribute__((__stdcall__)) GetCommandLineW (void);

 BOOL __attribute__((__stdcall__)) GetCommConfig (HANDLE, LPCOMMCONFIG, PDWORD);
 BOOL __attribute__((__stdcall__)) GetCommMask (HANDLE, PDWORD);
 BOOL __attribute__((__stdcall__)) GetCommModemStatus (HANDLE, PDWORD);
 BOOL __attribute__((__stdcall__)) GetCommProperties (HANDLE, LPCOMMPROP);
 BOOL __attribute__((__stdcall__)) GetCommState (HANDLE, LPDCB);
 BOOL __attribute__((__stdcall__)) GetCommTimeouts (HANDLE, LPCOMMTIMEOUTS);


 DWORD __attribute__((__stdcall__)) GetCompressedFileSizeA (LPCSTR, PDWORD);
 DWORD __attribute__((__stdcall__)) GetCompressedFileSizeW (LPCWSTR, PDWORD);


 BOOL __attribute__((__stdcall__)) GetComputerNameA (LPSTR, PDWORD);
 BOOL __attribute__((__stdcall__)) GetComputerNameW (LPWSTR, PDWORD);


 DWORD __attribute__((__stdcall__)) GetCurrentDirectoryA (DWORD, LPSTR);
 DWORD __attribute__((__stdcall__)) GetCurrentDirectoryW (DWORD, LPWSTR);



 BOOL __attribute__((__stdcall__)) GetCurrentHwProfileA (LPHW_PROFILE_INFOA);
 BOOL __attribute__((__stdcall__)) GetCurrentHwProfileW (LPHW_PROFILE_INFOW);

 HANDLE __attribute__((__stdcall__)) GetCurrentProcess (void);
 DWORD __attribute__((__stdcall__)) GetCurrentProcessId (void);
 HANDLE __attribute__((__stdcall__)) GetCurrentThread (void);




 DWORD __attribute__((__stdcall__)) GetCurrentThreadId (void);





 BOOL __attribute__((__stdcall__)) GetDefaultCommConfigA (LPCSTR, LPCOMMCONFIG, PDWORD);
 BOOL __attribute__((__stdcall__)) GetDefaultCommConfigW (LPCWSTR, LPCOMMCONFIG, PDWORD);

 BOOL __attribute__((__stdcall__)) GetDevicePowerState (HANDLE, BOOL *);


 BOOL __attribute__((__stdcall__)) GetDiskFreeSpaceA
(LPCSTR, PDWORD, PDWORD, PDWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) GetDiskFreeSpaceW
(LPCWSTR, PDWORD, PDWORD, PDWORD, PDWORD);


 BOOL __attribute__((__stdcall__)) GetDiskFreeSpaceExA
(LPCSTR, PULARGE_INTEGER, PULARGE_INTEGER, PULARGE_INTEGER);
 BOOL __attribute__((__stdcall__)) GetDiskFreeSpaceExW
(LPCWSTR, PULARGE_INTEGER, PULARGE_INTEGER, PULARGE_INTEGER);


 UINT __attribute__((__stdcall__)) GetDriveTypeA (LPCSTR);
 UINT __attribute__((__stdcall__)) GetDriveTypeW (LPCWSTR);

 LPCH __attribute__((__stdcall__)) GetEnvironmentStrings (void);


 LPCH __attribute__((__stdcall__)) GetEnvironmentStringsA (void);
 LPWCH __attribute__((__stdcall__)) GetEnvironmentStringsW (void);


 DWORD __attribute__((__stdcall__)) GetEnvironmentVariableA (LPCSTR, LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) GetEnvironmentVariableW (LPCWSTR, LPWSTR, DWORD);

 BOOL __attribute__((__stdcall__)) GetExitCodeProcess (HANDLE, PDWORD);
 BOOL __attribute__((__stdcall__)) GetExitCodeThread (HANDLE, PDWORD);


 DWORD __attribute__((__stdcall__)) GetFileAttributesA (LPCSTR);
 DWORD __attribute__((__stdcall__)) GetFileAttributesW (LPCWSTR);


 BOOL __attribute__((__stdcall__)) GetFileAttributesExA
(LPCSTR, GET_FILEEX_INFO_LEVELS, PVOID);
 BOOL __attribute__((__stdcall__)) GetFileAttributesExW
(LPCWSTR, GET_FILEEX_INFO_LEVELS, PVOID);

 BOOL __attribute__((__stdcall__)) GetFileInformationByHandle
(HANDLE, LPBY_HANDLE_FILE_INFORMATION);


 BOOL __attribute__((__stdcall__)) GetFileSecurityA
(LPCSTR, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR, DWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) GetFileSecurityW
(LPCWSTR, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR, DWORD, PDWORD);

 DWORD __attribute__((__stdcall__)) GetFileSize (HANDLE, PDWORD);
 BOOL __attribute__((__stdcall__)) GetFileTime (HANDLE, LPFILETIME, LPFILETIME, LPFILETIME);
 DWORD __attribute__((__stdcall__)) GetFileType (HANDLE);




 DWORD __attribute__((__stdcall__)) GetFullPathNameA (LPCSTR, DWORD, LPSTR, LPSTR *);
 DWORD __attribute__((__stdcall__)) GetFullPathNameW (LPCWSTR, DWORD, LPWSTR, LPWSTR *);

 BOOL __attribute__((__stdcall__)) GetHandleInformation (HANDLE, PDWORD);
 BOOL __attribute__((__stdcall__)) GetKernelObjectSecurity
(HANDLE, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR, DWORD, PDWORD);
 DWORD __attribute__((__stdcall__)) GetLastError (void);
 DWORD __attribute__((__stdcall__)) GetLengthSid (PSID);
 void __attribute__((__stdcall__)) GetLocalTime (LPSYSTEMTIME);
 DWORD __attribute__((__stdcall__)) GetLogicalDrives (void);


 DWORD __attribute__((__stdcall__)) GetLogicalDriveStringsA (DWORD, LPSTR);
 DWORD __attribute__((__stdcall__)) GetLogicalDriveStringsW (DWORD, LPWSTR);

 BOOL __attribute__((__stdcall__)) GetMailslotInfo (HANDLE, PDWORD, PDWORD, PDWORD, PDWORD);


 DWORD __attribute__((__stdcall__)) GetModuleFileNameA (HINSTANCE, LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) GetModuleFileNameW (HINSTANCE, LPWSTR, DWORD);


 HMODULE __attribute__((__stdcall__)) GetModuleHandleA (LPCSTR);
 HMODULE __attribute__((__stdcall__)) GetModuleHandleW (LPCWSTR);


 BOOL __attribute__((__stdcall__)) GetNamedPipeHandleStateA
(HANDLE, PDWORD, PDWORD, PDWORD, PDWORD, LPSTR, DWORD);
 BOOL __attribute__((__stdcall__)) GetNamedPipeHandleStateW
(HANDLE, PDWORD, PDWORD, PDWORD, PDWORD, LPWSTR, DWORD);

 BOOL __attribute__((__stdcall__)) GetNamedPipeInfo
(HANDLE, PDWORD, PDWORD, PDWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) GetNumberOfEventLogRecords (HANDLE, PDWORD);
 BOOL __attribute__((__stdcall__)) GetOldestEventLogRecord (HANDLE, PDWORD);
 BOOL __attribute__((__stdcall__)) GetOverlappedResult (HANDLE, LPOVERLAPPED, PDWORD, BOOL);
 DWORD __attribute__((__stdcall__)) GetPriorityClass (HANDLE);
 BOOL __attribute__((__stdcall__)) GetPrivateObjectSecurity
( PSECURITY_DESCRIPTOR, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR,
  DWORD, PDWORD
);


 UINT __attribute__((__stdcall__)) GetPrivateProfileIntA (LPCSTR, LPCSTR, INT, LPCSTR);
 UINT __attribute__((__stdcall__)) GetPrivateProfileIntW (LPCWSTR, LPCWSTR, INT, LPCWSTR);


 DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionA
(LPCSTR, LPSTR, DWORD, LPCSTR);
 DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionW
(LPCWSTR, LPWSTR, DWORD, LPCWSTR);



 DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionNamesA (LPSTR, DWORD, LPCSTR);
 DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionNamesW (LPWSTR, DWORD, LPCWSTR);


 DWORD __attribute__((__stdcall__)) GetPrivateProfileStringA
(LPCSTR, LPCSTR, LPCSTR, LPSTR, DWORD, LPCSTR);
 DWORD __attribute__((__stdcall__)) GetPrivateProfileStringW
(LPCWSTR, LPCWSTR, LPCWSTR, LPWSTR, DWORD, LPCWSTR);


 BOOL __attribute__((__stdcall__)) GetPrivateProfileStructA
(LPCSTR, LPCSTR, LPVOID, UINT, LPCSTR);
 BOOL __attribute__((__stdcall__)) GetPrivateProfileStructW
(LPCWSTR, LPCWSTR, LPVOID, UINT, LPCWSTR);

 FARPROC __attribute__((__stdcall__)) GetProcAddress (HINSTANCE, LPCSTR);
 BOOL __attribute__((__stdcall__)) GetProcessAffinityMask (HANDLE, PDWORD, PDWORD);

 HANDLE __attribute__((__stdcall__)) GetProcessHeap (void);
 DWORD __attribute__((__stdcall__)) GetProcessHeaps (DWORD, PHANDLE);
 BOOL __attribute__((__stdcall__)) GetProcessPriorityBoost (HANDLE, PBOOL);
 BOOL __attribute__((__stdcall__)) GetProcessShutdownParameters (PDWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) GetProcessTimes
(HANDLE, LPFILETIME, LPFILETIME, LPFILETIME, LPFILETIME);
 DWORD __attribute__((__stdcall__)) GetProcessVersion (DWORD);
 HWINSTA __attribute__((__stdcall__)) GetProcessWindowStation (void);
 BOOL __attribute__((__stdcall__)) GetProcessWorkingSetSize (HANDLE, PSIZE_T, PSIZE_T);


 UINT __attribute__((__stdcall__)) GetProfileIntA (LPCSTR, LPCSTR, INT);
 UINT __attribute__((__stdcall__)) GetProfileIntW (LPCWSTR, LPCWSTR, INT);


 DWORD __attribute__((__stdcall__)) GetProfileSectionA (LPCSTR, LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) GetProfileSectionW (LPCWSTR, LPWSTR, DWORD);


 DWORD __attribute__((__stdcall__)) GetProfileStringA
(LPCSTR, LPCSTR, LPCSTR, LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) GetProfileStringW
(LPCWSTR, LPCWSTR, LPCWSTR, LPWSTR, DWORD);

 BOOL __attribute__((__stdcall__)) GetQueuedCompletionStatus
(HANDLE, PDWORD, PULONG_PTR, LPOVERLAPPED *, DWORD);
 BOOL __attribute__((__stdcall__)) GetSecurityDescriptorControl
(PSECURITY_DESCRIPTOR, PSECURITY_DESCRIPTOR_CONTROL, PDWORD);
 BOOL __attribute__((__stdcall__)) GetSecurityDescriptorDacl
(PSECURITY_DESCRIPTOR, LPBOOL, PACL *, LPBOOL);
 BOOL __attribute__((__stdcall__)) GetSecurityDescriptorGroup
(PSECURITY_DESCRIPTOR, PSID *, LPBOOL);
 DWORD __attribute__((__stdcall__)) GetSecurityDescriptorLength (PSECURITY_DESCRIPTOR);
 BOOL __attribute__((__stdcall__)) GetSecurityDescriptorOwner
(PSECURITY_DESCRIPTOR, PSID *, LPBOOL);
 BOOL __attribute__((__stdcall__)) GetSecurityDescriptorSacl
(PSECURITY_DESCRIPTOR, LPBOOL, PACL *, LPBOOL);


 DWORD __attribute__((__stdcall__)) GetShortPathNameA (LPCSTR, LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) GetShortPathNameW (LPCWSTR, LPWSTR, DWORD);

 PSID_IDENTIFIER_AUTHORITY __attribute__((__stdcall__)) GetSidIdentifierAuthority (PSID);
 DWORD __attribute__((__stdcall__)) GetSidLengthRequired (UCHAR);
 PDWORD __attribute__((__stdcall__)) GetSidSubAuthority (PSID, DWORD);
 PUCHAR __attribute__((__stdcall__)) GetSidSubAuthorityCount (PSID);


 void __attribute__((__stdcall__)) GetStartupInfoA (LPSTARTUPINFOA);
 void __attribute__((__stdcall__)) GetStartupInfoW (LPSTARTUPINFOW);

 HANDLE __attribute__((__stdcall__)) GetStdHandle (DWORD);


 UINT __attribute__((__stdcall__)) GetSystemDirectoryA (LPSTR, UINT);
 UINT __attribute__((__stdcall__)) GetSystemDirectoryW (LPWSTR, UINT);

 void __attribute__((__stdcall__)) GetSystemInfo (LPSYSTEM_INFO);
 BOOL __attribute__((__stdcall__)) GetSystemPowerStatus (LPSYSTEM_POWER_STATUS);
 void __attribute__((__stdcall__)) GetSystemTime (LPSYSTEMTIME);
 BOOL __attribute__((__stdcall__)) GetSystemTimeAdjustment (PDWORD, PDWORD, PBOOL);
 void __attribute__((__stdcall__)) GetSystemTimeAsFileTime (LPFILETIME);
 DWORD __attribute__((__stdcall__)) GetTapeParameters (HANDLE, DWORD, PDWORD, PVOID);
 DWORD __attribute__((__stdcall__)) GetTapePosition (HANDLE, DWORD, PDWORD, PDWORD, PDWORD);
 DWORD __attribute__((__stdcall__)) GetTapeStatus (HANDLE);


 UINT __attribute__((__stdcall__)) GetTempFileNameA (LPCSTR, LPCSTR, UINT, LPSTR);
 UINT __attribute__((__stdcall__)) GetTempFileNameW (LPCWSTR, LPCWSTR, UINT, LPWSTR);


 DWORD __attribute__((__stdcall__)) GetTempPathA (DWORD, LPSTR);
 DWORD __attribute__((__stdcall__)) GetTempPathW (DWORD, LPWSTR);

 BOOL __attribute__((__stdcall__)) GetThreadContext (HANDLE, LPCONTEXT);
 int __attribute__((__stdcall__)) GetThreadPriority (HANDLE);
 BOOL __attribute__((__stdcall__)) GetThreadPriorityBoost (HANDLE, PBOOL);
 BOOL __attribute__((__stdcall__)) GetThreadSelectorEntry (HANDLE, DWORD, LPLDT_ENTRY);
 BOOL __attribute__((__stdcall__)) GetThreadTimes
(HANDLE, LPFILETIME, LPFILETIME, LPFILETIME, LPFILETIME);
 DWORD __attribute__((__stdcall__)) GetTickCount (void);
 DWORD __attribute__((__stdcall__)) GetTimeZoneInformation (LPTIME_ZONE_INFORMATION);
 BOOL __attribute__((__stdcall__)) GetTokenInformation
(HANDLE, TOKEN_INFORMATION_CLASS, PVOID, DWORD, PDWORD);


 BOOL __attribute__((__stdcall__)) GetUserNameA (LPSTR, PDWORD);
 BOOL __attribute__((__stdcall__)) GetUserNameW (LPWSTR, PDWORD);

 DWORD __attribute__((__stdcall__)) GetVersion (void);


 BOOL __attribute__((__stdcall__)) GetVersionExA (LPOSVERSIONINFOA);
 BOOL __attribute__((__stdcall__)) GetVersionExW (LPOSVERSIONINFOW);


 BOOL __attribute__((__stdcall__)) GetVolumeInformationA
(LPCSTR, LPSTR, DWORD, PDWORD, PDWORD, PDWORD, LPSTR, DWORD);
 BOOL __attribute__((__stdcall__)) GetVolumeInformationW
(LPCWSTR, LPWSTR, DWORD, PDWORD, PDWORD, PDWORD, LPWSTR, DWORD);


 UINT __attribute__((__stdcall__)) GetWindowsDirectoryA (LPSTR, UINT);
 UINT __attribute__((__stdcall__)) GetWindowsDirectoryW (LPWSTR, UINT);

 DWORD __attribute__((__stdcall__)) GetWindowThreadProcessId (HWND, PDWORD);
 UINT __attribute__((__stdcall__)) GetWriteWatch
(DWORD, PVOID, SIZE_T, PVOID *, PULONG_PTR, PULONG);


 ATOM __attribute__((__stdcall__)) GlobalAddAtomA (LPCSTR);
 ATOM __attribute__((__stdcall__)) GlobalAddAtomW (LPCWSTR);

 HGLOBAL __attribute__((__stdcall__)) GlobalAlloc (UINT, DWORD);
 SIZE_T __attribute__((__stdcall__)) GlobalCompact (DWORD);
 ATOM __attribute__((__stdcall__)) GlobalDeleteAtom (ATOM);




 ATOM __attribute__((__stdcall__)) GlobalFindAtomA (LPCSTR);
 ATOM __attribute__((__stdcall__)) GlobalFindAtomW (LPCWSTR);

 void __attribute__((__stdcall__)) GlobalFix (HGLOBAL);
 UINT __attribute__((__stdcall__)) GlobalFlags (HGLOBAL);
 HGLOBAL __attribute__((__stdcall__)) GlobalFree (HGLOBAL);


 UINT __attribute__((__stdcall__)) GlobalGetAtomNameA (ATOM, LPSTR, int);
 UINT __attribute__((__stdcall__)) GlobalGetAtomNameW (ATOM, LPWSTR, int);

 HGLOBAL __attribute__((__stdcall__)) GlobalHandle (PCVOID);
 LPVOID __attribute__((__stdcall__)) GlobalLock (HGLOBAL);
 void __attribute__((__stdcall__)) GlobalMemoryStatus (LPMEMORYSTATUS);
 HGLOBAL __attribute__((__stdcall__)) GlobalReAlloc (HGLOBAL, DWORD, UINT);
 DWORD __attribute__((__stdcall__)) GlobalSize (HGLOBAL);
 void __attribute__((__stdcall__)) GlobalUnfix (HGLOBAL);
 BOOL __attribute__((__stdcall__)) GlobalUnlock (HGLOBAL);
 BOOL __attribute__((__stdcall__)) GlobalUnWire (HGLOBAL);
 PVOID __attribute__((__stdcall__)) GlobalWire (HGLOBAL);




 PVOID __attribute__((__stdcall__)) HeapAlloc (HANDLE, DWORD, DWORD);
SIZE_T __attribute__((__stdcall__)) HeapCompact (HANDLE, DWORD);
 HANDLE __attribute__((__stdcall__)) HeapCreate (DWORD, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) HeapDestroy (HANDLE);
 BOOL __attribute__((__stdcall__)) HeapFree (HANDLE, DWORD, PVOID);
 BOOL __attribute__((__stdcall__)) HeapLock (HANDLE);
 PVOID __attribute__((__stdcall__)) HeapReAlloc (HANDLE, DWORD, PVOID, DWORD);
 DWORD __attribute__((__stdcall__)) HeapSize (HANDLE, DWORD, PCVOID);
 BOOL __attribute__((__stdcall__)) HeapUnlock (HANDLE);
 BOOL __attribute__((__stdcall__)) HeapValidate (HANDLE, DWORD, PCVOID);
 BOOL __attribute__((__stdcall__)) HeapWalk (HANDLE, LPPROCESS_HEAP_ENTRY);
 BOOL __attribute__((__stdcall__)) ImpersonateLoggedOnUser (HANDLE);
 BOOL __attribute__((__stdcall__)) ImpersonateNamedPipeClient (HANDLE);
 BOOL __attribute__((__stdcall__)) ImpersonateSelf (SECURITY_IMPERSONATION_LEVEL);
 BOOL __attribute__((__stdcall__)) InitAtomTable (DWORD);
 BOOL __attribute__((__stdcall__)) InitializeAcl (PACL, DWORD, DWORD);
 void __attribute__((__stdcall__)) InitializeCriticalSection (LPCRITICAL_SECTION);
 BOOL __attribute__((__stdcall__)) InitializeCriticalSectionAndSpinCount
(LPCRITICAL_SECTION, DWORD);
 DWORD __attribute__((__stdcall__)) SetCriticalSectionSpinCount (LPCRITICAL_SECTION, DWORD);
 BOOL __attribute__((__stdcall__)) InitializeSecurityDescriptor
(PSECURITY_DESCRIPTOR, DWORD);
 BOOL __attribute__((__stdcall__)) InitializeSid (PSID, PSID_IDENTIFIER_AUTHORITY, BYTE);
# 2001 "c:\\mingw\\include\\winbase.h" 3
LONG __attribute__((__stdcall__)) InterlockedCompareExchange (LONG volatile *, LONG, LONG);



LONG __attribute__((__stdcall__)) InterlockedDecrement (LONG volatile *);
LONG __attribute__((__stdcall__)) InterlockedExchange (LONG volatile *, LONG);



LONG __attribute__((__stdcall__)) InterlockedExchangeAdd (LONG volatile *, LONG);





LONG __attribute__((__stdcall__)) InterlockedIncrement (LONG volatile *);
# 2025 "c:\\mingw\\include\\winbase.h" 3
 BOOL __attribute__((__stdcall__)) IsBadCodePtr (FARPROC);
 BOOL __attribute__((__stdcall__)) IsBadHugeReadPtr (PCVOID, UINT);
 BOOL __attribute__((__stdcall__)) IsBadHugeWritePtr (PVOID, UINT);
 BOOL __attribute__((__stdcall__)) IsBadReadPtr (PCVOID, UINT);


 BOOL __attribute__((__stdcall__)) IsBadStringPtrA (LPCSTR, UINT);
 BOOL __attribute__((__stdcall__)) IsBadStringPtrW (LPCWSTR, UINT);

 BOOL __attribute__((__stdcall__)) IsBadWritePtr (PVOID, UINT);
 BOOL __attribute__((__stdcall__)) IsDebuggerPresent (void);
 BOOL __attribute__((__stdcall__)) IsProcessorFeaturePresent (DWORD);
 BOOL __attribute__((__stdcall__)) IsSystemResumeAutomatic (void);
 BOOL __attribute__((__stdcall__)) IsTextUnicode (PCVOID, int, LPINT);
 BOOL __attribute__((__stdcall__)) IsValidAcl (PACL);
 BOOL __attribute__((__stdcall__)) IsValidSecurityDescriptor (PSECURITY_DESCRIPTOR);
 BOOL __attribute__((__stdcall__)) IsValidSid (PSID);

 void __attribute__((__stdcall__)) LeaveCriticalSection (LPCRITICAL_SECTION);




 HINSTANCE __attribute__((__stdcall__)) LoadLibraryA (LPCSTR);
 HINSTANCE __attribute__((__stdcall__)) LoadLibraryW (LPCWSTR);


 HINSTANCE __attribute__((__stdcall__)) LoadLibraryExA (LPCSTR, HANDLE, DWORD);
 HINSTANCE __attribute__((__stdcall__)) LoadLibraryExW (LPCWSTR, HANDLE, DWORD);

 DWORD __attribute__((__stdcall__)) LoadModule (LPCSTR, PVOID);
 HGLOBAL __attribute__((__stdcall__)) LoadResource (HINSTANCE, HRSRC);
 HLOCAL __attribute__((__stdcall__)) LocalAlloc (UINT, SIZE_T);
 SIZE_T __attribute__((__stdcall__)) LocalCompact (UINT);
 HLOCAL LocalDiscard (HLOCAL);
 BOOL __attribute__((__stdcall__)) LocalFileTimeToFileTime (const FILETIME *, LPFILETIME);
 UINT __attribute__((__stdcall__)) LocalFlags (HLOCAL);
 HLOCAL __attribute__((__stdcall__)) LocalFree (HLOCAL);
 HLOCAL __attribute__((__stdcall__)) LocalHandle (LPCVOID);
 PVOID __attribute__((__stdcall__)) LocalLock (HLOCAL);
 HLOCAL __attribute__((__stdcall__)) LocalReAlloc (HLOCAL, SIZE_T, UINT);
 SIZE_T __attribute__((__stdcall__)) LocalShrink (HLOCAL, UINT);
 UINT __attribute__((__stdcall__)) LocalSize (HLOCAL);
 BOOL __attribute__((__stdcall__)) LocalUnlock (HLOCAL);
 BOOL __attribute__((__stdcall__)) LockFile (HANDLE, DWORD, DWORD, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) LockFileEx
(HANDLE, DWORD, DWORD, DWORD, DWORD, LPOVERLAPPED);
 PVOID __attribute__((__stdcall__)) LockResource (HGLOBAL);




 BOOL __attribute__((__stdcall__)) LogonUserA (LPSTR, LPSTR, LPSTR, DWORD, DWORD, PHANDLE);
 BOOL __attribute__((__stdcall__)) LogonUserW
(LPWSTR, LPWSTR, LPWSTR, DWORD, DWORD, PHANDLE);


 BOOL __attribute__((__stdcall__)) LookupAccountNameA
(LPCSTR, LPCSTR, PSID, PDWORD, LPSTR, PDWORD, PSID_NAME_USE);
 BOOL __attribute__((__stdcall__)) LookupAccountNameW
(LPCWSTR, LPCWSTR, PSID, PDWORD, LPWSTR, PDWORD, PSID_NAME_USE);


 BOOL __attribute__((__stdcall__)) LookupAccountSidA
(LPCSTR, PSID, LPSTR, PDWORD, LPSTR, PDWORD, PSID_NAME_USE);
 BOOL __attribute__((__stdcall__)) LookupAccountSidW
(LPCWSTR, PSID, LPWSTR, PDWORD, LPWSTR, PDWORD, PSID_NAME_USE);


 BOOL __attribute__((__stdcall__)) LookupPrivilegeDisplayNameA
(LPCSTR, LPCSTR, LPSTR, PDWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) LookupPrivilegeDisplayNameW
(LPCWSTR, LPCWSTR, LPWSTR, PDWORD, PDWORD);


 BOOL __attribute__((__stdcall__)) LookupPrivilegeNameA (LPCSTR, PLUID, LPSTR, PDWORD);
 BOOL __attribute__((__stdcall__)) LookupPrivilegeNameW (LPCWSTR, PLUID, LPWSTR, PDWORD);


 BOOL __attribute__((__stdcall__)) LookupPrivilegeValueA (LPCSTR, LPCSTR, PLUID);
 BOOL __attribute__((__stdcall__)) LookupPrivilegeValueW (LPCWSTR, LPCWSTR, PLUID);


 LPSTR __attribute__((__stdcall__)) lstrcatA (LPSTR, LPCSTR);
 LPWSTR __attribute__((__stdcall__)) lstrcatW (LPWSTR, LPCWSTR);


 int __attribute__((__stdcall__)) lstrcmpA (LPCSTR, LPCSTR);
 int __attribute__((__stdcall__)) lstrcmpW (LPCWSTR, LPCWSTR);


 int __attribute__((__stdcall__)) lstrcmpiA (LPCSTR, LPCSTR);
 int __attribute__((__stdcall__)) lstrcmpiW (LPCWSTR, LPCWSTR);


 LPSTR __attribute__((__stdcall__)) lstrcpyA (LPSTR, LPCSTR);
 LPWSTR __attribute__((__stdcall__)) lstrcpyW (LPWSTR, LPCWSTR);


 LPSTR __attribute__((__stdcall__)) lstrcpynA (LPSTR, LPCSTR, int);
 LPWSTR __attribute__((__stdcall__)) lstrcpynW (LPWSTR, LPCWSTR, int);


 int __attribute__((__stdcall__)) lstrlenA (LPCSTR);
 int __attribute__((__stdcall__)) lstrlenW (LPCWSTR);

 BOOL __attribute__((__stdcall__)) MakeAbsoluteSD
( PSECURITY_DESCRIPTOR, PSECURITY_DESCRIPTOR, PDWORD, PACL, PDWORD, PACL,
  PDWORD, PSID, PDWORD, PSID, PDWORD
);



 BOOL __attribute__((__stdcall__)) MakeSelfRelativeSD
(PSECURITY_DESCRIPTOR, PSECURITY_DESCRIPTOR, PDWORD);
 void __attribute__((__stdcall__)) MapGenericMask (PDWORD, PGENERIC_MAPPING);
 PVOID __attribute__((__stdcall__)) MapViewOfFile (HANDLE, DWORD, DWORD, DWORD, DWORD);
 PVOID __attribute__((__stdcall__)) MapViewOfFileEx
(HANDLE, DWORD, DWORD, DWORD, DWORD, PVOID);


 BOOL __attribute__((__stdcall__)) MoveFileA (LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) MoveFileW (LPCWSTR, LPCWSTR);


 BOOL __attribute__((__stdcall__)) MoveFileExA (LPCSTR, LPCSTR, DWORD);
 BOOL __attribute__((__stdcall__)) MoveFileExW (LPCWSTR, LPCWSTR, DWORD);

 int __attribute__((__stdcall__)) MulDiv (int, int, int);
 BOOL __attribute__((__stdcall__)) NotifyChangeEventLog (HANDLE, HANDLE);


 BOOL __attribute__((__stdcall__)) ObjectCloseAuditAlarmA (LPCSTR, PVOID, BOOL);
 BOOL __attribute__((__stdcall__)) ObjectCloseAuditAlarmW (LPCWSTR, PVOID, BOOL);


 BOOL __attribute__((__stdcall__)) ObjectDeleteAuditAlarmA (LPCSTR, PVOID, BOOL);
 BOOL __attribute__((__stdcall__)) ObjectDeleteAuditAlarmW (LPCWSTR, PVOID, BOOL);


 BOOL __attribute__((__stdcall__)) ObjectOpenAuditAlarmA
( LPCSTR, PVOID, LPSTR, LPSTR, PSECURITY_DESCRIPTOR, HANDLE, DWORD, DWORD,
  PPRIVILEGE_SET, BOOL, BOOL, PBOOL
);
 BOOL __attribute__((__stdcall__)) ObjectOpenAuditAlarmW
( LPCWSTR, PVOID, LPWSTR, LPWSTR, PSECURITY_DESCRIPTOR, HANDLE, DWORD,
  DWORD, PPRIVILEGE_SET, BOOL, BOOL, PBOOL
);


 BOOL __attribute__((__stdcall__)) ObjectPrivilegeAuditAlarmA
(LPCSTR, PVOID, HANDLE, DWORD, PPRIVILEGE_SET, BOOL);
 BOOL __attribute__((__stdcall__)) ObjectPrivilegeAuditAlarmW
(LPCWSTR, PVOID, HANDLE, DWORD, PPRIVILEGE_SET, BOOL);


 HANDLE __attribute__((__stdcall__)) OpenBackupEventLogA (LPCSTR, LPCSTR);
 HANDLE __attribute__((__stdcall__)) OpenBackupEventLogW (LPCWSTR, LPCWSTR);


 HANDLE __attribute__((__stdcall__)) OpenEventA (DWORD, BOOL, LPCSTR);
 HANDLE __attribute__((__stdcall__)) OpenEventW (DWORD, BOOL, LPCWSTR);


 HANDLE __attribute__((__stdcall__)) OpenEventLogA (LPCSTR, LPCSTR);
 HANDLE __attribute__((__stdcall__)) OpenEventLogW (LPCWSTR, LPCWSTR);

 HFILE __attribute__((__stdcall__)) OpenFile (LPCSTR, LPOFSTRUCT, UINT);


 HANDLE __attribute__((__stdcall__)) OpenFileMappingA (DWORD, BOOL, LPCSTR);
 HANDLE __attribute__((__stdcall__)) OpenFileMappingW (DWORD, BOOL, LPCWSTR);


 HANDLE __attribute__((__stdcall__)) OpenMutexA (DWORD, BOOL, LPCSTR);
 HANDLE __attribute__((__stdcall__)) OpenMutexW (DWORD, BOOL, LPCWSTR);

 HANDLE __attribute__((__stdcall__)) OpenProcess (DWORD, BOOL, DWORD);
 BOOL __attribute__((__stdcall__)) OpenProcessToken (HANDLE, DWORD, PHANDLE);


 HANDLE __attribute__((__stdcall__)) OpenSemaphoreA (DWORD, BOOL, LPCSTR);
 HANDLE __attribute__((__stdcall__)) OpenSemaphoreW (DWORD, BOOL, LPCWSTR);

 BOOL __attribute__((__stdcall__)) OpenThreadToken (HANDLE, DWORD, BOOL, PHANDLE);



 HANDLE __attribute__((__stdcall__)) OpenWaitableTimerA (DWORD, BOOL, LPCSTR);
 HANDLE __attribute__((__stdcall__)) OpenWaitableTimerW (DWORD, BOOL, LPCWSTR);


 void __attribute__((__stdcall__)) OutputDebugStringA (LPCSTR);
 void __attribute__((__stdcall__)) OutputDebugStringW (LPCWSTR);

 BOOL __attribute__((__stdcall__)) PeekNamedPipe
(HANDLE, PVOID, DWORD, PDWORD, PDWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) PostQueuedCompletionStatus
(HANDLE, DWORD, ULONG_PTR, LPOVERLAPPED);
 DWORD __attribute__((__stdcall__)) PrepareTape (HANDLE, DWORD, BOOL);
 BOOL __attribute__((__stdcall__)) PrivilegeCheck (HANDLE, PPRIVILEGE_SET, PBOOL);


 BOOL __attribute__((__stdcall__)) PrivilegedServiceAuditAlarmA
(LPCSTR, LPCSTR, HANDLE, PPRIVILEGE_SET, BOOL);
 BOOL __attribute__((__stdcall__)) PrivilegedServiceAuditAlarmW
(LPCWSTR, LPCWSTR, HANDLE, PPRIVILEGE_SET, BOOL);

 BOOL __attribute__((__stdcall__)) PulseEvent (HANDLE);
 BOOL __attribute__((__stdcall__)) PurgeComm (HANDLE, DWORD);


 DWORD __attribute__((__stdcall__)) QueryDosDeviceA (LPCSTR, LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) QueryDosDeviceW (LPCWSTR, LPWSTR, DWORD);
 BOOL __attribute__((__stdcall__)) QueryPerformanceCounter (PLARGE_INTEGER);
 BOOL __attribute__((__stdcall__)) QueryPerformanceFrequency (PLARGE_INTEGER);
 DWORD __attribute__((__stdcall__)) QueueUserAPC (PAPCFUNC, HANDLE, ULONG_PTR);

 void __attribute__((__stdcall__)) RaiseException (DWORD, DWORD, DWORD, const DWORD *);
 BOOL __attribute__((__stdcall__)) ReadDirectoryChangesW
( HANDLE, PVOID, DWORD, BOOL, DWORD, PDWORD, LPOVERLAPPED,
  LPOVERLAPPED_COMPLETION_ROUTINE
);


 BOOL __attribute__((__stdcall__)) ReadEventLogA
(HANDLE, DWORD, DWORD, PVOID, DWORD, DWORD *, DWORD *);
 BOOL __attribute__((__stdcall__)) ReadEventLogW
(HANDLE, DWORD, DWORD, PVOID, DWORD, DWORD *, DWORD *);

 BOOL __attribute__((__stdcall__)) ReadFile (HANDLE, PVOID, DWORD, PDWORD, LPOVERLAPPED);
 BOOL __attribute__((__stdcall__)) ReadFileEx
(HANDLE, PVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE);
 BOOL __attribute__((__stdcall__)) ReadFileScatter
(HANDLE, FILE_SEGMENT_ELEMENT *, DWORD, LPDWORD, LPOVERLAPPED);
 BOOL __attribute__((__stdcall__)) ReadProcessMemory (HANDLE, PCVOID, PVOID, DWORD, PDWORD);


 HANDLE __attribute__((__stdcall__)) RegisterEventSourceA (LPCSTR, LPCSTR);
 HANDLE __attribute__((__stdcall__)) RegisterEventSourceW (LPCWSTR, LPCWSTR);

 BOOL __attribute__((__stdcall__)) ReleaseMutex (HANDLE);
 BOOL __attribute__((__stdcall__)) ReleaseSemaphore (HANDLE, LONG, LPLONG);


 BOOL __attribute__((__stdcall__)) RemoveDirectoryA (LPCSTR);
 BOOL __attribute__((__stdcall__)) RemoveDirectoryW (LPCWSTR);


 BOOL __attribute__((__stdcall__)) ReportEventA
(HANDLE, WORD, WORD, DWORD, PSID, WORD, DWORD, LPCSTR *, PVOID);
 BOOL __attribute__((__stdcall__)) ReportEventW
(HANDLE, WORD, WORD, DWORD, PSID, WORD, DWORD, LPCWSTR *, PVOID);




 BOOL __attribute__((__stdcall__)) ResetEvent (HANDLE);


 UINT __attribute__((__stdcall__)) ResetWriteWatch (LPVOID, SIZE_T);
 DWORD __attribute__((__stdcall__)) ResumeThread (HANDLE);
 BOOL __attribute__((__stdcall__)) RevertToSelf (void);


 DWORD __attribute__((__stdcall__)) SearchPathA
(LPCSTR, LPCSTR, LPCSTR, DWORD, LPSTR, LPSTR *);
 DWORD __attribute__((__stdcall__)) SearchPathW
(LPCWSTR, LPCWSTR, LPCWSTR, DWORD, LPWSTR, LPWSTR *);

 BOOL __attribute__((__stdcall__)) SetAclInformation
(PACL, PVOID, DWORD, ACL_INFORMATION_CLASS);
 BOOL __attribute__((__stdcall__)) SetCommBreak (HANDLE);
 BOOL __attribute__((__stdcall__)) SetCommConfig (HANDLE, LPCOMMCONFIG, DWORD);
 BOOL __attribute__((__stdcall__)) SetCommMask (HANDLE, DWORD);
 BOOL __attribute__((__stdcall__)) SetCommState (HANDLE, LPDCB);
 BOOL __attribute__((__stdcall__)) SetCommTimeouts (HANDLE, LPCOMMTIMEOUTS);


 BOOL __attribute__((__stdcall__)) SetComputerNameA (LPCSTR);
 BOOL __attribute__((__stdcall__)) SetComputerNameW (LPCWSTR);


 BOOL __attribute__((__stdcall__)) SetCurrentDirectoryA (LPCSTR);
 BOOL __attribute__((__stdcall__)) SetCurrentDirectoryW (LPCWSTR);


 BOOL __attribute__((__stdcall__)) SetDefaultCommConfigA (LPCSTR, LPCOMMCONFIG, DWORD);
 BOOL __attribute__((__stdcall__)) SetDefaultCommConfigW (LPCWSTR, LPCOMMCONFIG, DWORD);

 BOOL __attribute__((__stdcall__)) SetEndOfFile (HANDLE);


 BOOL __attribute__((__stdcall__)) SetEnvironmentVariableA (LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) SetEnvironmentVariableW (LPCWSTR, LPCWSTR);

 UINT __attribute__((__stdcall__)) SetErrorMode (UINT);




 BOOL __attribute__((__stdcall__)) SetEvent (HANDLE);


 void __attribute__((__stdcall__)) SetFileApisToANSI (void);
 void __attribute__((__stdcall__)) SetFileApisToOEM (void);


 BOOL __attribute__((__stdcall__)) SetFileAttributesA (LPCSTR, DWORD);
 BOOL __attribute__((__stdcall__)) SetFileAttributesW (LPCWSTR, DWORD);

 DWORD __attribute__((__stdcall__)) SetFilePointer (HANDLE, LONG, PLONG, DWORD);
 BOOL __attribute__((__stdcall__)) SetFilePointerEx
(HANDLE, LARGE_INTEGER, PLARGE_INTEGER, DWORD);


 BOOL __attribute__((__stdcall__)) SetFileSecurityA
(LPCSTR, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR);
 BOOL __attribute__((__stdcall__)) SetFileSecurityW
(LPCWSTR, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR);

 BOOL __attribute__((__stdcall__)) SetFileTime
(HANDLE, const FILETIME *, const FILETIME *, const FILETIME *);

 UINT __attribute__((__stdcall__)) SetHandleCount (UINT);
 BOOL __attribute__((__stdcall__)) SetHandleInformation (HANDLE, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) SetKernelObjectSecurity
(HANDLE, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR);
 void __attribute__((__stdcall__)) SetLastError (DWORD);
 void __attribute__((__stdcall__)) SetLastErrorEx (DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) SetLocalTime (const SYSTEMTIME *);
 BOOL __attribute__((__stdcall__)) SetMailslotInfo (HANDLE, DWORD);
 BOOL __attribute__((__stdcall__)) SetNamedPipeHandleState (HANDLE, PDWORD, PDWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) SetPriorityClass (HANDLE, DWORD);
 BOOL __attribute__((__stdcall__)) SetPrivateObjectSecurity
( SECURITY_INFORMATION, PSECURITY_DESCRIPTOR, PSECURITY_DESCRIPTOR *,
  PGENERIC_MAPPING, HANDLE
);
 BOOL __attribute__((__stdcall__)) SetProcessAffinityMask (HANDLE, DWORD);
 BOOL __attribute__((__stdcall__)) SetProcessPriorityBoost (HANDLE, BOOL);
 BOOL __attribute__((__stdcall__)) SetProcessShutdownParameters (DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) SetProcessWorkingSetSize (HANDLE, SIZE_T, SIZE_T);
 BOOL __attribute__((__stdcall__)) SetSecurityDescriptorControl
( PSECURITY_DESCRIPTOR, SECURITY_DESCRIPTOR_CONTROL, SECURITY_DESCRIPTOR_CONTROL
);
 BOOL __attribute__((__stdcall__)) SetSecurityDescriptorDacl
(PSECURITY_DESCRIPTOR, BOOL, PACL, BOOL);
 BOOL __attribute__((__stdcall__)) SetSecurityDescriptorGroup
(PSECURITY_DESCRIPTOR, PSID, BOOL);
 BOOL __attribute__((__stdcall__)) SetSecurityDescriptorOwner
(PSECURITY_DESCRIPTOR, PSID, BOOL);
 BOOL __attribute__((__stdcall__)) SetSecurityDescriptorSacl
(PSECURITY_DESCRIPTOR, BOOL, PACL, BOOL);
 BOOL __attribute__((__stdcall__)) SetStdHandle (DWORD, HANDLE);



 BOOL __attribute__((__stdcall__)) SetSystemPowerState (BOOL, BOOL);
 BOOL __attribute__((__stdcall__)) SetSystemTime (const SYSTEMTIME *);
 BOOL __attribute__((__stdcall__)) SetSystemTimeAdjustment (DWORD, BOOL);
 DWORD __attribute__((__stdcall__)) SetTapeParameters (HANDLE, DWORD, PVOID);
 DWORD __attribute__((__stdcall__)) SetTapePosition
(HANDLE, DWORD, DWORD, DWORD, DWORD, BOOL);
 DWORD __attribute__((__stdcall__)) SetThreadAffinityMask (HANDLE, DWORD);
 BOOL __attribute__((__stdcall__)) SetThreadContext (HANDLE, const CONTEXT *);

 DWORD __attribute__((__stdcall__)) SetThreadIdealProcessor (HANDLE, DWORD);
 BOOL __attribute__((__stdcall__)) SetThreadPriority (HANDLE, int);
 BOOL __attribute__((__stdcall__)) SetThreadPriorityBoost (HANDLE, BOOL);
 BOOL __attribute__((__stdcall__)) SetThreadToken (PHANDLE, HANDLE);
 BOOL __attribute__((__stdcall__)) SetTimeZoneInformation (const TIME_ZONE_INFORMATION *);
 BOOL __attribute__((__stdcall__)) SetTokenInformation
(HANDLE, TOKEN_INFORMATION_CLASS, PVOID, DWORD);
 LPTOP_LEVEL_EXCEPTION_FILTER __attribute__((__stdcall__)) SetUnhandledExceptionFilter
(LPTOP_LEVEL_EXCEPTION_FILTER);
 BOOL __attribute__((__stdcall__)) SetupComm (HANDLE, DWORD, DWORD);


 BOOL __attribute__((__stdcall__)) SetVolumeLabelA (LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) SetVolumeLabelW (LPCWSTR, LPCWSTR);

 BOOL __attribute__((__stdcall__)) SetWaitableTimer
(HANDLE, const LARGE_INTEGER *, LONG, PTIMERAPCROUTINE, PVOID, BOOL);
 DWORD __attribute__((__stdcall__)) SignalObjectAndWait (HANDLE, HANDLE, DWORD, BOOL);
 DWORD __attribute__((__stdcall__)) SizeofResource (HINSTANCE, HRSRC);
 void __attribute__((__stdcall__)) Sleep (DWORD);
 DWORD __attribute__((__stdcall__)) SleepEx (DWORD, BOOL);
 DWORD __attribute__((__stdcall__)) SuspendThread (HANDLE);
 void __attribute__((__stdcall__)) SwitchToFiber (PVOID);
 BOOL __attribute__((__stdcall__)) SwitchToThread (void);
 BOOL __attribute__((__stdcall__)) SystemTimeToFileTime (const SYSTEMTIME *, LPFILETIME);
 BOOL __attribute__((__stdcall__)) SystemTimeToTzSpecificLocalTime
(LPTIME_ZONE_INFORMATION, LPSYSTEMTIME, LPSYSTEMTIME);

 BOOL __attribute__((__stdcall__)) TerminateProcess (HANDLE, UINT);
 BOOL __attribute__((__stdcall__)) TerminateThread (HANDLE, DWORD);
 DWORD __attribute__((__stdcall__)) TlsAlloc (void);
 BOOL __attribute__((__stdcall__)) TlsFree (DWORD);
 PVOID __attribute__((__stdcall__)) TlsGetValue (DWORD);
 BOOL __attribute__((__stdcall__)) TlsSetValue (DWORD, PVOID);
 BOOL __attribute__((__stdcall__)) TransactNamedPipe
(HANDLE, PVOID, DWORD, PVOID, DWORD, PDWORD, LPOVERLAPPED);
 BOOL __attribute__((__stdcall__)) TransmitCommChar (HANDLE, char);
 BOOL __attribute__((__stdcall__)) TryEnterCriticalSection (LPCRITICAL_SECTION);
 LONG __attribute__((__stdcall__)) UnhandledExceptionFilter (LPEXCEPTION_POINTERS);
 BOOL __attribute__((__stdcall__)) UnlockFile (HANDLE, DWORD, DWORD, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) UnlockFileEx (HANDLE, DWORD, DWORD, DWORD, LPOVERLAPPED);




 BOOL __attribute__((__stdcall__)) UnmapViewOfFile (LPCVOID);


 BOOL __attribute__((__stdcall__)) UpdateResourceA
(HANDLE, LPCSTR, LPCSTR, WORD, PVOID, DWORD);
 BOOL __attribute__((__stdcall__)) UpdateResourceW
(HANDLE, LPCWSTR, LPCWSTR, WORD, PVOID, DWORD);


 BOOL __attribute__((__stdcall__)) VerifyVersionInfoA
(LPOSVERSIONINFOEXA, DWORD, DWORDLONG);
 BOOL __attribute__((__stdcall__)) VerifyVersionInfoW
(LPOSVERSIONINFOEXW, DWORD, DWORDLONG);

 PVOID __attribute__((__stdcall__)) VirtualAlloc (PVOID, DWORD, DWORD, DWORD);
 PVOID __attribute__((__stdcall__)) VirtualAllocEx (HANDLE, PVOID, DWORD, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) VirtualFree (PVOID, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) VirtualFreeEx (HANDLE, PVOID, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) VirtualLock (PVOID, DWORD);
 BOOL __attribute__((__stdcall__)) VirtualProtect (PVOID, DWORD, DWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) VirtualProtectEx (HANDLE, PVOID, DWORD, DWORD, PDWORD);
 DWORD __attribute__((__stdcall__)) VirtualQuery (LPCVOID, PMEMORY_BASIC_INFORMATION, DWORD);
 DWORD __attribute__((__stdcall__)) VirtualQueryEx
(HANDLE, LPCVOID, PMEMORY_BASIC_INFORMATION, DWORD);
 BOOL __attribute__((__stdcall__)) VirtualUnlock (PVOID, DWORD);
 BOOL __attribute__((__stdcall__)) WaitCommEvent (HANDLE, PDWORD, LPOVERLAPPED);
 BOOL __attribute__((__stdcall__)) WaitForDebugEvent (LPDEBUG_EVENT, DWORD);
 DWORD __attribute__((__stdcall__)) WaitForMultipleObjects
(DWORD, const HANDLE *, BOOL, DWORD);
 DWORD __attribute__((__stdcall__)) WaitForMultipleObjectsEx
(DWORD, const HANDLE *, BOOL, DWORD, BOOL);
 DWORD __attribute__((__stdcall__)) WaitForSingleObject (HANDLE, DWORD);
 DWORD __attribute__((__stdcall__)) WaitForSingleObjectEx (HANDLE, DWORD, BOOL);


 BOOL __attribute__((__stdcall__)) WaitNamedPipeA (LPCSTR, DWORD);
 BOOL __attribute__((__stdcall__)) WaitNamedPipeW (LPCWSTR, DWORD);

 BOOL __attribute__((__stdcall__)) WinLoadTrustProvider (GUID *);
 BOOL __attribute__((__stdcall__)) WriteFile (HANDLE, PCVOID, DWORD, PDWORD, LPOVERLAPPED);
 BOOL __attribute__((__stdcall__)) WriteFileEx
(HANDLE, PCVOID, DWORD, LPOVERLAPPED, LPOVERLAPPED_COMPLETION_ROUTINE);
 BOOL __attribute__((__stdcall__)) WriteFileGather
(HANDLE, FILE_SEGMENT_ELEMENT *, DWORD, LPDWORD, LPOVERLAPPED);


 BOOL __attribute__((__stdcall__)) WritePrivateProfileSectionA (LPCSTR, LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) WritePrivateProfileSectionW (LPCWSTR, LPCWSTR, LPCWSTR);


 BOOL __attribute__((__stdcall__)) WritePrivateProfileStringA
(LPCSTR, LPCSTR, LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) WritePrivateProfileStringW
(LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR);


 BOOL __attribute__((__stdcall__)) WritePrivateProfileStructA
(LPCSTR, LPCSTR, LPVOID, UINT, LPCSTR);
 BOOL __attribute__((__stdcall__)) WritePrivateProfileStructW
(LPCWSTR, LPCWSTR, LPVOID, UINT, LPCWSTR);

 BOOL __attribute__((__stdcall__)) WriteProcessMemory
(HANDLE, LPVOID, LPCVOID, SIZE_T, SIZE_T *);


 BOOL __attribute__((__stdcall__)) WriteProfileSectionA (LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) WriteProfileSectionW (LPCWSTR, LPCWSTR);


 BOOL __attribute__((__stdcall__)) WriteProfileStringA (LPCSTR, LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) WriteProfileStringW (LPCWSTR, LPCWSTR, LPCWSTR);

 DWORD __attribute__((__stdcall__)) WriteTapemark (HANDLE, DWORD, DWORD, BOOL);







 BOOL __attribute__((__stdcall__)) ConvertFiberToThread (void);
 LPVOID __attribute__((__stdcall__)) CreateFiberEx
(SIZE_T, SIZE_T, DWORD, LPFIBER_START_ROUTINE, LPVOID);






typedef DWORD EXECUTION_STATE;


 DWORD __attribute__((__stdcall__)) GetLongPathNameA (LPCSTR, LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) GetLongPathNameW (LPCWSTR, LPWSTR, DWORD);

 EXECUTION_STATE __attribute__((__stdcall__)) SetThreadExecutionState (EXECUTION_STATE);





 HANDLE __attribute__((__stdcall__)) OpenThread (DWORD, BOOL, DWORD);





typedef struct _MEMORYSTATUSEX
{ DWORD dwLength;
  DWORD dwMemoryLoad;
  DWORDLONG ullTotalPhys;
  DWORDLONG ullAvailPhys;
  DWORDLONG ullTotalPageFile;
  DWORDLONG ullAvailPageFile;
  DWORDLONG ullTotalVirtual;
  DWORDLONG ullAvailVirtual;
  DWORDLONG ullAvailExtendedVirtual;
} MEMORYSTATUSEX, *LPMEMORYSTATUSEX;

typedef enum _COMPUTER_NAME_FORMAT
{ ComputerNameNetBIOS,
  ComputerNameDnsHostname,
  ComputerNameDnsDomain,
  ComputerNameDnsFullyQualified,
  ComputerNamePhysicalNetBIOS,
  ComputerNamePhysicalDnsHostname,
  ComputerNamePhysicalDnsDomain,
  ComputerNamePhysicalDnsFullyQualified,
  ComputerNameMax
} COMPUTER_NAME_FORMAT;

typedef void (__attribute__((__stdcall__)) *WAITORTIMERCALLBACK)(PVOID, BOOLEAN);

 BOOL __attribute__((__stdcall__)) AddAccessAllowedAceEx (PACL, DWORD, DWORD, DWORD, PSID);
 BOOL __attribute__((__stdcall__)) AddAccessDeniedAceEx (PACL, DWORD, DWORD, DWORD, PSID);
 PVOID __attribute__((__stdcall__)) AddVectoredExceptionHandler
(ULONG, PVECTORED_EXCEPTION_HANDLER);

 BOOL __attribute__((__stdcall__)) ChangeTimerQueueTimer (HANDLE, HANDLE, ULONG, ULONG);
 BOOL __attribute__((__stdcall__)) CheckTokenMembership (HANDLE, PSID, PBOOL);


 BOOL __attribute__((__stdcall__)) CreateHardLinkA (LPCSTR, LPCSTR, LPSECURITY_ATTRIBUTES);
 BOOL __attribute__((__stdcall__)) CreateHardLinkW
(LPCWSTR, LPCWSTR, LPSECURITY_ATTRIBUTES);


 HANDLE __attribute__((__stdcall__)) CreateJobObjectA (LPSECURITY_ATTRIBUTES, LPCSTR);
 HANDLE __attribute__((__stdcall__)) CreateJobObjectW (LPSECURITY_ATTRIBUTES, LPCWSTR);

 BOOL __attribute__((__stdcall__)) TerminateJobObject (HANDLE, UINT);
 BOOL __attribute__((__stdcall__)) AssignProcessToJobObject (HANDLE, HANDLE);

 BOOL __attribute__((__stdcall__)) SetInformationJobObject
(HANDLE, JOBOBJECTINFOCLASS, LPVOID, DWORD);
 BOOL __attribute__((__stdcall__)) QueryInformationJobObject
(HANDLE, JOBOBJECTINFOCLASS, LPVOID, DWORD, LPDWORD);

 BOOL __attribute__((__stdcall__)) CreateProcessWithLogonW
( LPCWSTR, LPCWSTR, LPCWSTR, DWORD, LPCWSTR, LPWSTR, DWORD, LPVOID,
  LPCWSTR, LPSTARTUPINFOW, LPPROCESS_INFORMATION
);



 BOOL __attribute__((__stdcall__)) CreateRestrictedToken
( HANDLE, DWORD, DWORD, PSID_AND_ATTRIBUTES, DWORD, PLUID_AND_ATTRIBUTES,
  DWORD, PSID_AND_ATTRIBUTES, PHANDLE
);





 HANDLE __attribute__((__stdcall__)) CreateTimerQueue (void);
 BOOL __attribute__((__stdcall__)) CreateTimerQueueTimer
(PHANDLE, HANDLE, WAITORTIMERCALLBACK, PVOID, DWORD, DWORD, ULONG);

 BOOL __attribute__((__stdcall__)) DeleteTimerQueue (HANDLE);
 BOOL __attribute__((__stdcall__)) DeleteTimerQueueEx (HANDLE, HANDLE);
 BOOL __attribute__((__stdcall__)) DeleteTimerQueueTimer (HANDLE, HANDLE, HANDLE);


 BOOL __attribute__((__stdcall__)) DeleteVolumeMountPointA (LPCSTR);
 BOOL __attribute__((__stdcall__)) DeleteVolumeMountPointW (LPCWSTR);


 BOOL __attribute__((__stdcall__)) DnsHostnameToComputerNameA (LPCSTR, LPSTR, LPDWORD);
 BOOL __attribute__((__stdcall__)) DnsHostnameToComputerNameW (LPCWSTR, LPWSTR, LPDWORD);


 HANDLE __attribute__((__stdcall__)) FindFirstVolumeA (LPCSTR, DWORD);
 HANDLE __attribute__((__stdcall__)) FindFirstVolumeW (LPCWSTR, DWORD);


 HANDLE __attribute__((__stdcall__)) FindFirstVolumeMountPointA (LPSTR, LPSTR, DWORD);
 HANDLE __attribute__((__stdcall__)) FindFirstVolumeMountPointW (LPWSTR, LPWSTR, DWORD);


 BOOL __attribute__((__stdcall__)) FindNextVolumeA (HANDLE, LPCSTR, DWORD);
 BOOL __attribute__((__stdcall__)) FindNextVolumeW (HANDLE, LPWSTR, DWORD);


 BOOL __attribute__((__stdcall__)) FindNextVolumeMountPointA (HANDLE, LPSTR, DWORD);
 BOOL __attribute__((__stdcall__)) FindNextVolumeMountPointW (HANDLE, LPWSTR, DWORD);

 BOOL __attribute__((__stdcall__)) FindVolumeClose (HANDLE);
 BOOL __attribute__((__stdcall__)) FindVolumeMountPointClose (HANDLE);


 BOOL __attribute__((__stdcall__)) GetComputerNameExA
(COMPUTER_NAME_FORMAT, LPSTR, LPDWORD);
 BOOL __attribute__((__stdcall__)) GetComputerNameExW
(COMPUTER_NAME_FORMAT, LPWSTR, LPDWORD);

 BOOL __attribute__((__stdcall__)) GetFileSizeEx (HANDLE, PLARGE_INTEGER);
 BOOL __attribute__((__stdcall__)) GetProcessIoCounters (HANDLE, PIO_COUNTERS);


 UINT __attribute__((__stdcall__)) GetSystemWindowsDirectoryA (LPSTR, UINT);
 UINT __attribute__((__stdcall__)) GetSystemWindowsDirectoryW (LPWSTR, UINT);


 BOOL __attribute__((__stdcall__)) GetVolumeNameForVolumeMountPointA (LPCSTR, LPSTR, DWORD);
 BOOL __attribute__((__stdcall__)) GetVolumeNameForVolumeMountPointW
(LPCWSTR, LPWSTR, DWORD);


 BOOL __attribute__((__stdcall__)) GetVolumePathNameA (LPCSTR, LPSTR, DWORD);
 BOOL __attribute__((__stdcall__)) GetVolumePathNameW (LPCWSTR, LPWSTR, DWORD);

 BOOL __attribute__((__stdcall__)) GlobalMemoryStatusEx (LPMEMORYSTATUSEX);

 BOOL __attribute__((__stdcall__)) IsTokenRestricted (HANDLE);


 BOOL __attribute__((__stdcall__)) MoveFileWithProgressA
(LPCSTR, LPCSTR, LPPROGRESS_ROUTINE, LPVOID, DWORD);
 BOOL __attribute__((__stdcall__)) MoveFileWithProgressW
(LPCWSTR, LPCWSTR, LPPROGRESS_ROUTINE, LPVOID, DWORD);

 BOOL __attribute__((__stdcall__)) ProcessIdToSessionId (DWORD, DWORD *);

 BOOL __attribute__((__stdcall__)) QueueUserWorkItem (LPTHREAD_START_ROUTINE, PVOID, ULONG);

 BOOL __attribute__((__stdcall__)) RegisterWaitForSingleObject
(PHANDLE, HANDLE, WAITORTIMERCALLBACK, PVOID, ULONG, ULONG);
 HANDLE __attribute__((__stdcall__)) RegisterWaitForSingleObjectEx
(HANDLE, WAITORTIMERCALLBACK, PVOID, ULONG, ULONG);
 ULONG __attribute__((__stdcall__)) RemoveVectoredExceptionHandler (PVOID);


 BOOL __attribute__((__stdcall__)) ReplaceFileA
(LPCSTR, LPCSTR, LPCSTR, DWORD, LPVOID, LPVOID);
 BOOL __attribute__((__stdcall__)) ReplaceFileW
(LPCWSTR, LPCWSTR, LPCWSTR, DWORD, LPVOID, LPVOID);



 BOOL __attribute__((__stdcall__)) SetComputerNameExA (COMPUTER_NAME_FORMAT, LPCSTR);
 BOOL __attribute__((__stdcall__)) SetComputerNameExW (COMPUTER_NAME_FORMAT, LPCWSTR);


 BOOL __attribute__((__stdcall__)) SetVolumeMountPointA (LPCSTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) SetVolumeMountPointW (LPCWSTR, LPCWSTR);

 BOOL __attribute__((__stdcall__)) UnregisterWait (HANDLE);
 BOOL __attribute__((__stdcall__)) UnregisterWaitEx (HANDLE, HANDLE);

 BOOL __attribute__((__stdcall__)) AllocateUserPhysicalPages
(HANDLE, PULONG_PTR, PULONG_PTR);

 BOOL __attribute__((__stdcall__)) FreeUserPhysicalPages (HANDLE, PULONG_PTR, PULONG_PTR);

 BOOL __attribute__((__stdcall__)) MapUserPhysicalPages (PVOID, ULONG_PTR, PULONG_PTR);
 BOOL __attribute__((__stdcall__)) MapUserPhysicalPagesScatter
(PVOID *, ULONG_PTR, PULONG_PTR);
# 3054 "c:\\mingw\\include\\winbase.h" 3

# 45 "c:\\mingw\\include\\windows.h" 2 3

# 1 "c:\\mingw\\include\\wingdi.h" 1 3
# 33 "c:\\mingw\\include\\wingdi.h" 3
       
# 34 "c:\\mingw\\include\\wingdi.h" 3
# 42 "c:\\mingw\\include\\wingdi.h" 3

# 55 "c:\\mingw\\include\\wingdi.h" 3
typedef BYTE BCHAR;
# 1382 "c:\\mingw\\include\\wingdi.h" 3
typedef struct _ABC
{ int abcA;
  UINT abcB;
  int abcC;
} ABC, *LPABC;

typedef struct _ABCFLOAT
{ FLOAT abcfA;
  FLOAT abcfB;
  FLOAT abcfC;
} ABCFLOAT, *LPABCFLOAT;

typedef struct tagBITMAP
{ LONG bmType;
  LONG bmWidth;
  LONG bmHeight;
  LONG bmWidthBytes;
  WORD bmPlanes;
  WORD bmBitsPixel;
  LPVOID bmBits;
} BITMAP, *PBITMAP, *LPBITMAP;

typedef struct tagBITMAPCOREHEADER
{ DWORD bcSize;
  WORD bcWidth;
  WORD bcHeight;
  WORD bcPlanes;
  WORD bcBitCount;
} BITMAPCOREHEADER, *LPBITMAPCOREHEADER, *PBITMAPCOREHEADER;

#pragma pack (push, 1)

typedef struct tagRGBTRIPLE
{ BYTE rgbtBlue;
  BYTE rgbtGreen;
  BYTE rgbtRed;
} RGBTRIPLE, *LPRGBTRIPLE;

#pragma pack (2)

typedef struct tagBITMAPFILEHEADER
{ WORD bfType;
  DWORD bfSize;
  WORD bfReserved1;
  WORD bfReserved2;
  DWORD bfOffBits;
} BITMAPFILEHEADER, *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;

#pragma pack (pop)

typedef struct _BITMAPCOREINFO
{ BITMAPCOREHEADER bmciHeader;
  RGBTRIPLE bmciColors[1];
} BITMAPCOREINFO, *LPBITMAPCOREINFO, *PBITMAPCOREINFO;

typedef struct tagBITMAPINFOHEADE
{ DWORD biSize;
  LONG biWidth;
  LONG biHeight;
  WORD biPlanes;
  WORD biBitCount;
  DWORD biCompression;
  DWORD biSizeImage;
  LONG biXPelsPerMeter;
  LONG biYPelsPerMeter;
  DWORD biClrUsed;
  DWORD biClrImportant;
} BITMAPINFOHEADER, *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;

typedef struct tagRGBQUAD
{ BYTE rgbBlue;
  BYTE rgbGreen;
  BYTE rgbRed;
  BYTE rgbReserved;
} RGBQUAD, *LPRGBQUAD;

typedef struct tagBITMAPINFO
{ BITMAPINFOHEADER bmiHeader;
  RGBQUAD bmiColors[1];
} BITMAPINFO, *LPBITMAPINFO, *PBITMAPINFO;
typedef long FXPT16DOT16, *LPFXPT16DOT16;
typedef long FXPT2DOT30, *LPFXPT2DOT30;

typedef struct tagCIEXYZ
{ FXPT2DOT30 ciexyzX;
  FXPT2DOT30 ciexyzY;
  FXPT2DOT30 ciexyzZ;
} CIEXYZ, *LPCIEXYZ;

typedef struct tagCIEXYZTRIPLE
{ CIEXYZ ciexyzRed;
  CIEXYZ ciexyzGreen;
  CIEXYZ ciexyzBlue;
} CIEXYZTRIPLE, *LPCIEXYZTRIPLE;

typedef struct
{ DWORD bV4Size;
  LONG bV4Width;
  LONG bV4Height;
  WORD bV4Planes;
  WORD bV4BitCount;
  DWORD bV4V4Compression;
  DWORD bV4SizeImage;
  LONG bV4XPelsPerMeter;
  LONG bV4YPelsPerMeter;
  DWORD bV4ClrUsed;
  DWORD bV4ClrImportant;
  DWORD bV4RedMask;
  DWORD bV4GreenMask;
  DWORD bV4BlueMask;
  DWORD bV4AlphaMask;
  DWORD bV4CSType;
  CIEXYZTRIPLE bV4Endpoints;
  DWORD bV4GammaRed;
  DWORD bV4GammaGreen;
  DWORD bV4GammaBlue;
} BITMAPV4HEADER, *LPBITMAPV4HEADER, *PBITMAPV4HEADER;

typedef struct
{ DWORD bV5Size;
  LONG bV5Width;
  LONG bV5Height;
  WORD bV5Planes;
  WORD bV5BitCount;
  DWORD bV5Compression;
  DWORD bV5SizeImage;
  LONG bV5XPelsPerMeter;
  LONG bV5YPelsPerMeter;
  DWORD bV5ClrUsed;
  DWORD bV5ClrImportant;
  DWORD bV5RedMask;
  DWORD bV5GreenMask;
  DWORD bV5BlueMask;
  DWORD bV5AlphaMask;
  DWORD bV5CSType;
  CIEXYZTRIPLE bV5Endpoints;
  DWORD bV5GammaRed;
  DWORD bV5GammaGreen;
  DWORD bV5GammaBlue;
  DWORD bV5Intent;
  DWORD bV5ProfileData;
  DWORD bV5ProfileSize;
  DWORD bV5Reserved;
} BITMAPV5HEADER, *LPBITMAPV5HEADER, *PBITMAPV5HEADER;

typedef struct tagFONTSIGNATURE
{ DWORD fsUsb[4];
  DWORD fsCsb[2];
} FONTSIGNATURE, *LPFONTSIGNATURE;

typedef struct
{ UINT ciCharset;
  UINT ciACP;
  FONTSIGNATURE fs;
} CHARSETINFO, *LPCHARSETINFO;

typedef struct tagCOLORADJUSTMENT
{ WORD caSize;
  WORD caFlags;
  WORD caIlluminantIndex;
  WORD caRedGamma;
  WORD caGreenGamma;
  WORD caBlueGamma;
  WORD caReferenceBlack;
  WORD caReferenceWhite;
  SHORT caContrast;
  SHORT caBrightness;
  SHORT caColorfulness;
  SHORT caRedGreenTint;
} COLORADJUSTMENT, *LPCOLORADJUSTMENT;

typedef struct _devicemodeA
{ BYTE dmDeviceName[32];
  WORD dmSpecVersion;
  WORD dmDriverVersion;
  WORD dmSize;
  WORD dmDriverExtra;
  DWORD dmFields;
  __extension__ union
  { __extension__ struct
    { short dmOrientation;
      short dmPaperSize;
      short dmPaperLength;
      short dmPaperWidth;
      short dmScale;
      short dmCopies;
      short dmDefaultSource;
      short dmPrintQuality;
    } ;
    __extension__ struct
    { POINTL dmPosition;
      DWORD dmDisplayOrientation;
      DWORD dmDisplayFixedOutput;
    } ;
  } ;

  short dmColor;
  short dmDuplex;
  short dmYResolution;
  short dmTTOption;
  short dmCollate;
  BYTE dmFormName[32];
  WORD dmLogPixels;
  DWORD dmBitsPerPel;
  DWORD dmPelsWidth;
  DWORD dmPelsHeight;
  __extension__ union
  { DWORD dmDisplayFlags;
    DWORD dmNup;
  } ;

  DWORD dmDisplayFrequency;



  DWORD dmICMMethod;
  DWORD dmICMIntent;
  DWORD dmMediaType;
  DWORD dmDitherType;
  DWORD dmReserved1;
  DWORD dmReserved2;



  DWORD dmPanningWidth;
  DWORD dmPanningHeight;




} DEVMODEA, *LPDEVMODEA, *PDEVMODEA;

typedef struct _devicemodeW
{ WCHAR dmDeviceName[32];
  WORD dmSpecVersion;
  WORD dmDriverVersion;
  WORD dmSize;
  WORD dmDriverExtra;
  DWORD dmFields;
  __extension__ union
  { __extension__ struct
    { short dmOrientation;
      short dmPaperSize;
      short dmPaperLength;
      short dmPaperWidth;
      short dmScale;
      short dmCopies;
      short dmDefaultSource;
      short dmPrintQuality;
    } ;
    __extension__ struct
    { POINTL dmPosition;
      DWORD dmDisplayOrientation;
      DWORD dmDisplayFixedOutput;
    } ;
  } ;

  short dmColor;
  short dmDuplex;
  short dmYResolution;
  short dmTTOption;
  short dmCollate;
  WCHAR dmFormName[32];
  WORD dmLogPixels;
  DWORD dmBitsPerPel;
  DWORD dmPelsWidth;
  DWORD dmPelsHeight;
  __extension__ union
  { DWORD dmDisplayFlags;
    DWORD dmNup;
  } ;

  DWORD dmDisplayFrequency;



  DWORD dmICMMethod;
  DWORD dmICMIntent;
  DWORD dmMediaType;
  DWORD dmDitherType;
  DWORD dmReserved1;
  DWORD dmReserved2;



  DWORD dmPanningWidth;
  DWORD dmPanningHeight;




} DEVMODEW, *LPDEVMODEW, *PDEVMODEW;

typedef DEVMODEA DEVMODE, *PDEVMODE, *LPDEVMODE;

typedef struct tagDIBSECTION
{ BITMAP dsBm;
  BITMAPINFOHEADER dsBmih;
  DWORD dsBitfields[3];
  HANDLE dshSection;
  DWORD dsOffset;
} DIBSECTION;

typedef struct _DOCINFOA
{ int cbSize;
  LPCSTR lpszDocName;
  LPCSTR lpszOutput;
  LPCSTR lpszDatatype;
  DWORD fwType;
} DOCINFOA, *LPDOCINFOA;

typedef struct _DOCINFOW
{ int cbSize;
  LPCWSTR lpszDocName;
  LPCWSTR lpszOutput;
  LPCWSTR lpszDatatype;
  DWORD fwType;
} DOCINFOW, *LPDOCINFOW;

typedef DOCINFOA DOCINFO, *LPDOCINFO;

typedef struct tagEMR
{ DWORD iType;
  DWORD nSize;
} EMR, *PEMR;

typedef struct tagEMRANGLEARC
{ EMR emr;
  POINTL ptlCenter;
  DWORD nRadius;
  FLOAT eStartAngle;
  FLOAT eSweepAngle;
} EMRANGLEARC, *PEMRANGLEARC;

typedef struct tagEMRARC
{ EMR emr;
  RECTL rclBox;
  POINTL ptlStart;
  POINTL ptlEnd;
} EMRARC, *PEMRARC, EMRARCTO, *PEMRARCTO;

typedef struct tagEMRARC EMRCHORD, *PEMRCHORD, EMRPIE, *PEMRPIE;

typedef struct _XFORM
{ FLOAT eM11;
  FLOAT eM12;
  FLOAT eM21;
  FLOAT eM22;
  FLOAT eDx;
  FLOAT eDy;
} XFORM, *PXFORM, *LPXFORM;

typedef struct tagEMRBITBLT
{ EMR emr;
  RECTL rclBounds;
  LONG xDest;
  LONG yDest;
  LONG cxDest;
  LONG cyDest;
  DWORD dwRop;
  LONG xSrc;
  LONG ySrc;
  XFORM xformSrc;
  COLORREF crBkColorSrc;
  DWORD iUsageSrc;
  DWORD offBmiSrc;
  DWORD offBitsSrc;
  DWORD cbBitsSrc;
} EMRBITBLT, *PEMRBITBLT;

typedef struct tagLOGBRUSH
{ UINT lbStyle;
  COLORREF lbColor;
  LONG lbHatch;
} LOGBRUSH, *PLOGBRUSH, *LPLOGBRUSH;
typedef LOGBRUSH PATTERN, *PPATTERN, *LPPATTERN;

typedef struct tagEMRCREATEBRUSHINDIRECT
{ EMR emr;
  DWORD ihBrush;
  LOGBRUSH lb;
} EMRCREATEBRUSHINDIRECT, *PEMRCREATEBRUSHINDIRECT;
typedef LONG LCSCSTYPE;
typedef LONG LCSGAMUTMATCH;

typedef struct tagLOGCOLORSPACEA
{ DWORD lcsSignature;
  DWORD lcsVersion;
  DWORD lcsSize;
  LCSCSTYPE lcsCSType;
  LCSGAMUTMATCH lcsIntent;
  CIEXYZTRIPLE lcsEndpoints;
  DWORD lcsGammaRed;
  DWORD lcsGammaGreen;
  DWORD lcsGammaBlue;
  CHAR lcsFilename[260];
} LOGCOLORSPACEA, *LPLOGCOLORSPACEA;

typedef struct tagLOGCOLORSPACEW
{ DWORD lcsSignature;
  DWORD lcsVersion;
  DWORD lcsSize;
  LCSCSTYPE lcsCSType;
  LCSGAMUTMATCH lcsIntent;
  CIEXYZTRIPLE lcsEndpoints;
  DWORD lcsGammaRed;
  DWORD lcsGammaGreen;
  DWORD lcsGammaBlue;
  WCHAR lcsFilename[260];
} LOGCOLORSPACEW, *LPLOGCOLORSPACEW;

typedef LOGCOLORSPACEA LOGCOLORSPACE, *LPLOGCOLORSPACE;

typedef struct tagEMRCREATECOLORSPACE
{ EMR emr;
  DWORD ihCS;
  LOGCOLORSPACEW lcs;
} EMRCREATECOLORSPACE, *PEMRCREATECOLORSPACE;

typedef struct tagEMRCREATEDIBPATTERNBRUSHPT
{ EMR emr;
  DWORD ihBrush;
  DWORD iUsage;
  DWORD offBmi;
  DWORD cbBmi;
  DWORD offBits;
  DWORD cbBits;
} EMRCREATEDIBPATTERNBRUSHPT, *PEMRCREATEDIBPATTERNBRUSHPT;

typedef struct tagEMRCREATEMONOBRUSH
{ EMR emr;
  DWORD ihBrush;
  DWORD iUsage;
  DWORD offBmi;
  DWORD cbBmi;
  DWORD offBits;
  DWORD cbBits;
} EMRCREATEMONOBRUSH, *PEMRCREATEMONOBRUSH;

typedef struct tagPALETTEENTRY
{ BYTE peRed;
  BYTE peGreen;
  BYTE peBlue;
  BYTE peFlags;
} PALETTEENTRY, *LPPALETTEENTRY, *PPALETTEENTRY;

typedef struct tagLOGPALETTE
{ WORD palVersion;
  WORD palNumEntries;
  PALETTEENTRY palPalEntry[1];
} LOGPALETTE, *NPLOGPALETTE, *PLOGPALETTE, *LPLOGPALETTE;

typedef struct tagEMRCREATEPALETTE
{ EMR emr;
  DWORD ihPal;
  LOGPALETTE lgpl;
} EMRCREATEPALETTE, *PEMRCREATEPALETTE;

typedef struct tagLOGPEN
{ UINT lopnStyle;
  POINT lopnWidth;
  COLORREF lopnColor;
} LOGPEN, *PLOGPEN, *LPLOGPEN;

typedef struct tagEMRCREATEPEN
{ EMR emr;
  DWORD ihPen;
  LOGPEN lopn;
} EMRCREATEPEN, *PEMRCREATEPEN;

typedef struct tagEMRELLIPSE
{ EMR emr;
  RECTL rclBox;
} EMRELLIPSE, *PEMRELLIPSE, EMRRECTANGLE, *PEMRRECTANGLE;

typedef struct tagEMREOF
{ EMR emr;
  DWORD nPalEntries;
  DWORD offPalEntries;
  DWORD nSizeLast;
} EMREOF, *PEMREOF;

typedef struct tagEMREXCLUDECLIPRECT
{ EMR emr;
  RECTL rclClip;
} EMREXCLUDECLIPRECT, *PEMREXCLUDECLIPRECT;

typedef struct tagEMREXCLUDECLIPRECT EMRINTERSECTCLIPRECT;
typedef struct tagEMREXCLUDECLIPRECT *PEMRINTERSECTCLIPRECT;

typedef struct tagPANOSE
{ BYTE bFamilyType;
  BYTE bSerifStyle;
  BYTE bWeight;
  BYTE bProportion;
  BYTE bContrast;
  BYTE bStrokeVariation;
  BYTE bArmStyle;
  BYTE bLetterform;
  BYTE bMidline;
  BYTE bXHeight;
} PANOSE;

typedef struct tagLOGFONTA
{ LONG lfHeight;
  LONG lfWidth;
  LONG lfEscapement;
  LONG lfOrientation;
  LONG lfWeight;
  BYTE lfItalic;
  BYTE lfUnderline;
  BYTE lfStrikeOut;
  BYTE lfCharSet;
  BYTE lfOutPrecision;
  BYTE lfClipPrecision;
  BYTE lfQuality;
  BYTE lfPitchAndFamily;
  CHAR lfFaceName[32];
} LOGFONTA, *PLOGFONTA, *LPLOGFONTA;

typedef struct tagLOGFONTW
{ LONG lfHeight;
  LONG lfWidth;
  LONG lfEscapement;
  LONG lfOrientation;
  LONG lfWeight;
  BYTE lfItalic;
  BYTE lfUnderline;
  BYTE lfStrikeOut;
  BYTE lfCharSet;
  BYTE lfOutPrecision;
  BYTE lfClipPrecision;
  BYTE lfQuality;
  BYTE lfPitchAndFamily;
  WCHAR lfFaceName[32];
} LOGFONTW, *PLOGFONTW, *LPLOGFONTW;

typedef LOGFONTA LOGFONT, *PLOGFONT, *LPLOGFONT;

typedef struct tagEXTLOGFONTA
{ LOGFONTA elfLogFont;
  BYTE elfFullName[64];
  BYTE elfStyle[32];
  DWORD elfVersion;
  DWORD elfStyleSize;
  DWORD elfMatch;
  DWORD elfReserved;
  BYTE elfVendorId[4];
  DWORD elfCulture;
  PANOSE elfPanose;
} EXTLOGFONTA, *PEXTLOGFONTA, *LPEXTLOGFONTA;

typedef struct tagEXTLOGFONTW
{ LOGFONTW elfLogFont;
  WCHAR elfFullName[64];
  WCHAR elfStyle[32];
  DWORD elfVersion;
  DWORD elfStyleSize;
  DWORD elfMatch;
  DWORD elfReserved;
  BYTE elfVendorId[4];
  DWORD elfCulture;
  PANOSE elfPanose;
} EXTLOGFONTW, *PEXTLOGFONTW, *LPEXTLOGFONTW;

typedef EXTLOGFONTA EXTLOGFONT, *PEXTLOGFONT, *LPEXTLOGFONT;

typedef struct tagEMREXTCREATEFONTINDIRECTW
{ EMR emr;
  DWORD ihFont;
  EXTLOGFONTW elfw;
} EMREXTCREATEFONTINDIRECTW, *PEMREXTCREATEFONTINDIRECTW;

typedef struct tagEXTLOGPEN
{ UINT elpPenStyle;
  UINT elpWidth;
  UINT elpBrushStyle;
  COLORREF elpColor;
  LONG elpHatch;
  DWORD elpNumEntries;
  DWORD elpStyleEntry[1];
} EXTLOGPEN, *PEXTLOGPEN, *LPEXTLOGPEN;

typedef struct tagEMREXTCREATEPEN
{ EMR emr;
  DWORD ihPen;
  DWORD offBmi;
  DWORD cbBmi;
  DWORD offBits;
  DWORD cbBits;
  EXTLOGPEN elp;
} EMREXTCREATEPEN, *PEMREXTCREATEPEN;

typedef struct tagEMREXTFLOODFILL
{ EMR emr;
  POINTL ptlStart;
  COLORREF crColor;
  DWORD iMode;
} EMREXTFLOODFILL, *PEMREXTFLOODFILL;

typedef struct tagEMREXTSELECTCLIPRGN
{ EMR emr;
  DWORD cbRgnData;
  DWORD iMode;
  BYTE RgnData[1];
} EMREXTSELECTCLIPRGN, *PEMREXTSELECTCLIPRGN;

typedef struct tagEMRTEXT
{ POINTL ptlReference;
  DWORD nChars;
  DWORD offString;
  DWORD fOptions;
  RECTL rcl;
  DWORD offDx;
} EMRTEXT, *PEMRTEXT;

typedef struct tagEMREXTTEXTOUTA
{ EMR emr;
  RECTL rclBounds;
  DWORD iGraphicsMode;
  FLOAT exScale;
  FLOAT eyScale;
  EMRTEXT emrtext;
} EMREXTTEXTOUTA, *PEMREXTTEXTOUTA, EMREXTTEXTOUTW, *PEMREXTTEXTOUTW;

typedef struct tagEMRFILLPATH
{ EMR emr;
  RECTL rclBounds;
} EMRFILLPATH, *PEMRFILLPATH, EMRSTROKEANDFILLPATH, *PEMRSTROKEANDFILLPATH;

typedef struct tagEMRFILLPATH EMRSTROKEPATH, *PEMRSTROKEPATH;

typedef struct tagEMRFILLRGN
{ EMR emr;
  RECTL rclBounds;
  DWORD cbRgnData;
  DWORD ihBrush;
  BYTE RgnData[1];
} EMRFILLRGN, *PEMRFILLRGN;

typedef struct tagEMRFORMAT
{ DWORD dSignature;
  DWORD nVersion;
  DWORD cbData;
  DWORD offData;
} EMRFORMAT;

typedef struct tagEMRFRAMERGN
{ EMR emr;
  RECTL rclBounds;
  DWORD cbRgnData;
  DWORD ihBrush;
  SIZEL szlStroke;
  BYTE RgnData[1];
} EMRFRAMERGN, *PEMRFRAMERGN;

typedef struct tagEMRGDICOMMENT
{ EMR emr;
  DWORD cbData;
  BYTE Data[1];
} EMRGDICOMMENT, *PEMRGDICOMMENT;

typedef struct tagEMRINVERTRGN
{ EMR emr;
  RECTL rclBounds;
  DWORD cbRgnData;
  BYTE RgnData[1];
} EMRINVERTRGN, *PEMRINVERTRGN, EMRPAINTRGN, *PEMRPAINTRGN;

typedef struct tagEMRLINETO
{ EMR emr;
  POINTL ptl;
} EMRLINETO, *PEMRLINETO, EMRMOVETOEX, *PEMRMOVETOEX;

typedef struct tagEMRMASKBLT
{ EMR emr;
  RECTL rclBounds;
  LONG xDest;
  LONG yDest;
  LONG cxDest;
  LONG cyDest;
  DWORD dwRop;
  LONG xSrc;
  LONG ySrc;
  XFORM xformSrc;
  COLORREF crBkColorSrc;
  DWORD iUsageSrc;
  DWORD offBmiSrc;
  DWORD cbBmiSrc;
  DWORD offBitsSrc;
  DWORD cbBitsSrc;
  LONG xMask;
  LONG yMask;
  DWORD iUsageMask;
  DWORD offBmiMask;
  DWORD cbBmiMask;
  DWORD offBitsMask;
  DWORD cbBitsMask;
} EMRMASKBLT, *PEMRMASKBLT;

typedef struct tagEMRMODIFYWORLDTRANSFORM
{ EMR emr;
  XFORM xform;
  DWORD iMode;
} EMRMODIFYWORLDTRANSFORM, *PEMRMODIFYWORLDTRANSFORM;

typedef struct tagEMROFFSETCLIPRGN
{ EMR emr;
  POINTL ptlOffset;
} EMROFFSETCLIPRGN, *PEMROFFSETCLIPRGN;

typedef struct tagEMRPLGBLT
{ EMR emr;
  RECTL rclBounds;
  POINTL aptlDest[3];
  LONG xSrc;
  LONG ySrc;
  LONG cxSrc;
  LONG cySrc;
  XFORM xformSrc;
  COLORREF crBkColorSrc;
  DWORD iUsageSrc;
  DWORD offBmiSrc;
  DWORD cbBmiSrc;
  DWORD offBitsSrc;
  DWORD cbBitsSrc;
  LONG xMask;
  LONG yMask;
  DWORD iUsageMask;
  DWORD offBmiMask;
  DWORD cbBmiMask;
  DWORD offBitsMask;
  DWORD cbBitsMask;
} EMRPLGBLT, *PEMRPLGBLT;

typedef struct tagEMRPOLYDRAW
{ EMR emr;
  RECTL rclBounds;
  DWORD cptl;
  POINTL aptl[1];
  BYTE abTypes[1];
} EMRPOLYDRAW, *PEMRPOLYDRAW;

typedef struct tagEMRPOLYDRAW16
{ EMR emr;
  RECTL rclBounds;
  DWORD cpts;
  POINTS apts[1];
  BYTE abTypes[1];
} EMRPOLYDRAW16, *PEMRPOLYDRAW16;

typedef struct tagEMRPOLYLINE
{ EMR emr;
  RECTL rclBounds;
  DWORD cptl;
  POINTL aptl[1];
} EMRPOLYLINE, *PEMRPOLYLINE, EMRPOLYBEZIER, *PEMRPOLYBEZIER;

typedef struct tagEMRPOLYLINE EMRPOLYGON, *PEMRPOLYGON;
typedef struct tagEMRPOLYLINE EMRPOLYBEZIERTO, *PEMRPOLYBEZIERTO;
typedef struct tagEMRPOLYLINE EMRPOLYLINETO, *PEMRPOLYLINETO;

typedef struct tagEMRPOLYLINE16
{ EMR emr;
  RECTL rclBounds;
  DWORD cpts;
  POINTL apts[1];
} EMRPOLYLINE16, *PEMRPOLYLINE16, EMRPOLYBEZIER16, *PEMRPOLYBEZIER16;

typedef struct tagEMRPOLYLINE16 EMRPOLYGON16, *PEMRPOLYGON16;
typedef struct tagEMRPOLYLINE16 EMRPOLYBEZIERTO16, *PEMRPOLYBEZIERTO16;
typedef struct tagEMRPOLYLINE16 EMRPOLYLINETO16, *PEMRPOLYLINETO16;

typedef struct tagEMRPOLYPOLYLINE
{ EMR emr;
  RECTL rclBounds;
  DWORD nPolys;
  DWORD cptl;
  DWORD aPolyCounts[1];
  POINTL aptl[1];
} EMRPOLYPOLYLINE, *PEMRPOLYPOLYLINE, EMRPOLYPOLYGON, *PEMRPOLYPOLYGON;

typedef struct tagEMRPOLYPOLYLINE16
{ EMR emr;
  RECTL rclBounds;
  DWORD nPolys;
  DWORD cpts;
  DWORD aPolyCounts[1];
  POINTS apts[1];
} EMRPOLYPOLYLINE16, *PEMRPOLYPOLYLINE16, EMRPOLYPOLYGON16, *PEMRPOLYPOLYGON16;

typedef struct tagEMRPOLYTEXTOUTA
{ EMR emr;
  RECTL rclBounds;
  DWORD iGraphicsMode;
  FLOAT exScale;
  FLOAT eyScale;
  LONG cStrings;
  EMRTEXT aemrtext[1];
} EMRPOLYTEXTOUTA, *PEMRPOLYTEXTOUTA, EMRPOLYTEXTOUTW, *PEMRPOLYTEXTOUTW;

typedef struct tagEMRRESIZEPALETTE
{ EMR emr;
  DWORD ihPal;
  DWORD cEntries;
} EMRRESIZEPALETTE, *PEMRRESIZEPALETTE;

typedef struct tagEMRRESTOREDC
{ EMR emr;
  LONG iRelative;
} EMRRESTOREDC, *PEMRRESTOREDC;

typedef struct tagEMRROUNDRECT
{ EMR emr;
  RECTL rclBox;
  SIZEL szlCorner;
} EMRROUNDRECT, *PEMRROUNDRECT;

typedef struct tagEMRSCALEVIEWPORTEXTEX
{ EMR emr;
  LONG xNum;
  LONG xDenom;
  LONG yNum;
  LONG yDenom;
} EMRSCALEVIEWPORTEXTEX, *PEMRSCALEVIEWPORTEXTEX;

typedef struct tagEMRSCALEVIEWPORTEXTEX EMRSCALEWINDOWEXTEX;
typedef struct tagEMRSCALEVIEWPORTEXTEX *PEMRSCALEWINDOWEXTEX;

typedef struct tagEMRSELECTCOLORSPACE
{ EMR emr;
  DWORD ihCS;
} EMRSELECTCOLORSPACE, *PEMRSELECTCOLORSPACE, EMRDELETECOLORSPACE;

typedef struct tagEMRSELECTCOLORSPACE *PEMRDELETECOLORSPACE;

typedef struct tagEMRSELECTOBJECT
{ EMR emr;
  DWORD ihObject;
} EMRSELECTOBJECT, *PEMRSELECTOBJECT, EMRDELETEOBJECT, *PEMRDELETEOBJECT;

typedef struct tagEMRSELECTPALETTE
{ EMR emr;
  DWORD ihPal;
} EMRSELECTPALETTE, *PEMRSELECTPALETTE;

typedef struct tagEMRSETARCDIRECTION
{ EMR emr;
  DWORD iArcDirection;
} EMRSETARCDIRECTION, *PEMRSETARCDIRECTION;

typedef struct tagEMRSETTEXTCOLOR
{ EMR emr;
  COLORREF crColor;
} EMRSETBKCOLOR, *PEMRSETBKCOLOR, EMRSETTEXTCOLOR, *PEMRSETTEXTCOLOR;

typedef struct tagEMRSETCOLORADJUSTMENT
{ EMR emr;
  COLORADJUSTMENT ColorAdjustment;
} EMRSETCOLORADJUSTMENT, *PEMRSETCOLORADJUSTMENT;

typedef struct tagEMRSETDIBITSTODEVICE
{ EMR emr;
  RECTL rclBounds;
  LONG xDest;
  LONG yDest;
  LONG xSrc;
  LONG ySrc;
  LONG cxSrc;
  LONG cySrc;
  DWORD offBmiSrc;
  DWORD cbBmiSrc;
  DWORD offBitsSrc;
  DWORD cbBitsSrc;
  DWORD iUsageSrc;
  DWORD iStartScan;
  DWORD cScans;
} EMRSETDIBITSTODEVICE, *PEMRSETDIBITSTODEVICE;

typedef struct tagEMRSETMAPPERFLAGS
{ EMR emr;
  DWORD dwFlags;
} EMRSETMAPPERFLAGS, *PEMRSETMAPPERFLAGS;

typedef struct tagEMRSETMITERLIMIT
{ EMR emr;
  FLOAT eMiterLimit;
} EMRSETMITERLIMIT, *PEMRSETMITERLIMIT;

typedef struct tagEMRSETPALETTEENTRIES
{ EMR emr;
  DWORD ihPal;
  DWORD iStart;
  DWORD cEntries;
  PALETTEENTRY aPalEntries[1];
} EMRSETPALETTEENTRIES, *PEMRSETPALETTEENTRIES;

typedef struct tagEMRSETPIXELV
{ EMR emr;
  POINTL ptlPixel;
  COLORREF crColor;
} EMRSETPIXELV, *PEMRSETPIXELV;

typedef struct tagEMRSETVIEWPORTEXTEX
{ EMR emr;
  SIZEL szlExtent;
} EMRSETVIEWPORTEXTEX, *PEMRSETVIEWPORTEXTEX, EMRSETWINDOWEXTEX;

typedef struct tagEMRSETVIEWPORTEXTEX *PEMRSETWINDOWEXTEX;

typedef struct tagEMRSETVIEWPORTORGEX
{ EMR emr;
  POINTL ptlOrigin;
} EMRSETVIEWPORTORGEX, *PEMRSETVIEWPORTORGEX, EMRSETWINDOWORGEX;

typedef struct tagEMRSETVIEWPORTORGEX *PEMRSETWINDOWORGEX;
typedef struct tagEMRSETVIEWPORTORGEX EMRSETBRUSHORGEX;
typedef struct tagEMRSETVIEWPORTORGEX *PEMRSETBRUSHORGEX;

typedef struct tagEMRSETWORLDTRANSFORM
{ EMR emr;
  XFORM xform;
} EMRSETWORLDTRANSFORM, *PEMRSETWORLDTRANSFORM;

typedef struct tagEMRSTRETCHBLT
{ EMR emr;
  RECTL rclBounds;
  LONG xDest;
  LONG yDest;
  LONG cxDest;
  LONG cyDest;
  DWORD dwRop;
  LONG xSrc;
  LONG ySrc;
  XFORM xformSrc;
  COLORREF crBkColorSrc;
  DWORD iUsageSrc;
  DWORD offBmiSrc;
  DWORD cbBmiSrc;
  DWORD offBitsSrc;
  DWORD cbBitsSrc;
  LONG cxSrc;
  LONG cySrc;
} EMRSTRETCHBLT, *PEMRSTRETCHBLT;

typedef struct tagEMRSTRETCHDIBITS
{ EMR emr;
  RECTL rclBounds;
  LONG xDest;
  LONG yDest;
  LONG xSrc;
  LONG ySrc;
  LONG cxSrc;
  LONG cySrc;
  DWORD offBmiSrc;
  DWORD cbBmiSrc;
  DWORD offBitsSrc;
  DWORD cbBitsSrc;
  DWORD iUsageSrc;
  DWORD dwRop;
  LONG cxDest;
  LONG cyDest;
} EMRSTRETCHDIBITS, *PEMRSTRETCHDIBITS;

typedef struct tagABORTPATH
{ EMR emr;
} EMRABORTPATH, *PEMRABORTPATH, EMRBEGINPATH, *PEMRBEGINPATH;

typedef struct tagABORTPATH EMRENDPATH, *PEMRENDPATH;
typedef struct tagABORTPATH EMRCLOSEFIGURE, *PEMRCLOSEFIGURE;
typedef struct tagABORTPATH EMRFLATTENPATH, *PEMRFLATTENPATH;
typedef struct tagABORTPATH EMRWIDENPATH, *PEMRWIDENPATH;
typedef struct tagABORTPATH EMRSETMETARGN, *PEMRSETMETARGN;
typedef struct tagABORTPATH EMRSAVEDC, *PEMRSAVEDC;
typedef struct tagABORTPATH EMRREALIZEPALETTE, *PEMRREALIZEPALETTE;

typedef struct tagEMRSELECTCLIPPATH
{ EMR emr;
  DWORD iMode;
} EMRSELECTCLIPPATH, *PEMRSELECTCLIPPATH, EMRSETBKMODE, *PEMRSETBKMODE;

typedef struct tagEMRSELECTCLIPPATH EMRSETMAPMODE, *PEMRSETMAPMODE;
typedef struct tagEMRSELECTCLIPPATH EMRSETPOLYFILLMODE, *PEMRSETPOLYFILLMODE;
typedef struct tagEMRSELECTCLIPPATH EMRSETROP2, *PEMRSETROP2;
typedef struct tagEMRSELECTCLIPPATH EMRSETSTRETCHBLTMODE;
typedef struct tagEMRSELECTCLIPPATH *PEMRSETSTRETCHBLTMODE;
typedef struct tagEMRSELECTCLIPPATH EMRSETTEXTALIGN, *PEMRSETTEXTALIGN;
typedef struct tagEMRSELECTCLIPPATH EMRENABLEICM, *PEMRENABLEICM;

#pragma pack (push, 2)

typedef struct tagMETAHEADER
{ WORD mtType;
  WORD mtHeaderSize;
  WORD mtVersion;
  DWORD mtSize;
  WORD mtNoObjects;
  DWORD mtMaxRecord;
  WORD mtNoParameters;
} METAHEADER, *PMETAHEADER, *LPMETAHEADER;

#pragma pack (pop)

typedef struct tagENHMETAHEADER
{ DWORD iType;
  DWORD nSize;
  RECTL rclBounds;
  RECTL rclFrame;
  DWORD dSignature;
  DWORD nVersion;
  DWORD nBytes;
  DWORD nRecords;
  WORD nHandles;
  WORD sReserved;
  DWORD nDescription;
  DWORD offDescription;
  DWORD nPalEntries;
  SIZEL szlDevice;
  SIZEL szlMillimeters;



  DWORD cbPixelFormat;
  DWORD offPixelFormat;
  DWORD bOpenGL;



  SIZEL szlMicrometers;




} ENHMETAHEADER, *LPENHMETAHEADER;

typedef struct tagMETARECORD
{ DWORD rdSize;
  WORD rdFunction;
  WORD rdParm[1];
} METARECORD, *PMETARECORD, *LPMETARECORD;

typedef struct tagENHMETARECORD
{ DWORD iType;
  DWORD nSize;
  DWORD dParm[1];
} ENHMETARECORD, *LPENHMETARECORD;

typedef struct tagHANDLETABLE
{ HGDIOBJ objectHandle[1];
} HANDLETABLE, *LPHANDLETABLE;

typedef struct tagTEXTMETRICA
{ LONG tmHeight;
  LONG tmAscent;
  LONG tmDescent;
  LONG tmInternalLeading;
  LONG tmExternalLeading;
  LONG tmAveCharWidth;
  LONG tmMaxCharWidth;
  LONG tmWeight;
  LONG tmOverhang;
  LONG tmDigitizedAspectX;
  LONG tmDigitizedAspectY;
  BYTE tmFirstChar;
  BYTE tmLastChar;
  BYTE tmDefaultChar;
  BYTE tmBreakChar;
  BYTE tmItalic;
  BYTE tmUnderlined;
  BYTE tmStruckOut;
  BYTE tmPitchAndFamily;
  BYTE tmCharSet;
} TEXTMETRICA, *PTEXTMETRICA, *LPTEXTMETRICA;

typedef struct tagTEXTMETRICW
{ LONG tmHeight;
  LONG tmAscent;
  LONG tmDescent;
  LONG tmInternalLeading;
  LONG tmExternalLeading;
  LONG tmAveCharWidth;
  LONG tmMaxCharWidth;
  LONG tmWeight;
  LONG tmOverhang;
  LONG tmDigitizedAspectX;
  LONG tmDigitizedAspectY;
  WCHAR tmFirstChar;
  WCHAR tmLastChar;
  WCHAR tmDefaultChar;
  WCHAR tmBreakChar;
  BYTE tmItalic;
  BYTE tmUnderlined;
  BYTE tmStruckOut;
  BYTE tmPitchAndFamily;
  BYTE tmCharSet;
} TEXTMETRICW, *PTEXTMETRICW, *LPTEXTMETRICW;

typedef TEXTMETRICA TEXTMETRIC, *PTEXTMETRIC, *LPTEXTMETRIC;

typedef struct _RGNDATAHEADER
{ DWORD dwSize;
  DWORD iType;
  DWORD nCount;
  DWORD nRgnSize;
  RECT rcBound;
} RGNDATAHEADER;

typedef struct _RGNDATA
{ RGNDATAHEADER rdh;
  char Buffer[1];
} RGNDATA, *PRGNDATA, *LPRGNDATA;


typedef struct tagGCP_RESULTSA
{ DWORD lStructSize;
  LPSTR lpOutString;
  UINT *lpOrder;
  INT *lpDx;
  INT *lpCaretPos;
  LPSTR lpClass;
  LPWSTR lpGlyphs;
  UINT nGlyphs;
  UINT nMaxFit;
} GCP_RESULTSA, *LPGCP_RESULTSA;

typedef struct tagGCP_RESULTSW
{ DWORD lStructSize;
  LPWSTR lpOutString;
  UINT *lpOrder;
  INT *lpDx;
  INT *lpCaretPos;
  LPSTR lpClass;
  LPWSTR lpGlyphs;
  UINT nGlyphs;
  UINT nMaxFit;
} GCP_RESULTSW, *LPGCP_RESULTSW;

typedef GCP_RESULTSA GCP_RESULTS, *LPGCP_RESULTS;

typedef struct _GLYPHMETRICS
{ UINT gmBlackBoxX;
  UINT gmBlackBoxY;
  POINT gmptGlyphOrigin;
  short gmCellIncX;
  short gmCellIncY;
} GLYPHMETRICS, *LPGLYPHMETRICS;

typedef struct tagKERNINGPAIR
{ WORD wFirst;
  WORD wSecond;
  int iKernAmount;
} KERNINGPAIR, *LPKERNINGPAIR;

typedef struct _FIXED
{ WORD fract;
  short value;
} FIXED;

typedef struct _MAT2
{ FIXED eM11;
  FIXED eM12;
  FIXED eM21;
  FIXED eM22;
} MAT2, *LPMAT2;

typedef struct _OUTLINETEXTMETRICA
{ UINT otmSize;
  TEXTMETRICA otmTextMetrics;
  BYTE otmFiller;
  PANOSE otmPanoseNumber;
  UINT otmfsSelection;
  UINT otmfsType;
  int otmsCharSlopeRise;
  int otmsCharSlopeRun;
  int otmItalicAngle;
  UINT otmEMSquare;
  int otmAscent;
  int otmDescent;
  UINT otmLineGap;
  UINT otmsCapEmHeight;
  UINT otmsXHeight;
  RECT otmrcFontBox;
  int otmMacAscent;
  int otmMacDescent;
  UINT otmMacLineGap;
  UINT otmusMinimumPPEM;
  POINT otmptSubscriptSize;
  POINT otmptSubscriptOffset;
  POINT otmptSuperscriptSize;
  POINT otmptSuperscriptOffset;
  UINT otmsStrikeoutSize;
  int otmsStrikeoutPosition;
  int otmsUnderscoreSize;
  int otmsUnderscorePosition;
  PSTR otmpFamilyName;
  PSTR otmpFaceName;
  PSTR otmpStyleName;
  PSTR otmpFullName;
} OUTLINETEXTMETRICA, *POUTLINETEXTMETRICA, *LPOUTLINETEXTMETRICA;

typedef struct _OUTLINETEXTMETRICW
{ UINT otmSize;
  TEXTMETRICW otmTextMetrics;
  BYTE otmFiller;
  PANOSE otmPanoseNumber;
  UINT otmfsSelection;
  UINT otmfsType;
  int otmsCharSlopeRise;
  int otmsCharSlopeRun;
  int otmItalicAngle;
  UINT otmEMSquare;
  int otmAscent;
  int otmDescent;
  UINT otmLineGap;
  UINT otmsCapEmHeight;
  UINT otmsXHeight;
  RECT otmrcFontBox;
  int otmMacAscent;
  int otmMacDescent;
  UINT otmMacLineGap;
  UINT otmusMinimumPPEM;
  POINT otmptSubscriptSize;
  POINT otmptSubscriptOffset;
  POINT otmptSuperscriptSize;
  POINT otmptSuperscriptOffset;
  UINT otmsStrikeoutSize;
  int otmsStrikeoutPosition;
  int otmsUnderscoreSize;
  int otmsUnderscorePosition;
  PSTR otmpFamilyName;
  PSTR otmpFaceName;
  PSTR otmpStyleName;
  PSTR otmpFullName;
} OUTLINETEXTMETRICW, *POUTLINETEXTMETRICW, *LPOUTLINETEXTMETRICW;

typedef OUTLINETEXTMETRICA OUTLINETEXTMETRIC;
typedef POUTLINETEXTMETRICA POUTLINETEXTMETRIC;
typedef LPOUTLINETEXTMETRICA LPOUTLINETEXTMETRIC;

typedef struct _RASTERIZER_STATUS
{ short nSize;
  short wFlags;
  short nLanguageID;
} RASTERIZER_STATUS, *LPRASTERIZER_STATUS;

typedef struct _POLYTEXTA
{ int x;
  int y;
  UINT n;
  LPCSTR lpstr;
  UINT uiFlags;
  RECT rcl;
  int *pdx;
} POLYTEXTA, *PPOLYTEXTA, *LPPOLYTEXTA;

typedef struct _POLYTEXTW
{ int x;
  int y;
  UINT n;
  LPCWSTR lpstr;
  UINT uiFlags;
  RECT rcl;
  int *pdx;
} POLYTEXTW, *PPOLYTEXTW, *LPPOLYTEXTW;

typedef POLYTEXTA POLYTEXT, *PPOLYTEXT, *LPPOLYTEXT;

typedef struct tagPIXELFORMATDESCRIPTOR
{ WORD nSize;
  WORD nVersion;
  DWORD dwFlags;
  BYTE iPixelType;
  BYTE cColorBits;
  BYTE cRedBits;
  BYTE cRedShift;
  BYTE cGreenBits;
  BYTE cGreenShift;
  BYTE cBlueBits;
  BYTE cBlueShift;
  BYTE cAlphaBits;
  BYTE cAlphaShift;
  BYTE cAccumBits;
  BYTE cAccumRedBits;
  BYTE cAccumGreenBits;
  BYTE cAccumBlueBits;
  BYTE cAccumAlphaBits;
  BYTE cDepthBits;
  BYTE cStencilBits;
  BYTE cAuxBuffers;
  BYTE iLayerType;
  BYTE bReserved;
  DWORD dwLayerMask;
  DWORD dwVisibleMask;
  DWORD dwDamageMask;
} PIXELFORMATDESCRIPTOR, *PPIXELFORMATDESCRIPTOR, *LPPIXELFORMATDESCRIPTOR;

typedef struct tagMETAFILEPICT
{ LONG mm;
  LONG xExt;
  LONG yExt;
  HMETAFILE hMF;
} METAFILEPICT, *LPMETAFILEPICT;

typedef struct tagLOCALESIGNATURE
{ DWORD lsUsb[4];
  DWORD lsCsbDefault[2];
  DWORD lsCsbSupported[2];
} LOCALESIGNATURE, *PLOCALESIGNATURE, *LPLOCALESIGNATURE;
typedef LONG LCSTYPE;

#pragma pack (push, 4)

typedef struct tagNEWTEXTMETRICA
{ LONG tmHeight;
  LONG tmAscent;
  LONG tmDescent;
  LONG tmInternalLeading;
  LONG tmExternalLeading;
  LONG tmAveCharWidth;
  LONG tmMaxCharWidth;
  LONG tmWeight;
  LONG tmOverhang;
  LONG tmDigitizedAspectX;
  LONG tmDigitizedAspectY;
  BYTE tmFirstChar;
  BYTE tmLastChar;
  BYTE tmDefaultChar;
  BYTE tmBreakChar;
  BYTE tmItalic;
  BYTE tmUnderlined;
  BYTE tmStruckOut;
  BYTE tmPitchAndFamily;
  BYTE tmCharSet;
  DWORD ntmFlags;
  UINT ntmSizeEM;
  UINT ntmCellHeight;
  UINT ntmAvgWidth;
} NEWTEXTMETRICA, *PNEWTEXTMETRICA, *LPNEWTEXTMETRICA;

typedef struct tagNEWTEXTMETRICW
{ LONG tmHeight;
  LONG tmAscent;
  LONG tmDescent;
  LONG tmInternalLeading;
  LONG tmExternalLeading;
  LONG tmAveCharWidth;
  LONG tmMaxCharWidth;
  LONG tmWeight;
  LONG tmOverhang;
  LONG tmDigitizedAspectX;
  LONG tmDigitizedAspectY;
  WCHAR tmFirstChar;
  WCHAR tmLastChar;
  WCHAR tmDefaultChar;
  WCHAR tmBreakChar;
  BYTE tmItalic;
  BYTE tmUnderlined;
  BYTE tmStruckOut;
  BYTE tmPitchAndFamily;
  BYTE tmCharSet;
  DWORD ntmFlags;
  UINT ntmSizeEM;
  UINT ntmCellHeight;
  UINT ntmAvgWidth;
} NEWTEXTMETRICW, *PNEWTEXTMETRICW, *LPNEWTEXTMETRICW;

#pragma pack (pop)

typedef NEWTEXTMETRICA NEWTEXTMETRIC, *PNEWTEXTMETRIC, *LPNEWTEXTMETRIC;

typedef struct tagNEWTEXTMETRICEXA
{ NEWTEXTMETRICA ntmTm;
  FONTSIGNATURE ntmFontSig;
} NEWTEXTMETRICEXA;

typedef struct tagNEWTEXTMETRICEXW
{ NEWTEXTMETRICW ntmTm;
  FONTSIGNATURE ntmFontSig;
} NEWTEXTMETRICEXW;

typedef NEWTEXTMETRICEXA NEWTEXTMETRICEX;

typedef struct tagPELARRAY
{ LONG paXCount;
  LONG paYCount;
  LONG paXExt;
  LONG paYExt;
  BYTE paRGBs;
} PELARRAY, *PPELARRAY, *LPPELARRAY;

typedef struct tagENUMLOGFONTA
{ LOGFONTA elfLogFont;
  BYTE elfFullName[64];
  BYTE elfStyle[32];
} ENUMLOGFONTA, *LPENUMLOGFONTA;

typedef struct tagENUMLOGFONTW
{ LOGFONTW elfLogFont;
  WCHAR elfFullName[64];
  WCHAR elfStyle[32];
} ENUMLOGFONTW, *LPENUMLOGFONTW;

typedef ENUMLOGFONTA ENUMLOGFONT, *LPENUMLOGFONT;

typedef struct tagENUMLOGFONTEXA
{ LOGFONTA elfLogFont;
  BYTE elfFullName[64];
  BYTE elfStyle[32];
  BYTE elfScript[32];
} ENUMLOGFONTEXA, *LPENUMLOGFONTEXA;

typedef struct tagENUMLOGFONTEXW
{ LOGFONTW elfLogFont;
  WCHAR elfFullName[64];
  WCHAR elfStyle[32];
  WCHAR elfScript[32];
} ENUMLOGFONTEXW, *LPENUMLOGFONTEXW;

typedef ENUMLOGFONTEXA ENUMLOGFONTEX, *LPENUMLOGFONTEX;

typedef struct tagPOINTFX
{ FIXED x;
  FIXED y;
} POINTFX, *LPPOINTFX;

typedef struct tagTTPOLYCURVE
{ WORD wType;
  WORD cpfx;
  POINTFX apfx[1];
} TTPOLYCURVE, *LPTTPOLYCURVE;

typedef struct tagTTPOLYGONHEADER
{ DWORD cb;
  DWORD dwType;
  POINTFX pfxStart;
} TTPOLYGONHEADER, *LPTTPOLYGONHEADER;

typedef struct _POINTFLOAT
{ FLOAT x;
  FLOAT y;
} POINTFLOAT, *PPOINTFLOAT;

typedef struct _GLYPHMETRICSFLOAT
{ FLOAT gmfBlackBoxX;
  FLOAT gmfBlackBoxY;
  POINTFLOAT gmfptGlyphOrigin;
  FLOAT gmfCellIncX;
  FLOAT gmfCellIncY;
} GLYPHMETRICSFLOAT, *PGLYPHMETRICSFLOAT, *LPGLYPHMETRICSFLOAT;

typedef struct tagLAYERPLANEDESCRIPTOR
{ WORD nSize;
  WORD nVersion;
  DWORD dwFlags;
  BYTE iPixelType;
  BYTE cColorBits;
  BYTE cRedBits;
  BYTE cRedShift;
  BYTE cGreenBits;
  BYTE cGreenShift;
  BYTE cBlueBits;
  BYTE cBlueShift;
  BYTE cAlphaBits;
  BYTE cAlphaShift;
  BYTE cAccumBits;
  BYTE cAccumRedBits;
  BYTE cAccumGreenBits;
  BYTE cAccumBlueBits;
  BYTE cAccumAlphaBits;
  BYTE cDepthBits;
  BYTE cStencilBits;
  BYTE cAuxBuffers;
  BYTE iLayerPlane;
  BYTE bReserved;
  COLORREF crTransparent;
} LAYERPLANEDESCRIPTOR, *PLAYERPLANEDESCRIPTOR, *LPLAYERPLANEDESCRIPTOR;

typedef struct _BLENDFUNCTION
{ BYTE BlendOp;
  BYTE BlendFlags;
  BYTE SourceConstantAlpha;
  BYTE AlphaFormat;
} BLENDFUNCTION, *PBLENDFUNCTION, *LPBLENDFUNCTION;


typedef struct _DESIGNVECTOR
{ DWORD dvReserved;
  DWORD dvNumAxes;
  LONG dvValues[16];
} DESIGNVECTOR, *PDESIGNVECTOR, *LPDESIGNVECTOR;

typedef USHORT COLOR16;

typedef struct _TRIVERTEX
{ LONG x;
  LONG y;
  COLOR16 Red;
  COLOR16 Green;
  COLOR16 Blue;
  COLOR16 Alpha;
} TRIVERTEX, *PTRIVERTEX, *LPTRIVERTEX;

typedef struct _GRADIENT_TRIANGLE
{ ULONG Vertex1;
  ULONG Vertex2;
  ULONG Vertex3;
} GRADIENT_TRIANGLE, *PGRADIENT_TRIANGLE, *LPGRADIENT_TRIANGLE;

typedef struct _GRADIENT_RECT
{ ULONG UpperLeft;
  ULONG LowerRight;
}GRADIENT_RECT, *PGRADIENT_RECT, *LPGRADIENT_RECT;

typedef struct _DISPLAY_DEVICEA
{ DWORD cb;
  CHAR DeviceName[32];
  CHAR DeviceString[128];
  DWORD StateFlags;
  CHAR DeviceID[128];
  CHAR DeviceKey[128];
} DISPLAY_DEVICEA, *PDISPLAY_DEVICEA, *LPDISPLAY_DEVICEA;

typedef struct _DISPLAY_DEVICEW
{ DWORD cb;
  WCHAR DeviceName[32];
  WCHAR DeviceString[128];
  DWORD StateFlags;
  WCHAR DeviceID[128];
  WCHAR DeviceKey[128];
} DISPLAY_DEVICEW, *PDISPLAY_DEVICEW, *LPDISPLAY_DEVICEW;

typedef DISPLAY_DEVICEA DISPLAY_DEVICE, *PDISPLAY_DEVICE, *LPDISPLAY_DEVICE;

typedef BOOL (__attribute__((__stdcall__)) *ABORTPROC) (HDC, int);

typedef int (__attribute__((__stdcall__)) *MFENUMPROC)
(HDC, HANDLETABLE *, METARECORD *, int, LPARAM);

typedef int (__attribute__((__stdcall__)) *ENHMFENUMPROC)
(HDC, HANDLETABLE *, const ENHMETARECORD *, int, LPARAM);

typedef int (__attribute__((__stdcall__)) *OLDFONTENUMPROCA)
(const LOGFONTA *, const TEXTMETRICA *, DWORD, LPARAM);

typedef int (__attribute__((__stdcall__)) *OLDFONTENUMPROCW)
(const LOGFONTW *, const TEXTMETRICW *, DWORD, LPARAM);


typedef OLDFONTENUMPROCA FONTENUMPROCA;
typedef OLDFONTENUMPROCW FONTENUMPROCW;


typedef int (__attribute__((__stdcall__)) *ICMENUMPROCA) (LPSTR, LPARAM);
typedef int (__attribute__((__stdcall__)) *ICMENUMPROCW) (LPWSTR, LPARAM);

typedef void (__attribute__((__stdcall__)) *GOBJENUMPROC) (LPVOID, LPARAM);
typedef void (__attribute__((__stdcall__)) *LINEDDAPROC) (int, int, LPARAM);
typedef UINT (__attribute__((__stdcall__)) *LPFNDEVMODE)
(HWND, HMODULE, LPDEVMODEA, LPSTR, LPSTR, LPDEVMODEA, LPSTR, UINT);

typedef DWORD (__attribute__((__stdcall__)) *LPFNDEVCAPS) (LPSTR, LPSTR, UINT, LPSTR, LPDEVMODEA);
# 2966 "c:\\mingw\\include\\wingdi.h" 3
 int __attribute__((__stdcall__)) AbortDoc (HDC);
 BOOL __attribute__((__stdcall__)) AbortPath (HDC);


 int __attribute__((__stdcall__)) AddFontResourceA (LPCSTR);
 int __attribute__((__stdcall__)) AddFontResourceW (LPCWSTR);

 BOOL __attribute__((__stdcall__)) AngleArc (HDC, int, int, DWORD, FLOAT, FLOAT);

 BOOL __attribute__((__stdcall__)) AnimatePalette
(HPALETTE, UINT, UINT, const PALETTEENTRY *);

 BOOL __attribute__((__stdcall__)) Arc (HDC, int, int, int, int, int, int, int, int);
 BOOL __attribute__((__stdcall__)) ArcTo (HDC, int, int, int, int, int, int, int, int);
 BOOL __attribute__((__stdcall__)) BeginPath (HDC);
 BOOL __attribute__((__stdcall__)) BitBlt (HDC, int, int, int, int, HDC, int, int, DWORD);
 BOOL __attribute__((__stdcall__)) CancelDC (HDC);
 BOOL __attribute__((__stdcall__)) CheckColorsInGamut (HDC, PVOID, PVOID, DWORD);
 BOOL __attribute__((__stdcall__)) Chord (HDC, int, int, int, int, int, int, int, int);
 int __attribute__((__stdcall__)) ChoosePixelFormat (HDC, const PIXELFORMATDESCRIPTOR *);
 HENHMETAFILE __attribute__((__stdcall__)) CloseEnhMetaFile (HDC);
 BOOL __attribute__((__stdcall__)) CloseFigure (HDC);
 HMETAFILE __attribute__((__stdcall__)) CloseMetaFile (HDC);


 BOOL __attribute__((__stdcall__)) ColorCorrectPalette (HDC, HPALETTE, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) ColorMatchToTarget (HDC, HDC, DWORD);


 int __attribute__((__stdcall__)) CombineRgn (HRGN, HRGN, HRGN, int);
 BOOL __attribute__((__stdcall__)) CombineTransform (LPXFORM, const XFORM *, const XFORM *);


 HENHMETAFILE __attribute__((__stdcall__)) CopyEnhMetaFileA (HENHMETAFILE, LPCSTR);
 HENHMETAFILE __attribute__((__stdcall__)) CopyEnhMetaFileW (HENHMETAFILE, LPCWSTR);


 HMETAFILE __attribute__((__stdcall__)) CopyMetaFileA (HMETAFILE, LPCSTR);
 HMETAFILE __attribute__((__stdcall__)) CopyMetaFileW (HMETAFILE, LPCWSTR);

 HBITMAP __attribute__((__stdcall__)) CreateBitmap (int, int, UINT, UINT, PCVOID);
 HBITMAP __attribute__((__stdcall__)) CreateBitmapIndirect (const BITMAP *);
 HBRUSH __attribute__((__stdcall__)) CreateBrushIndirect (const LOGBRUSH *);


 HCOLORSPACE __attribute__((__stdcall__)) CreateColorSpaceA (LPLOGCOLORSPACEA);
 HCOLORSPACE __attribute__((__stdcall__)) CreateColorSpaceW (LPLOGCOLORSPACEW);

 HBITMAP __attribute__((__stdcall__)) CreateCompatibleBitmap (HDC, int, int);
 HDC __attribute__((__stdcall__)) CreateCompatibleDC (HDC);


 HDC __attribute__((__stdcall__)) CreateDCA (LPCSTR, LPCSTR, LPCSTR, const DEVMODEA *);
 HDC __attribute__((__stdcall__)) CreateDCW (LPCWSTR, LPCWSTR, LPCWSTR, const DEVMODEW *);

 HBITMAP __attribute__((__stdcall__)) CreateDIBitmap
(HDC, const BITMAPINFOHEADER *, DWORD, PCVOID, const BITMAPINFO *, UINT);

 HBRUSH __attribute__((__stdcall__)) CreateDIBPatternBrush (HGLOBAL, UINT);
 HBRUSH __attribute__((__stdcall__)) CreateDIBPatternBrushPt (PCVOID, UINT);

 HBITMAP __attribute__((__stdcall__)) CreateDIBSection
(HDC, const BITMAPINFO *, UINT, void **, HANDLE, DWORD);

 HBITMAP __attribute__((__stdcall__)) CreateDiscardableBitmap (HDC, int, int);
 HRGN __attribute__((__stdcall__)) CreateEllipticRgn (int, int, int, int);
 HRGN __attribute__((__stdcall__)) CreateEllipticRgnIndirect (LPCRECT);


 HDC __attribute__((__stdcall__)) CreateEnhMetaFileA (HDC, LPCSTR, LPCRECT, LPCSTR);
 HDC __attribute__((__stdcall__)) CreateEnhMetaFileW (HDC, LPCWSTR, LPCRECT, LPCWSTR);


 HFONT __attribute__((__stdcall__)) CreateFontA
(int, int, int, int, int, DWORD, DWORD, DWORD, DWORD, DWORD,
 DWORD, DWORD, DWORD, LPCSTR
);

 HFONT __attribute__((__stdcall__)) CreateFontW
(int, int, int, int, int, DWORD, DWORD, DWORD, DWORD, DWORD,
 DWORD, DWORD, DWORD, LPCWSTR
);



 HFONT __attribute__((__stdcall__)) CreateFontIndirectA (const LOGFONTA *);
 HFONT __attribute__((__stdcall__)) CreateFontIndirectW (const LOGFONTW *);

 HPALETTE __attribute__((__stdcall__)) CreateHalftonePalette (HDC);
 HBRUSH __attribute__((__stdcall__)) CreateHatchBrush (int, COLORREF);


 HDC __attribute__((__stdcall__)) CreateICA (LPCSTR, LPCSTR, LPCSTR, const DEVMODEA *);
 HDC __attribute__((__stdcall__)) CreateICW (LPCWSTR, LPCWSTR, LPCWSTR, const DEVMODEW *);


 HDC __attribute__((__stdcall__)) CreateMetaFileA (LPCSTR);
 HDC __attribute__((__stdcall__)) CreateMetaFileW (LPCWSTR);

 HPALETTE __attribute__((__stdcall__)) CreatePalette (const LOGPALETTE *);
 HBRUSH __attribute__((__stdcall__)) CreatePatternBrush (HBITMAP);
 HPEN __attribute__((__stdcall__)) CreatePen (int, int, COLORREF);
 HPEN __attribute__((__stdcall__)) CreatePenIndirect (const LOGPEN *);
 HRGN __attribute__((__stdcall__)) CreatePolygonRgn (const POINT *, int, int);

 HRGN __attribute__((__stdcall__)) CreatePolyPolygonRgn
(const POINT *, const INT *, int, int);

 HRGN __attribute__((__stdcall__)) CreateRectRgn (int, int, int, int);
 HRGN __attribute__((__stdcall__)) CreateRectRgnIndirect (LPCRECT);
 HRGN __attribute__((__stdcall__)) CreateRoundRectRgn (int, int, int, int, int, int);


 BOOL __attribute__((__stdcall__)) CreateScalableFontResourceA
(DWORD, LPCSTR, LPCSTR, LPCSTR);

 BOOL __attribute__((__stdcall__)) CreateScalableFontResourceW
(DWORD, LPCWSTR, LPCWSTR, LPCWSTR);

 HBRUSH __attribute__((__stdcall__)) CreateSolidBrush (COLORREF);
 BOOL __attribute__((__stdcall__)) DeleteColorSpace (HCOLORSPACE);
 BOOL __attribute__((__stdcall__)) DeleteDC (HDC);
 BOOL __attribute__((__stdcall__)) DeleteEnhMetaFile (HENHMETAFILE);
 BOOL __attribute__((__stdcall__)) DeleteMetaFile (HMETAFILE);
 BOOL __attribute__((__stdcall__)) DeleteObject (HGDIOBJ);

 int __attribute__((__stdcall__)) DescribePixelFormat
(HDC, int, UINT, LPPIXELFORMATDESCRIPTOR);



 DWORD __attribute__((__stdcall__)) DeviceCapabilitiesA
(LPCSTR, LPCSTR, WORD, LPSTR, const DEVMODEA *);

 DWORD __attribute__((__stdcall__)) DeviceCapabilitiesW
(LPCWSTR, LPCWSTR, WORD, LPWSTR, const DEVMODEW *);

 BOOL __attribute__((__stdcall__)) DPtoLP (HDC, LPPOINT, int);
 int __attribute__((__stdcall__)) DrawEscape (HDC, int, int, LPCSTR);
 BOOL __attribute__((__stdcall__)) Ellipse (HDC, int, int, int, int);
 int __attribute__((__stdcall__)) EndDoc (HDC);
 int __attribute__((__stdcall__)) EndPage (HDC);
 BOOL __attribute__((__stdcall__)) EndPath (HDC);

 BOOL __attribute__((__stdcall__)) EnumEnhMetaFile
(HDC, HENHMETAFILE, ENHMFENUMPROC, PVOID, LPCRECT);


 int __attribute__((__stdcall__)) EnumFontFamiliesA (HDC, LPCSTR, FONTENUMPROCA, LPARAM);
 int __attribute__((__stdcall__)) EnumFontFamiliesW (HDC, LPCWSTR, FONTENUMPROCW, LPARAM);


 int __attribute__((__stdcall__)) EnumFontFamiliesExA
(HDC, PLOGFONTA, FONTENUMPROCA, LPARAM, DWORD);

 int __attribute__((__stdcall__)) EnumFontFamiliesExW
(HDC, PLOGFONTW, FONTENUMPROCW, LPARAM, DWORD);


 int __attribute__((__stdcall__)) EnumFontsA (HDC, LPCSTR, FONTENUMPROCA, LPARAM);
 int __attribute__((__stdcall__)) EnumFontsW (HDC, LPCWSTR, FONTENUMPROCW, LPARAM);


 int __attribute__((__stdcall__)) EnumICMProfilesA (HDC, ICMENUMPROCA, LPARAM);
 int __attribute__((__stdcall__)) EnumICMProfilesW (HDC, ICMENUMPROCW, LPARAM);

 BOOL __attribute__((__stdcall__)) EnumMetaFile (HDC, HMETAFILE, MFENUMPROC, LPARAM);
 int __attribute__((__stdcall__)) EnumObjects (HDC, int, GOBJENUMPROC, LPARAM);
 BOOL __attribute__((__stdcall__)) EqualRgn (HRGN, HRGN);
 int __attribute__((__stdcall__)) Escape (HDC, int, int, LPCSTR, PVOID);
 int __attribute__((__stdcall__)) ExcludeClipRect (HDC, int, int, int, int);
 int __attribute__((__stdcall__)) ExcludeUpdateRgn (HDC, HWND);

 HPEN __attribute__((__stdcall__)) ExtCreatePen
(DWORD, DWORD, const LOGBRUSH *, DWORD, const DWORD *);

 HRGN __attribute__((__stdcall__)) ExtCreateRegion (const XFORM *, DWORD, const RGNDATA *);
 int __attribute__((__stdcall__)) ExtEscape (HDC, int, int, LPCSTR, int, LPSTR);
 BOOL __attribute__((__stdcall__)) ExtFloodFill (HDC, int, int, COLORREF, UINT);
 int __attribute__((__stdcall__)) ExtSelectClipRgn (HDC, HRGN, int);


 BOOL __attribute__((__stdcall__)) ExtTextOutA
(HDC, int, int, UINT, LPCRECT, LPCSTR, UINT, const INT *);

 BOOL __attribute__((__stdcall__)) ExtTextOutW
(HDC, int, int, UINT, LPCRECT, LPCWSTR, UINT, const INT *);

 BOOL __attribute__((__stdcall__)) FillPath (HDC);
 int __attribute__((__stdcall__)) FillRect (HDC, LPCRECT, HBRUSH);
 int __attribute__((__stdcall__)) FillRgn (HDC, HRGN, HBRUSH);
 BOOL __attribute__((__stdcall__)) FixBrushOrgEx (HDC, int, int, LPPOINT);
 BOOL __attribute__((__stdcall__)) FlattenPath (HDC);
 BOOL __attribute__((__stdcall__)) FloodFill (HDC, int, int, COLORREF);
 BOOL __attribute__((__stdcall__)) GdiComment (HDC, UINT, const BYTE *);
 BOOL __attribute__((__stdcall__)) GdiFlush (void);
 DWORD __attribute__((__stdcall__)) GdiGetBatchLimit (void);
 DWORD __attribute__((__stdcall__)) GdiSetBatchLimit (DWORD);
 int __attribute__((__stdcall__)) GetArcDirection (HDC);
 BOOL __attribute__((__stdcall__)) GetAspectRatioFilterEx (HDC, LPSIZE);
 LONG __attribute__((__stdcall__)) GetBitmapBits (HBITMAP, LONG, PVOID);
 BOOL __attribute__((__stdcall__)) GetBitmapDimensionEx (HBITMAP, LPSIZE);
 COLORREF __attribute__((__stdcall__)) GetBkColor (HDC);
 int __attribute__((__stdcall__)) GetBkMode (HDC);
 UINT __attribute__((__stdcall__)) GetBoundsRect (HDC, LPRECT, UINT);
 BOOL __attribute__((__stdcall__)) GetBrushOrgEx (HDC, LPPOINT);


 BOOL __attribute__((__stdcall__)) GetCharABCWidthsA (HDC, UINT, UINT, LPABC);
 BOOL __attribute__((__stdcall__)) GetCharABCWidthsW (HDC, UINT, UINT, LPABC);


 BOOL __attribute__((__stdcall__)) GetCharABCWidthsFloatA (HDC, UINT, UINT, LPABCFLOAT);
 BOOL __attribute__((__stdcall__)) GetCharABCWidthsFloatW (HDC, UINT, UINT, LPABCFLOAT);


 DWORD __attribute__((__stdcall__)) GetCharacterPlacementA
(HDC, LPCSTR, int, int, LPGCP_RESULTSA, DWORD);

 DWORD __attribute__((__stdcall__)) GetCharacterPlacementW
(HDC, LPCWSTR, int, int, LPGCP_RESULTSW, DWORD);


 BOOL __attribute__((__stdcall__)) GetCharWidth32A (HDC, UINT, UINT, LPINT);
 BOOL __attribute__((__stdcall__)) GetCharWidth32W (HDC, UINT, UINT, LPINT);


 BOOL __attribute__((__stdcall__)) GetCharWidthA (HDC, UINT, UINT, LPINT);
 BOOL __attribute__((__stdcall__)) GetCharWidthW (HDC, UINT, UINT, LPINT);


 BOOL __attribute__((__stdcall__)) GetCharWidthFloatA (HDC, UINT, UINT, PFLOAT);
 BOOL __attribute__((__stdcall__)) GetCharWidthFloatW (HDC, UINT, UINT, PFLOAT);

 int __attribute__((__stdcall__)) GetClipBox (HDC, LPRECT);
 int __attribute__((__stdcall__)) GetClipRgn (HDC, HRGN);
 BOOL __attribute__((__stdcall__)) GetColorAdjustment (HDC, LPCOLORADJUSTMENT);
 HANDLE __attribute__((__stdcall__)) GetColorSpace (HDC);
 HGDIOBJ __attribute__((__stdcall__)) GetCurrentObject (HDC, UINT);
 BOOL __attribute__((__stdcall__)) GetCurrentPositionEx (HDC, LPPOINT);
 HCURSOR __attribute__((__stdcall__)) GetCursor (void);

 BOOL __attribute__((__stdcall__)) GetDCOrgEx (HDC, LPPOINT);
 int __attribute__((__stdcall__)) GetDeviceCaps (HDC, int);
 BOOL __attribute__((__stdcall__)) GetDeviceGammaRamp (HDC, PVOID);
 UINT __attribute__((__stdcall__)) GetDIBColorTable (HDC, UINT, UINT, RGBQUAD *);

 int __attribute__((__stdcall__)) GetDIBits
(HDC, HBITMAP, UINT, UINT, PVOID, LPBITMAPINFO, UINT);


 HENHMETAFILE __attribute__((__stdcall__)) GetEnhMetaFileA (LPCSTR);
 HENHMETAFILE __attribute__((__stdcall__)) GetEnhMetaFileW (LPCWSTR);

 UINT __attribute__((__stdcall__)) GetEnhMetaFileBits (HENHMETAFILE, UINT, LPBYTE);


 UINT __attribute__((__stdcall__)) GetEnhMetaFileDescriptionA (HENHMETAFILE, UINT, LPSTR);
 UINT __attribute__((__stdcall__)) GetEnhMetaFileDescriptionW (HENHMETAFILE, UINT, LPWSTR);

 UINT __attribute__((__stdcall__)) GetEnhMetaFileHeader
(HENHMETAFILE, UINT, LPENHMETAHEADER);

 UINT __attribute__((__stdcall__)) GetEnhMetaFilePaletteEntries
(HENHMETAFILE, UINT, LPPALETTEENTRY);

 UINT __attribute__((__stdcall__)) GetEnhMetaFilePixelFormat
(HENHMETAFILE, DWORD, const PIXELFORMATDESCRIPTOR *);

 DWORD __attribute__((__stdcall__)) GetFontData (HDC, DWORD, DWORD, PVOID, DWORD);
 DWORD __attribute__((__stdcall__)) GetFontLanguageInfo (HDC);


 DWORD __attribute__((__stdcall__)) GetGlyphOutlineA
(HDC, UINT, UINT, LPGLYPHMETRICS, DWORD, PVOID, const MAT2 *);

 DWORD __attribute__((__stdcall__)) GetGlyphOutlineW
(HDC, UINT, UINT, LPGLYPHMETRICS, DWORD, PVOID, const MAT2 *);

 int __attribute__((__stdcall__)) GetGraphicsMode (HDC);


 BOOL __attribute__((__stdcall__)) GetICMProfileA (HDC, LPDWORD, LPSTR);
 BOOL __attribute__((__stdcall__)) GetICMProfileW (HDC, LPDWORD, LPWSTR);


 DWORD __attribute__((__stdcall__)) GetKerningPairsA (HDC, DWORD, LPKERNINGPAIR);
 DWORD __attribute__((__stdcall__)) GetKerningPairsW (HDC, DWORD, LPKERNINGPAIR);


 BOOL __attribute__((__stdcall__)) GetLogColorSpaceA (HCOLORSPACE, LPLOGCOLORSPACEA, DWORD);
 BOOL __attribute__((__stdcall__)) GetLogColorSpaceW (HCOLORSPACE, LPLOGCOLORSPACEW, DWORD);

 int __attribute__((__stdcall__)) GetMapMode (HDC);


 HMETAFILE __attribute__((__stdcall__)) GetMetaFileA (LPCSTR);
 HMETAFILE __attribute__((__stdcall__)) GetMetaFileW (LPCWSTR);

 UINT __attribute__((__stdcall__)) GetMetaFileBitsEx (HMETAFILE, UINT, PVOID);
 int __attribute__((__stdcall__)) GetMetaRgn (HDC, HRGN);
 BOOL __attribute__((__stdcall__)) GetMiterLimit (HDC, PFLOAT);
 COLORREF __attribute__((__stdcall__)) GetNearestColor (HDC, COLORREF);
 UINT __attribute__((__stdcall__)) GetNearestPaletteIndex (HPALETTE, COLORREF);


 int __attribute__((__stdcall__)) GetObjectA (HGDIOBJ, int, PVOID);
 int __attribute__((__stdcall__)) GetObjectW (HGDIOBJ, int, PVOID);

 DWORD __attribute__((__stdcall__)) GetObjectType (HGDIOBJ);


 UINT __attribute__((__stdcall__)) GetOutlineTextMetricsA (HDC, UINT, LPOUTLINETEXTMETRICA);
 UINT __attribute__((__stdcall__)) GetOutlineTextMetricsW (HDC, UINT, LPOUTLINETEXTMETRICW);

 UINT __attribute__((__stdcall__)) GetPaletteEntries (HPALETTE, UINT, UINT, LPPALETTEENTRY);
 int __attribute__((__stdcall__)) GetPath (HDC, LPPOINT, PBYTE, int);
 COLORREF __attribute__((__stdcall__)) GetPixel (HDC, int, int);
 int __attribute__((__stdcall__)) GetPixelFormat (HDC);
 int __attribute__((__stdcall__)) GetPolyFillMode (HDC);
 BOOL __attribute__((__stdcall__)) GetRasterizerCaps (LPRASTERIZER_STATUS, UINT);
 int __attribute__((__stdcall__)) GetRandomRgn (HDC, HRGN, INT);
 DWORD __attribute__((__stdcall__)) GetRegionData (HRGN, DWORD, LPRGNDATA);
 int __attribute__((__stdcall__)) GetRgnBox (HRGN, LPRECT);
 int __attribute__((__stdcall__)) GetROP2 (HDC);
 HGDIOBJ __attribute__((__stdcall__)) GetStockObject (int);
 int __attribute__((__stdcall__)) GetStretchBltMode (HDC);

 UINT __attribute__((__stdcall__)) GetSystemPaletteEntries
(HDC, UINT, UINT, LPPALETTEENTRY);

 UINT __attribute__((__stdcall__)) GetSystemPaletteUse (HDC);
 UINT __attribute__((__stdcall__)) GetTextAlign (HDC);
 int __attribute__((__stdcall__)) GetTextCharacterExtra (HDC);
 int __attribute__((__stdcall__)) GetTextCharset (HDC);
 int __attribute__((__stdcall__)) GetTextCharsetInfo (HDC, LPFONTSIGNATURE, DWORD);
 COLORREF __attribute__((__stdcall__)) GetTextColor (HDC);


 BOOL __attribute__((__stdcall__)) GetTextExtentExPointA
(HDC, LPCSTR, int, int, LPINT, LPINT, LPSIZE);

 BOOL __attribute__((__stdcall__)) GetTextExtentExPointW
( HDC, LPCWSTR, int, int, LPINT, LPINT, LPSIZE );


 BOOL __attribute__((__stdcall__)) GetTextExtentPointA (HDC, LPCSTR, int, LPSIZE);
 BOOL __attribute__((__stdcall__)) GetTextExtentPointW (HDC, LPCWSTR, int, LPSIZE);


 BOOL __attribute__((__stdcall__)) GetTextExtentPoint32A (HDC, LPCSTR, int, LPSIZE);
 BOOL __attribute__((__stdcall__)) GetTextExtentPoint32W (HDC, LPCWSTR, int, LPSIZE);


 int __attribute__((__stdcall__)) GetTextFaceA (HDC, int, LPSTR);
 int __attribute__((__stdcall__)) GetTextFaceW (HDC, int, LPWSTR);


 BOOL __attribute__((__stdcall__)) GetTextMetricsA (HDC, LPTEXTMETRICA);
 BOOL __attribute__((__stdcall__)) GetTextMetricsW (HDC, LPTEXTMETRICW);

 BOOL __attribute__((__stdcall__)) GetViewportExtEx (HDC, LPSIZE);
 BOOL __attribute__((__stdcall__)) GetViewportOrgEx (HDC, LPPOINT);
 BOOL __attribute__((__stdcall__)) GetWindowExtEx (HDC, LPSIZE);
 BOOL __attribute__((__stdcall__)) GetWindowOrgEx (HDC, LPPOINT);

 UINT __attribute__((__stdcall__)) GetWinMetaFileBits
(HENHMETAFILE, UINT, LPBYTE, INT, HDC);

 BOOL __attribute__((__stdcall__)) GetWorldTransform (HDC, LPXFORM);
 int __attribute__((__stdcall__)) IntersectClipRect (HDC, int, int, int, int);
 BOOL __attribute__((__stdcall__)) InvertRgn (HDC, HRGN);
 BOOL __attribute__((__stdcall__)) LineDDA (int, int, int, int, LINEDDAPROC, LPARAM);
 BOOL __attribute__((__stdcall__)) LineTo (HDC, int, int);
 BOOL __attribute__((__stdcall__)) LPtoDP (HDC, LPPOINT, int);

 BOOL __attribute__((__stdcall__)) MaskBlt
(HDC, int, int, int, int, HDC, int, int, HBITMAP, int, int, DWORD);

 BOOL __attribute__((__stdcall__)) ModifyWorldTransform (HDC, const XFORM *, DWORD);
 BOOL __attribute__((__stdcall__)) MoveToEx (HDC, int, int, LPPOINT);
 int __attribute__((__stdcall__)) OffsetClipRgn (HDC, int, int);
 int __attribute__((__stdcall__)) OffsetRgn (HRGN, int, int);
 BOOL __attribute__((__stdcall__)) OffsetViewportOrgEx (HDC, int, int, LPPOINT);
 BOOL __attribute__((__stdcall__)) OffsetWindowOrgEx (HDC, int, int, LPPOINT);
 BOOL __attribute__((__stdcall__)) PaintRgn (HDC, HRGN);
 BOOL __attribute__((__stdcall__)) PatBlt (HDC, int, int, int, int, DWORD);
 HRGN __attribute__((__stdcall__)) PathToRegion (HDC);
 BOOL __attribute__((__stdcall__)) Pie (HDC, int, int, int, int, int, int, int, int);
 BOOL __attribute__((__stdcall__)) PlayEnhMetaFile (HDC, HENHMETAFILE, LPCRECT);

 BOOL __attribute__((__stdcall__)) PlayEnhMetaFileRecord
(HDC, LPHANDLETABLE, const ENHMETARECORD *, UINT);

 BOOL __attribute__((__stdcall__)) PlayMetaFile (HDC, HMETAFILE);

 BOOL __attribute__((__stdcall__)) PlayMetaFileRecord
(HDC, LPHANDLETABLE, LPMETARECORD, UINT);

 BOOL __attribute__((__stdcall__)) PlgBlt
(HDC, const POINT *, HDC, int, int, int, int, HBITMAP, int, int);

 BOOL __attribute__((__stdcall__)) PolyBezier (HDC, const POINT *, DWORD);
 BOOL __attribute__((__stdcall__)) PolyBezierTo (HDC, const POINT *, DWORD);
 BOOL __attribute__((__stdcall__)) PolyDraw (HDC, const POINT *, const BYTE *, int);
 BOOL __attribute__((__stdcall__)) Polygon (HDC, const POINT *, int);
 BOOL __attribute__((__stdcall__)) Polyline (HDC, const POINT *, int);
 BOOL __attribute__((__stdcall__)) PolylineTo (HDC, const POINT *, DWORD);
 BOOL __attribute__((__stdcall__)) PolyPolygon (HDC, const POINT *, const INT *, int);
 BOOL __attribute__((__stdcall__)) PolyPolyline (HDC, const POINT *, const DWORD *, DWORD);


 BOOL __attribute__((__stdcall__)) PolyTextOutA (HDC, const POLYTEXTA *, int);
 BOOL __attribute__((__stdcall__)) PolyTextOutW (HDC, const POLYTEXTW *, int);

 BOOL __attribute__((__stdcall__)) PtInRegion (HRGN, int, int);
 BOOL __attribute__((__stdcall__)) PtVisible (HDC, int, int);
 UINT __attribute__((__stdcall__)) RealizePalette (HDC);
 BOOL __attribute__((__stdcall__)) Rectangle (HDC, int, int, int, int);
 BOOL __attribute__((__stdcall__)) RectInRegion (HRGN, LPCRECT);
 BOOL __attribute__((__stdcall__)) RectVisible (HDC, LPCRECT);


 BOOL __attribute__((__stdcall__)) RemoveFontResourceA (LPCSTR);
 BOOL __attribute__((__stdcall__)) RemoveFontResourceW (LPCWSTR);


 HDC __attribute__((__stdcall__)) ResetDCA (HDC, const DEVMODEA *);
 HDC __attribute__((__stdcall__)) ResetDCW (HDC, const DEVMODEW *);

 BOOL __attribute__((__stdcall__)) ResizePalette (HPALETTE, UINT);
 BOOL __attribute__((__stdcall__)) RestoreDC (HDC, int);
 BOOL __attribute__((__stdcall__)) RoundRect (HDC, int, int, int, int, int, int);
 int __attribute__((__stdcall__)) SaveDC (HDC);
 BOOL __attribute__((__stdcall__)) ScaleViewportExtEx (HDC, int, int, int, int, LPSIZE);
 BOOL __attribute__((__stdcall__)) ScaleWindowExtEx (HDC, int, int, int, int, LPSIZE);
 BOOL __attribute__((__stdcall__)) SelectClipPath (HDC, int);
 int __attribute__((__stdcall__)) SelectClipRgn (HDC, HRGN);
 HGDIOBJ __attribute__((__stdcall__)) SelectObject (HDC, HGDIOBJ);
 HPALETTE __attribute__((__stdcall__)) SelectPalette (HDC, HPALETTE, BOOL);
 int __attribute__((__stdcall__)) SetAbortProc (HDC, ABORTPROC);
 int __attribute__((__stdcall__)) SetArcDirection (HDC, int);
 LONG __attribute__((__stdcall__)) SetBitmapBits (HBITMAP, DWORD, PCVOID);
 BOOL __attribute__((__stdcall__)) SetBitmapDimensionEx (HBITMAP, int, int, LPSIZE);
 COLORREF __attribute__((__stdcall__)) SetBkColor (HDC, COLORREF);
 int __attribute__((__stdcall__)) SetBkMode (HDC, int);
 UINT __attribute__((__stdcall__)) SetBoundsRect (HDC, LPCRECT, UINT);
 BOOL __attribute__((__stdcall__)) SetBrushOrgEx (HDC, int, int, LPPOINT);
 BOOL __attribute__((__stdcall__)) SetColorAdjustment (HDC, const COLORADJUSTMENT *);
 BOOL __attribute__((__stdcall__)) SetColorSpace (HDC, HCOLORSPACE);

 BOOL __attribute__((__stdcall__)) SetDeviceGammaRamp (HDC, PVOID);
 UINT __attribute__((__stdcall__)) SetDIBColorTable (HDC, UINT, UINT, const RGBQUAD *);

 int __attribute__((__stdcall__)) SetDIBits
(HDC, HBITMAP, UINT, UINT, PCVOID, const BITMAPINFO *, UINT);

 int __attribute__((__stdcall__)) SetDIBitsToDevice
(HDC, int, int, DWORD, DWORD, int, int, UINT, UINT, PCVOID,
 const BITMAPINFO *, UINT
);

 HENHMETAFILE __attribute__((__stdcall__)) SetEnhMetaFileBits (UINT, const BYTE *);
 int __attribute__((__stdcall__)) SetGraphicsMode (HDC, int);
 int __attribute__((__stdcall__)) SetICMMode (HDC, int);


 BOOL __attribute__((__stdcall__)) SetICMProfileA (HDC, LPSTR);
 BOOL __attribute__((__stdcall__)) SetICMProfileW (HDC, LPWSTR);

 int __attribute__((__stdcall__)) SetMapMode (HDC, int);
 DWORD __attribute__((__stdcall__)) SetMapperFlags (HDC, DWORD);
 HMETAFILE __attribute__((__stdcall__)) SetMetaFileBitsEx (UINT, const BYTE *);
 int __attribute__((__stdcall__)) SetMetaRgn (HDC);
 BOOL __attribute__((__stdcall__)) SetMiterLimit (HDC, FLOAT, PFLOAT);

 UINT __attribute__((__stdcall__)) SetPaletteEntries
(HPALETTE, UINT, UINT, const PALETTEENTRY *);

 COLORREF __attribute__((__stdcall__)) SetPixel (HDC, int, int, COLORREF);
 BOOL __attribute__((__stdcall__)) SetPixelFormat (HDC, int, const PIXELFORMATDESCRIPTOR *);
 BOOL __attribute__((__stdcall__)) SetPixelV (HDC, int, int, COLORREF);
 int __attribute__((__stdcall__)) SetPolyFillMode (HDC, int);
 BOOL __attribute__((__stdcall__)) SetRectRgn (HRGN, int, int, int, int);
 int __attribute__((__stdcall__)) SetROP2 (HDC, int);
 int __attribute__((__stdcall__)) SetStretchBltMode (HDC, int);
 UINT __attribute__((__stdcall__)) SetSystemPaletteUse (HDC, UINT);
 UINT __attribute__((__stdcall__)) SetTextAlign (HDC, UINT);
 int __attribute__((__stdcall__)) SetTextCharacterExtra (HDC, int);
 COLORREF __attribute__((__stdcall__)) SetTextColor (HDC, COLORREF);
 BOOL __attribute__((__stdcall__)) SetTextJustification (HDC, int, int);
 BOOL __attribute__((__stdcall__)) SetViewportExtEx (HDC, int, int, LPSIZE);
 BOOL __attribute__((__stdcall__)) SetViewportOrgEx (HDC, int, int, LPPOINT);
 BOOL __attribute__((__stdcall__)) SetWindowExtEx (HDC, int, int, LPSIZE);
 BOOL __attribute__((__stdcall__)) SetWindowOrgEx (HDC, int, int, LPPOINT);

 HENHMETAFILE __attribute__((__stdcall__)) SetWinMetaFileBits
(UINT, const BYTE *, HDC, const METAFILEPICT *);

 BOOL __attribute__((__stdcall__)) SetWorldTransform (HDC, const XFORM *);


 int __attribute__((__stdcall__)) StartDocA (HDC, const DOCINFOA *);
 int __attribute__((__stdcall__)) StartDocW (HDC, const DOCINFOW *);

 int __attribute__((__stdcall__)) StartPage (HDC);

 BOOL __attribute__((__stdcall__)) StretchBlt
(HDC, int, int, int, int, HDC, int, int, int, int, DWORD);

 int __attribute__((__stdcall__)) StretchDIBits
(HDC, int, int, int, int, int, int, int, int, const void *,
 const BITMAPINFO *, UINT, DWORD
);

 BOOL __attribute__((__stdcall__)) StrokeAndFillPath (HDC);
 BOOL __attribute__((__stdcall__)) StrokePath (HDC);
 BOOL __attribute__((__stdcall__)) SwapBuffers (HDC);


 BOOL __attribute__((__stdcall__)) TextOutA (HDC, int, int, LPCSTR, int);
 BOOL __attribute__((__stdcall__)) TextOutW (HDC, int, int, LPCWSTR, int);

 BOOL __attribute__((__stdcall__)) TranslateCharsetInfo (PDWORD, LPCHARSETINFO, DWORD);
 BOOL __attribute__((__stdcall__)) UnrealizeObject (HGDIOBJ);
 BOOL __attribute__((__stdcall__)) UpdateColors (HDC);


 BOOL __attribute__((__stdcall__)) UpdateICMRegKeyA (DWORD, DWORD, LPSTR, UINT);
 BOOL __attribute__((__stdcall__)) UpdateICMRegKeyW (DWORD, DWORD, LPWSTR, UINT);

 BOOL __attribute__((__stdcall__)) WidenPath (HDC);
 BOOL __attribute__((__stdcall__)) wglCopyContext (HGLRC, HGLRC, UINT);
 HGLRC __attribute__((__stdcall__)) wglCreateContext (HDC);
 HGLRC __attribute__((__stdcall__)) wglCreateLayerContext (HDC, int);
 BOOL __attribute__((__stdcall__)) wglDeleteContext (HGLRC);

 BOOL __attribute__((__stdcall__)) wglDescribeLayerPlane
(HDC, int, int, UINT, LPLAYERPLANEDESCRIPTOR);

 HGLRC __attribute__((__stdcall__)) wglGetCurrentContext (void);
 HDC __attribute__((__stdcall__)) wglGetCurrentDC (void);

 int __attribute__((__stdcall__)) wglGetLayerPaletteEntries
(HDC, int, int, int, COLORREF *);

 PROC __attribute__((__stdcall__)) wglGetProcAddress (LPCSTR);
 BOOL __attribute__((__stdcall__)) wglMakeCurrent (HDC, HGLRC);
 BOOL __attribute__((__stdcall__)) wglRealizeLayerPalette (HDC, int, BOOL);

 int __attribute__((__stdcall__)) wglSetLayerPaletteEntries
(HDC, int, int, int, const COLORREF *);

 BOOL __attribute__((__stdcall__)) wglShareLists (HGLRC, HGLRC);
 BOOL __attribute__((__stdcall__)) wglSwapLayerBuffers (HDC, UINT);


 BOOL __attribute__((__stdcall__)) wglUseFontBitmapsA (HDC, DWORD, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) wglUseFontBitmapsW (HDC, DWORD, DWORD, DWORD);


 BOOL __attribute__((__stdcall__)) wglUseFontOutlinesA
(HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT);

 BOOL __attribute__((__stdcall__)) wglUseFontOutlinesW
(HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT);


 BOOL __attribute__((__stdcall__)) AlphaBlend
(HDC, int, int, int, int, HDC, int, int, int, int, BLENDFUNCTION);

 BOOL __attribute__((__stdcall__)) GradientFill
(HDC, PTRIVERTEX, ULONG, PVOID, ULONG, ULONG);

 BOOL __attribute__((__stdcall__)) TransparentBlt
(HDC, int, int, int, int, HDC, int, int, int, int, UINT);


 DWORD __attribute__((__stdcall__)) GetLayout (HDC);
 DWORD __attribute__((__stdcall__)) SetLayout (HDC, DWORD);

 COLORREF __attribute__((__stdcall__)) GetDCBrushColor (HDC);
 COLORREF __attribute__((__stdcall__)) GetDCPenColor (HDC);




typedef struct tagWCRANGE
{ WCHAR wcLow;
  USHORT cGlyphs;
} WCRANGE, *PWCRANGE, *LPWCRANGE;

typedef struct tagGLYPHSET
{ DWORD cbThis;
  DWORD flAccel;
  DWORD cGlyphsSupported;
  DWORD cRanges;
  WCRANGE ranges[1];
} GLYPHSET, *PGLYPHSET, *LPGLYPHSET;

typedef struct tagENUMLOGFONTEXDVA
{ ENUMLOGFONTEXA elfEnumLogfontEx;
  DESIGNVECTOR elfDesignVector;
} ENUMLOGFONTEXDVA, *PENUMLOGFONTEXDVA, *LPENUMLOGFONTEXDVA;

typedef struct tagENUMLOGFONTEXDVW
{ ENUMLOGFONTEXW elfEnumLogfontEx;
  DESIGNVECTOR elfDesignVector;
} ENUMLOGFONTEXDVW, *PENUMLOGFONTEXDVW, *LPENUMLOGFONTEXDVW;

typedef ENUMLOGFONTEXDVA ENUMLOGFONTEXDV, *PENUMLOGFONTEXDV, *LPENUMLOGFONTEXDV;

 HANDLE __attribute__((__stdcall__)) AddFontMemResourceEx (PVOID, DWORD, PVOID, DWORD *);


 int __attribute__((__stdcall__)) AddFontResourceExA (LPCSTR, DWORD, PVOID);
 int __attribute__((__stdcall__)) AddFontResourceExW (LPCWSTR, DWORD, PVOID);

 BOOL __attribute__((__stdcall__)) GetTextExtentExPointI
(HDC, LPWORD, int, int, LPINT, LPINT, LPSIZE);

 BOOL __attribute__((__stdcall__)) RemoveFontMemResourceEx (HANDLE);


 BOOL __attribute__((__stdcall__)) RemoveFontResourceExA (LPCSTR, DWORD, PVOID);
 BOOL __attribute__((__stdcall__)) RemoveFontResourceExW (LPCWSTR, DWORD, PVOID);

 COLORREF __attribute__((__stdcall__)) SetDCBrushColor (HDC, COLORREF);
 COLORREF __attribute__((__stdcall__)) SetDCPenColor (HDC, COLORREF);

 DWORD __attribute__((__stdcall__)) GetFontUnicodeRanges (HDC, LPGLYPHSET);


 DWORD __attribute__((__stdcall__)) GetGlyphIndicesA (HDC, LPCSTR, int, LPWORD, DWORD);
 DWORD __attribute__((__stdcall__)) GetGlyphIndicesW (HDC, LPCWSTR, int, LPWORD, DWORD);




# 47 "c:\\mingw\\include\\windows.h" 2 3

# 1 "c:\\mingw\\include\\winuser.h" 1 3
# 34 "c:\\mingw\\include\\winuser.h" 3
       
# 35 "c:\\mingw\\include\\winuser.h" 3
# 53 "c:\\mingw\\include\\winuser.h" 3

# 183 "c:\\mingw\\include\\winuser.h" 3
# 1 "c:\\mingw\\include\\dbt.h" 1 3
# 33 "c:\\mingw\\include\\dbt.h" 3
       
# 34 "c:\\mingw\\include\\dbt.h" 3
# 184 "c:\\mingw\\include\\winuser.h" 2 3
# 2606 "c:\\mingw\\include\\winuser.h" 3
typedef BOOL (__attribute__((__stdcall__)) *DLGPROC) (HWND, UINT, WPARAM, LPARAM);
typedef void (__attribute__((__stdcall__)) *TIMERPROC) (HWND, UINT, UINT_PTR, DWORD);
typedef BOOL (__attribute__((__stdcall__)) *GRAYSTRINGPROC) (HDC, LPARAM, int);
typedef LRESULT (__attribute__((__stdcall__)) *HOOKPROC) (int, WPARAM, LPARAM);


typedef BOOL (__attribute__((__stdcall__)) *PROPENUMPROCA) (HWND, LPCSTR, HANDLE);
typedef BOOL (__attribute__((__stdcall__)) *PROPENUMPROCW) (HWND, LPCWSTR, HANDLE);


typedef BOOL (__attribute__((__stdcall__)) *PROPENUMPROCEXA) (HWND, LPSTR, HANDLE, DWORD);
typedef BOOL (__attribute__((__stdcall__)) *PROPENUMPROCEXW) (HWND, LPWSTR, HANDLE, DWORD);


typedef int (__attribute__((__stdcall__)) *EDITWORDBREAKPROCA) (LPSTR, int, int, int);
typedef int (__attribute__((__stdcall__)) *EDITWORDBREAKPROCW) (LPWSTR, int, int, int);
typedef LRESULT (__attribute__((__stdcall__)) *WNDPROC) (HWND, UINT, WPARAM, LPARAM);
typedef BOOL (__attribute__((__stdcall__)) *DRAWSTATEPROC) (HDC, LPARAM, WPARAM, int, int);
typedef BOOL (__attribute__((__stdcall__)) *WNDENUMPROC) (HWND, LPARAM);
typedef BOOL (__attribute__((__stdcall__)) *ENUMWINDOWSPROC) (HWND, LPARAM);
typedef BOOL (__attribute__((__stdcall__)) *MONITORENUMPROC) (HMONITOR, HDC, LPRECT, LPARAM);
typedef BOOL (__attribute__((__stdcall__)) *NAMEENUMPROCA) (LPSTR, LPARAM);
typedef BOOL (__attribute__((__stdcall__)) *NAMEENUMPROCW) (LPWSTR, LPARAM);

typedef NAMEENUMPROCA DESKTOPENUMPROCA;
typedef NAMEENUMPROCW DESKTOPENUMPROCW;
typedef NAMEENUMPROCA WINSTAENUMPROCA;
typedef NAMEENUMPROCW WINSTAENUMPROCW;

typedef void (__attribute__((__stdcall__)) *SENDASYNCPROC) (HWND, UINT, DWORD, LRESULT);

typedef struct HDWP__{int i;}*HDWP;
typedef struct HDEVNOTIFY__{int i;}*HDEVNOTIFY;

typedef struct tagMENUGETOBJECTINFO
{ DWORD dwFlags;
  UINT uPos;
  HMENU hmenu;
  PVOID riid;
  PVOID pvObj;
} MENUGETOBJECTINFO, *PMENUGETOBJECTINFO;

typedef struct tagACCEL
{ BYTE fVirt;
  WORD key;
  WORD cmd;
} ACCEL, *LPACCEL;

typedef struct tagACCESSTIMEOUT
{ UINT cbSize;
  DWORD dwFlags;
  DWORD iTimeOutMSec;
} ACCESSTIMEOUT, *LPACCESSTIMEOUT;

typedef struct tagANIMATIONINFO
{ UINT cbSize;
  int iMinAnimate;
} ANIMATIONINFO, *LPANIMATIONINFO;

typedef struct tagCREATESTRUCTA
{ LPVOID lpCreateParams;
  HINSTANCE hInstance;
  HMENU hMenu;
  HWND hwndParent;
  int cy;
  int cx;
  int y;
  int x;
  LONG style;
  LPCSTR lpszName;
  LPCSTR lpszClass;
  DWORD dwExStyle;
} CREATESTRUCTA, *LPCREATESTRUCTA;

typedef struct tagCREATESTRUCTW
{ LPVOID lpCreateParams;
  HINSTANCE hInstance;
  HMENU hMenu;
  HWND hwndParent;
  int cy;
  int cx;
  int y;
  int x;
  LONG style;
  LPCWSTR lpszName;
  LPCWSTR lpszClass;
  DWORD dwExStyle;
} CREATESTRUCTW, *LPCREATESTRUCTW;

typedef CREATESTRUCTA CREATESTRUCT, *LPCREATESTRUCT;

typedef struct tagCBT_CREATEWNDA
{ LPCREATESTRUCTA lpcs;
  HWND hwndInsertAfter;
} CBT_CREATEWNDA, *LPCBT_CREATEWNDA;

typedef struct tagCBT_CREATEWNDW
{ LPCREATESTRUCTW lpcs;
  HWND hwndInsertAfter;
} CBT_CREATEWNDW, *LPCBT_CREATEWNDW;

typedef CBT_CREATEWNDA CBT_CREATEWND, *LPCBT_CREATEWND;

typedef struct tagCBTACTIVATESTRUCT
{ BOOL fMouse;
  HWND hWndActive;
} CBTACTIVATESTRUCT, *LPCBTACTIVATESTRUCT;

typedef struct tagCLIENTCREATESTRUCT
{ HANDLE hWindowMenu;
  UINT idFirstChild;
} CLIENTCREATESTRUCT, *LPCLIENTCREATESTRUCT;

typedef struct tagCOMPAREITEMSTRUCT
{ UINT CtlType;
  UINT CtlID;
  HWND hwndItem;
  UINT itemID1;
  DWORD itemData1;
  UINT itemID2;
  DWORD itemData2;
  DWORD dwLocaleId;
} COMPAREITEMSTRUCT, *LPCOMPAREITEMSTRUCT;

typedef struct tagCOPYDATASTRUCT
{ DWORD dwData;
  DWORD cbData;
  PVOID lpData;
} COPYDATASTRUCT, *PCOPYDATASTRUCT;

typedef struct tagCURSORSHAPE
{ int xHotSpot;
  int yHotSpot;
  int cx;
  int cy;
  int cbWidth;
  BYTE Planes;
  BYTE BitsPixel;
} CURSORSHAPE, *LPCURSORSHAPE;

typedef struct tagCWPRETSTRUCT
{ LRESULT lResult;
  LPARAM lParam;
  WPARAM wParam;
  DWORD message;
  HWND hwnd;
} CWPRETSTRUCT;

typedef struct tagCWPSTRUCT
{ LPARAM lParam;
  WPARAM wParam;
  UINT message;
  HWND hwnd;
} CWPSTRUCT, *PCWPSTRUCT;

typedef struct tagDEBUGHOOKINFO
{ DWORD idThread;
  DWORD idThreadInstaller;
  LPARAM lParam;
  WPARAM wParam;
  int code;
} DEBUGHOOKINFO, *PDEBUGHOOKINFO, *LPDEBUGHOOKINFO;

typedef struct tagDELETEITEMSTRUCT
{ UINT CtlType;
  UINT CtlID;
  UINT itemID;
  HWND hwndItem;
  UINT itemData;
} DELETEITEMSTRUCT, *PDELETEITEMSTRUCT, *LPDELETEITEMSTRUCT;

#pragma pack(push,2)

typedef struct
{ DWORD style;
  DWORD dwExtendedStyle;
  short x;
  short y;
  short cx;
  short cy;
  WORD id;
} DLGITEMTEMPLATE, *LPDLGITEMTEMPLATE;

typedef struct
{ DWORD style;
  DWORD dwExtendedStyle;
  WORD cdit;
  short x;
  short y;
  short cx;
  short cy;
} DLGTEMPLATE, *LPDLGTEMPLATE, *LPDLGTEMPLATEA, *LPDLGTEMPLATEW;

typedef const DLGTEMPLATE *LPCDLGTEMPLATE;

#pragma pack(pop)

typedef struct tagDRAWITEMSTRUCT
{ UINT CtlType;
  UINT CtlID;
  UINT itemID;
  UINT itemAction;
  UINT itemState;
  HWND hwndItem;
  HDC hDC;
  RECT rcItem;
  DWORD itemData;
} DRAWITEMSTRUCT, *LPDRAWITEMSTRUCT, *PDRAWITEMSTRUCT;

typedef struct
{ UINT cbSize;
  int iTabLength;
  int iLeftMargin;
  int iRightMargin;
  UINT uiLengthDrawn;
} DRAWTEXTPARAMS, *LPDRAWTEXTPARAMS;

typedef struct tagPAINTSTRUCT
{ HDC hdc;
  BOOL fErase;
  RECT rcPaint;
  BOOL fRestore;
  BOOL fIncUpdate;
  BYTE rgbReserved[32];
} PAINTSTRUCT, *LPPAINTSTRUCT;

typedef struct tagMSG
{ HWND hwnd;
  UINT message;
  WPARAM wParam;
  LPARAM lParam;
  DWORD time;
  POINT pt;
} MSG, *LPMSG, *PMSG;

typedef struct _ICONINFO
{ BOOL fIcon;
  DWORD xHotspot;
  DWORD yHotspot;
  HBITMAP hbmMask;
  HBITMAP hbmColor;
} ICONINFO, *PICONINFO;

typedef struct tagNMHDR
{ HWND hwndFrom;
  UINT idFrom;
  UINT code;
} NMHDR, *LPNMHDR;

typedef struct _WNDCLASSA
{ UINT style;
  WNDPROC lpfnWndProc;
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE hInstance;
  HICON hIcon;
  HCURSOR hCursor;
  HBRUSH hbrBackground;
  LPCSTR lpszMenuName;
  LPCSTR lpszClassName;
} WNDCLASSA, *LPWNDCLASSA, *PWNDCLASSA;

typedef struct _WNDCLASSW
{ UINT style;
  WNDPROC lpfnWndProc;
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE hInstance;
  HICON hIcon;
  HCURSOR hCursor;
  HBRUSH hbrBackground;
  LPCWSTR lpszMenuName;
  LPCWSTR lpszClassName;
} WNDCLASSW, *LPWNDCLASSW, *PWNDCLASSW;

typedef WNDCLASSA WNDCLASS, *LPWNDCLASS, *PWNDCLASS;

typedef struct _WNDCLASSEXA
{ UINT cbSize;
  UINT style;
  WNDPROC lpfnWndProc;
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE hInstance;
  HICON hIcon;
  HCURSOR hCursor;
  HBRUSH hbrBackground;
  LPCSTR lpszMenuName;
  LPCSTR lpszClassName;
  HICON hIconSm;
} WNDCLASSEXA, *LPWNDCLASSEXA, *PWNDCLASSEXA;

typedef struct _WNDCLASSEXW
{ UINT cbSize;
  UINT style;
  WNDPROC lpfnWndProc;
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE hInstance;
  HICON hIcon;
  HCURSOR hCursor;
  HBRUSH hbrBackground;
  LPCWSTR lpszMenuName;
  LPCWSTR lpszClassName;
  HICON hIconSm;
} WNDCLASSEXW, *LPWNDCLASSEXW, *PWNDCLASSEXW;

typedef WNDCLASSEXA WNDCLASSEX, *LPWNDCLASSEX, *PWNDCLASSEX;

typedef struct tagMENUITEMINFOA
{ UINT cbSize;
  UINT fMask;
  UINT fType;
  UINT fState;
  UINT wID;
  HMENU hSubMenu;
  HBITMAP hbmpChecked;
  HBITMAP hbmpUnchecked;
  ULONG_PTR dwItemData;
  LPSTR dwTypeData;
  UINT cch;

  HBITMAP hbmpItem;

} MENUITEMINFOA, *LPMENUITEMINFOA;

typedef const MENUITEMINFOA *LPCMENUITEMINFOA;

typedef struct tagMENUITEMINFOW
{ UINT cbSize;
  UINT fMask;
  UINT fType;
  UINT fState;
  UINT wID;
  HMENU hSubMenu;
  HBITMAP hbmpChecked;
  HBITMAP hbmpUnchecked;
  ULONG_PTR dwItemData;
  LPWSTR dwTypeData;
  UINT cch;

  HBITMAP hbmpItem;

} MENUITEMINFOW, *LPMENUITEMINFOW;

typedef const MENUITEMINFOW *LPCMENUITEMINFOW;
typedef MENUITEMINFOA MENUITEMINFO, *LPMENUITEMINFO;
typedef LPCMENUITEMINFOA LPCMENUITEMINFO;

typedef struct tagSCROLLINFO
{ UINT cbSize;
  UINT fMask;
  int nMin;
  int nMax;
  UINT nPage;
  int nPos;
  int nTrackPos;
} SCROLLINFO, *LPSCROLLINFO;

typedef const SCROLLINFO *LPCSCROLLINFO;

typedef struct _WINDOWPLACEMENT
{ UINT length;
  UINT flags;
  UINT showCmd;
  POINT ptMinPosition;
  POINT ptMaxPosition;
  RECT rcNormalPosition;
} WINDOWPLACEMENT, *LPWINDOWPLACEMENT, *PWINDOWPLACEMENT;

typedef struct
{ WORD versionNumber;
  WORD offset;
} MENUITEMTEMPLATEHEADER;

typedef struct
{ WORD mtOption;
  WORD mtID;
  WCHAR mtString[1];
} MENUITEMTEMPLATE;

typedef void MENUTEMPLATE, MENUTEMPLATEA, MENUTEMPLATEW;
typedef void *LPMENUTEMPLATE, *LPMENUTEMPLATEA, *LPMENUTEMPLATEW;

typedef struct tagHELPINFO
{ UINT cbSize;
  int iContextType;
  int iCtrlId;
  HANDLE hItemHandle;
  DWORD dwContextId;
  POINT MousePos;
} HELPINFO, *LPHELPINFO;

typedef void (__attribute__((__stdcall__)) *MSGBOXCALLBACK) (LPHELPINFO);

typedef struct
{ UINT cbSize;
  HWND hwndOwner;
  HINSTANCE hInstance;
  LPCSTR lpszText;
  LPCSTR lpszCaption;
  DWORD dwStyle;
  LPCSTR lpszIcon;
  DWORD dwContextHelpId;
  MSGBOXCALLBACK lpfnMsgBoxCallback;
  DWORD dwLanguageId;
} MSGBOXPARAMSA, *PMSGBOXPARAMSA, *LPMSGBOXPARAMSA;

typedef struct
{ UINT cbSize;
  HWND hwndOwner;
  HINSTANCE hInstance;
  LPCWSTR lpszText;
  LPCWSTR lpszCaption;
  DWORD dwStyle;
  LPCWSTR lpszIcon;
  DWORD dwContextHelpId;
  MSGBOXCALLBACK lpfnMsgBoxCallback;
  DWORD dwLanguageId;
} MSGBOXPARAMSW, *PMSGBOXPARAMSW, *LPMSGBOXPARAMSW;

typedef MSGBOXPARAMSA MSGBOXPARAMS, *PMSGBOXPARAMS, *LPMSGBOXPARAMS;

typedef struct tagUSEROBJECTFLAGS
{ BOOL fInherit;
  BOOL fReserved;
  DWORD dwFlags;
} USEROBJECTFLAGS;

typedef struct tagFILTERKEYS
{ UINT cbSize;
  DWORD dwFlags;
  DWORD iWaitMSec;
  DWORD iDelayMSec;
  DWORD iRepeatMSec;
  DWORD iBounceMSec;
} FILTERKEYS;

typedef struct tagHIGHCONTRASTA
{ UINT cbSize;
  DWORD dwFlags;
  LPSTR lpszDefaultScheme;
} HIGHCONTRASTA, *LPHIGHCONTRASTA;

typedef struct tagHIGHCONTRASTW
{ UINT cbSize;
  DWORD dwFlags;
  LPWSTR lpszDefaultScheme;
} HIGHCONTRASTW, *LPHIGHCONTRASTW;

typedef HIGHCONTRASTA HIGHCONTRAST, *LPHIGHCONTRAST;

typedef struct tagMINIMIZEDMETRICS
{ UINT cbSize;
  int iWidth;
  int iHorzGap;
  int iVertGap;
  int iArrange;
} MINIMIZEDMETRICS, *LPMINIMIZEDMETRICS;

typedef struct tagMOUSEKEYS
{ UINT cbSize;
  DWORD dwFlags;
  DWORD iMaxSpeed;
  DWORD iTimeToMaxSpeed;
  DWORD iCtrlSpeed;
  DWORD dwReserved1;
  DWORD dwReserved2;
} MOUSEKEYS, *LPMOUSEKEYS;

typedef struct tagSERIALKEYSA
{ UINT cbSize;
  DWORD dwFlags;
  LPSTR lpszActivePort;
  LPSTR lpszPort;
  UINT iBaudRate;
  UINT iPortState;
  UINT iActive;
} SERIALKEYSA, *LPSERIALKEYSA;

typedef struct tagSERIALKEYSW
{ UINT cbSize;
  DWORD dwFlags;
  LPWSTR lpszActivePort;
  LPWSTR lpszPort;
  UINT iBaudRate;
  UINT iPortState;
  UINT iActive;
} SERIALKEYSW, *LPSERIALKEYSW;

typedef SERIALKEYSA SERIALKEYS, *LPSERIALKEYS;

typedef struct tagSOUNDSENTRYA
{ UINT cbSize;
  DWORD dwFlags;
  DWORD iFSTextEffect;
  DWORD iFSTextEffectMSec;
  DWORD iFSTextEffectColorBits;
  DWORD iFSGrafEffect;
  DWORD iFSGrafEffectMSec;
  DWORD iFSGrafEffectColor;
  DWORD iWindowsEffect;
  DWORD iWindowsEffectMSec;
  LPSTR lpszWindowsEffectDLL;
  DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYA, *LPSOUNDSENTRYA;

typedef struct tagSOUNDSENTRYW
{ UINT cbSize;
  DWORD dwFlags;
  DWORD iFSTextEffect;
  DWORD iFSTextEffectMSec;
  DWORD iFSTextEffectColorBits;
  DWORD iFSGrafEffect;
  DWORD iFSGrafEffectMSec;
  DWORD iFSGrafEffectColor;
  DWORD iWindowsEffect;
  DWORD iWindowsEffectMSec;
  LPWSTR lpszWindowsEffectDLL;
  DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYW, *LPSOUNDSENTRYW;

typedef SOUNDSENTRYA SOUNDSENTRY, *LPSOUNDSENTRY;

typedef struct tagSTICKYKEYS
{ DWORD cbSize;
  DWORD dwFlags;
} STICKYKEYS, *LPSTICKYKEYS;

typedef struct tagTOGGLEKEYS
{ DWORD cbSize;
  DWORD dwFlags;
} TOGGLEKEYS;

typedef struct tagMOUSEHOOKSTRUCT
{ POINT pt;
  HWND hwnd;
  UINT wHitTestCode;
  DWORD dwExtraInfo;
} MOUSEHOOKSTRUCT, *LPMOUSEHOOKSTRUCT, *PMOUSEHOOKSTRUCT;

typedef struct tagTRACKMOUSEEVENT
{ DWORD cbSize;
  DWORD dwFlags;
  HWND hwndTrack;
  DWORD dwHoverTime;
} TRACKMOUSEEVENT, *LPTRACKMOUSEEVENT;

typedef struct tagTPMPARAMS
{ UINT cbSize;
  RECT rcExclude;
} TPMPARAMS, *LPTPMPARAMS;

typedef struct tagEVENTMSG
{ UINT message;
  UINT paramL;
  UINT paramH;
  DWORD time;
  HWND hwnd;
} EVENTMSG, *PEVENTMSGMSG, *LPEVENTMSGMSG, *PEVENTMSG, *LPEVENTMSG;

typedef struct _WINDOWPOS
{ HWND hwnd;
  HWND hwndInsertAfter;
  int x;
  int y;
  int cx;
  int cy;
  UINT flags;
} WINDOWPOS, *PWINDOWPOS, *LPWINDOWPOS;

typedef struct tagNCCALCSIZE_PARAMS
{ RECT rgrc[3];
  PWINDOWPOS lppos;
} NCCALCSIZE_PARAMS, *LPNCCALCSIZE_PARAMS;

typedef struct tagMDICREATESTRUCTA
{ LPCSTR szClass;
  LPCSTR szTitle;
  HANDLE hOwner;
  int x;
  int y;
  int cx;
  int cy;
  DWORD style;
  LPARAM lParam;
} MDICREATESTRUCTA, *LPMDICREATESTRUCTA;

typedef struct tagMDICREATESTRUCTW
{ LPCWSTR szClass;
  LPCWSTR szTitle;
  HANDLE hOwner;
  int x;
  int y;
  int cx;
  int cy;
  DWORD style;
  LPARAM lParam;
} MDICREATESTRUCTW, *LPMDICREATESTRUCTW;

typedef MDICREATESTRUCTA MDICREATESTRUCT, *LPMDICREATESTRUCT;

typedef struct tagMINMAXINFO
{ POINT ptReserved;
  POINT ptMaxSize;
  POINT ptMaxPosition;
  POINT ptMinTrackSize;
  POINT ptMaxTrackSize;
} MINMAXINFO, *PMINMAXINFO, *LPMINMAXINFO;

typedef struct tagMDINEXTMENU
{ HMENU hmenuIn;
  HMENU hmenuNext;
  HWND hwndNext;
} MDINEXTMENU, *PMDINEXTMENU, *LPMDINEXTMENU;

typedef struct tagMEASUREITEMSTRUCT
{ UINT CtlType;
  UINT CtlID;
  UINT itemID;
  UINT itemWidth;
  UINT itemHeight;
  DWORD itemData;
} MEASUREITEMSTRUCT, *PMEASUREITEMSTRUCT, *LPMEASUREITEMSTRUCT;

typedef struct tagDROPSTRUCT
{ HWND hwndSource;
  HWND hwndSink;
  DWORD wFmt;
  DWORD dwData;
  POINT ptDrop;
  DWORD dwControlData;
} DROPSTRUCT, *PDROPSTRUCT, *LPDROPSTRUCT;

typedef DWORD HELPPOLY;

typedef struct tagMULTIKEYHELPA
{ DWORD mkSize;
  CHAR mkKeylist;
  CHAR szKeyphrase[1];
} MULTIKEYHELPA, *PMULTIKEYHELPA, *LPMULTIKEYHELPA;

typedef struct tagMULTIKEYHELPW
{ DWORD mkSize;
  WCHAR mkKeylist;
  WCHAR szKeyphrase[1];
} MULTIKEYHELPW, *PMULTIKEYHELPW, *LPMULTIKEYHELPW;

typedef MULTIKEYHELPA MULTIKEYHELP, *PMULTIKEYHELP, *LPMULTIKEYHELP;

typedef struct tagHELPWININFOA
{ int wStructSize;
  int x;
  int y;
  int dx;
  int dy;
  int wMax;
  CHAR rgchMember[2];
} HELPWININFOA, *PHELPWININFOA, *LPHELPWININFOA;

typedef struct tagHELPWININFOW
{ int wStructSize;
  int x;
  int y;
  int dx;
  int dy;
  int wMax;
  WCHAR rgchMember[2];
} HELPWININFOW, *PHELPWININFOW, *LPHELPWININFOW;

typedef struct tagSTYLESTRUCT
{ DWORD styleOld;
  DWORD styleNew;
} STYLESTRUCT, *LPSTYLESTRUCT;

typedef struct tagALTTABINFO
{ DWORD cbSize;
  int cItems;
  int cColumns;
  int cRows;
  int iColFocus;
  int iRowFocus;
  int cxItem;
  int cyItem;
  POINT ptStart;
} ALTTABINFO, *PALTTABINFO, *LPALTTABINFO;

typedef struct tagCOMBOBOXINFO
{ DWORD cbSize;
  RECT rcItem;
  RECT rcButton;
  DWORD stateButton;
  HWND hwndCombo;
  HWND hwndItem;
  HWND hwndList;
} COMBOBOXINFO, *PCOMBOBOXINFO, *LPCOMBOBOXINFO;

typedef struct tagCURSORINFO
{ DWORD cbSize;
  DWORD flags;
  HCURSOR hCursor;
  POINT ptScreenPos;
} CURSORINFO, *PCURSORINFO, *LPCURSORINFO;

typedef struct tagMENUBARINFO
{ DWORD cbSize;
  RECT rcBar;
  HMENU hMenu;
  HWND hwndMenu;
  BOOL fBarFocused:1;
  BOOL fFocused:1;
} MENUBARINFO, *PMENUBARINFO;

typedef struct tagMENUINFO
{ DWORD cbSize;
  DWORD fMask;
  DWORD dwStyle;
  UINT cyMax;
  HBRUSH hbrBack;
  DWORD dwContextHelpID;
  ULONG_PTR dwMenuData;
} MENUINFO, *LPMENUINFO;

typedef MENUINFO const *LPCMENUINFO;



typedef struct tagSCROLLBARINFO
{ DWORD cbSize;
  RECT rcScrollBar;
  int dxyLineButton;
  int xyThumbTop;
  int xyThumbBottom;
  int reserved;
  DWORD rgstate[5 +1];
} SCROLLBARINFO, *PSCROLLBARINFO, *LPSCROLLBARINFO;

typedef struct tagWINDOWINFO
{ DWORD cbSize;
  RECT rcWindow;
  RECT rcClient;
  DWORD dwStyle;
  DWORD dwExStyle;
  DWORD dwWindowStatus;
  UINT cxWindowBorders;
  UINT cyWindowBorders;
  ATOM atomWindowType;
  WORD wCreatorVersion;
} WINDOWINFO, *PWINDOWINFO, *LPWINDOWINFO;

typedef struct tagLASTINPUTINFO
{ UINT cbSize;
  DWORD dwTime;
} LASTINPUTINFO, *PLASTINPUTINFO;

typedef struct tagMONITORINFO
{ DWORD cbSize;
  RECT rcMonitor;
  RECT rcWork;
  DWORD dwFlags;
} MONITORINFO, *LPMONITORINFO;
# 3380 "c:\\mingw\\include\\winuser.h" 3
typedef struct tagMONITORINFOEXA
{ DWORD cbSize;
  RECT rcMonitor;
  RECT rcWork;
  DWORD dwFlags;
  CHAR szDevice[32];
} MONITORINFOEXA, *LPMONITORINFOEXA;

typedef struct tagMONITORINFOEXW
{ DWORD cbSize;
  RECT rcMonitor;
  RECT rcWork;
  DWORD dwFlags;
  WCHAR szDevice[32];
} MONITORINFOEXW, *LPMONITORINFOEXW;


typedef MONITORINFOEXA MONITORINFOEX, *LPMONITORINFOEX;

typedef struct tagKBDLLHOOKSTRUCT
{ DWORD vkCode;
  DWORD scanCode;
  DWORD flags;
  DWORD time;
  DWORD dwExtraInfo;
} KBDLLHOOKSTRUCT, *LPKBDLLHOOKSTRUCT, *PKBDLLHOOKSTRUCT;

typedef struct
{ POINT pt;
  DWORD mouseData;
  DWORD flags;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} MSLLHOOKSTRUCT, *PMSLLHOOKSTRUCT;
# 3437 "c:\\mingw\\include\\winuser.h" 3
typedef const GUID *LPCGUID;


 HKL __attribute__((__stdcall__)) ActivateKeyboardLayout (HKL, UINT);
 BOOL __attribute__((__stdcall__)) AdjustWindowRect (LPRECT, DWORD, BOOL);
 BOOL __attribute__((__stdcall__)) AdjustWindowRectEx (LPRECT, DWORD, BOOL, DWORD);

 BOOL __attribute__((__stdcall__)) AnyPopup (void);


 BOOL __attribute__((__stdcall__)) AppendMenuA (HMENU, UINT, UINT_PTR, LPCSTR);
 BOOL __attribute__((__stdcall__)) AppendMenuW (HMENU, UINT, UINT_PTR, LPCWSTR);

 UINT __attribute__((__stdcall__)) ArrangeIconicWindows (HWND);
 BOOL __attribute__((__stdcall__)) AttachThreadInput (DWORD, DWORD, BOOL);
 HDWP __attribute__((__stdcall__)) BeginDeferWindowPos (int);
 HDC __attribute__((__stdcall__)) BeginPaint (HWND, LPPAINTSTRUCT);
 BOOL __attribute__((__stdcall__)) BringWindowToTop (HWND);
 long __attribute__((__stdcall__)) BroadcastSystemMessage (DWORD, LPDWORD, UINT, WPARAM, LPARAM);


 BOOL __attribute__((__stdcall__)) CallMsgFilterA (LPMSG, INT);
 BOOL __attribute__((__stdcall__)) CallMsgFilterW (LPMSG, INT);


 LRESULT __attribute__((__stdcall__)) CallWindowProcA (WNDPROC, HWND, UINT, WPARAM, LPARAM);
 LRESULT __attribute__((__stdcall__)) CallWindowProcW (WNDPROC, HWND, UINT, WPARAM, LPARAM);

 WORD __attribute__((__stdcall__)) CascadeWindows (HWND, UINT, LPCRECT, UINT, const HWND *);
 BOOL __attribute__((__stdcall__)) ChangeClipboardChain (HWND, HWND);


 LRESULT __attribute__((__stdcall__)) CallNextHookEx (HHOOK, int, WPARAM, LPARAM);


 BOOL __attribute__((__stdcall__)) ChangeMenuA (HMENU, UINT, LPCSTR, UINT, UINT);
 BOOL __attribute__((__stdcall__)) ChangeMenuW (HMENU, UINT, LPCWSTR, UINT, UINT);


 LPSTR __attribute__((__stdcall__)) CharLowerA (LPSTR);
 LPWSTR __attribute__((__stdcall__)) CharLowerW (LPWSTR);


 DWORD __attribute__((__stdcall__)) CharLowerBuffA (LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) CharLowerBuffW (LPWSTR, DWORD);


 LPSTR __attribute__((__stdcall__)) CharNextA (LPCSTR);
 LPWSTR __attribute__((__stdcall__)) CharNextW (LPCWSTR);
 LPSTR __attribute__((__stdcall__)) CharNextExA (WORD, LPCSTR, DWORD);


 LPSTR __attribute__((__stdcall__)) CharPrevA (LPCSTR, LPCSTR);
 LPWSTR __attribute__((__stdcall__)) CharPrevW (LPCWSTR, LPCWSTR);
 LPSTR __attribute__((__stdcall__)) CharPrevExA (WORD, LPCSTR, LPCSTR, DWORD);


 BOOL __attribute__((__stdcall__)) CharToOemA (LPCSTR, LPSTR);
 BOOL __attribute__((__stdcall__)) CharToOemW (LPCWSTR, LPSTR);


 BOOL __attribute__((__stdcall__)) CharToOemBuffA (LPCSTR, LPSTR, DWORD);
 BOOL __attribute__((__stdcall__)) CharToOemBuffW (LPCWSTR, LPSTR, DWORD);


 LPSTR __attribute__((__stdcall__)) CharUpperA (LPSTR);
 LPWSTR __attribute__((__stdcall__)) CharUpperW (LPWSTR);


 DWORD __attribute__((__stdcall__)) CharUpperBuffA (LPSTR, DWORD);
 DWORD __attribute__((__stdcall__)) CharUpperBuffW (LPWSTR, DWORD);

 BOOL __attribute__((__stdcall__)) CheckDlgButton (HWND, int, UINT);
 DWORD __attribute__((__stdcall__)) CheckMenuItem (HMENU, UINT, UINT);
 BOOL __attribute__((__stdcall__)) CheckMenuRadioItem (HMENU, UINT, UINT, UINT, UINT);
 BOOL __attribute__((__stdcall__)) CheckRadioButton (HWND, int, int, int);
 HWND __attribute__((__stdcall__)) ChildWindowFromPoint (HWND, POINT);
 HWND __attribute__((__stdcall__)) ChildWindowFromPointEx (HWND, POINT, UINT);
 BOOL __attribute__((__stdcall__)) ClientToScreen (HWND, LPPOINT);
 BOOL __attribute__((__stdcall__)) ClipCursor (LPCRECT);
 BOOL __attribute__((__stdcall__)) CloseClipboard (void);
 BOOL __attribute__((__stdcall__)) CloseDesktop (HDESK);
 BOOL __attribute__((__stdcall__)) CloseWindow (HWND);
 BOOL __attribute__((__stdcall__)) CloseWindowStation (HWINSTA);


 int __attribute__((__stdcall__)) CopyAcceleratorTableA (HACCEL, LPACCEL, int);
 int __attribute__((__stdcall__)) CopyAcceleratorTableW (HACCEL, LPACCEL, int);


 HICON __attribute__((__stdcall__)) CopyIcon (HICON);
 HANDLE __attribute__((__stdcall__)) CopyImage (HANDLE, UINT, int, int, UINT);
 BOOL __attribute__((__stdcall__)) CopyRect (LPRECT, LPCRECT);
 int __attribute__((__stdcall__)) CountClipboardFormats (void);


 HACCEL __attribute__((__stdcall__)) CreateAcceleratorTableA (LPACCEL, int);
 HACCEL __attribute__((__stdcall__)) CreateAcceleratorTableW (LPACCEL, int);

 BOOL __attribute__((__stdcall__)) CreateCaret (HWND, HBITMAP, int, int);
 HCURSOR __attribute__((__stdcall__)) CreateCursor (HINSTANCE, int, int, int, int, PCVOID, PCVOID);
# 3548 "c:\\mingw\\include\\winuser.h" 3
 HWND __attribute__((__stdcall__))
CreateDialogIndirectParamA (HINSTANCE, LPCDLGTEMPLATE, HWND, DLGPROC, LPARAM);
 HWND __attribute__((__stdcall__))
CreateDialogIndirectParamW (HINSTANCE, LPCDLGTEMPLATE, HWND, DLGPROC, LPARAM);


 HWND __attribute__((__stdcall__)) CreateDialogParamA (HINSTANCE, LPCSTR, HWND, DLGPROC, LPARAM);
 HWND __attribute__((__stdcall__)) CreateDialogParamW (HINSTANCE, LPCWSTR, HWND, DLGPROC, LPARAM);

 HICON __attribute__((__stdcall__)) CreateIcon (HINSTANCE, int, int, BYTE, BYTE, const BYTE *, const BYTE *);
 HICON __attribute__((__stdcall__)) CreateIconFromResource (PBYTE, DWORD, BOOL, DWORD);
 HICON __attribute__((__stdcall__)) CreateIconFromResourceEx (PBYTE, DWORD, BOOL, DWORD, int, int, UINT);
 HICON __attribute__((__stdcall__)) CreateIconIndirect (PICONINFO);


 HWND __attribute__((__stdcall__)) CreateMDIWindowA (LPCSTR, LPCSTR, DWORD, int, int, int, int, HWND, HINSTANCE, LPARAM);
 HWND __attribute__((__stdcall__)) CreateMDIWindowW (LPCWSTR, LPCWSTR, DWORD, int, int, int, int, HWND, HINSTANCE, LPARAM);
 HMENU __attribute__((__stdcall__)) CreateMenu (void);
 HMENU __attribute__((__stdcall__)) CreatePopupMenu (void);
# 3575 "c:\\mingw\\include\\winuser.h" 3
 HWND __attribute__((__stdcall__)) CreateWindowExA
(DWORD, LPCSTR, LPCSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);
 HWND __attribute__((__stdcall__)) CreateWindowExW
(DWORD, LPCWSTR, LPCWSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);


 HWINSTA __attribute__((__stdcall__)) CreateWindowStationA (LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES);
 HWINSTA __attribute__((__stdcall__)) CreateWindowStationW (LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES);

 HDWP __attribute__((__stdcall__)) DeferWindowPos (HDWP, HWND, HWND, int, int, int, int, UINT);


 LRESULT __attribute__((__stdcall__)) DefDlgProcA (HWND, UINT, WPARAM, LPARAM);
 LRESULT __attribute__((__stdcall__)) DefDlgProcW (HWND, UINT, WPARAM, LPARAM);


 LRESULT __attribute__((__stdcall__)) DefFrameProcA (HWND, HWND, UINT, WPARAM, LPARAM);
 LRESULT __attribute__((__stdcall__)) DefFrameProcW (HWND, HWND, UINT, WPARAM, LPARAM);


 LRESULT __attribute__((__stdcall__)) DefMDIChildProcA (HWND, UINT, WPARAM, LPARAM);
 LRESULT __attribute__((__stdcall__)) DefMDIChildProcW (HWND, UINT, WPARAM, LPARAM);


 LRESULT __attribute__((__stdcall__)) DefWindowProcA (HWND, UINT, WPARAM, LPARAM);
 LRESULT __attribute__((__stdcall__)) DefWindowProcW (HWND, UINT, WPARAM, LPARAM);

 BOOL __attribute__((__stdcall__)) DeleteMenu (HMENU, UINT, UINT);
 BOOL __attribute__((__stdcall__)) DeregisterShellHookWindow (HWND);
 BOOL __attribute__((__stdcall__)) DestroyAcceleratorTable (HACCEL);
 BOOL __attribute__((__stdcall__)) DestroyCaret (void);
 BOOL __attribute__((__stdcall__)) DestroyCursor (HCURSOR);
 BOOL __attribute__((__stdcall__)) DestroyIcon (HICON);
 BOOL __attribute__((__stdcall__)) DestroyMenu (HMENU);
 BOOL __attribute__((__stdcall__)) DestroyWindow (HWND);
# 3620 "c:\\mingw\\include\\winuser.h" 3
 int __attribute__((__stdcall__)) DialogBoxIndirectParamA (HINSTANCE, LPCDLGTEMPLATE, HWND, DLGPROC, LPARAM);
 int __attribute__((__stdcall__)) DialogBoxIndirectParamW (HINSTANCE, LPCDLGTEMPLATE, HWND, DLGPROC, LPARAM);







 int __attribute__((__stdcall__)) DialogBoxParamA (HINSTANCE, LPCSTR, HWND, DLGPROC, LPARAM);
 int __attribute__((__stdcall__)) DialogBoxParamW (HINSTANCE, LPCWSTR, HWND, DLGPROC, LPARAM);



 LONG __attribute__((__stdcall__)) DispatchMessageA (const MSG *);
 LONG __attribute__((__stdcall__)) DispatchMessageW (const MSG *);


 int __attribute__((__stdcall__)) DlgDirListA (HWND, LPSTR, int, int, UINT);
 int __attribute__((__stdcall__)) DlgDirListW (HWND, LPWSTR, int, int, UINT);


 int __attribute__((__stdcall__)) DlgDirListComboBoxA (HWND, LPSTR, int, int, UINT);
 int __attribute__((__stdcall__)) DlgDirListComboBoxW (HWND, LPWSTR, int, int, UINT);


 BOOL __attribute__((__stdcall__)) DlgDirSelectComboBoxExA (HWND, LPSTR, int, int);
 BOOL __attribute__((__stdcall__)) DlgDirSelectComboBoxExW (HWND, LPWSTR, int, int);


 BOOL __attribute__((__stdcall__)) DlgDirSelectExA (HWND, LPSTR, int, int);
 BOOL __attribute__((__stdcall__)) DlgDirSelectExW (HWND, LPWSTR, int, int);

 BOOL __attribute__((__stdcall__)) DragDetect (HWND, POINT);
 DWORD __attribute__((__stdcall__)) DragObject (HWND, HWND, UINT, DWORD, HCURSOR);
 BOOL __attribute__((__stdcall__)) DrawAnimatedRects (HWND, int, LPCRECT, LPCRECT);
 BOOL __attribute__((__stdcall__)) DrawCaption (HWND, HDC, LPCRECT, UINT);
 BOOL __attribute__((__stdcall__)) DrawEdge (HDC, LPRECT, UINT, UINT);
 BOOL __attribute__((__stdcall__)) DrawFocusRect (HDC, LPCRECT);
 BOOL __attribute__((__stdcall__)) DrawFrameControl (HDC, LPRECT, UINT, UINT);
 BOOL __attribute__((__stdcall__)) DrawIcon (HDC, int, int, HICON);
 BOOL __attribute__((__stdcall__)) DrawIconEx (HDC, int, int, HICON, int, int, UINT, HBRUSH, UINT);
 BOOL __attribute__((__stdcall__)) DrawMenuBar (HWND);


 BOOL __attribute__((__stdcall__)) DrawStateA
(HDC, HBRUSH, DRAWSTATEPROC, LPARAM, WPARAM, int, int, int, int, UINT);
 BOOL __attribute__((__stdcall__)) DrawStateW
(HDC, HBRUSH, DRAWSTATEPROC, LPARAM, WPARAM, int, int, int, int, UINT);


 int __attribute__((__stdcall__)) DrawTextA (HDC, LPCSTR, int, LPRECT, UINT);
 int __attribute__((__stdcall__)) DrawTextW (HDC, LPCWSTR, int, LPRECT, UINT);


 int __attribute__((__stdcall__)) DrawTextExA (HDC, LPSTR, int, LPRECT, UINT, LPDRAWTEXTPARAMS);
 int __attribute__((__stdcall__)) DrawTextExW (HDC, LPWSTR, int, LPRECT, UINT, LPDRAWTEXTPARAMS);

 BOOL __attribute__((__stdcall__)) EmptyClipboard (void);
 BOOL __attribute__((__stdcall__)) EnableMenuItem (HMENU, UINT, UINT);
 BOOL __attribute__((__stdcall__)) EnableScrollBar (HWND, UINT, UINT);
 BOOL __attribute__((__stdcall__)) EnableWindow (HWND, BOOL);
 BOOL __attribute__((__stdcall__)) EndDeferWindowPos (HDWP);
 BOOL __attribute__((__stdcall__)) EndDialog (HWND, int);
 BOOL __attribute__((__stdcall__)) EndMenu (void);
 BOOL __attribute__((__stdcall__)) EndPaint (HWND, const PAINTSTRUCT *);

 BOOL __attribute__((__stdcall__)) EnumChildWindows (HWND, ENUMWINDOWSPROC, LPARAM);
 UINT __attribute__((__stdcall__)) EnumClipboardFormats (UINT);


 BOOL __attribute__((__stdcall__)) EnumDesktopsA (HWINSTA, DESKTOPENUMPROCA, LPARAM);
 BOOL __attribute__((__stdcall__)) EnumDesktopsW (HWINSTA, DESKTOPENUMPROCW, LPARAM);

 BOOL __attribute__((__stdcall__)) EnumDesktopWindows (HDESK, ENUMWINDOWSPROC, LPARAM);
 BOOL __attribute__((__stdcall__)) EnumDisplayMonitors (HDC, LPCRECT, MONITORENUMPROC, LPARAM);


 int __attribute__((__stdcall__)) EnumPropsA (HWND, PROPENUMPROCA);
 int __attribute__((__stdcall__)) EnumPropsW (HWND, PROPENUMPROCW);


 int __attribute__((__stdcall__)) EnumPropsExA (HWND, PROPENUMPROCEXA, LPARAM);
 int __attribute__((__stdcall__)) EnumPropsExW (HWND, PROPENUMPROCEXW, LPARAM);


 BOOL __attribute__((__stdcall__)) EnumThreadWindows (DWORD, WNDENUMPROC, LPARAM);
 BOOL __attribute__((__stdcall__)) EnumWindows (WNDENUMPROC, LPARAM);


 BOOL __attribute__((__stdcall__)) EnumWindowStationsA (WINSTAENUMPROCA, LPARAM);
 BOOL __attribute__((__stdcall__)) EnumWindowStationsW (WINSTAENUMPROCW, LPARAM);

 BOOL __attribute__((__stdcall__)) EqualRect (LPCRECT, LPCRECT);


 BOOL __attribute__((__stdcall__)) ExitWindowsEx (UINT, DWORD);


 HWND __attribute__((__stdcall__)) FindWindowA (LPCSTR, LPCSTR);
 HWND __attribute__((__stdcall__)) FindWindowW (LPCWSTR, LPCWSTR);


 HWND __attribute__((__stdcall__)) FindWindowExA (HWND, HWND, LPCSTR, LPCSTR);
 HWND __attribute__((__stdcall__)) FindWindowExW (HWND, HWND, LPCWSTR, LPCWSTR);

 BOOL __attribute__((__stdcall__)) FlashWindow (HWND, BOOL);

int __attribute__((__stdcall__)) FrameRect (HDC, LPCRECT, HBRUSH);
 BOOL __attribute__((__stdcall__)) FrameRgn (HDC, HRGN, HBRUSH, int, int);
 HWND __attribute__((__stdcall__)) GetActiveWindow (void);
 HWND __attribute__((__stdcall__)) GetAncestor (HWND, UINT);
 SHORT __attribute__((__stdcall__)) GetAsyncKeyState (int);
 HWND __attribute__((__stdcall__)) GetCapture (void);
 UINT __attribute__((__stdcall__)) GetCaretBlinkTime (void);
 BOOL __attribute__((__stdcall__)) GetCaretPos (LPPOINT);


 BOOL __attribute__((__stdcall__)) GetClassInfoA (HINSTANCE, LPCSTR, LPWNDCLASSA);
 BOOL __attribute__((__stdcall__)) GetClassInfoW (HINSTANCE, LPCWSTR, LPWNDCLASSW);


 BOOL __attribute__((__stdcall__)) GetClassInfoExA (HINSTANCE, LPCSTR, LPWNDCLASSEXA);
 BOOL __attribute__((__stdcall__)) GetClassInfoExW (HINSTANCE, LPCWSTR, LPWNDCLASSEXW);


 DWORD __attribute__((__stdcall__)) GetClassLongA (HWND, int);
 DWORD __attribute__((__stdcall__)) GetClassLongW (HWND, int);
# 3760 "c:\\mingw\\include\\winuser.h" 3
 int __attribute__((__stdcall__)) GetClassNameA (HWND, LPSTR, int);
 int __attribute__((__stdcall__)) GetClassNameW (HWND, LPWSTR, int);

 WORD __attribute__((__stdcall__)) GetClassWord (HWND, int);
 BOOL __attribute__((__stdcall__)) GetClientRect (HWND, LPRECT);


 int __attribute__((__stdcall__)) GetClipboardFormatNameA (UINT, LPSTR, int);
 int __attribute__((__stdcall__)) GetClipboardFormatNameW (UINT, LPWSTR, int);

 HANDLE __attribute__((__stdcall__)) GetClipboardData (UINT);
 HWND __attribute__((__stdcall__)) GetClipboardOwner (void);

HWND __attribute__((__stdcall__)) GetClipboardViewer (void);
 BOOL __attribute__((__stdcall__)) GetClipCursor (LPRECT);
 BOOL __attribute__((__stdcall__)) GetCursorPos (LPPOINT);
 HDC __attribute__((__stdcall__)) GetDC (HWND);
 HDC __attribute__((__stdcall__)) GetDCEx (HWND, HRGN, DWORD);
 HWND __attribute__((__stdcall__)) GetDesktopWindow (void);
 long __attribute__((__stdcall__)) GetDialogBaseUnits (void);
 int __attribute__((__stdcall__)) GetDlgCtrlID (HWND);
 HWND __attribute__((__stdcall__)) GetDlgItem (HWND, int);
 UINT __attribute__((__stdcall__)) GetDlgItemInt (HWND, int, PBOOL, BOOL);


 UINT __attribute__((__stdcall__)) GetDlgItemTextA (HWND, int, LPSTR, int);
 UINT __attribute__((__stdcall__)) GetDlgItemTextW (HWND, int, LPWSTR, int);

 UINT __attribute__((__stdcall__)) GetDoubleClickTime (void);
 HWND __attribute__((__stdcall__)) GetFocus (void);
 HWND __attribute__((__stdcall__)) GetForegroundWindow (void);
 BOOL __attribute__((__stdcall__)) GetIconInfo (HICON, PICONINFO);
 BOOL __attribute__((__stdcall__)) GetInputState (void);
 UINT __attribute__((__stdcall__)) GetKBCodePage (void);
 HKL __attribute__((__stdcall__)) GetKeyboardLayout (DWORD);
 UINT __attribute__((__stdcall__)) GetKeyboardLayoutList (int, HKL *);


 BOOL __attribute__((__stdcall__)) GetKeyboardLayoutNameA (LPSTR);
 BOOL __attribute__((__stdcall__)) GetKeyboardLayoutNameW (LPWSTR);

 BOOL __attribute__((__stdcall__)) GetKeyboardState (PBYTE);
 int __attribute__((__stdcall__)) GetKeyboardType (int);


 int __attribute__((__stdcall__)) GetKeyNameTextA (LONG, LPSTR, int);
 int __attribute__((__stdcall__)) GetKeyNameTextW (LONG, LPWSTR, int);

 SHORT __attribute__((__stdcall__)) GetKeyState (int);
 HWND __attribute__((__stdcall__)) GetLastActivePopup (HWND);
 HMENU __attribute__((__stdcall__)) GetMenu (HWND);
 LONG __attribute__((__stdcall__)) GetMenuCheckMarkDimensions (void);
 DWORD __attribute__((__stdcall__)) GetMenuContextHelpId (HMENU);
 UINT __attribute__((__stdcall__)) GetMenuDefaultItem (HMENU, UINT, UINT);
 int __attribute__((__stdcall__)) GetMenuItemCount (HMENU);
 UINT __attribute__((__stdcall__)) GetMenuItemID (HMENU, int);


 BOOL __attribute__((__stdcall__)) GetMenuItemInfoA (HMENU, UINT, BOOL, LPMENUITEMINFOA);
 BOOL __attribute__((__stdcall__)) GetMenuItemInfoW (HMENU, UINT, BOOL, LPMENUITEMINFOW);

 BOOL __attribute__((__stdcall__)) GetMenuItemRect (HWND, HMENU, UINT, LPRECT);
 UINT __attribute__((__stdcall__)) GetMenuState (HMENU, UINT, UINT);


 int __attribute__((__stdcall__)) GetMenuStringA (HMENU, UINT, LPSTR, int, UINT);
 int __attribute__((__stdcall__)) GetMenuStringW (HMENU, UINT, LPWSTR, int, UINT);


 BOOL __attribute__((__stdcall__)) GetMessageA (LPMSG, HWND, UINT, UINT);
 BOOL __attribute__((__stdcall__)) GetMessageW (LPMSG, HWND, UINT, UINT);

 LONG __attribute__((__stdcall__)) GetMessageExtraInfo (void);
 DWORD __attribute__((__stdcall__)) GetMessagePos (void);
 LONG __attribute__((__stdcall__)) GetMessageTime (void);

 HWND __attribute__((__stdcall__)) GetNextDlgGroupItem (HWND, HWND, BOOL);
 HWND __attribute__((__stdcall__)) GetNextDlgTabItem (HWND, HWND, BOOL);
 HWND __attribute__((__stdcall__)) GetOpenClipboardWindow (void);
 HWND __attribute__((__stdcall__)) GetParent (HWND);
 int __attribute__((__stdcall__)) GetPriorityClipboardFormat (UINT *, int);


 HANDLE __attribute__((__stdcall__)) GetPropA (HWND, LPCSTR);
 HANDLE __attribute__((__stdcall__)) GetPropW (HWND, LPCWSTR);

 DWORD __attribute__((__stdcall__)) GetQueueStatus (UINT);
 BOOL __attribute__((__stdcall__)) GetScrollInfo (HWND, int, LPSCROLLINFO);
 int __attribute__((__stdcall__)) GetScrollPos (HWND, int);
 BOOL __attribute__((__stdcall__)) GetScrollRange (HWND, int, LPINT, LPINT);
 HMENU __attribute__((__stdcall__)) GetSubMenu (HMENU, int);
 DWORD __attribute__((__stdcall__)) GetSysColor (int);
 HBRUSH __attribute__((__stdcall__)) GetSysColorBrush (int);
 HMENU __attribute__((__stdcall__)) GetSystemMenu (HWND, BOOL);
 int __attribute__((__stdcall__)) GetSystemMetrics (int);



 DWORD __attribute__((__stdcall__)) GetTabbedTextExtentA (HDC, LPCSTR, int, int, LPINT);
 DWORD __attribute__((__stdcall__)) GetTabbedTextExtentW (HDC, LPCWSTR, int, int, LPINT);


 LONG __attribute__((__stdcall__)) GetWindowLongA (HWND, int);
 LONG __attribute__((__stdcall__)) GetWindowLongW (HWND, int);
# 3875 "c:\\mingw\\include\\winuser.h" 3
 HDESK __attribute__((__stdcall__)) GetThreadDesktop (DWORD);
 HWND __attribute__((__stdcall__)) GetTopWindow (HWND);
 BOOL __attribute__((__stdcall__)) GetUpdateRect (HWND, LPRECT, BOOL);
 int __attribute__((__stdcall__)) GetUpdateRgn (HWND, HRGN, BOOL);


 BOOL __attribute__((__stdcall__)) GetUserObjectInformationA (HANDLE, int, PVOID, DWORD, PDWORD);
 BOOL __attribute__((__stdcall__)) GetUserObjectInformationW (HANDLE, int, PVOID, DWORD, PDWORD);

 BOOL __attribute__((__stdcall__)) GetUserObjectSecurity
(HANDLE, PSECURITY_INFORMATION, PSECURITY_DESCRIPTOR, DWORD, PDWORD);

 HWND __attribute__((__stdcall__)) GetWindow (HWND, UINT);


 DWORD __attribute__((__stdcall__)) GetWindowContextHelpId (HWND);
 HDC __attribute__((__stdcall__)) GetWindowDC (HWND);
 BOOL __attribute__((__stdcall__)) GetWindowPlacement (HWND, WINDOWPLACEMENT *);
 BOOL __attribute__((__stdcall__)) GetWindowRect (HWND, LPRECT);
 int __attribute__((__stdcall__)) GetWindowRgn (HWND, HRGN);
 WORD __attribute__((__stdcall__)) GetWindowWord (HWND, int);




 int __attribute__((__stdcall__)) GetWindowTextA (HWND, LPSTR, int);
 int __attribute__((__stdcall__)) GetWindowTextW (HWND, LPWSTR, int);


 int __attribute__((__stdcall__)) GetWindowTextLengthA (HWND);
 int __attribute__((__stdcall__)) GetWindowTextLengthW (HWND);


 BOOL __attribute__((__stdcall__)) GetAltTabInfoA (HWND, int, PALTTABINFO, LPSTR, UINT);
 BOOL __attribute__((__stdcall__)) GetAltTabInfoW (HWND, int, PALTTABINFO, LPWSTR, UINT);

 BOOL __attribute__((__stdcall__)) GetComboBoxInfo (HWND, PCOMBOBOXINFO);
 BOOL __attribute__((__stdcall__)) GetCursorInfo (PCURSORINFO);

 BOOL __attribute__((__stdcall__)) GetLastInputInfo (PLASTINPUTINFO);
 DWORD __attribute__((__stdcall__)) GetListBoxInfo (HWND);
 BOOL __attribute__((__stdcall__)) GetMenuBarInfo (HWND, LONG, LONG, PMENUBARINFO);
 BOOL __attribute__((__stdcall__)) GetMenuInfo (HMENU, LPMENUINFO);

 BOOL __attribute__((__stdcall__)) GetWindowInfo (HWND, PWINDOWINFO);
 BOOL __attribute__((__stdcall__)) GetScrollBarInfo (HWND, LONG, PSCROLLBARINFO);


 BOOL __attribute__((__stdcall__)) GetMonitorInfoA (HMONITOR, LPMONITORINFO);
 BOOL __attribute__((__stdcall__)) GetMonitorInfoW (HMONITOR, LPMONITORINFO);


 UINT __attribute__((__stdcall__)) GetWindowModuleFileNameA (HWND, LPSTR, UINT);
 UINT __attribute__((__stdcall__)) GetWindowModuleFileNameW (HWND, LPWSTR, UINT);


 BOOL __attribute__((__stdcall__)) GrayStringA (HDC, HBRUSH, GRAYSTRINGPROC, LPARAM, int, int, int, int, int);
 BOOL __attribute__((__stdcall__)) GrayStringW (HDC, HBRUSH, GRAYSTRINGPROC, LPARAM, int, int, int, int, int);

 BOOL __attribute__((__stdcall__)) HideCaret (HWND);
 BOOL __attribute__((__stdcall__)) HiliteMenuItem (HWND, HMENU, UINT, UINT);
 BOOL __attribute__((__stdcall__)) InflateRect (LPRECT, int, int);
 BOOL __attribute__((__stdcall__)) InSendMessage (void);


 BOOL __attribute__((__stdcall__)) InsertMenuA (HMENU, UINT, UINT, UINT, LPCSTR);
 BOOL __attribute__((__stdcall__)) InsertMenuW (HMENU, UINT, UINT, UINT, LPCWSTR);


 BOOL __attribute__((__stdcall__)) InsertMenuItemA (HMENU, UINT, BOOL, LPCMENUITEMINFOA);
 BOOL __attribute__((__stdcall__)) InsertMenuItemW (HMENU, UINT, BOOL, LPCMENUITEMINFOW);

 INT __attribute__((__stdcall__)) InternalGetWindowText (HWND, LPWSTR, INT);
 BOOL __attribute__((__stdcall__)) IntersectRect (LPRECT, LPCRECT, LPCRECT);
 BOOL __attribute__((__stdcall__)) InvalidateRect (HWND, LPCRECT, BOOL);
 BOOL __attribute__((__stdcall__)) InvalidateRgn (HWND, HRGN, BOOL);
 BOOL __attribute__((__stdcall__)) InvertRect (HDC, LPCRECT);


 BOOL __attribute__((__stdcall__)) IsCharAlphaA (CHAR ch);
 BOOL __attribute__((__stdcall__)) IsCharAlphaW (WCHAR);


 BOOL __attribute__((__stdcall__)) IsCharAlphaNumericA (CHAR);
 BOOL __attribute__((__stdcall__)) IsCharAlphaNumericW (WCHAR);


 BOOL __attribute__((__stdcall__)) IsCharLowerA (CHAR);
 BOOL __attribute__((__stdcall__)) IsCharLowerW (WCHAR);


 BOOL __attribute__((__stdcall__)) IsCharUpperA (CHAR);
 BOOL __attribute__((__stdcall__)) IsCharUpperW (WCHAR);

 BOOL __attribute__((__stdcall__)) IsChild (HWND, HWND);
 BOOL __attribute__((__stdcall__)) IsClipboardFormatAvailable (UINT);
 UINT __attribute__((__stdcall__)) IsDlgButtonChecked (HWND, int);


 BOOL __attribute__((__stdcall__)) IsDialogMessageA (HWND, LPMSG);
 BOOL __attribute__((__stdcall__)) IsDialogMessageW (HWND, LPMSG);

 BOOL __attribute__((__stdcall__)) IsIconic (HWND);
 BOOL __attribute__((__stdcall__)) IsMenu (HMENU);
 BOOL __attribute__((__stdcall__)) IsRectEmpty (LPCRECT);
 BOOL __attribute__((__stdcall__)) IsWindow (HWND);
 BOOL __attribute__((__stdcall__)) IsWindowEnabled (HWND);
 BOOL __attribute__((__stdcall__)) IsWindowUnicode (HWND);
 BOOL __attribute__((__stdcall__)) IsWindowVisible (HWND);

 BOOL __attribute__((__stdcall__)) IsZoomed (HWND);
 void __attribute__((__stdcall__)) keybd_event (BYTE, BYTE, DWORD, DWORD);
 BOOL __attribute__((__stdcall__)) KillTimer (HWND, UINT_PTR);


 HACCEL __attribute__((__stdcall__)) LoadAcceleratorsA (HINSTANCE, LPCSTR);
 HACCEL __attribute__((__stdcall__)) LoadAcceleratorsW (HINSTANCE, LPCWSTR);


 HBITMAP __attribute__((__stdcall__)) LoadBitmapA (HINSTANCE, LPCSTR);
 HBITMAP __attribute__((__stdcall__)) LoadBitmapW (HINSTANCE, LPCWSTR);


 HCURSOR __attribute__((__stdcall__)) LoadCursorA (HINSTANCE, LPCSTR);
 HCURSOR __attribute__((__stdcall__)) LoadCursorW (HINSTANCE, LPCWSTR);


 HCURSOR __attribute__((__stdcall__)) LoadCursorFromFileA (LPCSTR);
 HCURSOR __attribute__((__stdcall__)) LoadCursorFromFileW (LPCWSTR);


 HICON __attribute__((__stdcall__)) LoadIconA (HINSTANCE, LPCSTR);
 HICON __attribute__((__stdcall__)) LoadIconW (HINSTANCE, LPCWSTR);


 HANDLE __attribute__((__stdcall__)) LoadImageA (HINSTANCE, LPCSTR, UINT, int, int, UINT);
 HANDLE __attribute__((__stdcall__)) LoadImageW (HINSTANCE, LPCWSTR, UINT, int, int, UINT);


 HKL __attribute__((__stdcall__)) LoadKeyboardLayoutA (LPCSTR, UINT);
 HKL __attribute__((__stdcall__)) LoadKeyboardLayoutW (LPCWSTR, UINT);


 HMENU __attribute__((__stdcall__)) LoadMenuA (HINSTANCE, LPCSTR);
 HMENU __attribute__((__stdcall__)) LoadMenuW (HINSTANCE, LPCWSTR);


 HMENU __attribute__((__stdcall__)) LoadMenuIndirectA (const MENUTEMPLATE *);
 HMENU __attribute__((__stdcall__)) LoadMenuIndirectW (const MENUTEMPLATE *);


 int __attribute__((__stdcall__)) LoadStringA (HINSTANCE, UINT, LPSTR, int);
 int __attribute__((__stdcall__)) LoadStringW (HINSTANCE, UINT, LPWSTR, int);

 BOOL __attribute__((__stdcall__)) LockWindowUpdate (HWND);

 int __attribute__((__stdcall__)) LookupIconIdFromDirectory (PBYTE, BOOL);
 int __attribute__((__stdcall__)) LookupIconIdFromDirectoryEx (PBYTE, BOOL, int, int, UINT);
 BOOL __attribute__((__stdcall__)) MapDialogRect (HWND, LPRECT);


 UINT __attribute__((__stdcall__)) MapVirtualKeyA (UINT, UINT);
 UINT __attribute__((__stdcall__)) MapVirtualKeyW (UINT, UINT);


 UINT __attribute__((__stdcall__)) MapVirtualKeyExA (UINT, UINT, HKL);
 UINT __attribute__((__stdcall__)) MapVirtualKeyExW (UINT, UINT, HKL);

 int __attribute__((__stdcall__)) MapWindowPoints (HWND, HWND, LPPOINT, UINT);
 int __attribute__((__stdcall__)) MenuItemFromPoint (HWND, HMENU, POINT);
 BOOL __attribute__((__stdcall__)) MessageBeep (UINT);


 int __attribute__((__stdcall__)) MessageBoxA (HWND, LPCSTR, LPCSTR, UINT);
 int __attribute__((__stdcall__)) MessageBoxW (HWND, LPCWSTR, LPCWSTR, UINT);


 int __attribute__((__stdcall__)) MessageBoxExA (HWND, LPCSTR, LPCSTR, UINT, WORD);
 int __attribute__((__stdcall__)) MessageBoxExW (HWND, LPCWSTR, LPCWSTR, UINT, WORD);


 int __attribute__((__stdcall__)) MessageBoxIndirectA (const MSGBOXPARAMSA *);
 int __attribute__((__stdcall__)) MessageBoxIndirectW (const MSGBOXPARAMSW *);


 BOOL __attribute__((__stdcall__)) ModifyMenuA (HMENU, UINT, UINT, UINT, LPCSTR);
 BOOL __attribute__((__stdcall__)) ModifyMenuW (HMENU, UINT, UINT, UINT, LPCWSTR);

 void __attribute__((__stdcall__)) mouse_event (DWORD, DWORD, DWORD, DWORD, ULONG_PTR);
 BOOL __attribute__((__stdcall__)) MoveWindow (HWND, int, int, int, int, BOOL);
 DWORD __attribute__((__stdcall__)) MsgWaitForMultipleObjects (DWORD, const HANDLE *, BOOL, DWORD, DWORD);
 DWORD __attribute__((__stdcall__)) MsgWaitForMultipleObjectsEx (DWORD, const HANDLE *, DWORD, DWORD, DWORD);

 DWORD __attribute__((__stdcall__)) OemKeyScan (WORD);


 BOOL __attribute__((__stdcall__)) OemToCharA (LPCSTR, LPSTR);
 BOOL __attribute__((__stdcall__)) OemToCharW (LPCSTR, LPWSTR);


 BOOL __attribute__((__stdcall__)) OemToCharBuffA (LPCSTR, LPSTR, DWORD);
 BOOL __attribute__((__stdcall__)) OemToCharBuffW (LPCSTR, LPWSTR, DWORD);

 BOOL __attribute__((__stdcall__)) OffsetRect (LPRECT, int, int);
 BOOL __attribute__((__stdcall__)) OpenClipboard (HWND);


 HDESK __attribute__((__stdcall__)) OpenDesktopA (LPSTR, DWORD, BOOL, DWORD);
 HDESK __attribute__((__stdcall__)) OpenDesktopW (LPWSTR, DWORD, BOOL, DWORD);

 BOOL __attribute__((__stdcall__)) OpenIcon (HWND);
 HDESK __attribute__((__stdcall__)) OpenInputDesktop (DWORD, BOOL, DWORD);


 HWINSTA __attribute__((__stdcall__)) OpenWindowStationA (LPSTR, BOOL, DWORD);
 HWINSTA __attribute__((__stdcall__)) OpenWindowStationW (LPWSTR, BOOL, DWORD);

 BOOL __attribute__((__stdcall__)) PaintDesktop (HDC);


 BOOL __attribute__((__stdcall__)) PeekMessageA (LPMSG, HWND, UINT, UINT, UINT);
 BOOL __attribute__((__stdcall__)) PeekMessageW (LPMSG, HWND, UINT, UINT, UINT);






 BOOL __attribute__((__stdcall__)) PostMessageA (HWND, UINT, WPARAM, LPARAM);
 BOOL __attribute__((__stdcall__)) PostMessageW (HWND, UINT, WPARAM, LPARAM);


 BOOL __attribute__((__stdcall__)) PostThreadMessageA (DWORD, UINT, WPARAM, LPARAM);
 BOOL __attribute__((__stdcall__)) PostThreadMessageW (DWORD, UINT, WPARAM, LPARAM);

 void __attribute__((__stdcall__)) PostQuitMessage (int);

 BOOL __attribute__((__stdcall__)) PtInRect (LPCRECT, POINT);
 BOOL __attribute__((__stdcall__)) RedrawWindow (HWND, LPCRECT, HRGN, UINT);
 HWND __attribute__((__stdcall__)) RealChildWindowFromPoint (HWND, POINT);


 UINT __attribute__((__stdcall__)) RealGetWindowClassA (HWND, LPSTR, UINT);
 UINT __attribute__((__stdcall__)) RealGetWindowClassW (HWND, LPWSTR, UINT);


 ATOM __attribute__((__stdcall__)) RegisterClassA (const WNDCLASSA *);
 ATOM __attribute__((__stdcall__)) RegisterClassW (const WNDCLASSW *);


 ATOM __attribute__((__stdcall__)) RegisterClassExA (const WNDCLASSEXA *);
 ATOM __attribute__((__stdcall__)) RegisterClassExW (const WNDCLASSEXW *);


 UINT __attribute__((__stdcall__)) RegisterClipboardFormatA (LPCSTR);
 UINT __attribute__((__stdcall__)) RegisterClipboardFormatW (LPCWSTR);

 BOOL __attribute__((__stdcall__)) RegisterHotKey (HWND, int, UINT, UINT);


 UINT __attribute__((__stdcall__)) RegisterWindowMessageA (LPCSTR);
 UINT __attribute__((__stdcall__)) RegisterWindowMessageW (LPCWSTR);

 BOOL __attribute__((__stdcall__)) ReleaseCapture (void);
 int __attribute__((__stdcall__)) ReleaseDC (HWND, HDC);
 BOOL __attribute__((__stdcall__)) RemoveMenu (HMENU, UINT, UINT);


 HANDLE __attribute__((__stdcall__)) RemovePropA (HWND, LPCSTR);
 HANDLE __attribute__((__stdcall__)) RemovePropW (HWND, LPCWSTR);

 BOOL __attribute__((__stdcall__)) ReplyMessage (LRESULT);
 BOOL __attribute__((__stdcall__)) ScreenToClient (HWND, LPPOINT);
 BOOL __attribute__((__stdcall__)) ScrollDC (HDC, int, int, LPCRECT, LPCRECT, HRGN, LPRECT);
 BOOL __attribute__((__stdcall__)) ScrollWindow (HWND, int, int, LPCRECT, LPCRECT);
 int __attribute__((__stdcall__)) ScrollWindowEx (HWND, int, int, LPCRECT, LPCRECT, HRGN, LPRECT, UINT);


 LONG __attribute__((__stdcall__)) SendDlgItemMessageA (HWND, int, UINT, WPARAM, LPARAM);
 LONG __attribute__((__stdcall__)) SendDlgItemMessageW (HWND, int, UINT, WPARAM, LPARAM);


 LRESULT __attribute__((__stdcall__)) SendMessageA (HWND, UINT, WPARAM, LPARAM);
 LRESULT __attribute__((__stdcall__)) SendMessageW (HWND, UINT, WPARAM, LPARAM);


 BOOL __attribute__((__stdcall__)) SendMessageCallbackA (HWND, UINT, WPARAM, LPARAM, SENDASYNCPROC, DWORD);
 BOOL __attribute__((__stdcall__)) SendMessageCallbackW (HWND, UINT, WPARAM, LPARAM, SENDASYNCPROC, DWORD);


 LRESULT __attribute__((__stdcall__)) SendMessageTimeoutA (HWND, UINT, WPARAM, LPARAM, UINT, UINT, PDWORD_PTR);
 LRESULT __attribute__((__stdcall__)) SendMessageTimeoutW (HWND, UINT, WPARAM, LPARAM, UINT, UINT, PDWORD_PTR);


 BOOL __attribute__((__stdcall__)) SendNotifyMessageA (HWND, UINT, WPARAM, LPARAM);
 BOOL __attribute__((__stdcall__)) SendNotifyMessageW (HWND, UINT, WPARAM, LPARAM);

 HWND __attribute__((__stdcall__)) SetActiveWindow (HWND);
 HWND __attribute__((__stdcall__)) SetCapture (HWND hWnd);
 BOOL __attribute__((__stdcall__)) SetCaretBlinkTime (UINT);
 BOOL __attribute__((__stdcall__)) SetCaretPos (int, int);


 DWORD __attribute__((__stdcall__)) SetClassLongA (HWND, int, LONG);
 DWORD __attribute__((__stdcall__)) SetClassLongW (HWND, int, LONG);
# 4191 "c:\\mingw\\include\\winuser.h" 3
 WORD __attribute__((__stdcall__)) SetClassWord (HWND, int, WORD);
 HANDLE __attribute__((__stdcall__)) SetClipboardData (UINT, HANDLE);
 HWND __attribute__((__stdcall__)) SetClipboardViewer (HWND);
 HCURSOR __attribute__((__stdcall__)) SetCursor (HCURSOR);
 BOOL __attribute__((__stdcall__)) SetCursorPos (int, int);
 void __attribute__((__stdcall__)) SetDebugErrorLevel (DWORD);
 BOOL __attribute__((__stdcall__)) SetDlgItemInt (HWND, int, UINT, BOOL);


 BOOL __attribute__((__stdcall__)) SetDlgItemTextA (HWND, int, LPCSTR);
 BOOL __attribute__((__stdcall__)) SetDlgItemTextW (HWND, int, LPCWSTR);

 BOOL __attribute__((__stdcall__)) SetDoubleClickTime (UINT);
 HWND __attribute__((__stdcall__)) SetFocus (HWND);
 BOOL __attribute__((__stdcall__)) SetForegroundWindow (HWND);
 BOOL __attribute__((__stdcall__)) SetKeyboardState (PBYTE);
 BOOL __attribute__((__stdcall__)) SetMenu (HWND, HMENU);
 BOOL __attribute__((__stdcall__)) SetMenuContextHelpId (HMENU, DWORD);
 BOOL __attribute__((__stdcall__)) SetMenuDefaultItem (HMENU, UINT, UINT);
 BOOL __attribute__((__stdcall__)) SetMenuInfo (HMENU, LPCMENUINFO);
 BOOL __attribute__((__stdcall__)) SetMenuItemBitmaps (HMENU, UINT, UINT, HBITMAP, HBITMAP);


 BOOL __attribute__((__stdcall__)) SetMenuItemInfoA (HMENU, UINT, BOOL, LPCMENUITEMINFOA);
 BOOL __attribute__((__stdcall__)) SetMenuItemInfoW ( HMENU, UINT, BOOL, LPCMENUITEMINFOW);

 LPARAM __attribute__((__stdcall__)) SetMessageExtraInfo (LPARAM);
 BOOL __attribute__((__stdcall__)) SetMessageQueue (int);
 HWND __attribute__((__stdcall__)) SetParent (HWND, HWND);
 BOOL __attribute__((__stdcall__)) SetProcessWindowStation (HWINSTA);


 BOOL __attribute__((__stdcall__)) SetPropA (HWND, LPCSTR, HANDLE);
 BOOL __attribute__((__stdcall__)) SetPropW (HWND, LPCWSTR, HANDLE);

 BOOL __attribute__((__stdcall__)) SetRect (LPRECT, int, int, int, int);
 BOOL __attribute__((__stdcall__)) SetRectEmpty (LPRECT);
 int __attribute__((__stdcall__)) SetScrollInfo (HWND, int, LPCSCROLLINFO, BOOL);
 int __attribute__((__stdcall__)) SetScrollPos (HWND, int, int, BOOL);
 BOOL __attribute__((__stdcall__)) SetScrollRange (HWND, int, int, int, BOOL);
 BOOL __attribute__((__stdcall__)) SetSysColors (int, const INT *, const COLORREF *);



 BOOL __attribute__((__stdcall__)) SetSystemCursor (HCURSOR, DWORD);
 BOOL __attribute__((__stdcall__)) SetThreadDesktop (HDESK);
 UINT __attribute__((__stdcall__)) SetTimer (HWND, UINT_PTR, UINT, TIMERPROC);


 BOOL __attribute__((__stdcall__)) SetUserObjectInformationA (HANDLE, int, PVOID, DWORD);
 BOOL __attribute__((__stdcall__)) SetUserObjectInformationW (HANDLE, int, PVOID, DWORD);

 BOOL __attribute__((__stdcall__)) SetUserObjectSecurity
(HANDLE, PSECURITY_INFORMATION, PSECURITY_DESCRIPTOR);

 BOOL __attribute__((__stdcall__)) SetWindowContextHelpId (HWND, DWORD);


 LONG __attribute__((__stdcall__)) SetWindowLongA (HWND, int, LONG);
 LONG __attribute__((__stdcall__)) SetWindowLongW (HWND, int, LONG);
# 4262 "c:\\mingw\\include\\winuser.h" 3
 BOOL __attribute__((__stdcall__)) SetWindowPlacement (HWND hWnd, const WINDOWPLACEMENT *);
 BOOL __attribute__((__stdcall__)) SetWindowPos (HWND, HWND, int, int, int, int, UINT);
 int __attribute__((__stdcall__)) SetWindowRgn (HWND, HRGN, BOOL);


 HHOOK __attribute__((__stdcall__)) SetWindowsHookA (int, HOOKPROC);
 HHOOK __attribute__((__stdcall__)) SetWindowsHookW (int, HOOKPROC);


 HHOOK __attribute__((__stdcall__)) SetWindowsHookExA (int, HOOKPROC, HINSTANCE, DWORD);
 HHOOK __attribute__((__stdcall__)) SetWindowsHookExW (int, HOOKPROC, HINSTANCE, DWORD);


 BOOL __attribute__((__stdcall__)) SetWindowTextA (HWND, LPCSTR);
 BOOL __attribute__((__stdcall__)) SetWindowTextW (HWND, LPCWSTR);

 WORD __attribute__((__stdcall__)) SetWindowWord (HWND, int, WORD);
 BOOL __attribute__((__stdcall__)) ShowCaret (HWND);
 int __attribute__((__stdcall__)) ShowCursor (BOOL);
 BOOL __attribute__((__stdcall__)) ShowOwnedPopups (HWND, BOOL);
 BOOL __attribute__((__stdcall__)) ShowScrollBar (HWND, int, BOOL);
 BOOL __attribute__((__stdcall__)) ShowWindow (HWND, int);
 BOOL __attribute__((__stdcall__)) ShowWindowAsync (HWND, int);
 BOOL __attribute__((__stdcall__)) SubtractRect (LPRECT, LPCRECT, LPCRECT);
 BOOL __attribute__((__stdcall__)) SwapMouseButton (BOOL);
 BOOL __attribute__((__stdcall__)) SwitchDesktop (HDESK);


 BOOL __attribute__((__stdcall__)) SystemParametersInfoA (UINT, UINT, PVOID, UINT);
 BOOL __attribute__((__stdcall__)) SystemParametersInfoW (UINT, UINT, PVOID, UINT);


 LONG __attribute__((__stdcall__)) TabbedTextOutA (HDC, int, int, LPCSTR, int, int, LPINT, int);
 LONG __attribute__((__stdcall__)) TabbedTextOutW (HDC, int, int, LPCWSTR, int, int, LPINT, int);

 WORD __attribute__((__stdcall__)) TileWindows (HWND, UINT, LPCRECT, UINT, const HWND *);
 int __attribute__((__stdcall__)) ToAscii (UINT, UINT, PBYTE, LPWORD, UINT);
 int __attribute__((__stdcall__)) ToAsciiEx (UINT, UINT, PBYTE, LPWORD, UINT, HKL);
 int __attribute__((__stdcall__)) ToUnicode (UINT, UINT, PBYTE, LPWSTR, int, UINT);
 int __attribute__((__stdcall__)) ToUnicodeEx (UINT, UINT, PBYTE, LPWSTR, int, UINT, HKL);
 BOOL __attribute__((__stdcall__)) TrackMouseEvent (LPTRACKMOUSEEVENT);
 BOOL __attribute__((__stdcall__)) TrackPopupMenu (HMENU, UINT, int, int, int, HWND, LPCRECT);
 BOOL __attribute__((__stdcall__)) TrackPopupMenuEx (HMENU, UINT, int, int, HWND, LPTPMPARAMS);


 int __attribute__((__stdcall__)) TranslateAcceleratorA (HWND, HACCEL, LPMSG);
 int __attribute__((__stdcall__)) TranslateAcceleratorW (HWND, HACCEL, LPMSG);

 BOOL __attribute__((__stdcall__)) TranslateMDISysAccel (HWND, LPMSG);
 BOOL __attribute__((__stdcall__)) TranslateMessage (const MSG *);
 BOOL __attribute__((__stdcall__)) UnhookWindowsHook (int, HOOKPROC);
 BOOL __attribute__((__stdcall__)) UnhookWindowsHookEx (HHOOK);

 BOOL __attribute__((__stdcall__)) UnionRect (LPRECT, LPCRECT, LPCRECT);
 BOOL __attribute__((__stdcall__)) UnloadKeyboardLayout (HKL);


 BOOL __attribute__((__stdcall__)) UnregisterClassA (LPCSTR, HINSTANCE);
 BOOL __attribute__((__stdcall__)) UnregisterClassW (LPCWSTR, HINSTANCE);

 BOOL __attribute__((__stdcall__)) UnregisterHotKey (HWND, int);
 BOOL __attribute__((__stdcall__)) UpdateWindow (HWND);

 BOOL __attribute__((__stdcall__)) ValidateRect (HWND, LPCRECT);
 BOOL __attribute__((__stdcall__)) ValidateRgn (HWND, HRGN);


 SHORT __attribute__((__stdcall__)) VkKeyScanA (CHAR);
 SHORT __attribute__((__stdcall__)) VkKeyScanW (WCHAR);


 SHORT __attribute__((__stdcall__)) VkKeyScanExA (CHAR, HKL);
 SHORT __attribute__((__stdcall__)) VkKeyScanExW (WCHAR, HKL);

 DWORD __attribute__((__stdcall__)) WaitForInputIdle (HANDLE, DWORD);
 BOOL __attribute__((__stdcall__)) WaitMessage (void);
 HWND __attribute__((__stdcall__)) WindowFromDC (HDC hDC);
 HWND __attribute__((__stdcall__)) WindowFromPoint (POINT);
 UINT __attribute__((__stdcall__)) WinExec (LPCSTR, UINT);


 BOOL __attribute__((__stdcall__)) WinHelpA (HWND, LPCSTR, UINT, DWORD);
 BOOL __attribute__((__stdcall__)) WinHelpW (HWND, LPCWSTR, UINT, DWORD);


 int __attribute__((__cdecl__)) wsprintfA (LPSTR, LPCSTR,...);
 int __attribute__((__cdecl__)) wsprintfW (LPWSTR, LPCWSTR,...);


 int __attribute__((__stdcall__)) wvsprintfA (LPSTR, LPCSTR, va_list arglist);
 int __attribute__((__stdcall__)) wvsprintfW (LPWSTR, LPCWSTR, va_list arglist);



 long __attribute__((__stdcall__)) BroadcastSystemMessageA (DWORD, LPDWORD, UINT, WPARAM, LPARAM);
 long __attribute__((__stdcall__)) BroadcastSystemMessageW (DWORD, LPDWORD, UINT, WPARAM, LPARAM);


typedef struct tagMOUSEINPUT
{ LONG dx;
  LONG dy;
  DWORD mouseData;
  DWORD dwFlags;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} MOUSEINPUT, *PMOUSEINPUT;

typedef struct tagKEYBDINPUT
{ WORD wVk;
  WORD wScan;
  DWORD dwFlags;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} KEYBDINPUT, *PKEYBDINPUT;

typedef struct tagHARDWAREINPUT
{ DWORD uMsg;
  WORD wParamL;
  WORD wParamH;
} HARDWAREINPUT, *PHARDWAREINPUT;

typedef struct tagINPUT
{ DWORD type;
  __extension__ union
  { MOUSEINPUT mi;
    KEYBDINPUT ki;
    HARDWAREINPUT hi;
  } ;
} INPUT, *PINPUT, *LPINPUT;

 UINT __attribute__((__stdcall__)) SendInput (UINT, LPINPUT, int);





typedef struct
{ UINT cbSize;
  HWND hwnd;
  DWORD dwFlags;
  UINT uCount;
  DWORD dwTimeout;
} FLASHWINFO, *PFLASHWINFO;



typedef struct tagTITLEBARINFO
{ DWORD cbSize;
  RECT rcTitleBar;
  DWORD rgstate[5 +1];
} TITLEBARINFO, *PTITLEBARINFO, *LPTITLEBARINFO;

 BOOL __attribute__((__stdcall__)) GetTitleBarInfo (HWND, PTITLEBARINFO);

 BOOL __attribute__((__stdcall__)) BlockInput(BOOL);
 BOOL __attribute__((__stdcall__)) FlashWindowEx (PFLASHWINFO);
 DWORD __attribute__((__stdcall__)) GetClipboardSequenceNumber (void);
 DWORD __attribute__((__stdcall__)) InSendMessageEx (LPVOID);

 HMONITOR __attribute__((__stdcall__)) MonitorFromPoint (POINT, DWORD);
 HMONITOR __attribute__((__stdcall__)) MonitorFromRect (LPCRECT, DWORD);
 HMONITOR __attribute__((__stdcall__)) MonitorFromWindow (HWND, DWORD);

 BOOL __attribute__((__stdcall__)) UnregisterDeviceNotification (HANDLE);


typedef struct tagMOUSEMOVEPOINT
{ int x;
  int y;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} MOUSEMOVEPOINT, *PMOUSEMOVEPOINT, *LPMOUSEMOVEPOINT;

 BOOL __attribute__((__stdcall__)) AllowSetForegroundWindow (DWORD);
 int __attribute__((__stdcall__)) GetMouseMovePointsEx (UINT, LPMOUSEMOVEPOINT, LPMOUSEMOVEPOINT, int, DWORD);
 BOOL __attribute__((__stdcall__)) LockSetForegroundWindow (UINT);


typedef struct tagGUITHREADINFO
{ DWORD cbSize;
  DWORD flags;
  HWND hwndActive;
  HWND hwndFocus;
  HWND hwndCapture;
  HWND hwndMenuOwner;
  HWND hwndMoveSize;
  HWND hwndCaret;
  RECT rcCaret;
} GUITHREADINFO, *PGUITHREADINFO, *LPGUITHREADINFO;

typedef void (__attribute__((__stdcall__)) *WINEVENTPROC) (HWINEVENTHOOK, DWORD, HWND, LONG, LONG, DWORD, DWORD);

 BOOL __attribute__((__stdcall__)) AnimateWindow (HWND, DWORD, DWORD);

 BOOL __attribute__((__stdcall__)) EndTask (HWND, BOOL, BOOL);

 DWORD __attribute__((__stdcall__)) GetGuiResources (HANDLE, DWORD);
 BOOL __attribute__((__stdcall__)) GetGUIThreadInfo (DWORD, LPGUITHREADINFO);
 BOOL __attribute__((__stdcall__)) GetProcessDefaultLayout (DWORD *);
 HWND __attribute__((__stdcall__)) GetShellWindow (void);

 BOOL __attribute__((__stdcall__)) IsHungAppWindow (HWND);
 BOOL __attribute__((__stdcall__)) LockWorkStation (void);
 void __attribute__((__stdcall__)) NotifyWinEvent (DWORD, HWND, LONG, LONG);


 HDEVNOTIFY __attribute__((__stdcall__)) RegisterDeviceNotificationA (HANDLE, LPVOID, DWORD);
 HDEVNOTIFY __attribute__((__stdcall__)) RegisterDeviceNotificationW (HANDLE, LPVOID, DWORD);

 BOOL __attribute__((__stdcall__)) SetLayeredWindowAttributes (HWND, COLORREF, BYTE, DWORD);
 BOOL __attribute__((__stdcall__)) SetProcessDefaultLayout (DWORD);
 HWINEVENTHOOK __attribute__((__stdcall__)) SetWinEventHook
(UINT, UINT, HMODULE, WINEVENTPROC, DWORD, DWORD, UINT);
 void __attribute__((__stdcall__)) SwitchToThisWindow (HWND, BOOL);

 BOOL __attribute__((__stdcall__)) UnhookWinEvent (HWINEVENTHOOK);
 BOOL __attribute__((__stdcall__)) UserHandleGrantAccess (HANDLE, HANDLE, BOOL);
# 4660 "c:\\mingw\\include\\winuser.h" 3
typedef struct tagICONMETRICSA
{ UINT cbSize;
  int iHorzSpacing;
  int iVertSpacing;
  int iTitleWrap;
  LOGFONTA lfFont;
} ICONMETRICSA, *LPICONMETRICSA;

typedef struct tagICONMETRICSW
{ UINT cbSize;
  int iHorzSpacing;
  int iVertSpacing;
  int iTitleWrap;
  LOGFONTW lfFont;
} ICONMETRICSW, *LPICONMETRICSW;

typedef ICONMETRICSA ICONMETRICS, *LPICONMETRICS;

typedef struct tagNONCLIENTMETRICSA
{ UINT cbSize;
  int iBorderWidth;
  int iScrollWidth;
  int iScrollHeight;
  int iCaptionWidth;
  int iCaptionHeight;
  LOGFONTA lfCaptionFont;
  int iSmCaptionWidth;
  int iSmCaptionHeight;
  LOGFONTA lfSmCaptionFont;
  int iMenuWidth;
  int iMenuHeight;
  LOGFONTA lfMenuFont;
  LOGFONTA lfStatusFont;
  LOGFONTA lfMessageFont;
} NONCLIENTMETRICSA, *LPNONCLIENTMETRICSA;

typedef struct tagNONCLIENTMETRICSW
{ UINT cbSize;
  int iBorderWidth;
  int iScrollWidth;
  int iScrollHeight;
  int iCaptionWidth;
  int iCaptionHeight;
  LOGFONTW lfCaptionFont;
  int iSmCaptionWidth;
  int iSmCaptionHeight;
  LOGFONTW lfSmCaptionFont;
  int iMenuWidth;
  int iMenuHeight;
  LOGFONTW lfMenuFont;
  LOGFONTW lfStatusFont;
  LOGFONTW lfMessageFont;
} NONCLIENTMETRICSW, *LPNONCLIENTMETRICSW;

typedef NONCLIENTMETRICSA NONCLIENTMETRICS, *LPNONCLIENTMETRICS;


 LONG __attribute__((__stdcall__)) ChangeDisplaySettingsA (PDEVMODEA, DWORD);
 LONG __attribute__((__stdcall__)) ChangeDisplaySettingsW (PDEVMODEW, DWORD);


 LONG __attribute__((__stdcall__)) ChangeDisplaySettingsExA (LPCSTR, LPDEVMODEA, HWND, DWORD, LPVOID);
 LONG __attribute__((__stdcall__)) ChangeDisplaySettingsExW (LPCWSTR, LPDEVMODEW, HWND, DWORD, LPVOID);


 HDESK __attribute__((__stdcall__)) CreateDesktopA
(LPCSTR, LPCSTR, LPDEVMODEA, DWORD, ACCESS_MASK, LPSECURITY_ATTRIBUTES);
 HDESK __attribute__((__stdcall__)) CreateDesktopW
(LPCWSTR, LPCWSTR, LPDEVMODEW, DWORD, ACCESS_MASK, LPSECURITY_ATTRIBUTES);


 BOOL __attribute__((__stdcall__)) EnumDisplayDevicesA (LPCSTR, DWORD, PDISPLAY_DEVICEA, DWORD);
 BOOL __attribute__((__stdcall__)) EnumDisplayDevicesW (LPCWSTR, DWORD, PDISPLAY_DEVICEW, DWORD);


 BOOL __attribute__((__stdcall__)) EnumDisplaySettingsA (LPCSTR, DWORD, PDEVMODEA);
 BOOL __attribute__((__stdcall__)) EnumDisplaySettingsW (LPCWSTR, DWORD, PDEVMODEW);


 BOOL __attribute__((__stdcall__)) EnumDisplaySettingsExA (LPCSTR, DWORD, LPDEVMODEA, DWORD);
 BOOL __attribute__((__stdcall__)) EnumDisplaySettingsExW (LPCWSTR, DWORD, LPDEVMODEW, DWORD);



 BOOL __attribute__((__stdcall__)) UpdateLayeredWindow
(HWND, HDC, POINT *, SIZE *, HDC, POINT *, COLORREF, BLENDFUNCTION *, DWORD);








# 49 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\winnls.h" 1 3



       
# 5 "c:\\mingw\\include\\winnls.h" 3
# 457 "c:\\mingw\\include\\winnls.h" 3
typedef DWORD LCTYPE;
typedef DWORD CALTYPE;
typedef DWORD CALID;
typedef DWORD LGRPID;
typedef DWORD GEOID;
typedef DWORD GEOTYPE;
typedef DWORD GEOCLASS;
typedef BOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL (__attribute__((__stdcall__)) *LANGUAGEGROUP_ENUMPROCA)(LGRPID, LPSTR, LPSTR, DWORD, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__)) *LANGUAGEGROUP_ENUMPROCW)(LGRPID, LPWSTR, LPWSTR, DWORD, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__)) *LANGGROUPLOCALE_ENUMPROCA)(LGRPID, LCID, LPSTR, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__)) *LANGGROUPLOCALE_ENUMPROCW)(LGRPID, LCID, LPWSTR, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__)) *UILANGUAGE_ENUMPROCW)(LPWSTR, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__)) *UILANGUAGE_ENUMPROCA)(LPSTR, LONG_PTR);
typedef BOOL (__attribute__((__stdcall__)) *LOCALE_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *LOCALE_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__)) *CODEPAGE_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *CODEPAGE_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL (__attribute__((__stdcall__)) *TIMEFMT_ENUMPROCA)(LPSTR);
typedef BOOL (__attribute__((__stdcall__)) *TIMEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL (__attribute__((__stdcall__)) *GEO_ENUMPROC)(GEOID);

enum NLS_FUNCTION {
 COMPARE_STRING = 0x0001
};
typedef enum NLS_FUNCTION NLS_FUNCTION;
enum SYSGEOCLASS {
 GEOCLASS_NATION = 16,
 GEOCLASS_REGION = 14
};
enum SYSGEOTYPE {
 GEO_NATION = 0x0001,
 GEO_LATITUDE = 0x0002,
 GEO_LONGITUDE = 0x0003,
 GEO_ISO2 = 0x0004,
 GEO_ISO3 = 0x0005,
 GEO_RFC1766 = 0x0006,
 GEO_LCID = 0x0007,
 GEO_FRIENDLYNAME = 0x0008,
 GEO_OFFICIALNAME = 0x0009,
 GEO_TIMEZONES = 0x000a,
 GEO_OFFICIALLANGUAGES = 0x000a
};

typedef struct _cpinfo {
 UINT MaxCharSize;
 BYTE DefaultChar[2];
 BYTE LeadByte[12];
} CPINFO,*LPCPINFO;
typedef struct _cpinfoexA {
 UINT MaxCharSize;
 BYTE DefaultChar[2];
 BYTE LeadByte[12];
 WCHAR UnicodeDefaultChar;
 UINT CodePage;
 CHAR CodePageName[260];
} CPINFOEXA,*LPCPINFOEXA;
typedef struct _cpinfoexW {
 UINT MaxCharSize;
 BYTE DefaultChar[2];
 BYTE LeadByte[12];
 WCHAR UnicodeDefaultChar;
 UINT CodePage;
 WCHAR CodePageName[260];
} CPINFOEXW,*LPCPINFOEXW;
typedef struct _currencyfmtA {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPSTR lpDecimalSep;
 LPSTR lpThousandSep;
 UINT NegativeOrder;
 UINT PositiveOrder;
 LPSTR lpCurrencySymbol;
} CURRENCYFMTA,*LPCURRENCYFMTA;
typedef struct _currencyfmtW {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPWSTR lpDecimalSep;
 LPWSTR lpThousandSep;
 UINT NegativeOrder;
 UINT PositiveOrder;
 LPWSTR lpCurrencySymbol;
} CURRENCYFMTW,*LPCURRENCYFMTW;
typedef struct nlsversioninfo {
 DWORD dwNLSVersionInfoSize;
 DWORD dwNLSVersion;
 DWORD dwDefinedVersion;
} NLSVERSIONINFO,*LPNLSVERSIONINFO;
typedef struct _numberfmtA {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPSTR lpDecimalSep;
 LPSTR lpThousandSep;
 UINT NegativeOrder;
} NUMBERFMTA,*LPNUMBERFMTA;
typedef struct _numberfmtW {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPWSTR lpDecimalSep;
 LPWSTR lpThousandSep;
 UINT NegativeOrder;
} NUMBERFMTW,*LPNUMBERFMTW;

 int __attribute__((__stdcall__)) CompareStringA(LCID,DWORD,LPCSTR,int,LPCSTR,int);
 int __attribute__((__stdcall__)) CompareStringW(LCID,DWORD,LPCWSTR,int,LPCWSTR,int);
 LCID __attribute__((__stdcall__)) ConvertDefaultLocale(LCID);
 BOOL __attribute__((__stdcall__)) EnumCalendarInfoA(CALINFO_ENUMPROCA,LCID,CALID,CALTYPE);
 BOOL __attribute__((__stdcall__)) EnumCalendarInfoW(CALINFO_ENUMPROCW,LCID,CALID,CALTYPE);
 BOOL __attribute__((__stdcall__)) EnumDateFormatsA(DATEFMT_ENUMPROCA,LCID,DWORD);
 BOOL __attribute__((__stdcall__)) EnumDateFormatsW(DATEFMT_ENUMPROCW,LCID,DWORD);
 BOOL __attribute__((__stdcall__)) EnumSystemCodePagesA(CODEPAGE_ENUMPROCA,DWORD);
 BOOL __attribute__((__stdcall__)) EnumSystemCodePagesW(CODEPAGE_ENUMPROCW,DWORD);
 BOOL __attribute__((__stdcall__)) EnumSystemGeoID(GEOCLASS,GEOID,GEO_ENUMPROC);
 BOOL __attribute__((__stdcall__)) EnumSystemLocalesA(LOCALE_ENUMPROCA,DWORD);
 BOOL __attribute__((__stdcall__)) EnumSystemLocalesW(LOCALE_ENUMPROCW,DWORD);
 BOOL __attribute__((__stdcall__)) EnumTimeFormatsA(TIMEFMT_ENUMPROCA,LCID,DWORD);
 BOOL __attribute__((__stdcall__)) EnumTimeFormatsW(TIMEFMT_ENUMPROCW,LCID,DWORD);
 int __attribute__((__stdcall__)) FoldStringA(DWORD,LPCSTR,int,LPSTR,int);
 int __attribute__((__stdcall__)) FoldStringW(DWORD,LPCWSTR,int,LPWSTR,int);
 UINT __attribute__((__stdcall__)) GetACP(void);
 int __attribute__((__stdcall__)) GetCalendarInfoA(LCID,CALID,CALTYPE,LPSTR,int,LPDWORD);
 int __attribute__((__stdcall__)) GetCalendarInfoW(LCID,CALID,CALTYPE,LPWSTR,int,LPDWORD);
 BOOL __attribute__((__stdcall__)) GetCPInfo(UINT,LPCPINFO);
 BOOL __attribute__((__stdcall__)) GetCPInfoExA(UINT,DWORD,LPCPINFOEXA);
 BOOL __attribute__((__stdcall__)) GetCPInfoExW(UINT,DWORD,LPCPINFOEXW);
 int __attribute__((__stdcall__)) GetCurrencyFormatA(LCID,DWORD,LPCSTR,const CURRENCYFMTA*,LPSTR,int);
 int __attribute__((__stdcall__)) GetCurrencyFormatW(LCID,DWORD,LPCWSTR,const CURRENCYFMTW*,LPWSTR,int);
 int __attribute__((__stdcall__)) GetDateFormatA(LCID,DWORD,const SYSTEMTIME*,LPCSTR,LPSTR,int);
 int __attribute__((__stdcall__)) GetDateFormatW(LCID,DWORD,const SYSTEMTIME*,LPCWSTR,LPWSTR,int);
 int __attribute__((__stdcall__)) GetGeoInfoA(GEOID,GEOTYPE,LPSTR,int,LANGID);
 int __attribute__((__stdcall__)) GetGeoInfoW(GEOID,GEOTYPE,LPWSTR,int,LANGID);
 int __attribute__((__stdcall__)) GetLocaleInfoA(LCID,LCTYPE,LPSTR,int);
 int __attribute__((__stdcall__)) GetLocaleInfoW(LCID,LCTYPE,LPWSTR,int);
 BOOL __attribute__((__stdcall__)) GetNLSVersion(NLS_FUNCTION,LCID,LPNLSVERSIONINFO);
 int __attribute__((__stdcall__)) GetNumberFormatA(LCID,DWORD,LPCSTR,const NUMBERFMTA*,LPSTR,int);
 int __attribute__((__stdcall__)) GetNumberFormatW(LCID,DWORD,LPCWSTR,const NUMBERFMTW*,LPWSTR,int);
 UINT __attribute__((__stdcall__)) GetOEMCP(void);
 BOOL __attribute__((__stdcall__)) GetStringTypeA(LCID,DWORD,LPCSTR,int,LPWORD);
 BOOL __attribute__((__stdcall__)) GetStringTypeW(DWORD,LPCWSTR,int,LPWORD);
 BOOL __attribute__((__stdcall__)) GetStringTypeExA(LCID,DWORD,LPCSTR,int,LPWORD);
 BOOL __attribute__((__stdcall__)) GetStringTypeExW(LCID,DWORD,LPCWSTR,int,LPWORD);
 LANGID __attribute__((__stdcall__)) GetSystemDefaultLangID(void);
 LCID __attribute__((__stdcall__)) GetSystemDefaultLCID(void);
 LCID __attribute__((__stdcall__)) GetThreadLocale(void);
 int __attribute__((__stdcall__)) GetTimeFormatA(LCID,DWORD,const SYSTEMTIME*,LPCSTR,LPSTR,int);
 int __attribute__((__stdcall__)) GetTimeFormatW(LCID,DWORD,const SYSTEMTIME*,LPCWSTR,LPWSTR,int);
 LANGID __attribute__((__stdcall__)) GetUserDefaultLangID(void);
 LCID __attribute__((__stdcall__)) GetUserDefaultLCID(void);
 GEOID __attribute__((__stdcall__)) GetUserGeoID(GEOCLASS);
 BOOL __attribute__((__stdcall__)) IsDBCSLeadByte(BYTE);
 BOOL __attribute__((__stdcall__)) IsDBCSLeadByteEx(UINT,BYTE);
 BOOL __attribute__((__stdcall__)) IsNLSDefinedString(NLS_FUNCTION,DWORD,LPNLSVERSIONINFO,LPCWSTR,int);
 BOOL __attribute__((__stdcall__)) IsValidCodePage(UINT);
 BOOL __attribute__((__stdcall__)) IsValidLocale(LCID,DWORD);
 int __attribute__((__stdcall__)) LCMapStringA(LCID,DWORD,LPCSTR,int,LPSTR,int);
 int __attribute__((__stdcall__)) LCMapStringW(LCID,DWORD,LPCWSTR,int,LPWSTR,int);
 int __attribute__((__stdcall__)) MultiByteToWideChar(UINT,DWORD,LPCSTR,int,LPWSTR,int);
 int __attribute__((__stdcall__)) SetCalendarInfoA(LCID,CALID,CALTYPE,LPCSTR);
 int __attribute__((__stdcall__)) SetCalendarInfoW(LCID,CALID,CALTYPE,LPCWSTR);
 BOOL __attribute__((__stdcall__)) SetLocaleInfoA(LCID,LCTYPE,LPCSTR);
 BOOL __attribute__((__stdcall__)) SetLocaleInfoW(LCID,LCTYPE,LPCWSTR);
 BOOL __attribute__((__stdcall__)) SetThreadLocale(LCID);
 BOOL __attribute__((__stdcall__)) SetUserGeoID(GEOID);
 int __attribute__((__stdcall__)) WideCharToMultiByte(UINT,DWORD,LPCWSTR,int,LPSTR,int,LPCSTR,LPBOOL);

 BOOL __attribute__((__stdcall__)) EnumCalendarInfoExA(CALINFO_ENUMPROCEXA,LCID,CALID,CALTYPE);
 BOOL __attribute__((__stdcall__)) EnumCalendarInfoExW(CALINFO_ENUMPROCEXW,LCID,CALID,CALTYPE);
 BOOL __attribute__((__stdcall__)) EnumDateFormatsExA(DATEFMT_ENUMPROCEXA,LCID,DWORD);
 BOOL __attribute__((__stdcall__)) EnumDateFormatsExW(DATEFMT_ENUMPROCEXW,LCID,DWORD);
 BOOL __attribute__((__stdcall__)) EnumSystemLanguageGroupsA(LANGUAGEGROUP_ENUMPROCA,DWORD,LONG_PTR);
 BOOL __attribute__((__stdcall__)) EnumSystemLanguageGroupsW(LANGUAGEGROUP_ENUMPROCW,DWORD,LONG_PTR);
 BOOL __attribute__((__stdcall__)) EnumLanguageGroupLocalesA(LANGGROUPLOCALE_ENUMPROCA,LGRPID,DWORD,LONG_PTR);
 BOOL __attribute__((__stdcall__)) EnumLanguageGroupLocalesW(LANGGROUPLOCALE_ENUMPROCW,LGRPID,DWORD,LONG_PTR);
 BOOL __attribute__((__stdcall__)) EnumUILanguagesA(UILANGUAGE_ENUMPROCA,DWORD,LONG_PTR);
 BOOL __attribute__((__stdcall__)) EnumUILanguagesW(UILANGUAGE_ENUMPROCW,DWORD,LONG_PTR);
 LANGID __attribute__((__stdcall__)) GetSystemDefaultUILanguage(void);
 LANGID __attribute__((__stdcall__)) GetUserDefaultUILanguage(void);
 BOOL __attribute__((__stdcall__)) IsValidLanguageGroup(LGRPID,DWORD);
# 701 "c:\\mingw\\include\\winnls.h" 3
typedef CPINFOEXA CPINFOEX;
typedef LPCPINFOEXA LPCPINFOEX;
typedef CURRENCYFMTA CURRENCYFMT;
typedef LPCURRENCYFMTA LPCURRENCYFMT;
typedef NUMBERFMTA NUMBERFMT;
typedef LPNUMBERFMTA LPNUMBERFMT;
# 50 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\winver.h" 1 3
# 35 "c:\\mingw\\include\\winver.h" 3
       
# 36 "c:\\mingw\\include\\winver.h" 3
# 114 "c:\\mingw\\include\\winver.h" 3


typedef
struct tagVS_FIXEDFILEINFO {
  DWORD dwSignature;
  DWORD dwStrucVersion;
  DWORD dwFileVersionMS;
  DWORD dwFileVersionLS;
  DWORD dwProductVersionMS;
  DWORD dwProductVersionLS;
  DWORD dwFileFlagsMask;
  DWORD dwFileFlags;
  DWORD dwFileOS;
  DWORD dwFileType;
  DWORD dwFileSubtype;
  DWORD dwFileDateMS;
  DWORD dwFileDateLS;
} VS_FIXEDFILEINFO;
# 143 "c:\\mingw\\include\\winver.h" 3
DWORD __attribute__((__stdcall__)) VerFindFileA( DWORD, LPSTR, LPSTR, LPSTR, LPSTR, PUINT, LPSTR, PUINT );
DWORD __attribute__((__stdcall__)) VerFindFileW( DWORD, LPWSTR, LPWSTR, LPWSTR, LPWSTR, PUINT, LPWSTR, PUINT );


DWORD __attribute__((__stdcall__)) VerInstallFileA( DWORD, LPSTR, LPSTR, LPSTR, LPSTR, LPSTR, LPSTR, PUINT );
DWORD __attribute__((__stdcall__)) VerInstallFileW( DWORD, LPWSTR, LPWSTR, LPWSTR, LPWSTR, LPWSTR, LPWSTR, PUINT );


DWORD __attribute__((__stdcall__)) GetFileVersionInfoSizeA( LPCSTR, PDWORD );
DWORD __attribute__((__stdcall__)) GetFileVersionInfoSizeW( LPCWSTR, PDWORD );


BOOL __attribute__((__stdcall__)) GetFileVersionInfoA( LPCSTR, DWORD, DWORD, PVOID );
BOOL __attribute__((__stdcall__)) GetFileVersionInfoW( LPCWSTR, DWORD, DWORD, PVOID );
# 192 "c:\\mingw\\include\\winver.h" 3
DWORD __attribute__((__stdcall__)) VerLanguageNameA( DWORD, LPSTR, DWORD );
DWORD __attribute__((__stdcall__)) VerLanguageNameW( DWORD, LPWSTR, DWORD );


BOOL __attribute__((__stdcall__)) VerQueryValueA( LPCVOID, LPCSTR, LPVOID *, PUINT );
BOOL __attribute__((__stdcall__)) VerQueryValueW( LPCVOID, LPCWSTR, LPVOID *, PUINT );


# 51 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\winnetwk.h" 1 3



       
# 5 "c:\\mingw\\include\\winnetwk.h" 3
# 160 "c:\\mingw\\include\\winnetwk.h" 3
typedef struct _NETRESOURCEA {
 DWORD dwScope;
 DWORD dwType;
 DWORD dwDisplayType;
 DWORD dwUsage;
 LPSTR lpLocalName;
 LPSTR lpRemoteName;
 LPSTR lpComment ;
 LPSTR lpProvider;
}NETRESOURCEA,*LPNETRESOURCEA;
typedef struct _NETRESOURCEW {
 DWORD dwScope;
 DWORD dwType;
 DWORD dwDisplayType;
 DWORD dwUsage;
 LPWSTR lpLocalName;
 LPWSTR lpRemoteName;
 LPWSTR lpComment ;
 LPWSTR lpProvider;
}NETRESOURCEW,*LPNETRESOURCEW;
typedef struct _CONNECTDLGSTRUCTA{
 DWORD cbStructure;
 HWND hwndOwner;
 LPNETRESOURCEA lpConnRes;
 DWORD dwFlags;
 DWORD dwDevNum;
} CONNECTDLGSTRUCTA,*LPCONNECTDLGSTRUCTA;
typedef struct _CONNECTDLGSTRUCTW{
 DWORD cbStructure;
 HWND hwndOwner;
 LPNETRESOURCEW lpConnRes;
 DWORD dwFlags;
 DWORD dwDevNum;
} CONNECTDLGSTRUCTW,*LPCONNECTDLGSTRUCTW;
typedef struct _DISCDLGSTRUCTA{
 DWORD cbStructure;
 HWND hwndOwner;
 LPSTR lpLocalName;
 LPSTR lpRemoteName;
 DWORD dwFlags;
} DISCDLGSTRUCTA,*LPDISCDLGSTRUCTA;
typedef struct _DISCDLGSTRUCTW{
 DWORD cbStructure;
 HWND hwndOwner;
 LPWSTR lpLocalName;
 LPWSTR lpRemoteName;
 DWORD dwFlags;
} DISCDLGSTRUCTW,*LPDISCDLGSTRUCTW;
typedef struct _UNIVERSAL_NAME_INFOA { LPSTR lpUniversalName; }UNIVERSAL_NAME_INFOA,*LPUNIVERSAL_NAME_INFOA;
typedef struct _UNIVERSAL_NAME_INFOW { LPWSTR lpUniversalName; }UNIVERSAL_NAME_INFOW,*LPUNIVERSAL_NAME_INFOW;
typedef struct _REMOTE_NAME_INFOA {
 LPSTR lpUniversalName;
 LPSTR lpConnectionName;
 LPSTR lpRemainingPath;
}REMOTE_NAME_INFOA,*LPREMOTE_NAME_INFOA;
typedef struct _REMOTE_NAME_INFOW {
 LPWSTR lpUniversalName;
 LPWSTR lpConnectionName;
 LPWSTR lpRemainingPath;
}REMOTE_NAME_INFOW,*LPREMOTE_NAME_INFOW;
typedef struct _NETINFOSTRUCT{
 DWORD cbStructure;
 DWORD dwProviderVersion;
 DWORD dwStatus;
 DWORD dwCharacteristics;
 DWORD dwHandle;
 WORD wNetType;
 DWORD dwPrinters;
 DWORD dwDrives;
} NETINFOSTRUCT,*LPNETINFOSTRUCT;
typedef UINT(__attribute__((__stdcall__)) *PFNGETPROFILEPATHA)(LPCSTR,LPSTR,UINT);
typedef UINT(__attribute__((__stdcall__)) *PFNGETPROFILEPATHW)(LPCWSTR,LPWSTR,UINT);
typedef UINT(__attribute__((__stdcall__)) *PFNRECONCILEPROFILEA)(LPCSTR,LPCSTR,DWORD);
typedef UINT(__attribute__((__stdcall__)) *PFNRECONCILEPROFILEW)(LPCWSTR,LPCWSTR,DWORD);
typedef BOOL(__attribute__((__stdcall__)) *PFNPROCESSPOLICIESA)(HWND,LPCSTR,LPCSTR,LPCSTR,DWORD);
typedef BOOL(__attribute__((__stdcall__)) *PFNPROCESSPOLICIESW)(HWND,LPCWSTR,LPCWSTR,LPCWSTR,DWORD);
typedef struct _NETCONNECTINFOSTRUCT{
 DWORD cbStructure;
 DWORD dwFlags;
 DWORD dwSpeed;
 DWORD dwDelay;
 DWORD dwOptDataSize;
} NETCONNECTINFOSTRUCT,*LPNETCONNECTINFOSTRUCT;

DWORD __attribute__((__stdcall__)) WNetAddConnectionA(LPCSTR,LPCSTR,LPCSTR);
DWORD __attribute__((__stdcall__)) WNetAddConnectionW(LPCWSTR,LPCWSTR,LPCWSTR);
DWORD __attribute__((__stdcall__)) WNetAddConnection2A(LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetAddConnection2W(LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetAddConnection3A(HWND,LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetAddConnection3W(HWND,LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetCancelConnectionA(LPCSTR,BOOL);
DWORD __attribute__((__stdcall__)) WNetCancelConnectionW(LPCWSTR,BOOL);
DWORD __attribute__((__stdcall__)) WNetCancelConnection2A(LPCSTR,DWORD,BOOL);
DWORD __attribute__((__stdcall__)) WNetCancelConnection2W(LPCWSTR,DWORD,BOOL);
DWORD __attribute__((__stdcall__)) WNetGetConnectionA(LPCSTR,LPSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetConnectionW(LPCWSTR,LPWSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetUseConnectionA(HWND,LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD,LPSTR,PDWORD,PDWORD);
DWORD __attribute__((__stdcall__)) WNetUseConnectionW(HWND,LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD,LPWSTR,PDWORD,PDWORD);
DWORD __attribute__((__stdcall__)) WNetSetConnectionA(LPCSTR,DWORD,PVOID);
DWORD __attribute__((__stdcall__)) WNetSetConnectionW(LPCWSTR,DWORD,PVOID);
DWORD __attribute__((__stdcall__)) WNetConnectionDialog(HWND,DWORD);
DWORD __attribute__((__stdcall__)) WNetDisconnectDialog(HWND,DWORD);
DWORD __attribute__((__stdcall__)) WNetConnectionDialog1A(LPCONNECTDLGSTRUCTA);
DWORD __attribute__((__stdcall__)) WNetConnectionDialog1W(LPCONNECTDLGSTRUCTW);
DWORD __attribute__((__stdcall__)) WNetDisconnectDialog1A(LPDISCDLGSTRUCTA);
DWORD __attribute__((__stdcall__)) WNetDisconnectDialog1W(LPDISCDLGSTRUCTW);
DWORD __attribute__((__stdcall__)) WNetOpenEnumA(DWORD,DWORD,DWORD,LPNETRESOURCEA,LPHANDLE);
DWORD __attribute__((__stdcall__)) WNetOpenEnumW(DWORD,DWORD,DWORD,LPNETRESOURCEW,LPHANDLE);
DWORD __attribute__((__stdcall__)) WNetEnumResourceA(HANDLE,PDWORD,PVOID,PDWORD);
DWORD __attribute__((__stdcall__)) WNetEnumResourceW(HANDLE,PDWORD,PVOID,PDWORD);
DWORD __attribute__((__stdcall__)) WNetCloseEnum(HANDLE);
DWORD __attribute__((__stdcall__)) WNetGetUniversalNameA(LPCSTR,DWORD,PVOID,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetUniversalNameW(LPCWSTR,DWORD,PVOID,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetUserA(LPCSTR,LPSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetUserW(LPCWSTR,LPWSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetProviderNameA(DWORD,LPSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetProviderNameW(DWORD,LPWSTR,PDWORD);
DWORD __attribute__((__stdcall__)) WNetGetNetworkInformationA(LPCSTR,LPNETINFOSTRUCT);
DWORD __attribute__((__stdcall__)) WNetGetNetworkInformationW(LPCWSTR,LPNETINFOSTRUCT);
DWORD __attribute__((__stdcall__)) WNetGetResourceInformationA(LPNETRESOURCEA,LPVOID,LPDWORD,LPSTR*);
DWORD __attribute__((__stdcall__)) WNetGetResourceInformationW(LPNETRESOURCEW,LPVOID,LPDWORD,LPWSTR*);
DWORD __attribute__((__stdcall__)) WNetGetResourceParentA(LPNETRESOURCEA,LPVOID,LPDWORD);
DWORD __attribute__((__stdcall__)) WNetGetResourceParentW(LPNETRESOURCEW,LPVOID,LPDWORD);
DWORD __attribute__((__stdcall__)) WNetGetLastErrorA(PDWORD,LPSTR,DWORD,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) WNetGetLastErrorW(PDWORD,LPWSTR,DWORD,LPWSTR,DWORD);
DWORD __attribute__((__stdcall__)) MultinetGetConnectionPerformanceA(LPNETRESOURCEA,LPNETCONNECTINFOSTRUCT);
DWORD __attribute__((__stdcall__)) MultinetGetConnectionPerformanceW(LPNETRESOURCEW,LPNETCONNECTINFOSTRUCT);
# 320 "c:\\mingw\\include\\winnetwk.h" 3
typedef NETRESOURCEA NETRESOURCE,*LPNETRESOURCE;
typedef CONNECTDLGSTRUCTA CONNECTDLGSTRUCT,*LPCONNECTDLGSTRUCT;
typedef DISCDLGSTRUCTA DISCDLGSTRUCT,*LPDISCDLGSTRUCT;
typedef UNIVERSAL_NAME_INFOA UNIVERSAL_NAME_INFO,*LPUNIVERSAL_NAME_INFO;
typedef REMOTE_NAME_INFOA REMOTE_NAME_INFO,*LPREMOTE_NAME_INFO;
# 52 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\winreg.h" 1 3



       
# 5 "c:\\mingw\\include\\winreg.h" 3
# 45 "c:\\mingw\\include\\winreg.h" 3
typedef ACCESS_MASK REGSAM;
typedef struct value_entA {
 LPSTR ve_valuename;
 DWORD ve_valuelen;
 DWORD ve_valueptr;
 DWORD ve_type;
} VALENTA,*PVALENTA;
typedef struct value_entW {
 LPWSTR ve_valuename;
 DWORD ve_valuelen;
 DWORD ve_valueptr;
 DWORD ve_type;
} VALENTW,*PVALENTW;
 BOOL __attribute__((__stdcall__)) AbortSystemShutdownA(LPCSTR);
 BOOL __attribute__((__stdcall__)) AbortSystemShutdownW(LPCWSTR);
 BOOL __attribute__((__stdcall__)) InitiateSystemShutdownA(LPSTR,LPSTR,DWORD,BOOL,BOOL);
 BOOL __attribute__((__stdcall__)) InitiateSystemShutdownW(LPWSTR,LPWSTR,DWORD,BOOL,BOOL);
 LONG __attribute__((__stdcall__)) RegCloseKey(HKEY);
 LONG __attribute__((__stdcall__)) RegConnectRegistryA(LPCSTR,HKEY,PHKEY);
 LONG __attribute__((__stdcall__)) RegConnectRegistryW(LPCWSTR,HKEY,PHKEY);
 LONG __attribute__((__stdcall__)) RegCreateKeyA(HKEY,LPCSTR,PHKEY);
 LONG __attribute__((__stdcall__)) RegCreateKeyExA(HKEY,LPCSTR,DWORD,LPSTR,DWORD,REGSAM,LPSECURITY_ATTRIBUTES,PHKEY,PDWORD);
 LONG __attribute__((__stdcall__)) RegCreateKeyExW(HKEY,LPCWSTR,DWORD,LPWSTR,DWORD,REGSAM,LPSECURITY_ATTRIBUTES,PHKEY,PDWORD);
 LONG __attribute__((__stdcall__)) RegCreateKeyW(HKEY,LPCWSTR,PHKEY);
 LONG __attribute__((__stdcall__)) RegDeleteKeyA(HKEY,LPCSTR);
 LONG __attribute__((__stdcall__)) RegDeleteKeyW(HKEY,LPCWSTR);




 LONG __attribute__((__stdcall__)) RegDeleteValueA(HKEY,LPCSTR);
 LONG __attribute__((__stdcall__)) RegDeleteValueW(HKEY,LPCWSTR);
 LONG __attribute__((__stdcall__)) RegEnumKeyA(HKEY,DWORD,LPSTR,DWORD);
 LONG __attribute__((__stdcall__)) RegEnumKeyW(HKEY,DWORD,LPWSTR,DWORD);
 LONG __attribute__((__stdcall__)) RegEnumKeyExA(HKEY,DWORD,LPSTR,PDWORD,PDWORD,LPSTR,PDWORD,PFILETIME);
 LONG __attribute__((__stdcall__)) RegEnumKeyExW(HKEY,DWORD,LPWSTR,PDWORD,PDWORD,LPWSTR,PDWORD,PFILETIME);
 LONG __attribute__((__stdcall__)) RegEnumValueA(HKEY,DWORD,LPSTR,PDWORD,PDWORD,PDWORD,LPBYTE,PDWORD);
 LONG __attribute__((__stdcall__)) RegEnumValueW(HKEY,DWORD,LPWSTR,PDWORD,PDWORD,PDWORD,LPBYTE,PDWORD);
 LONG __attribute__((__stdcall__)) RegFlushKey(HKEY);
 LONG __attribute__((__stdcall__)) RegGetKeySecurity(HKEY,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,PDWORD);
 LONG __attribute__((__stdcall__)) RegLoadKeyA(HKEY,LPCSTR,LPCSTR);
 LONG __attribute__((__stdcall__)) RegLoadKeyW(HKEY,LPCWSTR,LPCWSTR);
 LONG __attribute__((__stdcall__)) RegNotifyChangeKeyValue(HKEY,BOOL,DWORD,HANDLE,BOOL);
 LONG __attribute__((__stdcall__)) RegOpenKeyA(HKEY,LPCSTR,PHKEY);
 LONG __attribute__((__stdcall__)) RegOpenKeyExA(HKEY,LPCSTR,DWORD,REGSAM,PHKEY);
 LONG __attribute__((__stdcall__)) RegOpenKeyExW(HKEY,LPCWSTR,DWORD,REGSAM,PHKEY);
 LONG __attribute__((__stdcall__)) RegOpenKeyW(HKEY,LPCWSTR,PHKEY);
 LONG __attribute__((__stdcall__)) RegQueryInfoKeyA(HKEY,LPSTR,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PFILETIME);
 LONG __attribute__((__stdcall__)) RegQueryInfoKeyW(HKEY,LPWSTR,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PFILETIME);
 LONG __attribute__((__stdcall__)) RegQueryMultipleValuesA(HKEY,PVALENTA,DWORD,LPSTR,LPDWORD);
 LONG __attribute__((__stdcall__)) RegQueryMultipleValuesW(HKEY,PVALENTW,DWORD,LPWSTR,LPDWORD);
 LONG __attribute__((__stdcall__)) RegQueryValueA(HKEY,LPCSTR,LPSTR,PLONG);
 LONG __attribute__((__stdcall__)) RegQueryValueExA(HKEY,LPCSTR,LPDWORD,LPDWORD,LPBYTE,LPDWORD);
 LONG __attribute__((__stdcall__)) RegQueryValueExW(HKEY,LPCWSTR,LPDWORD,LPDWORD,LPBYTE,LPDWORD);
 LONG __attribute__((__stdcall__)) RegQueryValueW(HKEY,LPCWSTR,LPWSTR,PLONG);
 LONG __attribute__((__stdcall__)) RegReplaceKeyA(HKEY,LPCSTR,LPCSTR,LPCSTR);
 LONG __attribute__((__stdcall__)) RegReplaceKeyW(HKEY,LPCWSTR,LPCWSTR,LPCWSTR);
 LONG __attribute__((__stdcall__)) RegRestoreKeyA(HKEY,LPCSTR,DWORD);
 LONG __attribute__((__stdcall__)) RegRestoreKeyW(HKEY,LPCWSTR,DWORD);
 LONG __attribute__((__stdcall__)) RegSaveKeyA(HKEY,LPCSTR,LPSECURITY_ATTRIBUTES);
 LONG __attribute__((__stdcall__)) RegSaveKeyW(HKEY,LPCWSTR,LPSECURITY_ATTRIBUTES);
 LONG __attribute__((__stdcall__)) RegSetKeySecurity(HKEY,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
 LONG __attribute__((__stdcall__)) RegSetValueA(HKEY,LPCSTR,DWORD,LPCSTR,DWORD);
 LONG __attribute__((__stdcall__)) RegSetValueExA(HKEY,LPCSTR,DWORD,DWORD,const BYTE*,DWORD);
 LONG __attribute__((__stdcall__)) RegSetValueExW(HKEY,LPCWSTR,DWORD,DWORD,const BYTE*,DWORD);
 LONG __attribute__((__stdcall__)) RegSetValueW(HKEY,LPCWSTR,DWORD,LPCWSTR,DWORD);
 LONG __attribute__((__stdcall__)) RegUnLoadKeyA(HKEY,LPCSTR);
 LONG __attribute__((__stdcall__)) RegUnLoadKeyW(HKEY,LPCWSTR);
# 143 "c:\\mingw\\include\\winreg.h" 3
typedef VALENTA VALENT,*PVALENT;
# 53 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\winsvc.h" 1 3



       
# 5 "c:\\mingw\\include\\winsvc.h" 3
# 74 "c:\\mingw\\include\\winsvc.h" 3
typedef struct _SERVICE_STATUS {
 DWORD dwServiceType;
 DWORD dwCurrentState;
 DWORD dwControlsAccepted;
 DWORD dwWin32ExitCode;
 DWORD dwServiceSpecificExitCode;
 DWORD dwCheckPoint;
 DWORD dwWaitHint;
} SERVICE_STATUS,*LPSERVICE_STATUS;
typedef struct _SERVICE_STATUS_PROCESS {
 DWORD dwServiceType;
 DWORD dwCurrentState;
 DWORD dwControlsAccepted;
 DWORD dwWin32ExitCode;
 DWORD dwServiceSpecificExitCode;
 DWORD dwCheckPoint;
 DWORD dwWaitHint;
 DWORD dwProcessId;
 DWORD dwServiceFlags;
} SERVICE_STATUS_PROCESS, *LPSERVICE_STATUS_PROCESS;
typedef enum _SC_STATUS_TYPE {
 SC_STATUS_PROCESS_INFO = 0
} SC_STATUS_TYPE;
typedef enum _SC_ENUM_TYPE {
        SC_ENUM_PROCESS_INFO = 0
} SC_ENUM_TYPE;
typedef struct _ENUM_SERVICE_STATUSA {
 LPSTR lpServiceName;
 LPSTR lpDisplayName;
 SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSA,*LPENUM_SERVICE_STATUSA;
typedef struct _ENUM_SERVICE_STATUSW {
 LPWSTR lpServiceName;
 LPWSTR lpDisplayName;
 SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSW,*LPENUM_SERVICE_STATUSW;
typedef struct _ENUM_SERVICE_STATUS_PROCESSA {
 LPSTR lpServiceName;
 LPSTR lpDisplayName;
 SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSA,*LPENUM_SERVICE_STATUS_PROCESSA;
typedef struct _ENUM_SERVICE_STATUS_PROCESSW {
 LPWSTR lpServiceName;
 LPWSTR lpDisplayName;
 SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSW,*LPENUM_SERVICE_STATUS_PROCESSW;
typedef struct _QUERY_SERVICE_CONFIGA {
 DWORD dwServiceType;
 DWORD dwStartType;
 DWORD dwErrorControl;
 LPSTR lpBinaryPathName;
 LPSTR lpLoadOrderGroup;
 DWORD dwTagId;
 LPSTR lpDependencies;
 LPSTR lpServiceStartName;
 LPSTR lpDisplayName;
} QUERY_SERVICE_CONFIGA,*LPQUERY_SERVICE_CONFIGA;
typedef struct _QUERY_SERVICE_CONFIGW {
 DWORD dwServiceType;
 DWORD dwStartType;
 DWORD dwErrorControl;
 LPWSTR lpBinaryPathName;
 LPWSTR lpLoadOrderGroup;
 DWORD dwTagId;
 LPWSTR lpDependencies;
 LPWSTR lpServiceStartName;
 LPWSTR lpDisplayName;
} QUERY_SERVICE_CONFIGW,*LPQUERY_SERVICE_CONFIGW;
typedef struct _QUERY_SERVICE_LOCK_STATUSA {
 DWORD fIsLocked;
 LPSTR lpLockOwner;
 DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSA,*LPQUERY_SERVICE_LOCK_STATUSA;
typedef struct _QUERY_SERVICE_LOCK_STATUSW {
 DWORD fIsLocked;
 LPWSTR lpLockOwner;
 DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSW,*LPQUERY_SERVICE_LOCK_STATUSW;
typedef void (__attribute__((__stdcall__)) *LPSERVICE_MAIN_FUNCTIONA)(DWORD,LPSTR*);
typedef void (__attribute__((__stdcall__)) *LPSERVICE_MAIN_FUNCTIONW)(DWORD,LPWSTR*);
typedef struct _SERVICE_TABLE_ENTRYA {
 LPSTR lpServiceName;
 LPSERVICE_MAIN_FUNCTIONA lpServiceProc;
} SERVICE_TABLE_ENTRYA,*LPSERVICE_TABLE_ENTRYA;
typedef struct _SERVICE_TABLE_ENTRYW {
 LPWSTR lpServiceName;
 LPSERVICE_MAIN_FUNCTIONW lpServiceProc;
} SERVICE_TABLE_ENTRYW,*LPSERVICE_TABLE_ENTRYW;
typedef struct SC_HANDLE__{int i;}*SC_HANDLE;
typedef SC_HANDLE *LPSC_HANDLE;
typedef PVOID SC_LOCK;
typedef DWORD SERVICE_STATUS_HANDLE;
typedef void(__attribute__((__stdcall__)) *LPHANDLER_FUNCTION)(DWORD);
typedef DWORD (__attribute__((__stdcall__)) *LPHANDLER_FUNCTION_EX)(DWORD,DWORD,LPVOID,LPVOID);
typedef struct _SERVICE_DESCRIPTIONA {
 LPSTR lpDescription;
} SERVICE_DESCRIPTIONA,*LPSERVICE_DESCRIPTIONA;
typedef struct _SERVICE_DESCRIPTIONW {
 LPWSTR lpDescription;
} SERVICE_DESCRIPTIONW,*LPSERVICE_DESCRIPTIONW;
typedef enum _SC_ACTION_TYPE {
        SC_ACTION_NONE = 0,
        SC_ACTION_RESTART = 1,
        SC_ACTION_REBOOT = 2,
        SC_ACTION_RUN_COMMAND = 3
} SC_ACTION_TYPE;
typedef struct _SC_ACTION {
 SC_ACTION_TYPE Type;
 DWORD Delay;
} SC_ACTION,*LPSC_ACTION;
typedef struct _SERVICE_FAILURE_ACTIONSA {
 DWORD dwResetPeriod;
 LPSTR lpRebootMsg;
 LPSTR lpCommand;
 DWORD cActions;
 SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSA,*LPSERVICE_FAILURE_ACTIONSA;
typedef struct _SERVICE_FAILURE_ACTIONSW {
 DWORD dwResetPeriod;
 LPWSTR lpRebootMsg;
 LPWSTR lpCommand;
 DWORD cActions;
 SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSW,*LPSERVICE_FAILURE_ACTIONSW;

 BOOL __attribute__((__stdcall__)) ChangeServiceConfigA(SC_HANDLE,DWORD,DWORD,DWORD,LPCSTR,LPCSTR,LPDWORD,LPCSTR,LPCSTR,LPCSTR,LPCSTR);
 BOOL __attribute__((__stdcall__)) ChangeServiceConfigW(SC_HANDLE,DWORD,DWORD,DWORD,LPCWSTR,LPCWSTR,LPDWORD,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
 BOOL __attribute__((__stdcall__)) ChangeServiceConfig2A(SC_HANDLE,DWORD,LPVOID);
 BOOL __attribute__((__stdcall__)) ChangeServiceConfig2W(SC_HANDLE,DWORD,LPVOID);
 BOOL __attribute__((__stdcall__)) CloseServiceHandle(SC_HANDLE);
 BOOL __attribute__((__stdcall__)) ControlService(SC_HANDLE,DWORD,LPSERVICE_STATUS);
 SC_HANDLE __attribute__((__stdcall__)) CreateServiceA(SC_HANDLE,LPCSTR,LPCSTR,DWORD,DWORD,DWORD,DWORD,LPCSTR,LPCSTR,PDWORD,LPCSTR,LPCSTR,LPCSTR);
 SC_HANDLE __attribute__((__stdcall__)) CreateServiceW(SC_HANDLE,LPCWSTR,LPCWSTR,DWORD,DWORD,DWORD,DWORD,LPCWSTR,LPCWSTR,PDWORD,LPCWSTR,LPCWSTR,LPCWSTR);
 BOOL __attribute__((__stdcall__)) DeleteService(SC_HANDLE);
 BOOL __attribute__((__stdcall__)) EnumDependentServicesA(SC_HANDLE,DWORD,LPENUM_SERVICE_STATUSA,DWORD,PDWORD,PDWORD);
 BOOL __attribute__((__stdcall__)) EnumDependentServicesW(SC_HANDLE,DWORD,LPENUM_SERVICE_STATUSW,DWORD,PDWORD,PDWORD);
 BOOL __attribute__((__stdcall__)) EnumServicesStatusA(SC_HANDLE,DWORD,DWORD,LPENUM_SERVICE_STATUSA,DWORD,PDWORD,PDWORD,PDWORD);
 BOOL __attribute__((__stdcall__)) EnumServicesStatusW(SC_HANDLE,DWORD,DWORD,LPENUM_SERVICE_STATUSW,DWORD,PDWORD,PDWORD,PDWORD);
 BOOL __attribute__((__stdcall__)) EnumServicesStatusExA(SC_HANDLE,SC_ENUM_TYPE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,LPCSTR);
 BOOL __attribute__((__stdcall__)) EnumServicesStatusExW(SC_HANDLE,SC_ENUM_TYPE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,LPCWSTR);
 BOOL __attribute__((__stdcall__)) GetServiceDisplayNameA(SC_HANDLE,LPCSTR,LPSTR,PDWORD);
 BOOL __attribute__((__stdcall__)) GetServiceDisplayNameW(SC_HANDLE,LPCWSTR,LPWSTR,PDWORD);
 BOOL __attribute__((__stdcall__)) GetServiceKeyNameA(SC_HANDLE,LPCSTR,LPSTR,PDWORD);
 BOOL __attribute__((__stdcall__)) GetServiceKeyNameW(SC_HANDLE,LPCWSTR,LPWSTR,PDWORD);
 SC_LOCK __attribute__((__stdcall__)) LockServiceDatabase(SC_HANDLE);
 BOOL __attribute__((__stdcall__)) NotifyBootConfigStatus(BOOL);
 SC_HANDLE __attribute__((__stdcall__)) OpenSCManagerA(LPCSTR,LPCSTR,DWORD);
 SC_HANDLE __attribute__((__stdcall__)) OpenSCManagerW(LPCWSTR,LPCWSTR,DWORD);
 SC_HANDLE __attribute__((__stdcall__)) OpenServiceA(SC_HANDLE,LPCSTR,DWORD);
 SC_HANDLE __attribute__((__stdcall__)) OpenServiceW(SC_HANDLE,LPCWSTR,DWORD);
 BOOL __attribute__((__stdcall__)) QueryServiceConfigA(SC_HANDLE,LPQUERY_SERVICE_CONFIGA,DWORD,PDWORD);
 BOOL __attribute__((__stdcall__)) QueryServiceConfigW(SC_HANDLE,LPQUERY_SERVICE_CONFIGW,DWORD,PDWORD);
 BOOL __attribute__((__stdcall__)) QueryServiceConfig2A(SC_HANDLE,DWORD,LPBYTE,DWORD,LPDWORD);
 BOOL __attribute__((__stdcall__)) QueryServiceConfig2W(SC_HANDLE,DWORD,LPBYTE,DWORD,LPDWORD);
 BOOL __attribute__((__stdcall__)) QueryServiceLockStatusA(SC_HANDLE,LPQUERY_SERVICE_LOCK_STATUSA,DWORD,PDWORD);
 BOOL __attribute__((__stdcall__)) QueryServiceLockStatusW(SC_HANDLE,LPQUERY_SERVICE_LOCK_STATUSW,DWORD,PDWORD);
 BOOL __attribute__((__stdcall__)) QueryServiceObjectSecurity(SC_HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,LPDWORD);
 BOOL __attribute__((__stdcall__)) QueryServiceStatus(SC_HANDLE,LPSERVICE_STATUS);
 BOOL __attribute__((__stdcall__)) QueryServiceStatusEx(SC_HANDLE,SC_STATUS_TYPE,LPBYTE,DWORD,LPDWORD);
 SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerA(LPCSTR,LPHANDLER_FUNCTION);
 SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerW(LPCWSTR,LPHANDLER_FUNCTION);
 SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerExA(LPCSTR,LPHANDLER_FUNCTION_EX,LPVOID);
 SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerExW(LPCWSTR,LPHANDLER_FUNCTION_EX,LPVOID);
 BOOL __attribute__((__stdcall__)) SetServiceObjectSecurity(SC_HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
 BOOL __attribute__((__stdcall__)) SetServiceStatus(SERVICE_STATUS_HANDLE,LPSERVICE_STATUS);
 BOOL __attribute__((__stdcall__)) StartServiceA(SC_HANDLE,DWORD,LPCSTR*);
 BOOL __attribute__((__stdcall__)) StartServiceCtrlDispatcherA(LPSERVICE_TABLE_ENTRYA);
 BOOL __attribute__((__stdcall__)) StartServiceCtrlDispatcherW(LPSERVICE_TABLE_ENTRYW);
 BOOL __attribute__((__stdcall__)) StartServiceW(SC_HANDLE,DWORD,LPCWSTR*);
 BOOL __attribute__((__stdcall__)) UnlockServiceDatabase(SC_LOCK);
# 278 "c:\\mingw\\include\\winsvc.h" 3
typedef ENUM_SERVICE_STATUSA ENUM_SERVICE_STATUS,*LPENUM_SERVICE_STATUS;
typedef ENUM_SERVICE_STATUS_PROCESSA ENUM_SERVICE_STATUS_PROCESS;
typedef LPENUM_SERVICE_STATUS_PROCESSA LPENUM_SERVICE_STATUS_PROCESS;
typedef QUERY_SERVICE_CONFIGA QUERY_SERVICE_CONFIG,*LPQUERY_SERVICE_CONFIG;
typedef QUERY_SERVICE_LOCK_STATUSA QUERY_SERVICE_LOCK_STATUS,*LPQUERY_SERVICE_LOCK_STATUS;
typedef SERVICE_TABLE_ENTRYA SERVICE_TABLE_ENTRY,*LPSERVICE_TABLE_ENTRY;
typedef LPSERVICE_MAIN_FUNCTIONA LPSERVICE_MAIN_FUNCTION;
typedef SERVICE_DESCRIPTIONA SERVICE_DESCRIPTION;
typedef LPSERVICE_DESCRIPTIONA LPSERVICE_DESCRIPTION;
typedef SERVICE_FAILURE_ACTIONSA SERVICE_FAILURE_ACTIONS;
typedef LPSERVICE_FAILURE_ACTIONSA LPSERVICE_FAILURE_ACTIONS;
# 54 "c:\\mingw\\include\\windows.h" 2 3


# 1 "c:\\mingw\\include\\cderr.h" 1 3



       
# 5 "c:\\mingw\\include\\cderr.h" 3
# 57 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\dde.h" 1 3



       
# 5 "c:\\mingw\\include\\dde.h" 3
# 23 "c:\\mingw\\include\\dde.h" 3
typedef struct {
 unsigned short bAppReturnCode:8,reserved:6,fBusy:1,fAck:1;
} DDEACK;
typedef struct {
 unsigned short reserved:14,fDeferUpd:1,fAckReq:1;
 short cfFormat;
} DDEADVISE;
typedef struct {
 unsigned short unused:12,fResponse:1,fRelease:1,reserved:1,fAckReq:1;
 short cfFormat;
 BYTE Value[1];
} DDEDATA;
typedef struct {
 unsigned short unused:13,fRelease:1,fReserved:2;
 short cfFormat;
 BYTE Value[1];
} DDEPOKE;
typedef struct {
        unsigned short unused:13,
                 fRelease:1,
                 fDeferUpd:1,
         fAckReq:1;
    short cfFormat;
} DDELN;

typedef struct {
 unsigned short unused:12,fAck:1,fRelease:1,fReserved:1,fAckReq:1;
    short cfFormat;
    BYTE rgb[1];
} DDEUP;
BOOL __attribute__((__stdcall__)) DdeSetQualityOfService(HWND,const SECURITY_QUALITY_OF_SERVICE*,PSECURITY_QUALITY_OF_SERVICE);
BOOL __attribute__((__stdcall__)) ImpersonateDdeClientWindow(HWND,HWND);
LPARAM __attribute__((__stdcall__)) PackDDElParam(UINT,UINT_PTR,UINT_PTR);
BOOL __attribute__((__stdcall__)) UnpackDDElParam(UINT,LPARAM,PUINT_PTR,PUINT_PTR);
BOOL __attribute__((__stdcall__)) FreeDDElParam(UINT,LPARAM);
LPARAM __attribute__((__stdcall__)) ReuseDDElParam(LPARAM,UINT,UINT,UINT_PTR,UINT_PTR);
# 58 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\ddeml.h" 1 3



       
# 5 "c:\\mingw\\include\\ddeml.h" 3
# 145 "c:\\mingw\\include\\ddeml.h" 3
typedef struct HCONVLIST__{int i;}*HCONVLIST;
typedef struct HCONV__{int i;}*HCONV;
typedef struct HSZ__{int i;}*HSZ;
typedef struct HDDEDATA__{int i;}*HDDEDATA;
typedef HDDEDATA __attribute__((__stdcall__)) FNCALLBACK(UINT,UINT,HCONV,HSZ,HSZ,HDDEDATA,DWORD,DWORD);
typedef HDDEDATA(__attribute__((__stdcall__)) *PFNCALLBACK)(UINT,UINT,HCONV,HSZ,HSZ,HDDEDATA,DWORD,DWORD);
typedef struct tagHSZPAIR {
 HSZ hszSvc;
 HSZ hszTopic;
} HSZPAIR, *PHSZPAIR;
typedef struct tagCONVCONTEXT {
 UINT cb;
 UINT wFlags;
 UINT wCountryID;
 int iCodePage;
 DWORD dwLangID;
 DWORD dwSecurity;
 SECURITY_QUALITY_OF_SERVICE qos;
} CONVCONTEXT,*PCONVCONTEXT;
typedef struct tagCONVINFO {
 DWORD cb;
 DWORD hUser;
 HCONV hConvPartner;
 HSZ hszSvcPartner;
 HSZ hszServiceReq;
 HSZ hszTopic;
 HSZ hszItem;
 UINT wFmt;
 UINT wType;
 UINT wStatus;
 UINT wConvst;
 UINT wLastError;
 HCONVLIST hConvList;
 CONVCONTEXT ConvCtxt;
 HWND hwnd;
 HWND hwndPartner;
} CONVINFO,*PCONVINFO;
typedef struct tagDDEML_MSG_HOOK_DATA {
 UINT uiLo;
 UINT uiHi;
 DWORD cbData;
 DWORD Data[8];
} DDEML_MSG_HOOK_DATA;
typedef struct tagMONHSZSTRUCT {
 UINT cb;
 BOOL fsAction;
 DWORD dwTime;
 HSZ hsz;
 HANDLE hTask;
 TCHAR str[1];
} MONHSZSTRUCT, *PMONHSZSTRUCT;
typedef struct tagMONLINKSTRUCT {
 UINT cb;
 DWORD dwTime;
 HANDLE hTask;
 BOOL fEstablished;
 BOOL fNoData;
 HSZ hszSvc;
 HSZ hszTopic;
 HSZ hszItem;
 UINT wFmt;
 BOOL fServer;
 HCONV hConvServer;
 HCONV hConvClient;
} MONLINKSTRUCT, *PMONLINKSTRUCT;
typedef struct tagMONCONVSTRUCT {
 UINT cb;
 BOOL fConnect;
 DWORD dwTime;
 HANDLE hTask;
 HSZ hszSvc;
 HSZ hszTopic;
 HCONV hConvClient;
 HCONV hConvServer;
} MONCONVSTRUCT, *PMONCONVSTRUCT;
typedef struct tagMONCBSTRUCT {
 UINT cb;
 DWORD dwTime;
 HANDLE hTask;
 DWORD dwRet;
 UINT wType;
 UINT wFmt;
 HCONV hConv;
 HSZ hsz1;
 HSZ hsz2;
 HDDEDATA hData;
 ULONG_PTR dwData1;
 ULONG_PTR dwData2;
 CONVCONTEXT cc;
 DWORD cbData;
 DWORD Data[8];
} MONCBSTRUCT, *PMONCBSTRUCT;
typedef struct tagMONERRSTRUCT {
 UINT cb;
 UINT wLastError;
 DWORD dwTime;
 HANDLE hTask;
} MONERRSTRUCT, *PMONERRSTRUCT;
typedef struct tagMONMSGSTRUCT {
 UINT cb;
 HWND hwndTo;
 DWORD dwTime;
 HANDLE hTask;
 UINT wMsg;
 WPARAM wParam;
 LPARAM lParam;
 DDEML_MSG_HOOK_DATA dmhd;
} MONMSGSTRUCT, *PMONMSGSTRUCT;

BOOL __attribute__((__stdcall__)) DdeAbandonTransaction(DWORD,HCONV,DWORD);
PBYTE __attribute__((__stdcall__)) DdeAccessData(HDDEDATA,PDWORD);
HDDEDATA __attribute__((__stdcall__)) DdeAddData(HDDEDATA,PBYTE,DWORD,DWORD);
HDDEDATA __attribute__((__stdcall__)) DdeClientTransaction(PBYTE,DWORD,HCONV,HSZ,UINT,UINT,DWORD,PDWORD);
int __attribute__((__stdcall__)) DdeCmpStringHandles(HSZ,HSZ);
HCONV __attribute__((__stdcall__)) DdeConnect(DWORD,HSZ,HSZ,PCONVCONTEXT);
HCONVLIST __attribute__((__stdcall__)) DdeConnectList(DWORD,HSZ,HSZ,HCONVLIST,PCONVCONTEXT);
HDDEDATA __attribute__((__stdcall__)) DdeCreateDataHandle(DWORD,PBYTE,DWORD,DWORD,HSZ,UINT,UINT);
HSZ __attribute__((__stdcall__)) DdeCreateStringHandleA(DWORD,LPCSTR,int);
HSZ __attribute__((__stdcall__)) DdeCreateStringHandleW(DWORD,LPCWSTR,int);
BOOL __attribute__((__stdcall__)) DdeDisconnect(HCONV);
BOOL __attribute__((__stdcall__)) DdeDisconnectList(HCONVLIST);
BOOL __attribute__((__stdcall__)) DdeEnableCallback(DWORD,HCONV,UINT);
BOOL __attribute__((__stdcall__)) DdeFreeDataHandle(HDDEDATA);
BOOL __attribute__((__stdcall__)) DdeFreeStringHandle(DWORD,HSZ);
DWORD __attribute__((__stdcall__)) DdeGetData(HDDEDATA,PBYTE,DWORD,DWORD);
UINT __attribute__((__stdcall__)) DdeGetLastError(DWORD);
BOOL __attribute__((__stdcall__)) DdeImpersonateClient(HCONV);
UINT __attribute__((__stdcall__)) DdeInitializeA(PDWORD,PFNCALLBACK,DWORD,DWORD);
UINT __attribute__((__stdcall__)) DdeInitializeW(PDWORD,PFNCALLBACK,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) DdeKeepStringHandle(DWORD,HSZ);
HDDEDATA __attribute__((__stdcall__)) DdeNameService(DWORD,HSZ,HSZ,UINT);
BOOL __attribute__((__stdcall__)) DdePostAdvise(DWORD,HSZ,HSZ);
UINT __attribute__((__stdcall__)) DdeQueryConvInfo(HCONV,DWORD,PCONVINFO);
HCONV __attribute__((__stdcall__)) DdeQueryNextServer(HCONVLIST,HCONV);
DWORD __attribute__((__stdcall__)) DdeQueryStringA(DWORD,HSZ,LPSTR,DWORD,int);
DWORD __attribute__((__stdcall__)) DdeQueryStringW(DWORD,HSZ,LPWSTR,DWORD,int);
HCONV __attribute__((__stdcall__)) DdeReconnect(HCONV);
BOOL __attribute__((__stdcall__)) DdeSetUserHandle(HCONV,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) DdeUnaccessData(HDDEDATA);
BOOL __attribute__((__stdcall__)) DdeUninitialize(DWORD);
# 59 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\dlgs.h" 1 3



       
# 5 "c:\\mingw\\include\\dlgs.h" 3
# 176 "c:\\mingw\\include\\dlgs.h" 3
typedef struct tagCRGB {
 BYTE bRed;
 BYTE bGreen;
 BYTE bBlue;
 BYTE bExtra;
} CRGB;
# 60 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\imm.h" 1 3



       
# 5 "c:\\mingw\\include\\imm.h" 3
# 249 "c:\\mingw\\include\\imm.h" 3
typedef DWORD HIMC;
typedef DWORD HIMCC;
typedef HKL *LPHKL;
typedef struct tagCOMPOSITIONFORM {
 DWORD dwStyle;
 POINT ptCurrentPos;
 RECT rcArea;
} COMPOSITIONFORM,*PCOMPOSITIONFORM,*LPCOMPOSITIONFORM;
typedef struct tagCANDIDATEFORM {
 DWORD dwIndex;
 DWORD dwStyle;
 POINT ptCurrentPos;
 RECT rcArea;
} CANDIDATEFORM,*PCANDIDATEFORM,*LPCANDIDATEFORM;
typedef struct tagCANDIDATELIST {
 DWORD dwSize;
 DWORD dwStyle;
 DWORD dwCount;
 DWORD dwSelection;
 DWORD dwPageStart;
 DWORD dwPageSize;
 DWORD dwOffset[1];
} CANDIDATELIST,*PCANDIDATELIST,*LPCANDIDATELIST;
typedef struct tagIMECHARPOSITION {
  DWORD dwSize;
  DWORD dwCharPos;
  POINT pt;
  UINT cLineHeight;
  RECT rcDocument;
} IMECHARPOSITION, *PIMECHARPOSITION;
typedef struct tagRECONVERTSTRING {
  DWORD dwSize;
  DWORD dwVersion;
  DWORD dwStrLen;
  DWORD dwStrOffset;
  DWORD dwCompStrLen;
  DWORD dwCompStrOffset;
  DWORD dwTargetStrLen;
  DWORD dwTargetStrOffset;
} RECONVERTSTRING, *PRECONVERTSTRING;
typedef struct tagREGISTERWORDA {
 LPSTR lpReading;
 LPSTR lpWord;
} REGISTERWORDA,*PREGISTERWORDA,*LPREGISTERWORDA;
typedef struct tagREGISTERWORDW {
 LPWSTR lpReading;
 LPWSTR lpWord;
} REGISTERWORDW,*PREGISTERWORDW,*LPREGISTERWORDW;
typedef struct tagSTYLEBUFA {
 DWORD dwStyle;
 CHAR szDescription[32];
} STYLEBUFA,*PSTYLEBUFA,*LPSTYLEBUFA;
typedef struct tagSTYLEBUFW {
 DWORD dwStyle;
 WCHAR szDescription[32];
} STYLEBUFW,*PSTYLEBUFW,*LPSTYLEBUFW;
typedef struct tagIMEMENUITEMINFOA {
 UINT cbSize;
 UINT fType;
 UINT fState;
 UINT wID;
 HBITMAP hbmpChecked;
 HBITMAP hbmpUnchecked;
 DWORD dwItemData;
 CHAR szString[80];
 HBITMAP hbmpItem;
} IMEMENUITEMINFOA,*PIMEMENUITEMINFOA,*LPIMEMENUITEMINFOA;
typedef struct tagIMEMENUITEMINFOW {
 UINT cbSize;
 UINT fType;
 UINT fState;
 UINT wID;
 HBITMAP hbmpChecked;
 HBITMAP hbmpUnchecked;
 DWORD dwItemData;
 WCHAR szString[80];
 HBITMAP hbmpItem;
} IMEMENUITEMINFOW,*PIMEMENUITEMINFOW,*LPIMEMENUITEMINFOW;
typedef int (__attribute__((__stdcall__)) *REGISTERWORDENUMPROCA)(LPCSTR, DWORD, LPCSTR, LPVOID);
typedef int (__attribute__((__stdcall__)) *REGISTERWORDENUMPROCW)(LPCWSTR, DWORD, LPCWSTR, LPVOID);







typedef REGISTERWORDA REGISTERWORD,*PREGISTERWORD,*LPREGISTERWORD;
typedef STYLEBUFA STYLEBUF,*PSTYLEBUF,*LPSTYLEBUF;
typedef IMEMENUITEMINFOA IMEMENUITEMINFO,*PIMEMENUITEMINFO,*LPIMEMENUITEMINFO;

HKL __attribute__((__stdcall__)) ImmInstallIMEA(LPCSTR,LPCSTR);
HKL __attribute__((__stdcall__)) ImmInstallIMEW(LPCWSTR,LPCWSTR);
HWND __attribute__((__stdcall__)) ImmGetDefaultIMEWnd(HWND);
UINT __attribute__((__stdcall__)) ImmGetDescriptionA(HKL,LPSTR,UINT);
UINT __attribute__((__stdcall__)) ImmGetDescriptionW(HKL,LPWSTR,UINT);
UINT __attribute__((__stdcall__)) ImmGetIMEFileNameA(HKL,LPSTR,UINT);
UINT __attribute__((__stdcall__)) ImmGetIMEFileNameW(HKL,LPWSTR,UINT);
DWORD __attribute__((__stdcall__)) ImmGetProperty(HKL,DWORD);
BOOL __attribute__((__stdcall__)) ImmIsIME(HKL);
BOOL __attribute__((__stdcall__)) ImmSimulateHotKey(HWND,DWORD);
HIMC __attribute__((__stdcall__)) ImmCreateContext(void);
BOOL __attribute__((__stdcall__)) ImmDestroyContext(HIMC);
HIMC __attribute__((__stdcall__)) ImmGetContext(HWND);
BOOL __attribute__((__stdcall__)) ImmReleaseContext(HWND,HIMC);
HIMC __attribute__((__stdcall__)) ImmAssociateContext(HWND,HIMC);
LONG __attribute__((__stdcall__)) ImmGetCompositionStringA(HIMC,DWORD,PVOID,DWORD);
LONG __attribute__((__stdcall__)) ImmGetCompositionStringW(HIMC,DWORD,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) ImmSetCompositionStringA(HIMC,DWORD,PCVOID,DWORD,PCVOID,DWORD);
BOOL __attribute__((__stdcall__)) ImmSetCompositionStringW(HIMC,DWORD,PCVOID,DWORD,PCVOID,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetCandidateListCountA(HIMC,PDWORD);
DWORD __attribute__((__stdcall__)) ImmGetCandidateListCountW(HIMC,PDWORD);
DWORD __attribute__((__stdcall__)) ImmGetCandidateListA(HIMC,DWORD,PCANDIDATELIST,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetCandidateListW(HIMC,DWORD,PCANDIDATELIST,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetGuideLineA(HIMC,DWORD,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetGuideLineW(HIMC,DWORD,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) ImmGetConversionStatus(HIMC,LPDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ImmSetConversionStatus(HIMC,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) ImmGetOpenStatus(HIMC);
BOOL __attribute__((__stdcall__)) ImmSetOpenStatus(HIMC,BOOL);

BOOL __attribute__((__stdcall__)) ImmGetCompositionFontA(HIMC,LPLOGFONTA);
BOOL __attribute__((__stdcall__)) ImmGetCompositionFontW(HIMC,LPLOGFONTW);
BOOL __attribute__((__stdcall__)) ImmSetCompositionFontA(HIMC,LPLOGFONTA);
BOOL __attribute__((__stdcall__)) ImmSetCompositionFontW(HIMC,LPLOGFONTW);

BOOL __attribute__((__stdcall__)) ImmConfigureIMEA(HKL,HWND,DWORD,PVOID);
BOOL __attribute__((__stdcall__)) ImmConfigureIMEW(HKL,HWND,DWORD,PVOID);
LRESULT __attribute__((__stdcall__)) ImmEscapeA(HKL,HIMC,UINT,PVOID);
LRESULT __attribute__((__stdcall__)) ImmEscapeW(HKL,HIMC,UINT,PVOID);
DWORD __attribute__((__stdcall__)) ImmGetConversionListA(HKL,HIMC,LPCSTR,PCANDIDATELIST,DWORD,UINT);
DWORD __attribute__((__stdcall__)) ImmGetConversionListW(HKL,HIMC,LPCWSTR,PCANDIDATELIST,DWORD,UINT);
BOOL __attribute__((__stdcall__)) ImmNotifyIME(HIMC,DWORD,DWORD,DWORD);
BOOL __attribute__((__stdcall__)) ImmGetStatusWindowPos(HIMC,LPPOINT);
BOOL __attribute__((__stdcall__)) ImmSetStatusWindowPos(HIMC,LPPOINT);
BOOL __attribute__((__stdcall__)) ImmGetCompositionWindow(HIMC,PCOMPOSITIONFORM);
BOOL __attribute__((__stdcall__)) ImmSetCompositionWindow(HIMC,PCOMPOSITIONFORM);
BOOL __attribute__((__stdcall__)) ImmGetCandidateWindow(HIMC,DWORD,PCANDIDATEFORM);
BOOL __attribute__((__stdcall__)) ImmSetCandidateWindow(HIMC,PCANDIDATEFORM);
BOOL __attribute__((__stdcall__)) ImmIsUIMessageA(HWND,UINT,WPARAM,LPARAM);
BOOL __attribute__((__stdcall__)) ImmIsUIMessageW(HWND,UINT,WPARAM,LPARAM);
UINT __attribute__((__stdcall__)) ImmGetVirtualKey(HWND);
BOOL __attribute__((__stdcall__)) ImmRegisterWordA(HKL,LPCSTR,DWORD,LPCSTR);
BOOL __attribute__((__stdcall__)) ImmRegisterWordW(HKL,LPCWSTR,DWORD,LPCWSTR);
BOOL __attribute__((__stdcall__)) ImmUnregisterWordA(HKL,LPCSTR,DWORD,LPCSTR);
BOOL __attribute__((__stdcall__)) ImmUnregisterWordW(HKL,LPCWSTR,DWORD,LPCWSTR);
UINT __attribute__((__stdcall__)) ImmGetRegisterWordStyleA(HKL,UINT,PSTYLEBUFA);
UINT __attribute__((__stdcall__)) ImmGetRegisterWordStyleW(HKL,UINT,PSTYLEBUFW);
UINT __attribute__((__stdcall__)) ImmEnumRegisterWordA(HKL,REGISTERWORDENUMPROCA,LPCSTR,DWORD,LPCSTR,PVOID);
UINT __attribute__((__stdcall__)) ImmEnumRegisterWordW(HKL,REGISTERWORDENUMPROCW,LPCWSTR,DWORD,LPCWSTR,PVOID);
BOOL __attribute__((__stdcall__)) EnableEUDC(BOOL);
BOOL __attribute__((__stdcall__)) ImmDisableIME(DWORD);
DWORD __attribute__((__stdcall__)) ImmGetImeMenuItemsA(HIMC,DWORD,DWORD,LPIMEMENUITEMINFOA,LPIMEMENUITEMINFOA,DWORD);
DWORD __attribute__((__stdcall__)) ImmGetImeMenuItemsW(HIMC,DWORD,DWORD,LPIMEMENUITEMINFOW,LPIMEMENUITEMINFOW,DWORD);
# 61 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\lzexpand.h" 1 3



       
# 5 "c:\\mingw\\include\\lzexpand.h" 3
# 18 "c:\\mingw\\include\\lzexpand.h" 3
LONG __attribute__((__stdcall__)) CopyLZFile(INT,INT);
INT __attribute__((__stdcall__)) GetExpandedNameA(LPSTR,LPSTR);
INT __attribute__((__stdcall__)) GetExpandedNameW(LPWSTR,LPWSTR);
void __attribute__((__stdcall__)) LZClose(INT);
LONG __attribute__((__stdcall__)) LZCopy(INT,INT);
void __attribute__((__stdcall__)) LZDone(void);
INT __attribute__((__stdcall__)) LZInit(INT);
INT __attribute__((__stdcall__)) LZOpenFileA(LPSTR,LPOFSTRUCT,WORD);
INT __attribute__((__stdcall__)) LZOpenFileW(LPWSTR,LPOFSTRUCT,WORD);
INT __attribute__((__stdcall__)) LZRead(INT,LPSTR,INT);
LONG __attribute__((__stdcall__)) LZSeek(INT,LONG,INT);
INT __attribute__((__stdcall__)) LZStart(void);
# 62 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\mmsystem.h" 1 3




       
# 6 "c:\\mingw\\include\\mmsystem.h" 3

#pragma pack(push,1)
# 905 "c:\\mingw\\include\\mmsystem.h" 3
typedef DWORD MCIERROR;
typedef UINT MCIDEVICEID;
typedef UINT(__attribute__((__stdcall__)) *YIELDPROC)(MCIDEVICEID,DWORD);
typedef UINT MMVERSION;
typedef UINT MMRESULT;
typedef struct mmtime_tag {
 UINT wType;
 union {
  DWORD ms;
  DWORD sample;
  DWORD cb;
  DWORD ticks;
  struct {
   BYTE hour;
   BYTE min;
   BYTE sec;
   BYTE frame;
   BYTE fps;
   BYTE dummy;
   BYTE pad[2];
  } smpte;
  struct {
   DWORD songptrpos;
  } midi;
 } u;
} MMTIME,*PMMTIME,*LPMMTIME;
typedef struct HDRVR__{int i;}*HDRVR;
typedef struct tagDRVCONFIGINFO {
 DWORD dwDCISize;
 LPCWSTR lpszDCISectionName;
 LPCWSTR lpszDCIAliasName;
} DRVCONFIGINFO,*PDRVCONFIGINFO,*LPDRVCONFIGINFO;
typedef struct DRVCONFIGINFOEX {
 DWORD dwDCISize;
 LPCWSTR lpszDCISectionName;
 LPCWSTR lpszDCIAliasName;
 DWORD dnDevNode;
} DRVCONFIGINFOEX,*PDRVCONFIGINFOEX,*LPDRVCONFIGINFOEX;
typedef LRESULT(__attribute__((__stdcall__))* DRIVERPROC)(DWORD,HDRVR,UINT,LPARAM,LPARAM);
typedef void (__attribute__((__stdcall__)) DRVCALLBACK)(HDRVR,UINT,DWORD,DWORD,DWORD);
typedef DRVCALLBACK *LPDRVCALLBACK;
typedef DRVCALLBACK *PDRVCALLBACK;
typedef struct HWAVE__{int i;}*HWAVE;
typedef struct HWAVEIN__{int i;}*HWAVEIN;
typedef struct HWAVEOUT__{int i;}*HWAVEOUT;
typedef HWAVEIN *LPHWAVEIN;
typedef HWAVEOUT *LPHWAVEOUT;
typedef DRVCALLBACK WAVECALLBACK;
typedef WAVECALLBACK *LPWAVECALLBACK;
typedef struct wavehdr_tag {
 LPSTR lpData;
 DWORD dwBufferLength;
 DWORD dwBytesRecorded;
 DWORD dwUser;
 DWORD dwFlags;
 DWORD dwLoops;
 struct wavehdr_tag *lpNext;
 DWORD reserved;
} WAVEHDR,*PWAVEHDR,*LPWAVEHDR;
typedef struct tagWAVEOUTCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 DWORD dwFormats;
 WORD wChannels;
 WORD wReserved1;
 DWORD dwSupport;
} WAVEOUTCAPSA,*PWAVEOUTCAPSA,*LPWAVEOUTCAPSA;
typedef struct tagWAVEOUTCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 DWORD dwFormats;
 WORD wChannels;
 WORD wReserved1;
 DWORD dwSupport;
} WAVEOUTCAPSW,*PWAVEOUTCAPSW,*LPWAVEOUTCAPSW;
typedef struct tagWAVEINCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 DWORD dwFormats;
 WORD wChannels;
 WORD wReserved1;
} WAVEINCAPSA,*PWAVEINCAPSA,*LPWAVEINCAPSA;
typedef struct tagWAVEINCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 DWORD dwFormats;
 WORD wChannels;
 WORD wReserved1;
} WAVEINCAPSW,*PWAVEINCAPSW,*LPWAVEINCAPSW;
typedef struct waveformat_tag {
 WORD wFormatTag;
 WORD nChannels;
 DWORD nSamplesPerSec;
 DWORD nAvgBytesPerSec;
 WORD nBlockAlign;
} WAVEFORMAT,*PWAVEFORMAT,*LPWAVEFORMAT;
typedef struct pcmwaveformat_tag {
 WAVEFORMAT wf;
 WORD wBitsPerSample;
} PCMWAVEFORMAT, *PPCMWAVEFORMAT,*LPPCMWAVEFORMAT;



typedef struct tWAVEFORMATEX {
 WORD wFormatTag;
 WORD nChannels;
 DWORD nSamplesPerSec;
 DWORD nAvgBytesPerSec;
 WORD nBlockAlign;
 WORD wBitsPerSample;
 WORD cbSize;
} WAVEFORMATEX,*PWAVEFORMATEX,*LPWAVEFORMATEX;
typedef const WAVEFORMATEX *LPCWAVEFORMATEX;

typedef struct HMIDI__{int i;}*HMIDI;
typedef struct HMIDIIN__{int i;}*HMIDIIN;
typedef struct HMIDIOUT__{int i;}*HMIDIOUT;
typedef struct HMIDISTRM__{int i;}*HMIDISTRM;
typedef HMIDI *LPHMIDI;
typedef HMIDIIN *LPHMIDIIN;
typedef HMIDIOUT *LPHMIDIOUT;
typedef HMIDISTRM *LPHMIDISTRM;
typedef DRVCALLBACK MIDICALLBACK;
typedef MIDICALLBACK *LPMIDICALLBACK;
typedef WORD PATCHARRAY[128];
typedef WORD *LPPATCHARRAY;
typedef WORD KEYARRAY[128];
typedef WORD *LPKEYARRAY;
typedef struct tagMIDIOUTCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 WORD wTechnology;
 WORD wVoices;
 WORD wNotes;
 WORD wChannelMask;
 DWORD dwSupport;
} MIDIOUTCAPSA,*PMIDIOUTCAPSA,*LPMIDIOUTCAPSA;
typedef struct tagMIDIOUTCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 WORD wTechnology;
 WORD wVoices;
 WORD wNotes;
 WORD wChannelMask;
 DWORD dwSupport;
} MIDIOUTCAPSW,*PMIDIOUTCAPSW,*LPMIDIOUTCAPSW;
typedef struct tagMIDIINCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 DWORD dwSupport;
} MIDIINCAPSA,*PMIDIINCAPSA,*LPMIDIINCAPSA;
typedef struct tagMIDIINCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 DWORD dwSupport;
} MIDIINCAPSW,*PMIDIINCAPSW,*NPMIDIINCAPSW,*LPMIDIINCAPSW;
typedef struct midihdr_tag {
 LPSTR lpData;
 DWORD dwBufferLength;
 DWORD dwBytesRecorded;
 DWORD dwUser;
 DWORD dwFlags;
 struct midihdr_tag *lpNext;
 DWORD reserved;
 DWORD dwOffset;
 DWORD dwReserved[8];
} MIDIHDR,*PMIDIHDR,*LPMIDIHDR;
typedef struct midievent_tag {
 DWORD dwDeltaTime;
 DWORD dwStreamID;
 DWORD dwEvent;
 DWORD dwParms[1];
} MIDIEVENT;
typedef struct midistrmbuffver_tag {
 DWORD dwVersion;
 DWORD dwMid;
 DWORD dwOEMVersion;
} MIDISTRMBUFFVER;
typedef struct midiproptimediv_tag {
 DWORD cbStruct;
 DWORD dwTimeDiv;
} MIDIPROPTIMEDIV,*LPMIDIPROPTIMEDIV;
typedef struct midiproptempo_tag {
 DWORD cbStruct;
 DWORD dwTempo;
} MIDIPROPTEMPO,*LPMIDIPROPTEMPO;
typedef struct tagAUXCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 WORD wTechnology;
 WORD wReserved1;
 DWORD dwSupport;
} AUXCAPSA,*PAUXCAPSA,*LPAUXCAPSA;
typedef struct tagAUXCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 WORD wTechnology;
 WORD wReserved1;
 DWORD dwSupport;
} AUXCAPSW,*PAUXCAPSW,*LPAUXCAPSW;
typedef struct HMIXEROBJ__{int i;}*HMIXEROBJ;
typedef HMIXEROBJ *LPHMIXEROBJ;
typedef struct HMIXER__{int i;}*HMIXER;
typedef HMIXER *LPHMIXER;
typedef struct tagMIXERCAPSA {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 CHAR szPname[32];
 DWORD fdwSupport;
 DWORD cDestinations;
} MIXERCAPSA,*PMIXERCAPSA,*LPMIXERCAPSA;
typedef struct tagMIXERCAPSW {
 WORD wMid;
 WORD wPid;
 MMVERSION vDriverVersion;
 WCHAR szPname[32];
 DWORD fdwSupport;
 DWORD cDestinations;
} MIXERCAPSW,*PMIXERCAPSW,*LPMIXERCAPSW;
typedef struct tagMIXERLINEA {
 DWORD cbStruct;
 DWORD dwDestination;
 DWORD dwSource;
 DWORD dwLineID;
 DWORD fdwLine;
 DWORD dwUser;
 DWORD dwComponentType;
 DWORD cChannels;
 DWORD cConnections;
 DWORD cControls;
 CHAR szShortName[16];
 CHAR szName[64];
 struct {
  DWORD dwType;
  DWORD dwDeviceID;
  WORD wMid;
  WORD wPid;
  MMVERSION vDriverVersion;
  CHAR szPname[32];
 } Target;
} MIXERLINEA,*PMIXERLINEA,*LPMIXERLINEA;
typedef struct tagMIXERLINEW {
 DWORD cbStruct;
 DWORD dwDestination;
 DWORD dwSource;
 DWORD dwLineID;
 DWORD fdwLine;
 DWORD dwUser;
 DWORD dwComponentType;
 DWORD cChannels;
 DWORD cConnections;
 DWORD cControls;
 WCHAR szShortName[16];
 WCHAR szName[64];
 struct {
  DWORD dwType;
  DWORD dwDeviceID;
  WORD wMid;
  WORD wPid;
  MMVERSION vDriverVersion;
  WCHAR szPname[32];
 } Target;
} MIXERLINEW,*PMIXERLINEW,*LPMIXERLINEW;
typedef struct tagMIXERCONTROLA {
 DWORD cbStruct;
 DWORD dwControlID;
 DWORD dwControlType;
 DWORD fdwControl;
 DWORD cMultipleItems;
 CHAR szShortName[16];
 CHAR szName[64];
 union {
  __extension__ struct {
   LONG lMinimum;
   LONG lMaximum;
  };
  __extension__ struct {
   DWORD dwMinimum;
   DWORD dwMaximum;
  };
  DWORD dwReserved[6];
 } Bounds;
 union {
  DWORD cSteps;
  DWORD cbCustomData;
  DWORD dwReserved[6];
 } Metrics;
} MIXERCONTROLA,*PMIXERCONTROLA,*LPMIXERCONTROLA;
typedef struct tagMIXERCONTROLW {
 DWORD cbStruct;
 DWORD dwControlID;
 DWORD dwControlType;
 DWORD fdwControl;
 DWORD cMultipleItems;
 WCHAR szShortName[16];
 WCHAR szName[64];
 union {
  __extension__ struct {
   LONG lMinimum;
   LONG lMaximum;
  };
  __extension__ struct {
   DWORD dwMinimum;
   DWORD dwMaximum;
  };
  DWORD dwReserved[6];
 } Bounds;
 union {
  DWORD cSteps;
  DWORD cbCustomData;
  DWORD dwReserved[6];
 } Metrics;
} MIXERCONTROLW,*PMIXERCONTROLW,*LPMIXERCONTROLW;
typedef struct tagMIXERLINECONTROLSA {
 DWORD cbStruct;
 DWORD dwLineID;
 __extension__ union {
  DWORD dwControlID;
  DWORD dwControlType;
 } ;
 DWORD cControls;
 DWORD cbmxctrl;
 LPMIXERCONTROLA pamxctrl;
} MIXERLINECONTROLSA,*PMIXERLINECONTROLSA,*LPMIXERLINECONTROLSA;
typedef struct tagMIXERLINECONTROLSW {
 DWORD cbStruct;
 DWORD dwLineID;
 __extension__ union {
  DWORD dwControlID;
  DWORD dwControlType;
 } ;
 DWORD cControls;
 DWORD cbmxctrl;
 LPMIXERCONTROLW pamxctrl;
} MIXERLINECONTROLSW,*PMIXERLINECONTROLSW,*LPMIXERLINECONTROLSW;
typedef struct tMIXERCONTROLDETAILS {
 DWORD cbStruct;
 DWORD dwControlID;
 DWORD cChannels;
 __extension__ union {
  HWND hwndOwner;
  DWORD cMultipleItems;
 } ;
 DWORD cbDetails;
 PVOID paDetails;
} MIXERCONTROLDETAILS,*PMIXERCONTROLDETAILS,*LPMIXERCONTROLDETAILS;
typedef struct tagMIXERCONTROLDETAILS_LISTTEXTA {
 DWORD dwParam1;
 DWORD dwParam2;
 CHAR szName[64];
} MIXERCONTROLDETAILS_LISTTEXTA,*PMIXERCONTROLDETAILS_LISTTEXTA,*LPMIXERCONTROLDETAILS_LISTTEXTA;
typedef struct tagMIXERCONTROLDETAILS_LISTTEXTW {
 DWORD dwParam1;
 DWORD dwParam2;
 WCHAR szName[64];
} MIXERCONTROLDETAILS_LISTTEXTW,*PMIXERCONTROLDETAILS_LISTTEXTW,*LPMIXERCONTROLDETAILS_LISTTEXTW;
typedef struct tMIXERCONTROLDETAILS_BOOLEAN {
 LONG fValue;
} MIXERCONTROLDETAILS_BOOLEAN,*PMIXERCONTROLDETAILS_BOOLEAN,*LPMIXERCONTROLDETAILS_BOOLEAN;
typedef struct tMIXERCONTROLDETAILS_SIGNED {
 LONG lValue;
} MIXERCONTROLDETAILS_SIGNED,*PMIXERCONTROLDETAILS_SIGNED,*LPMIXERCONTROLDETAILS_SIGNED;
typedef struct tMIXERCONTROLDETAILS_UNSIGNED {
 DWORD dwValue;
} MIXERCONTROLDETAILS_UNSIGNED,*PMIXERCONTROLDETAILS_UNSIGNED,*LPMIXERCONTROLDETAILS_UNSIGNED;
typedef void(__attribute__((__stdcall__)) TIMECALLBACK)(UINT,UINT,DWORD,DWORD,DWORD);
typedef TIMECALLBACK *LPTIMECALLBACK;
typedef struct timecaps_tag {
 UINT wPeriodMin;
 UINT wPeriodMax;
} TIMECAPS,*PTIMECAPS,*LPTIMECAPS;
typedef struct tagJOYCAPSA {
 WORD wMid;
 WORD wPid;
 CHAR szPname[32];
 UINT wXmin;
 UINT wXmax;
 UINT wYmin;
 UINT wYmax;
 UINT wZmin;
 UINT wZmax;
 UINT wNumButtons;
 UINT wPeriodMin;
 UINT wPeriodMax;
 UINT wRmin;
 UINT wRmax;
 UINT wUmin;
 UINT wUmax;
 UINT wVmin;
 UINT wVmax;
 UINT wCaps;
 UINT wMaxAxes;
 UINT wNumAxes;
 UINT wMaxButtons;
 CHAR szRegKey[32];
 CHAR szOEMVxD[260];
} JOYCAPSA,*PJOYCAPSA,*LPJOYCAPSA;
typedef struct tagJOYCAPSW {
 WORD wMid;
 WORD wPid;
 WCHAR szPname[32];
 UINT wXmin;
 UINT wXmax;
 UINT wYmin;
 UINT wYmax;
 UINT wZmin;
 UINT wZmax;
 UINT wNumButtons;
 UINT wPeriodMin;
 UINT wPeriodMax;
 UINT wRmin;
 UINT wRmax;
 UINT wUmin;
 UINT wUmax;
 UINT wVmin;
 UINT wVmax;
 UINT wCaps;
 UINT wMaxAxes;
 UINT wNumAxes;
 UINT wMaxButtons;
 WCHAR szRegKey[32];
 WCHAR szOEMVxD[260];
} JOYCAPSW,*PJOYCAPSW,*LPJOYCAPSW;
typedef struct joyinfo_tag {
 UINT wXpos;
 UINT wYpos;
 UINT wZpos;
 UINT wButtons;
} JOYINFO,*PJOYINFO,*LPJOYINFO;
typedef struct joyinfoex_tag {
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwXpos;
 DWORD dwYpos;
 DWORD dwZpos;
 DWORD dwRpos;
 DWORD dwUpos;
 DWORD dwVpos;
 DWORD dwButtons;
 DWORD dwButtonNumber;
 DWORD dwPOV;
 DWORD dwReserved1;
 DWORD dwReserved2;
} JOYINFOEX,*PJOYINFOEX,*LPJOYINFOEX;
typedef DWORD FOURCC;
typedef char *HPSTR;
typedef struct HMMIO__{int i;}*HMMIO;
typedef LRESULT (__attribute__((__stdcall__)) MMIOPROC)(LPSTR,UINT,LPARAM,LPARAM);
typedef MMIOPROC *LPMMIOPROC;
typedef struct _MMIOINFO {
 DWORD dwFlags;
 FOURCC fccIOProc;
 LPMMIOPROC pIOProc;
 UINT wErrorRet;
 HTASK htask;
 LONG cchBuffer;
 HPSTR pchBuffer;
 HPSTR pchNext;
 HPSTR pchEndRead;
 HPSTR pchEndWrite;
 LONG lBufOffset;
 LONG lDiskOffset;
 DWORD adwInfo[3];
 DWORD dwReserved1;
 DWORD dwReserved2;
 HMMIO hmmio;
} MMIOINFO,*PMMIOINFO,*LPMMIOINFO;
typedef const MMIOINFO *LPCMMIOINFO;
typedef struct _MMCKINFO {
 FOURCC ckid;
 DWORD cksize;
 FOURCC fccType;
 DWORD dwDataOffset;
 DWORD dwFlags;
} MMCKINFO,*PMMCKINFO,*LPMMCKINFO;
typedef const MMCKINFO *LPCMMCKINFO;
typedef struct tagMCI_GENERIC_PARMS {
 DWORD dwCallback;
} MCI_GENERIC_PARMS,*PMCI_GENERIC_PARMS,*LPMCI_GENERIC_PARMS;
typedef struct tagMCI_OPEN_PARMSA {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCSTR lpstrDeviceType;
 LPCSTR lpstrElementName;
 LPCSTR lpstrAlias;
} MCI_OPEN_PARMSA,*PMCI_OPEN_PARMSA,*LPMCI_OPEN_PARMSA;
typedef struct tagMCI_OPEN_PARMSW {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCWSTR lpstrDeviceType;
 LPCWSTR lpstrElementName;
 LPCWSTR lpstrAlias;
} MCI_OPEN_PARMSW,*PMCI_OPEN_PARMSW,*LPMCI_OPEN_PARMSW;
typedef struct tagMCI_PLAY_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
} MCI_PLAY_PARMS,*PMCI_PLAY_PARMS,*LPMCI_PLAY_PARMS;
typedef struct tagMCI_SEEK_PARMS {
 DWORD dwCallback;
 DWORD dwTo;
} MCI_SEEK_PARMS, *PMCI_SEEK_PARMS,*LPMCI_SEEK_PARMS;
typedef struct tagMCI_STATUS_PARMS {
 DWORD dwCallback;
 DWORD dwReturn;
 DWORD dwItem;
 DWORD dwTrack;
} MCI_STATUS_PARMS,*PMCI_STATUS_PARMS,*LPMCI_STATUS_PARMS;
typedef struct tagMCI_INFO_PARMSA {
 DWORD dwCallback;
 LPSTR lpstrReturn;
 DWORD dwRetSize;
} MCI_INFO_PARMSA,*LPMCI_INFO_PARMSA;
typedef struct tagMCI_INFO_PARMSW {
 DWORD dwCallback;
 LPWSTR lpstrReturn;
 DWORD dwRetSize;
} MCI_INFO_PARMSW,*LPMCI_INFO_PARMSW;
typedef struct tagMCI_GETDEVCAPS_PARMS {
 DWORD dwCallback;
 DWORD dwReturn;
 DWORD dwItem;
} MCI_GETDEVCAPS_PARMS,*PMCI_GETDEVCAPS_PARMS,*LPMCI_GETDEVCAPS_PARMS;
typedef struct tagMCI_SYSINFO_PARMSA {
 DWORD dwCallback;
 LPSTR lpstrReturn;
 DWORD dwRetSize;
 DWORD dwNumber;
 UINT wDeviceType;
} MCI_SYSINFO_PARMSA,*PMCI_SYSINFO_PARMSA,*LPMCI_SYSINFO_PARMSA;
typedef struct tagMCI_SYSINFO_PARMSW {
 DWORD dwCallback;
 LPWSTR lpstrReturn;
 DWORD dwRetSize;
 DWORD dwNumber;
 UINT wDeviceType;
} MCI_SYSINFO_PARMSW,*PMCI_SYSINFO_PARMSW,*LPMCI_SYSINFO_PARMSW;
typedef struct tagMCI_SET_PARMS {
 DWORD dwCallback;
 DWORD dwTimeFormat;
 DWORD dwAudio;
} MCI_SET_PARMS,*PMCI_SET_PARMS,*LPMCI_SET_PARMS;
typedef struct tagMCI_BREAK_PARMS {
 DWORD dwCallback;
 int nVirtKey;
 HWND hwndBreak;
} MCI_BREAK_PARMS,*PMCI_BREAK_PARMS,*LPMCI_BREAK_PARMS;
typedef struct tagMCI_SAVE_PARMSA {
 DWORD dwCallback;
 LPCSTR lpfilename;
} MCI_SAVE_PARMSA,*PMCI_SAVE_PARMSA,*LPMCI_SAVE_PARMSA;
typedef struct tagMCI_SAVE_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpfilename;
} MCI_SAVE_PARMSW,*PMCI_SAVE_PARMSW,*LPMCI_SAVE_PARMSW;
typedef struct tagMCI_LOAD_PARMSA {
 DWORD dwCallback;
 LPCSTR lpfilename;
} MCI_LOAD_PARMSA,*PMCI_LOAD_PARMSA,*LPMCI_LOAD_PARMSA;
typedef struct tagMCI_LOAD_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpfilename;
} MCI_LOAD_PARMSW,*PMCI_LOAD_PARMSW,*LPMCI_LOAD_PARMSW;
typedef struct tagMCI_RECORD_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
} MCI_RECORD_PARMS,*LPMCI_RECORD_PARMS;
typedef struct tagMCI_VD_PLAY_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
 DWORD dwSpeed;
} MCI_VD_PLAY_PARMS,*PMCI_VD_PLAY_PARMS,*LPMCI_VD_PLAY_PARMS;
typedef struct tagMCI_VD_STEP_PARMS {
 DWORD dwCallback;
 DWORD dwFrames;
} MCI_VD_STEP_PARMS,*PMCI_VD_STEP_PARMS,*LPMCI_VD_STEP_PARMS;
typedef struct tagMCI_VD_ESCAPE_PARMSA {
 DWORD dwCallback;
 LPCSTR lpstrCommand;
} MCI_VD_ESCAPE_PARMSA,*PMCI_VD_ESCAPE_PARMSA,*LPMCI_VD_ESCAPE_PARMSA;
typedef struct tagMCI_VD_ESCAPE_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpstrCommand;
} MCI_VD_ESCAPE_PARMSW,*PMCI_VD_ESCAPE_PARMSW,*LPMCI_VD_ESCAPE_PARMSW;
typedef struct tagMCI_WAVE_OPEN_PARMSA {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCSTR lpstrDeviceType;
 LPCSTR lpstrElementName;
 LPCSTR lpstrAlias;
 DWORD dwBufferSeconds;
} MCI_WAVE_OPEN_PARMSA,*PMCI_WAVE_OPEN_PARMSA,*LPMCI_WAVE_OPEN_PARMSA;
typedef struct tagMCI_WAVE_OPEN_PARMSW {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCWSTR lpstrDeviceType;
 LPCWSTR lpstrElementName;
 LPCWSTR lpstrAlias;
 DWORD dwBufferSeconds;
} MCI_WAVE_OPEN_PARMSW,*PMCI_WAVE_OPEN_PARMSW,*LPMCI_WAVE_OPEN_PARMSW;
typedef struct tagMCI_WAVE_DELETE_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
} MCI_WAVE_DELETE_PARMS, *PMCI_WAVE_DELETE_PARMS,*LPMCI_WAVE_DELETE_PARMS;
typedef struct tagMCI_WAVE_SET_PARMS {
 DWORD dwCallback;
 DWORD dwTimeFormat;
 DWORD dwAudio;
 UINT wInput;
 UINT wOutput;
 WORD wFormatTag;
 WORD wReserved2;
 WORD nChannels;
 WORD wReserved3;
 DWORD nSamplesPerSec;
 DWORD nAvgBytesPerSec;
 WORD nBlockAlign;
 WORD wReserved4;
 WORD wBitsPerSample;
 WORD wReserved5;
} MCI_WAVE_SET_PARMS,*PMCI_WAVE_SET_PARMS,*LPMCI_WAVE_SET_PARMS;

LRESULT __attribute__((__stdcall__)) CloseDriver(HDRVR,LONG,LONG);
HDRVR __attribute__((__stdcall__)) OpenDriver(LPCWSTR,LPCWSTR,LONG);
LRESULT __attribute__((__stdcall__)) SendDriverMessage(HDRVR,UINT,LONG,LONG);
HMODULE __attribute__((__stdcall__)) DrvGetModuleHandle(HDRVR);
HMODULE __attribute__((__stdcall__)) GetDriverModuleHandle(HDRVR);
LRESULT __attribute__((__stdcall__)) DefDriverProc(DWORD,HDRVR,UINT,LPARAM,LPARAM);
UINT __attribute__((__stdcall__)) mmsystemGetVersion(void);

BOOL __attribute__((__stdcall__)) sndPlaySoundA(LPCSTR,UINT);
BOOL __attribute__((__stdcall__)) sndPlaySoundW(LPCWSTR,UINT);
BOOL __attribute__((__stdcall__)) PlaySoundA(LPCSTR,HMODULE,DWORD);
BOOL __attribute__((__stdcall__)) PlaySoundW(LPCWSTR,HMODULE,DWORD);
UINT __attribute__((__stdcall__)) waveOutGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) waveOutGetDevCapsA(UINT,LPWAVEOUTCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutGetDevCapsW(UINT,LPWAVEOUTCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutGetVolume(HWAVEOUT,PDWORD);
MMRESULT __attribute__((__stdcall__)) waveOutSetVolume(HWAVEOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) waveOutGetErrorTextA(MMRESULT,LPSTR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutGetErrorTextW(MMRESULT,LPWSTR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutOpen(LPHWAVEOUT,UINT,LPCWAVEFORMATEX,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) waveOutClose(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutPrepareHeader(HWAVEOUT,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutUnprepareHeader(HWAVEOUT,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutWrite(HWAVEOUT,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutPause(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutRestart(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutReset(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutBreakLoop(HWAVEOUT);
MMRESULT __attribute__((__stdcall__)) waveOutGetPosition(HWAVEOUT,LPMMTIME,UINT);
MMRESULT __attribute__((__stdcall__)) waveOutGetPitch(HWAVEOUT,PDWORD);
MMRESULT __attribute__((__stdcall__)) waveOutSetPitch(HWAVEOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) waveOutGetPlaybackRate(HWAVEOUT,PDWORD);
MMRESULT __attribute__((__stdcall__)) waveOutSetPlaybackRate(HWAVEOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) waveOutGetID(HWAVEOUT,LPUINT);
MMRESULT __attribute__((__stdcall__)) waveOutMessage(HWAVEOUT,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) waveInGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) waveInGetDevCapsA(UINT,LPWAVEINCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) waveInGetDevCapsW(UINT,LPWAVEINCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) waveInGetErrorTextA(MMRESULT,LPSTR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInGetErrorTextW(MMRESULT,LPWSTR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInOpen(LPHWAVEIN,UINT,LPCWAVEFORMATEX,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) waveInClose(HWAVEIN);
MMRESULT __attribute__((__stdcall__)) waveInPrepareHeader(HWAVEIN,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInUnprepareHeader(HWAVEIN,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInAddBuffer(HWAVEIN,LPWAVEHDR,UINT);
MMRESULT __attribute__((__stdcall__)) waveInStart(HWAVEIN);
MMRESULT __attribute__((__stdcall__)) waveInStop(HWAVEIN);
MMRESULT __attribute__((__stdcall__)) waveInReset(HWAVEIN);
MMRESULT __attribute__((__stdcall__)) waveInGetPosition(HWAVEIN,LPMMTIME,UINT);
MMRESULT __attribute__((__stdcall__)) waveInGetID(HWAVEIN,LPUINT);
MMRESULT __attribute__((__stdcall__)) waveInMessage(HWAVEIN,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) midiOutGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) midiStreamOpen(LPHMIDISTRM,LPUINT,DWORD,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) midiStreamClose(HMIDISTRM);
MMRESULT __attribute__((__stdcall__)) midiStreamProperty(HMIDISTRM,LPBYTE,DWORD);
MMRESULT __attribute__((__stdcall__)) midiStreamPosition(HMIDISTRM,LPMMTIME,UINT);
MMRESULT __attribute__((__stdcall__)) midiStreamOut(HMIDISTRM,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiStreamPause(HMIDISTRM);
MMRESULT __attribute__((__stdcall__)) midiStreamRestart(HMIDISTRM);
MMRESULT __attribute__((__stdcall__)) midiStreamStop(HMIDISTRM);
MMRESULT __attribute__((__stdcall__)) midiConnect(HMIDI,HMIDIOUT,PVOID);
MMRESULT __attribute__((__stdcall__)) midiDisconnect(HMIDI,HMIDIOUT,PVOID);
MMRESULT __attribute__((__stdcall__)) midiOutGetDevCapsA(UINT,LPMIDIOUTCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutGetDevCapsW(UINT,LPMIDIOUTCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutGetVolume(HMIDIOUT,PDWORD);
MMRESULT __attribute__((__stdcall__)) midiOutSetVolume(HMIDIOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) midiOutGetErrorTextA(MMRESULT,LPSTR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutGetErrorTextW(MMRESULT,LPWSTR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutOpen(LPHMIDIOUT,UINT,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) midiOutClose(HMIDIOUT);
MMRESULT __attribute__((__stdcall__)) midiOutPrepareHeader(HMIDIOUT,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutUnprepareHeader(HMIDIOUT,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutShortMsg(HMIDIOUT,DWORD);
MMRESULT __attribute__((__stdcall__)) midiOutLongMsg(HMIDIOUT,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutReset(HMIDIOUT);
MMRESULT __attribute__((__stdcall__)) midiOutCachePatches(HMIDIOUT,UINT,LPWORD,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutCacheDrumPatches(HMIDIOUT,UINT,LPWORD,UINT);
MMRESULT __attribute__((__stdcall__)) midiOutGetID(HMIDIOUT,LPUINT);
MMRESULT __attribute__((__stdcall__)) midiOutMessage(HMIDIOUT,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) midiInGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) midiInGetDevCapsA(UINT,LPMIDIINCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) midiInGetDevCapsW(UINT,LPMIDIINCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) midiInGetErrorTextA(MMRESULT,LPSTR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInGetErrorTextW(MMRESULT,LPWSTR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInOpen(LPHMIDIIN,UINT,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) midiInClose(HMIDIIN);
MMRESULT __attribute__((__stdcall__)) midiInPrepareHeader(HMIDIIN,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInUnprepareHeader(HMIDIIN,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInAddBuffer(HMIDIIN,LPMIDIHDR,UINT);
MMRESULT __attribute__((__stdcall__)) midiInStart(HMIDIIN);
MMRESULT __attribute__((__stdcall__)) midiInStop(HMIDIIN);
MMRESULT __attribute__((__stdcall__)) midiInReset(HMIDIIN);
MMRESULT __attribute__((__stdcall__)) midiInGetID(HMIDIIN,LPUINT);
MMRESULT __attribute__((__stdcall__)) midiInMessage(HMIDIIN,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) auxGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) auxGetDevCapsA(UINT,LPAUXCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) auxGetDevCapsW(UINT,LPAUXCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) auxSetVolume(UINT,DWORD);
MMRESULT __attribute__((__stdcall__)) auxGetVolume(UINT,PDWORD);
MMRESULT __attribute__((__stdcall__)) auxOutMessage(UINT,UINT,DWORD,DWORD);
UINT __attribute__((__stdcall__)) mixerGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) mixerGetDevCapsA(UINT,LPMIXERCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) mixerGetDevCapsW(UINT,LPMIXERCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) mixerOpen(LPHMIXER,UINT,DWORD,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerClose(HMIXER);
DWORD __attribute__((__stdcall__)) mixerMessage(HMIXER,UINT,DWORD,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetLineInfoA(HMIXEROBJ,LPMIXERLINEA,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetLineInfoW(HMIXEROBJ,LPMIXERLINEW,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetID(HMIXEROBJ,PUINT,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetLineControlsA(HMIXEROBJ,LPMIXERLINECONTROLSA,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetLineControlsW(HMIXEROBJ,LPMIXERLINECONTROLSW,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetControlDetailsA(HMIXEROBJ,LPMIXERCONTROLDETAILS,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerGetControlDetailsW(HMIXEROBJ,LPMIXERCONTROLDETAILS,DWORD);
MMRESULT __attribute__((__stdcall__)) mixerSetControlDetails(HMIXEROBJ,LPMIXERCONTROLDETAILS,DWORD);
MMRESULT __attribute__((__stdcall__)) timeGetSystemTime(LPMMTIME,UINT);
DWORD __attribute__((__stdcall__)) timeGetTime(void);
MMRESULT __attribute__((__stdcall__)) timeSetEvent(UINT,UINT,LPTIMECALLBACK,DWORD,UINT);
MMRESULT __attribute__((__stdcall__)) timeKillEvent(UINT);
MMRESULT __attribute__((__stdcall__)) timeGetDevCaps(LPTIMECAPS,UINT);
MMRESULT __attribute__((__stdcall__)) timeBeginPeriod(UINT);
MMRESULT __attribute__((__stdcall__)) timeEndPeriod(UINT);
UINT __attribute__((__stdcall__)) joyGetNumDevs(void);
MMRESULT __attribute__((__stdcall__)) joyGetDevCapsA(UINT,LPJOYCAPSA,UINT);
MMRESULT __attribute__((__stdcall__)) joyGetDevCapsW(UINT,LPJOYCAPSW,UINT);
MMRESULT __attribute__((__stdcall__)) joyGetPos(UINT,LPJOYINFO);
MMRESULT __attribute__((__stdcall__)) joyGetPosEx(UINT,LPJOYINFOEX);
MMRESULT __attribute__((__stdcall__)) joyGetThreshold(UINT,LPUINT);
MMRESULT __attribute__((__stdcall__)) joyReleaseCapture(UINT);
MMRESULT __attribute__((__stdcall__)) joySetCapture(HWND,UINT,UINT,BOOL);
MMRESULT __attribute__((__stdcall__)) joySetThreshold(UINT,UINT);
FOURCC __attribute__((__stdcall__)) mmioStringToFOURCCA(LPCSTR,UINT);
FOURCC __attribute__((__stdcall__)) mmioStringToFOURCCW(LPCWSTR,UINT);
LPMMIOPROC __attribute__((__stdcall__)) mmioInstallIOProcA(FOURCC,LPMMIOPROC,DWORD);
LPMMIOPROC __attribute__((__stdcall__)) mmioInstallIOProcW(FOURCC,LPMMIOPROC,DWORD);
HMMIO __attribute__((__stdcall__)) mmioOpenA(LPSTR,LPMMIOINFO,DWORD);
HMMIO __attribute__((__stdcall__)) mmioOpenW(LPWSTR,LPMMIOINFO,DWORD);
MMRESULT __attribute__((__stdcall__)) mmioRenameA(LPCSTR,LPCSTR,LPCMMIOINFO,DWORD);
MMRESULT __attribute__((__stdcall__)) mmioRenameW(LPCWSTR,LPCWSTR,LPCMMIOINFO,DWORD);
MMRESULT __attribute__((__stdcall__)) mmioClose(HMMIO,UINT);
LONG __attribute__((__stdcall__)) mmioRead(HMMIO,HPSTR,LONG);
LONG __attribute__((__stdcall__)) mmioWrite(HMMIO,LPCSTR,LONG);
LONG __attribute__((__stdcall__)) mmioSeek(HMMIO,LONG,int);
MMRESULT __attribute__((__stdcall__)) mmioGetInfo(HMMIO,LPMMIOINFO,UINT);
MMRESULT __attribute__((__stdcall__)) mmioSetInfo(HMMIO,LPCMMIOINFO,UINT);
MMRESULT __attribute__((__stdcall__)) mmioSetBuffer(HMMIO,LPSTR,LONG,UINT);
MMRESULT __attribute__((__stdcall__)) mmioFlush(HMMIO,UINT);
MMRESULT __attribute__((__stdcall__)) mmioAdvance(HMMIO,LPMMIOINFO,UINT);
LRESULT __attribute__((__stdcall__)) mmioSendMessage(HMMIO,UINT,LPARAM,LPARAM);
MMRESULT __attribute__((__stdcall__)) mmioDescend(HMMIO,LPMMCKINFO,const MMCKINFO*,UINT);
MMRESULT __attribute__((__stdcall__)) mmioAscend(HMMIO,LPMMCKINFO,UINT);
MMRESULT __attribute__((__stdcall__)) mmioCreateChunk(HMMIO,LPMMCKINFO,UINT);
MCIERROR __attribute__((__stdcall__)) mciSendCommandA(MCIDEVICEID,UINT,DWORD,DWORD);
MCIERROR __attribute__((__stdcall__)) mciSendCommandW(MCIDEVICEID,UINT,DWORD,DWORD);
MCIERROR __attribute__((__stdcall__)) mciSendStringA(LPCSTR,LPSTR,UINT,HWND);
MCIERROR __attribute__((__stdcall__)) mciSendStringW(LPCWSTR,LPWSTR,UINT,HWND);
MCIDEVICEID __attribute__((__stdcall__)) mciGetDeviceIDA(LPCSTR);
MCIDEVICEID __attribute__((__stdcall__)) mciGetDeviceIDW(LPCWSTR);
MCIDEVICEID __attribute__((__stdcall__)) mciGetDeviceIDFromElementIDA(DWORD,LPCSTR);
MCIDEVICEID __attribute__((__stdcall__)) mciGetDeviceIDFromElementIDW(DWORD,LPCWSTR);
BOOL __attribute__((__stdcall__)) mciGetErrorStringA(MCIERROR,LPSTR,UINT);
BOOL __attribute__((__stdcall__)) mciGetErrorStringW(MCIERROR,LPWSTR,UINT);
BOOL __attribute__((__stdcall__)) mciSetYieldProc(MCIDEVICEID,YIELDPROC,DWORD);
HTASK __attribute__((__stdcall__)) mciGetCreatorTask(MCIDEVICEID);
YIELDPROC __attribute__((__stdcall__)) mciGetYieldProc(MCIDEVICEID,PDWORD);

typedef struct tagMCI_SEQ_SET_PARMS {
 DWORD dwCallback;
 DWORD dwTimeFormat;
 DWORD dwAudio;
 DWORD dwTempo;
 DWORD dwPort;
 DWORD dwSlave;
 DWORD dwMaster;
 DWORD dwOffset;
} MCI_SEQ_SET_PARMS,*PMCI_SEQ_SET_PARMS,*LPMCI_SEQ_SET_PARMS;
typedef struct tagMCI_ANIM_OPEN_PARMSA {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCSTR lpstrDeviceType;
 LPCSTR lpstrElementName;
 LPCSTR lpstrAlias;
 DWORD dwStyle;
 HWND hWndParent;
} MCI_ANIM_OPEN_PARMSA,*PMCI_ANIM_OPEN_PARMSA,*LPMCI_ANIM_OPEN_PARMSA;
typedef struct tagMCI_ANIM_OPEN_PARMSW {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCWSTR lpstrDeviceType;
 LPCWSTR lpstrElementName;
 LPCWSTR lpstrAlias;
 DWORD dwStyle;
 HWND hWndParent;
} MCI_ANIM_OPEN_PARMSW,*PMCI_ANIM_OPEN_PARMSW,*LPMCI_ANIM_OPEN_PARMSW;
typedef struct tagMCI_ANIM_PLAY_PARMS {
 DWORD dwCallback;
 DWORD dwFrom;
 DWORD dwTo;
 DWORD dwSpeed;
} MCI_ANIM_PLAY_PARMS,*PMCI_ANIM_PLAY_PARMS,*LPMCI_ANIM_PLAY_PARMS;
typedef struct tagMCI_ANIM_STEP_PARMS {
 DWORD dwCallback;
 DWORD dwFrames;
} MCI_ANIM_STEP_PARMS,*PMCI_ANIM_STEP_PARMS,*LPMCI_ANIM_STEP_PARMS;
typedef struct tagMCI_ANIM_WINDOW_PARMSA {
 DWORD dwCallback;
 HWND hWnd;
 UINT nCmdShow;
 LPCSTR lpstrText;
} MCI_ANIM_WINDOW_PARMSA,*PMCI_ANIM_WINDOW_PARMSA,*LPMCI_ANIM_WINDOW_PARMSA;
typedef struct tagMCI_ANIM_WINDOW_PARMSW {
 DWORD dwCallback;
 HWND hWnd;
 UINT nCmdShow;
 LPCWSTR lpstrText;
} MCI_ANIM_WINDOW_PARMSW,*PMCI_ANIM_WINDOW_PARMSW,*LPMCI_ANIM_WINDOW_PARMSW;
typedef struct tagMCI_ANIM_RECT_PARMS {
 DWORD dwCallback;




 RECT rc;

} MCI_ANIM_RECT_PARMS,*PMCI_ANIM_RECT_PARMS,*LPMCI_ANIM_RECT_PARMS;
typedef struct tagMCI_ANIM_UPDATE_PARMS {
 DWORD dwCallback;
 RECT rc;
 HDC hDC;
} MCI_ANIM_UPDATE_PARMS,*PMCI_ANIM_UPDATE_PARMS,*LPMCI_ANIM_UPDATE_PARMS;
typedef struct tagMCI_OVLY_OPEN_PARMSA {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCSTR lpstrDeviceType;
 LPCSTR lpstrElementName;
 LPCSTR lpstrAlias;
 DWORD dwStyle;
 HWND hWndParent;
} MCI_OVLY_OPEN_PARMSA,*PMCI_OVLY_OPEN_PARMSA,*LPMCI_OVLY_OPEN_PARMSA;
typedef struct tagMCI_OVLY_OPEN_PARMSW {
 DWORD dwCallback;
 MCIDEVICEID wDeviceID;
 LPCWSTR lpstrDeviceType;
 LPCWSTR lpstrElementName;
 LPCWSTR lpstrAlias;
 DWORD dwStyle;
 HWND hWndParent;
} MCI_OVLY_OPEN_PARMSW,*PMCI_OVLY_OPEN_PARMSW,*LPMCI_OVLY_OPEN_PARMSW;
typedef struct tagMCI_OVLY_WINDOW_PARMSA {
 DWORD dwCallback;
 HWND hWnd;
 UINT nCmdShow;
 LPCSTR lpstrText;
} MCI_OVLY_WINDOW_PARMSA,*PMCI_OVLY_WINDOW_PARMSA,*LPMCI_OVLY_WINDOW_PARMSA;
typedef struct tagMCI_OVLY_WINDOW_PARMSW {
 DWORD dwCallback;
 HWND hWnd;
 UINT nCmdShow;
 LPCWSTR lpstrText;
} MCI_OVLY_WINDOW_PARMSW,*PMCI_OVLY_WINDOW_PARMSW,*LPMCI_OVLY_WINDOW_PARMSW;
typedef struct tagMCI_OVLY_RECT_PARMS {
 DWORD dwCallback;




 RECT rc;

} MCI_OVLY_RECT_PARMS,*PMCI_OVLY_RECT_PARMS,*LPMCI_OVLY_RECT_PARMS;
typedef struct tagMCI_OVLY_SAVE_PARMSA {
 DWORD dwCallback;
 LPCSTR lpfilename;
 RECT rc;
} MCI_OVLY_SAVE_PARMSA,*PMCI_OVLY_SAVE_PARMSA,*LPMCI_OVLY_SAVE_PARMSA;
typedef struct tagMCI_OVLY_SAVE_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpfilename;
 RECT rc;
} MCI_OVLY_SAVE_PARMSW,*PMCI_OVLY_SAVE_PARMSW,*LPMCI_OVLY_SAVE_PARMSW;
typedef struct tagMCI_OVLY_LOAD_PARMSA {
 DWORD dwCallback;
 LPCSTR lpfilename;
 RECT rc;
} MCI_OVLY_LOAD_PARMSA,*PMCI_OVLY_LOAD_PARMSA,*LPMCI_OVLY_LOAD_PARMSA;
typedef struct tagMCI_OVLY_LOAD_PARMSW {
 DWORD dwCallback;
 LPCWSTR lpfilename;
 RECT rc;
} MCI_OVLY_LOAD_PARMSW,*PMCI_OVLY_LOAD_PARMSW,*LPMCI_OVLY_LOAD_PARMSW;
# 1890 "c:\\mingw\\include\\mmsystem.h" 3
typedef WAVEOUTCAPSA WAVEOUTCAPS,*PWAVEOUTCAPS,*LPWAVEOUTCAPS;
typedef WAVEINCAPSA WAVEINCAPS,*PWAVEINCAPS,*LPWAVEINCAPS;
typedef MIDIOUTCAPSA MIDIOUTCAPS,*PMIDIOUTCAPS,*LPMIDIOUTCAPS;
typedef MIDIINCAPSA MIDIINCAPS,*PMIDIINCAPS,*LPMIDIINCAPS;
typedef AUXCAPSA AUXCAPS,*PAUXCAPS,*LPAUXCAPS;
typedef MIXERCAPSA MIXERCAPS,*PMIXERCAPS,*LPMIXERCAPS;
typedef MIXERLINEA MIXERLINE,*PMIXERLINE,*LPMIXERLINE;
typedef MIXERCONTROLA MIXERCONTROL,*PMIXERCONTROL,*LPMIXERCONTROL;
typedef MIXERLINECONTROLSA MIXERLINECONTROLS,*PMIXERLINECONTROLS,*LPMIXERLINECONTROLS;
typedef MIXERCONTROLDETAILS_LISTTEXTA MIXERCONTROLDETAILS_LISTTEXT,*PMIXERCONTROLDETAILS_LISTTEXT,*LPMIXERCONTROLDETAILS_LISTTEXT;
typedef JOYCAPSA JOYCAPS,*PJOYCAPS,*LPJOYCAPS;
typedef MCI_OPEN_PARMSA MCI_OPEN_PARMS,*PMCI_OPEN_PARMS,*LPMCI_OPEN_PARMS;
typedef MCI_INFO_PARMSA MCI_INFO_PARMS,*LPMCI_INFO_PARMS;
typedef MCI_SYSINFO_PARMSA MCI_SYSINFO_PARMS,*PMCI_SYSINFO_PARMS,*LPMCI_SYSINFO_PARMS;
typedef MCI_SAVE_PARMSA MCI_SAVE_PARMS,*PMCI_SAVE_PARMS,*LPMCI_SAVE_PARMS;
typedef MCI_LOAD_PARMSA MCI_LOAD_PARMS,*PMCI_LOAD_PARMS,*LPMCI_LOAD_PARMS;
typedef MCI_VD_ESCAPE_PARMSA MCI_VD_ESCAPE_PARMS,*PMCI_VD_ESCAPE_PARMS,*LPMCI_VD_ESCAPE_PARMS;
typedef MCI_WAVE_OPEN_PARMSA MCI_WAVE_OPEN_PARMS,*PMCI_WAVE_OPEN_PARMS,*LPMCI_WAVE_OPEN_PARMS;
typedef MCI_ANIM_OPEN_PARMSA MCI_ANIM_OPEN_PARMS,*PMCI_ANIM_OPEN_PARMS,*LPMCI_ANIM_OPEN_PARMS;
typedef MCI_ANIM_WINDOW_PARMSA MCI_ANIM_WINDOW_PARMS,*PMCI_ANIM_WINDOW_PARMS,*LPMCI_ANIM_WINDOW_PARMS;
typedef MCI_OVLY_OPEN_PARMSA MCI_OVLY_OPEN_PARMS,*PMCI_OVLY_OPEN_PARMS,*LPMCI_OVLY_OPEN_PARMS;
typedef MCI_OVLY_WINDOW_PARMSA MCI_OVLY_WINDOW_PARMS,*PMCI_OVLY_WINDOW_PARMS,*LPMCI_OVLY_WINDOW_PARMS;
typedef MCI_OVLY_SAVE_PARMSA MCI_OVLY_SAVE_PARMS,*PMCI_OVLY_SAVE_PARMS,*LPMCI_OVLY_SAVE_PARMS;
# 1942 "c:\\mingw\\include\\mmsystem.h" 3
#pragma pack(pop)
# 63 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\nb30.h" 1 3



       
# 5 "c:\\mingw\\include\\nb30.h" 3
# 95 "c:\\mingw\\include\\nb30.h" 3
typedef struct _ACTION_HEADER {
 ULONG transport_id;
 USHORT action_code;
 USHORT reserved;
} ACTION_HEADER,*PACTION_HEADER;
typedef struct _ADAPTER_STATUS {
 UCHAR adapter_address[6];
 UCHAR rev_major;
 UCHAR reserved0;
 UCHAR adapter_type;
 UCHAR rev_minor;
 WORD duration;
 WORD frmr_recv;
 WORD frmr_xmit;
 WORD iframe_recv_err;
 WORD xmit_aborts;
 DWORD xmit_success;
 DWORD recv_success;
 WORD iframe_xmit_err;
 WORD recv_buff_unavail;
 WORD t1_timeouts;
 WORD ti_timeouts;
 DWORD reserved1;
 WORD free_ncbs;
 WORD max_cfg_ncbs;
 WORD max_ncbs;
 WORD xmit_buf_unavail;
 WORD max_dgram_size;
 WORD pending_sess;
 WORD max_cfg_sess;
 WORD max_sess;
 WORD max_sess_pkt_size;
 WORD name_count;
} ADAPTER_STATUS,*PADAPTER_STATUS;
typedef struct _FIND_NAME_BUFFER {
 UCHAR length;
 UCHAR access_control;
 UCHAR frame_control;
 UCHAR destination_addr[6];
 UCHAR source_addr[6];
 UCHAR routing_info[18];
} FIND_NAME_BUFFER,*PFIND_NAME_BUFFER;
typedef struct _FIND_NAME_HEADER {
 WORD node_count;
 UCHAR reserved;
 UCHAR unique_group;
} FIND_NAME_HEADER,*PFIND_NAME_HEADER;
typedef struct _LANA_ENUM {
 UCHAR length;
 UCHAR lana[254 +1];
} LANA_ENUM,*PLANA_ENUM;
typedef struct _NAME_BUFFER {
 UCHAR name[16];
 UCHAR name_num;
 UCHAR name_flags;
} NAME_BUFFER,*PNAME_BUFFER;
typedef struct _NCB {
 UCHAR ncb_command;
 UCHAR ncb_retcode;
 UCHAR ncb_lsn;
 UCHAR ncb_num;
 PUCHAR ncb_buffer;
 WORD ncb_length;
 UCHAR ncb_callname[16];
 UCHAR ncb_name[16];
 UCHAR ncb_rto;
 UCHAR ncb_sto;
 void (__attribute__((__stdcall__)) *ncb_post)(struct _NCB*);
 UCHAR ncb_lana_num;
 UCHAR ncb_cmd_cplt;
 UCHAR ncb_reserve[10];
 HANDLE ncb_event;
} NCB,*PNCB;
typedef struct _SESSION_BUFFER {
 UCHAR lsn;
 UCHAR state;
 UCHAR local_name[16];
 UCHAR remote_name[16];
 UCHAR rcvs_outstanding;
 UCHAR sends_outstanding;
} SESSION_BUFFER,*PSESSION_BUFFER;
typedef struct _SESSION_HEADER {
 UCHAR sess_name;
 UCHAR num_sess;
 UCHAR rcv_dg_outstanding;
 UCHAR rcv_any_outstanding;
} SESSION_HEADER,*PSESSION_HEADER;
UCHAR __attribute__((__stdcall__)) Netbios(PNCB);
# 64 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\rpc.h" 1 3

# 1 "c:\\mingw\\include\\windows.h" 1 3
# 3 "c:\\mingw\\include\\rpc.h" 2 3





       
# 9 "c:\\mingw\\include\\rpc.h" 3
# 37 "c:\\mingw\\include\\rpc.h" 3
typedef void *I_RPC_HANDLE;
typedef long RPC_STATUS;

# 1 "c:\\mingw\\include\\rpcdce.h" 1 3



       
# 5 "c:\\mingw\\include\\rpcdce.h" 3





# 1 "c:\\mingw\\include\\basetyps.h" 1 3



       
# 5 "c:\\mingw\\include\\basetyps.h" 3
# 125 "c:\\mingw\\include\\basetyps.h" 3
typedef GUID UUID;



typedef GUID IID;

typedef GUID CLSID;
typedef CLSID *LPCLSID;
typedef IID *LPIID;
typedef IID *REFIID;
typedef CLSID *REFCLSID;
typedef GUID FMTID;
typedef FMTID *REFFMTID;
typedef unsigned long error_status_t;

typedef unsigned long PROPID;
# 11 "c:\\mingw\\include\\rpcdce.h" 2 3
# 94 "c:\\mingw\\include\\rpcdce.h" 3
typedef I_RPC_HANDLE RPC_BINDING_HANDLE;
typedef RPC_BINDING_HANDLE handle_t;
typedef struct _RPC_BINDING_VECTOR {
 unsigned long Count;
 RPC_BINDING_HANDLE BindingH[1];
} RPC_BINDING_VECTOR;
typedef struct _UUID_VECTOR {
 unsigned long Count;
 UUID *Uuid[1];
} UUID_VECTOR;
typedef void *RPC_IF_HANDLE;
typedef struct _RPC_IF_ID {
 UUID Uuid;
 unsigned short VersMajor;
 unsigned short VersMinor;
} RPC_IF_ID;
typedef struct _RPC_POLICY {
 unsigned int Length ;
 unsigned long EndpointFlags ;
 unsigned long NICFlags ;
} RPC_POLICY,*PRPC_POLICY ;
typedef void __attribute__((__stdcall__)) RPC_OBJECT_INQ_FN(UUID*,UUID*,RPC_STATUS*);
typedef RPC_STATUS RPC_IF_CALLBACK_FN(RPC_IF_HANDLE,void*);
typedef struct {
 unsigned int Count;
 unsigned long Stats[1];
} RPC_STATS_VECTOR;
typedef struct {
 unsigned long Count;
 RPC_IF_ID*IfId[1];
} RPC_IF_ID_VECTOR;
typedef void *RPC_AUTH_IDENTITY_HANDLE;
typedef void *RPC_AUTHZ_HANDLE;
typedef struct _RPC_SECURITY_QOS {
 unsigned long Version;
 unsigned long Capabilities;
 unsigned long IdentityTracking;
 unsigned long ImpersonationType;
} RPC_SECURITY_QOS,*PRPC_SECURITY_QOS;
typedef struct _SEC_WINNT_AUTH_IDENTITY_W {
 unsigned short *User;
 unsigned long UserLength;
 unsigned short *Domain;
 unsigned long DomainLength;
 unsigned short *Password;
 unsigned long PasswordLength;
 unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W,*PSEC_WINNT_AUTH_IDENTITY_W;
typedef struct _SEC_WINNT_AUTH_IDENTITY_A {
 unsigned char *User;
 unsigned long UserLength;
 unsigned char *Domain;
 unsigned long DomainLength;
 unsigned char *Password;
 unsigned long PasswordLength;
 unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_A,*PSEC_WINNT_AUTH_IDENTITY_A;
typedef struct {
 unsigned char *UserName;
 unsigned char *ComputerName;
 unsigned short Privilege;
 unsigned long AuthFlags;
} RPC_CLIENT_INFORMATION1,* PRPC_CLIENT_INFORMATION1;
typedef I_RPC_HANDLE *RPC_EP_INQ_HANDLE;
typedef int(__attribute__((__stdcall__)) *RPC_MGMT_AUTHORIZATION_FN)(RPC_BINDING_HANDLE,unsigned long,RPC_STATUS*);


typedef struct _RPC_PROTSEQ_VECTORA {
 unsigned int Count;
 unsigned char*Protseq[1];
} RPC_PROTSEQ_VECTORA;
typedef struct _RPC_PROTSEQ_VECTORW {
 unsigned int Count;
 unsigned short*Protseq[1];
} RPC_PROTSEQ_VECTORW;
RPC_STATUS __attribute__((__stdcall__)) RpcBindingFromStringBindingA(unsigned char *,RPC_BINDING_HANDLE *);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingFromStringBindingW(unsigned short *,RPC_BINDING_HANDLE *);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingToStringBindingA(RPC_BINDING_HANDLE,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingToStringBindingW(RPC_BINDING_HANDLE,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcStringBindingComposeA(unsigned char *,unsigned char *,unsigned char *,unsigned char *,unsigned char *,unsigned char **);
RPC_STATUS __attribute__((__stdcall__)) RpcStringBindingComposeW(unsigned short *,unsigned short *,unsigned short *,unsigned short *,unsigned short *,unsigned short **);
RPC_STATUS __attribute__((__stdcall__)) RpcStringBindingParseA(unsigned char *,unsigned char **,unsigned char **,unsigned char **,unsigned char **,unsigned char **);
RPC_STATUS __attribute__((__stdcall__)) RpcStringBindingParseW(unsigned short *,unsigned short **,unsigned short **,unsigned short **,unsigned short **,unsigned short **);
RPC_STATUS __attribute__((__stdcall__)) RpcStringFreeA(unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcStringFreeW(unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNetworkIsProtseqValidA(unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNetworkIsProtseqValidW(unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNetworkInqProtseqsA(RPC_PROTSEQ_VECTORA**);
RPC_STATUS __attribute__((__stdcall__)) RpcNetworkInqProtseqsW(RPC_PROTSEQ_VECTORW**);
RPC_STATUS __attribute__((__stdcall__)) RpcProtseqVectorFreeA(RPC_PROTSEQ_VECTORA**);
RPC_STATUS __attribute__((__stdcall__)) RpcProtseqVectorFreeW(RPC_PROTSEQ_VECTORW**);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqA(unsigned char*,unsigned int,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqW(unsigned short*,unsigned int,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqExA(unsigned char*,unsigned int MaxCalls,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqExW(unsigned short*,unsigned int,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqEpA(unsigned char*,unsigned int,unsigned char*,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqEpExA(unsigned char*,unsigned int,unsigned char*,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqEpW(unsigned short*,unsigned int,unsigned short*,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqEpExW(unsigned short*,unsigned int,unsigned short*,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqIfA(unsigned char*,unsigned int,RPC_IF_HANDLE,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqIfExA(unsigned char*,unsigned int,RPC_IF_HANDLE,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqIfW(unsigned short*,unsigned int,RPC_IF_HANDLE,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseProtseqIfExW(unsigned short*,unsigned int,RPC_IF_HANDLE,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqServerPrincNameA(RPC_BINDING_HANDLE,unsigned long,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqServerPrincNameW(RPC_BINDING_HANDLE,unsigned long,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcServerInqDefaultPrincNameA(unsigned long,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcServerInqDefaultPrincNameW(unsigned long,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingInqEntryNameA(RPC_BINDING_HANDLE,unsigned long,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingInqEntryNameW(RPC_BINDING_HANDLE,unsigned long,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthClientA(RPC_BINDING_HANDLE,RPC_AUTHZ_HANDLE *,unsigned char**,unsigned long*,unsigned long*,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthClientW(RPC_BINDING_HANDLE,RPC_AUTHZ_HANDLE *,unsigned short**,unsigned long*,unsigned long*,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthInfoA(RPC_BINDING_HANDLE,unsigned char**,unsigned long*,unsigned long*,RPC_AUTH_IDENTITY_HANDLE*,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthInfoW(RPC_BINDING_HANDLE,unsigned short**,unsigned long*,unsigned long*,RPC_AUTH_IDENTITY_HANDLE*,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetAuthInfoA(RPC_BINDING_HANDLE,unsigned char*,unsigned long,unsigned long,RPC_AUTH_IDENTITY_HANDLE,unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetAuthInfoExA(RPC_BINDING_HANDLE,unsigned char*,unsigned long,unsigned long,RPC_AUTH_IDENTITY_HANDLE,unsigned long,RPC_SECURITY_QOS*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetAuthInfoW(RPC_BINDING_HANDLE,unsigned short*,unsigned long,unsigned long,RPC_AUTH_IDENTITY_HANDLE,unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetAuthInfoExW(RPC_BINDING_HANDLE,unsigned short*,unsigned long,unsigned long,RPC_AUTH_IDENTITY_HANDLE,unsigned long,RPC_SECURITY_QOS*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthInfoExA(RPC_BINDING_HANDLE,unsigned char**,unsigned long*,unsigned long*,RPC_AUTH_IDENTITY_HANDLE*,unsigned long*,unsigned long,RPC_SECURITY_QOS*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqAuthInfoExW(RPC_BINDING_HANDLE,unsigned short ** , unsigned long *, unsigned long *, RPC_AUTH_IDENTITY_HANDLE *, unsigned long *, unsigned long , RPC_SECURITY_QOS *);
typedef void(__attribute__((__stdcall__)) *RPC_AUTH_KEY_RETRIEVAL_FN)(void*,unsigned short*,unsigned long,void**,RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterAuthInfoA(unsigned char*,unsigned long,RPC_AUTH_KEY_RETRIEVAL_FN,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterAuthInfoW(unsigned short*,unsigned long,RPC_AUTH_KEY_RETRIEVAL_FN,void*);
RPC_STATUS __attribute__((__stdcall__)) UuidToStringA(UUID*,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) UuidFromStringA(unsigned char*,UUID*);
RPC_STATUS __attribute__((__stdcall__)) UuidToStringW(UUID*,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) UuidFromStringW(unsigned short*,UUID*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpRegisterNoReplaceA(RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpRegisterNoReplaceW(RPC_IF_HANDLE,RPC_BINDING_VECTOR*, UUID_VECTOR*,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpRegisterA(RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpRegisterW(RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) DceErrorInqTextA(RPC_STATUS,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) DceErrorInqTextW(RPC_STATUS,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpEltInqNextA(RPC_EP_INQ_HANDLE,RPC_IF_ID*,RPC_BINDING_HANDLE*,UUID*,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpEltInqNextW(RPC_EP_INQ_HANDLE,RPC_IF_ID*,RPC_BINDING_HANDLE*,UUID*,unsigned short**);
# 332 "c:\\mingw\\include\\rpcdce.h" 3
RPC_STATUS __attribute__((__stdcall__)) RpcBindingCopy(RPC_BINDING_HANDLE,RPC_BINDING_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingFree(RPC_BINDING_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingInqObject(RPC_BINDING_HANDLE,UUID *);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingReset(RPC_BINDING_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingSetObject(RPC_BINDING_HANDLE,UUID *);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqDefaultProtectLevel(unsigned long,unsigned long *);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingVectorFree(RPC_BINDING_VECTOR **);
RPC_STATUS __attribute__((__stdcall__)) RpcIfInqId(RPC_IF_HANDLE,RPC_IF_ID *);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqComTimeout(RPC_BINDING_HANDLE,unsigned int*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetComTimeout(RPC_BINDING_HANDLE,unsigned int);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetCancelTimeout(long Timeout);
RPC_STATUS __attribute__((__stdcall__)) RpcObjectInqType(UUID *,UUID *);
RPC_STATUS __attribute__((__stdcall__)) RpcObjectSetInqFn(RPC_OBJECT_INQ_FN *);
RPC_STATUS __attribute__((__stdcall__)) RpcObjectSetType(UUID *,UUID *);
RPC_STATUS __attribute__((__stdcall__)) RpcProtseqVectorFreeA(RPC_PROTSEQ_VECTORA **);
RPC_STATUS __attribute__((__stdcall__)) RpcServerInqIf(RPC_IF_HANDLE,UUID*,void**);
RPC_STATUS __attribute__((__stdcall__)) RpcServerListen(unsigned int,unsigned int,unsigned int);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterIf(RPC_IF_HANDLE,UUID*,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterIfEx(RPC_IF_HANDLE,UUID*,void*,unsigned int,unsigned int,RPC_IF_CALLBACK_FN*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerRegisterIf2(RPC_IF_HANDLE,UUID*,void*,unsigned int,unsigned int,unsigned int,RPC_IF_CALLBACK_FN*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUnregisterIf(RPC_IF_HANDLE,UUID*,unsigned int);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseAllProtseqs(unsigned int,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseAllProtseqsEx(unsigned int,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseAllProtseqsIf(unsigned int,RPC_IF_HANDLE,void*);
RPC_STATUS __attribute__((__stdcall__)) RpcServerUseAllProtseqsIfEx(unsigned int,RPC_IF_HANDLE,void*,PRPC_POLICY);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtStatsVectorFree(RPC_STATS_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqStats(RPC_BINDING_HANDLE,RPC_STATS_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtIsServerListening(RPC_BINDING_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtStopServerListening(RPC_BINDING_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtWaitServerListen(void);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetServerStackSize(unsigned long);
void __attribute__((__stdcall__)) RpcSsDontSerializeContext(void);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEnableIdleCleanup(void);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqIfIds(RPC_BINDING_HANDLE,RPC_IF_ID_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcIfIdVectorFree(RPC_IF_ID_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcEpResolveBinding(RPC_BINDING_HANDLE,RPC_IF_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcBindingServerFromClient(RPC_BINDING_HANDLE,RPC_BINDING_HANDLE*);
__attribute__((noreturn)) void __attribute__((__stdcall__)) RpcRaiseException(RPC_STATUS);
RPC_STATUS __attribute__((__stdcall__)) RpcTestCancel(void);
RPC_STATUS __attribute__((__stdcall__)) RpcCancelThread(void*);
RPC_STATUS __attribute__((__stdcall__)) UuidCreate(UUID*);
signed int __attribute__((__stdcall__)) UuidCompare(UUID*,UUID*, RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) UuidCreateNil(UUID*);
int __attribute__((__stdcall__)) UuidEqual(UUID*,UUID*, RPC_STATUS*);
unsigned short __attribute__((__stdcall__)) UuidHash(UUID*,RPC_STATUS*);
int __attribute__((__stdcall__)) UuidIsNil(UUID*,RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) RpcEpUnregister(RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpEltInqBegin(RPC_BINDING_HANDLE,unsigned long,RPC_IF_ID*,unsigned long,UUID*,RPC_EP_INQ_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpEltInqDone(RPC_EP_INQ_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtEpUnregister(RPC_BINDING_HANDLE,RPC_IF_ID*,RPC_BINDING_HANDLE,UUID*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetAuthorizationFn(RPC_MGMT_AUTHORIZATION_FN);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtInqParameter(unsigned int,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtSetParameter(unsigned int,unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtBindingInqParameter(RPC_BINDING_HANDLE,unsigned int,unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcMgmtBindingSetParameter(RPC_BINDING_HANDLE,unsigned int,unsigned long);


RPC_STATUS __attribute__((__stdcall__)) UuidCreateSequential(UUID*);


# 1 "c:\\mingw\\include\\rpcdcep.h" 1 3



       
# 5 "c:\\mingw\\include\\rpcdcep.h" 3
# 22 "c:\\mingw\\include\\rpcdcep.h" 3
typedef struct _RPC_VERSION {
 unsigned short MajorVersion;
 unsigned short MinorVersion;
} RPC_VERSION;
typedef struct _RPC_SYNTAX_IDENTIFIER {
 GUID SyntaxGUID;
 RPC_VERSION SyntaxVersion;
} RPC_SYNTAX_IDENTIFIER, *PRPC_SYNTAX_IDENTIFIER;
typedef struct _RPC_MESSAGE {
 HANDLE Handle;
 unsigned long DataRepresentation;
 void *Buffer;
 unsigned int BufferLength;
 unsigned int ProcNum;
 PRPC_SYNTAX_IDENTIFIER TransferSyntax;
 void *RpcInterfaceInformation;
 void *ReservedForRuntime;
 void *ManagerEpv;
 void *ImportContext;
 unsigned long RpcFlags;
} RPC_MESSAGE,*PRPC_MESSAGE;
typedef long __attribute__((__stdcall__)) RPC_FORWARD_FUNCTION(GUID*,RPC_VERSION*,GUID*,unsigned char*,void**);
typedef void(__attribute__((__stdcall__)) *RPC_DISPATCH_FUNCTION) ( PRPC_MESSAGE Message);
typedef struct {
 unsigned int DispatchTableCount;
 RPC_DISPATCH_FUNCTION *DispatchTable;
 int Reserved;
} RPC_DISPATCH_TABLE,*PRPC_DISPATCH_TABLE;
typedef struct _RPC_PROTSEQ_ENDPOINT {
 unsigned char *RpcProtocolSequence;
 unsigned char *Endpoint;
} RPC_PROTSEQ_ENDPOINT,*PRPC_PROTSEQ_ENDPOINT;
typedef struct _RPC_SERVER_INTERFACE {
 unsigned int Length;
 RPC_SYNTAX_IDENTIFIER InterfaceId;
 RPC_SYNTAX_IDENTIFIER TransferSyntax;
 PRPC_DISPATCH_TABLE DispatchTable;
 unsigned int RpcProtseqEndpointCount;
 PRPC_PROTSEQ_ENDPOINT RpcProtseqEndpoint;
 void *DefaultManagerEpv;
 void const *InterpreterInfo;
} RPC_SERVER_INTERFACE,*PRPC_SERVER_INTERFACE;
typedef struct _RPC_CLIENT_INTERFACE {
 unsigned int Length;
 RPC_SYNTAX_IDENTIFIER InterfaceId;
 RPC_SYNTAX_IDENTIFIER TransferSyntax;
 PRPC_DISPATCH_TABLE DispatchTable;
 unsigned int RpcProtseqEndpointCount;
 PRPC_PROTSEQ_ENDPOINT RpcProtseqEndpoint;
 unsigned long Reserved;
 void const *InterpreterInfo;
} RPC_CLIENT_INTERFACE,*PRPC_CLIENT_INTERFACE;
typedef void *I_RPC_MUTEX;
typedef struct _RPC_TRANSFER_SYNTAX {
 GUID Uuid;
 unsigned short VersMajor;
 unsigned short VersMinor;
} RPC_TRANSFER_SYNTAX;
typedef RPC_STATUS (*RPC_BLOCKING_FN)(void*,void*,void*);

long __attribute__((__stdcall__)) I_RpcGetBuffer(RPC_MESSAGE*);
long __attribute__((__stdcall__)) I_RpcSendReceive(RPC_MESSAGE*);
long __attribute__((__stdcall__)) I_RpcSend(RPC_MESSAGE*);
long __attribute__((__stdcall__)) I_RpcFreeBuffer(RPC_MESSAGE*);
void __attribute__((__stdcall__)) I_RpcRequestMutex(I_RPC_MUTEX*);
void __attribute__((__stdcall__)) I_RpcClearMutex(I_RPC_MUTEX);
void __attribute__((__stdcall__)) I_RpcDeleteMutex(I_RPC_MUTEX);
__attribute__((__stdcall__)) void * I_RpcAllocate(unsigned int);
void __attribute__((__stdcall__)) I_RpcFree(void*);
void __attribute__((__stdcall__)) I_RpcPauseExecution(unsigned long);
typedef void(__attribute__((__stdcall__)) *PRPC_RUNDOWN) (void*);
long __attribute__((__stdcall__)) I_RpcMonitorAssociation(HANDLE,PRPC_RUNDOWN,void*);
long __attribute__((__stdcall__)) I_RpcStopMonitorAssociation(HANDLE);
HANDLE __attribute__((__stdcall__)) I_RpcGetCurrentCallHandle(void);
long __attribute__((__stdcall__)) I_RpcGetAssociationContext(void**);
long __attribute__((__stdcall__)) I_RpcSetAssociationContext(void*);

long __attribute__((__stdcall__)) I_RpcNsBindingSetEntryName(HANDLE,unsigned long,unsigned short*);
long __attribute__((__stdcall__)) I_RpcBindingInqDynamicEndpoint(HANDLE, unsigned short**);




long __attribute__((__stdcall__)) I_RpcBindingInqTransportType(HANDLE,unsigned int*);
long __attribute__((__stdcall__)) I_RpcIfInqTransferSyntaxes(HANDLE,RPC_TRANSFER_SYNTAX*,unsigned int,unsigned int*);
long __attribute__((__stdcall__)) I_UuidCreate(GUID*);
long __attribute__((__stdcall__)) I_RpcBindingCopy(HANDLE,HANDLE*);
long __attribute__((__stdcall__)) I_RpcBindingIsClientLocal(HANDLE,unsigned int*);
void __attribute__((__stdcall__)) I_RpcSsDontSerializeContext(void);
long __attribute__((__stdcall__)) I_RpcServerRegisterForwardFunction(RPC_FORWARD_FUNCTION*);
long __attribute__((__stdcall__)) I_RpcConnectionInqSockBuffSize(unsigned long*,unsigned long*);
long __attribute__((__stdcall__)) I_RpcConnectionSetSockBuffSize(unsigned long,unsigned long);
long __attribute__((__stdcall__)) I_RpcBindingSetAsync(HANDLE,RPC_BLOCKING_FN);
long __attribute__((__stdcall__)) I_RpcAsyncSendReceive(RPC_MESSAGE*,void*);
long __attribute__((__stdcall__)) I_RpcGetThreadWindowHandle(void**);
long __attribute__((__stdcall__)) I_RpcServerThreadPauseListening(void);
long __attribute__((__stdcall__)) I_RpcServerThreadContinueListening(void);
long __attribute__((__stdcall__)) I_RpcServerUnregisterEndpointA(unsigned char*,unsigned char*);
long __attribute__((__stdcall__)) I_RpcServerUnregisterEndpointW(unsigned short*,unsigned short*);
# 393 "c:\\mingw\\include\\rpcdce.h" 2 3
# 41 "c:\\mingw\\include\\rpc.h" 2 3
# 1 "c:\\mingw\\include\\rpcnsi.h" 1 3



       
# 5 "c:\\mingw\\include\\rpcnsi.h" 3





typedef void *RPC_NS_HANDLE;
# 20 "c:\\mingw\\include\\rpcnsi.h" 3
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingExportA(unsigned long,unsigned char*,RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingUnexportA(unsigned long,unsigned char*,RPC_IF_HANDLE,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingLookupBeginA(unsigned long,unsigned char*,RPC_IF_HANDLE,UUID*,unsigned long,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingLookupNext(RPC_NS_HANDLE,RPC_BINDING_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingLookupDone(RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupDeleteA(unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrAddA(unsigned long,unsigned char*,unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrRemoveA(unsigned long,unsigned char*,unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqBeginA(unsigned long,unsigned char*,unsigned long,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqNextA(RPC_NS_HANDLE,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqDone(RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileDeleteA(unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltAddA(unsigned long,unsigned char*,RPC_IF_ID*,unsigned long,unsigned char*,unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltRemoveA(unsigned long,unsigned char*,RPC_IF_ID*,unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqBeginA(unsigned long,unsigned char*,unsigned long,RPC_IF_ID*,unsigned long,unsigned long,unsigned char*,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqNextA(RPC_NS_HANDLE,RPC_IF_ID*,unsigned char**,unsigned long*,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqDone(RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryObjectInqNext( RPC_NS_HANDLE, UUID*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryObjectInqDone( RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryExpandNameA(unsigned long,unsigned char*,unsigned char**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtBindingUnexportA(unsigned long,unsigned char*,RPC_IF_ID*,unsigned long,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryCreateA(unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryDeleteA(unsigned long,unsigned char*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryInqIfIdsA(unsigned long,unsigned char*,RPC_IF_ID_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtHandleSetExpAge(RPC_NS_HANDLE,unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtInqExpAge(unsigned long*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtSetExpAge(unsigned long);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingImportNext(RPC_NS_HANDLE,RPC_BINDING_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingImportDone(RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingSelect(RPC_BINDING_VECTOR*,RPC_BINDING_HANDLE*);

RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryObjectInqBeginA(unsigned long,unsigned char*,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingImportBeginA(unsigned long,unsigned char*,RPC_IF_HANDLE,UUID*,RPC_NS_HANDLE*);


RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingExportW(unsigned long,unsigned short*,RPC_IF_HANDLE,RPC_BINDING_VECTOR*,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingUnexportW(unsigned long,unsigned short*,RPC_IF_HANDLE,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingLookupBeginW(unsigned long,unsigned short*,RPC_IF_HANDLE,UUID*,unsigned long,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupDeleteW(unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrAddW(unsigned long,unsigned short*,unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrRemoveW(unsigned long,unsigned short*,unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqBeginW(unsigned long,unsigned short*,unsigned long,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsGroupMbrInqNextW(RPC_NS_HANDLE,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileDeleteW(unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltAddW(unsigned long,unsigned short*, RPC_IF_ID*,unsigned long,unsigned short*,unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltRemoveW(unsigned long,unsigned short*, RPC_IF_ID*,unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqBeginW(unsigned long,unsigned short*, unsigned long,RPC_IF_ID*,unsigned long,unsigned long,unsigned short*, RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsProfileEltInqNextW(RPC_NS_HANDLE,RPC_IF_ID*, unsigned short**,unsigned long*,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryObjectInqBeginW(unsigned long,unsigned short*,RPC_NS_HANDLE*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsEntryExpandNameW(unsigned long,unsigned short*,unsigned short**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtBindingUnexportW(unsigned long,unsigned short*,RPC_IF_ID*,unsigned long,UUID_VECTOR*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryCreateW(unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryDeleteW(unsigned long,unsigned short*);
RPC_STATUS __attribute__((__stdcall__)) RpcNsMgmtEntryInqIfIdsW(unsigned long,unsigned short , RPC_IF_ID_VECTOR**);
RPC_STATUS __attribute__((__stdcall__)) RpcNsBindingImportBeginW(unsigned long,unsigned short*,RPC_IF_HANDLE,UUID*,RPC_NS_HANDLE*);
# 42 "c:\\mingw\\include\\rpc.h" 2 3
# 1 "c:\\mingw\\include\\rpcnterr.h" 1 3



       
# 5 "c:\\mingw\\include\\rpcnterr.h" 3
# 43 "c:\\mingw\\include\\rpc.h" 2 3
# 59 "c:\\mingw\\include\\rpc.h" 3
RPC_STATUS __attribute__((__stdcall__)) RpcImpersonateClient(RPC_BINDING_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcRevertToSelf(void);
long __attribute__((__stdcall__)) I_RpcMapWin32Status(RPC_STATUS);
# 65 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\shellapi.h" 1 3



       
# 5 "c:\\mingw\\include\\shellapi.h" 3
# 145 "c:\\mingw\\include\\shellapi.h" 3
typedef WORD FILEOP_FLAGS;
typedef WORD PRINTEROP_FLAGS;
# 1 "c:\\mingw\\include\\pshpack2.h" 1 3

#pragma pack(push,2)
# 148 "c:\\mingw\\include\\shellapi.h" 2 3
typedef struct _AppBarData {
 DWORD cbSize;
 HWND hWnd;
 UINT uCallbackMessage;
 UINT uEdge;
 RECT rc;
 LPARAM lParam;
} APPBARDATA,*PAPPBARDATA;
typedef struct HDROP__{int i;}*HDROP;

typedef struct _NOTIFYICONDATAA {
  DWORD cbSize;
  HWND hWnd;
  UINT uID;
  UINT uFlags;
  UINT uCallbackMessage;
  HICON hIcon;
# 177 "c:\\mingw\\include\\shellapi.h" 3
  CHAR szTip[64];







} NOTIFYICONDATAA,*PNOTIFYICONDATAA;

typedef struct _NOTIFYICONDATAW {
  DWORD cbSize;
  HWND hWnd;
  UINT uID;
  UINT uFlags;
  UINT uCallbackMessage;
  HICON hIcon;
# 206 "c:\\mingw\\include\\shellapi.h" 3
  WCHAR szTip[64];







} NOTIFYICONDATAW,*PNOTIFYICONDATAW;

typedef struct _SHELLEXECUTEINFOA {
 DWORD cbSize;
 ULONG fMask;
 HWND hwnd;
 LPCSTR lpVerb;
 LPCSTR lpFile;
 LPCSTR lpParameters;
 LPCSTR lpDirectory;
 int nShow;
 HINSTANCE hInstApp;
 PVOID lpIDList;
 LPCSTR lpClass;
 HKEY hkeyClass;
 DWORD dwHotKey;
 HANDLE hIcon;
 HANDLE hProcess;
} SHELLEXECUTEINFOA,*LPSHELLEXECUTEINFOA;
typedef struct _SHELLEXECUTEINFOW {
 DWORD cbSize;
 ULONG fMask;
 HWND hwnd;
 LPCWSTR lpVerb;
 LPCWSTR lpFile;
 LPCWSTR lpParameters;
 LPCWSTR lpDirectory;
 int nShow;
 HINSTANCE hInstApp;
 PVOID lpIDList;
 LPCWSTR lpClass;
 HKEY hkeyClass;
 DWORD dwHotKey;
 HANDLE hIcon;
 HANDLE hProcess;
} SHELLEXECUTEINFOW,*LPSHELLEXECUTEINFOW;
typedef struct _SHFILEOPSTRUCTA {
 HWND hwnd;
 UINT wFunc;
 LPCSTR pFrom;
 LPCSTR pTo;
 FILEOP_FLAGS fFlags;
 BOOL fAnyOperationsAborted;
 PVOID hNameMappings;
 LPCSTR lpszProgressTitle;
} SHFILEOPSTRUCTA,*LPSHFILEOPSTRUCTA;
typedef struct _SHFILEOPSTRUCTW {
 HWND hwnd;
 UINT wFunc;
 LPCWSTR pFrom;
 LPCWSTR pTo;
 FILEOP_FLAGS fFlags;
 BOOL fAnyOperationsAborted;
 PVOID hNameMappings;
 LPCWSTR lpszProgressTitle;
} SHFILEOPSTRUCTW,*LPSHFILEOPSTRUCTW;
typedef struct _SHFILEINFOA {
 HICON hIcon;
 int iIcon;
 DWORD dwAttributes;
 CHAR szDisplayName[260];
 CHAR szTypeName[80];
} SHFILEINFOA;
typedef struct _SHFILEINFOW {
 HICON hIcon;
 int iIcon;
 DWORD dwAttributes;
 WCHAR szDisplayName[260];
 WCHAR szTypeName[80];
} SHFILEINFOW;
typedef struct _SHQUERYRBINFO {
 DWORD cbSize;
 long long i64Size;
 long long i64NumItems;
} SHQUERYRBINFO, *LPSHQUERYRBINFO;
# 1 "c:\\mingw\\include\\poppack.h" 1 3

#pragma pack(pop)
# 290 "c:\\mingw\\include\\shellapi.h" 2 3

LPWSTR * __attribute__((__stdcall__)) CommandLineToArgvW(LPCWSTR,int*);
void __attribute__((__stdcall__)) DragAcceptFiles(HWND,BOOL);
void __attribute__((__stdcall__)) DragFinish(HDROP);
UINT __attribute__((__stdcall__)) DragQueryFileA(HDROP,UINT,LPSTR,UINT);
UINT __attribute__((__stdcall__)) DragQueryFileW(HDROP,UINT,LPWSTR,UINT);
BOOL __attribute__((__stdcall__)) DragQueryPoint(HDROP,LPPOINT);
HICON __attribute__((__stdcall__)) DuplicateIcon(HINSTANCE,HICON);
HICON __attribute__((__stdcall__)) ExtractAssociatedIconA(HINSTANCE,LPCSTR,PWORD);
HICON __attribute__((__stdcall__)) ExtractAssociatedIconW(HINSTANCE,LPCWSTR,PWORD);
HICON __attribute__((__stdcall__)) ExtractIconA(HINSTANCE,LPCSTR,UINT);
HICON __attribute__((__stdcall__)) ExtractIconW(HINSTANCE,LPCWSTR,UINT);
UINT __attribute__((__stdcall__)) ExtractIconExA(LPCSTR,int,HICON*,HICON*,UINT);
UINT __attribute__((__stdcall__)) ExtractIconExW(LPCWSTR,int,HICON*,HICON*,UINT);
HINSTANCE __attribute__((__stdcall__)) FindExecutableA(LPCSTR,LPCSTR,LPSTR);
HINSTANCE __attribute__((__stdcall__)) FindExecutableW(LPCWSTR,LPCWSTR,LPWSTR);
UINT __attribute__((__stdcall__)) SHAppBarMessage(DWORD,PAPPBARDATA);
BOOL __attribute__((__stdcall__)) Shell_NotifyIconA(DWORD,PNOTIFYICONDATAA);
BOOL __attribute__((__stdcall__)) Shell_NotifyIconW(DWORD,PNOTIFYICONDATAW);
int __attribute__((__stdcall__)) ShellAboutA(HWND,LPCSTR,LPCSTR,HICON);
int __attribute__((__stdcall__)) ShellAboutW(HWND,LPCWSTR,LPCWSTR,HICON);
HINSTANCE __attribute__((__stdcall__)) ShellExecuteA(HWND,LPCSTR,LPCSTR,LPCSTR,LPCSTR,INT);
HINSTANCE __attribute__((__stdcall__)) ShellExecuteW(HWND,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR,INT);
BOOL __attribute__((__stdcall__)) ShellExecuteExA(LPSHELLEXECUTEINFOA);
BOOL __attribute__((__stdcall__)) ShellExecuteExW(LPSHELLEXECUTEINFOW);
int __attribute__((__stdcall__)) SHFileOperationA(LPSHFILEOPSTRUCTA);
int __attribute__((__stdcall__)) SHFileOperationW(LPSHFILEOPSTRUCTW);
void __attribute__((__stdcall__)) SHFreeNameMappings(HANDLE);
DWORD __attribute__((__stdcall__)) SHGetFileInfoA(LPCSTR,DWORD,SHFILEINFOA*,UINT,UINT);
DWORD __attribute__((__stdcall__)) SHGetFileInfoW(LPCWSTR,DWORD,SHFILEINFOW*,UINT,UINT);
HRESULT __attribute__((__stdcall__)) SHQueryRecycleBinA(LPCSTR, LPSHQUERYRBINFO);
HRESULT __attribute__((__stdcall__)) SHQueryRecycleBinW(LPCWSTR, LPSHQUERYRBINFO);
HRESULT __attribute__((__stdcall__)) SHEmptyRecycleBinA(HWND,LPCSTR,DWORD);
HRESULT __attribute__((__stdcall__)) SHEmptyRecycleBinW(HWND,LPCWSTR,DWORD);
# 355 "c:\\mingw\\include\\shellapi.h" 3
typedef NOTIFYICONDATAA NOTIFYICONDATA,*PNOTIFYICONDATA;
typedef SHELLEXECUTEINFOA SHELLEXECUTEINFO,*LPSHELLEXECUTEINFO;
typedef SHFILEOPSTRUCTA SHFILEOPSTRUCT,*LPSHFILEOPSTRUCT;
typedef SHFILEINFOA SHFILEINFO;
# 66 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\winperf.h" 1 3



       
# 5 "c:\\mingw\\include\\winperf.h" 3
# 78 "c:\\mingw\\include\\winperf.h" 3
typedef struct _PERF_DATA_BLOCK {
 WCHAR Signature[4];
 DWORD LittleEndian;
 DWORD Version;
 DWORD Revision;
 DWORD TotalByteLength;
 DWORD HeaderLength;
 DWORD NumObjectTypes;
 LONG DefaultObject;
 SYSTEMTIME SystemTime;
 LARGE_INTEGER PerfTime;
 LARGE_INTEGER PerfFreq;
 LARGE_INTEGER PerfTime100nSec;
 DWORD SystemNameLength;
 DWORD SystemNameOffset;
} PERF_DATA_BLOCK, *PPERF_DATA_BLOCK;
typedef struct _PERF_OBJECT_TYPE {
 DWORD TotalByteLength;
 DWORD DefinitionLength;
 DWORD HeaderLength;
 DWORD ObjectNameTitleIndex;
 LPWSTR ObjectNameTitle;
 DWORD ObjectHelpTitleIndex;
 LPWSTR ObjectHelpTitle;
 DWORD DetailLevel;
 DWORD NumCounters;
 LONG DefaultCounter;
 LONG NumInstances;
 DWORD CodePage;
 LARGE_INTEGER PerfTime;
 LARGE_INTEGER PerfFreq;
} PERF_OBJECT_TYPE, *PPERF_OBJECT_TYPE;
typedef struct _PERF_COUNTER_DEFINITION {
 DWORD ByteLength;
 DWORD CounterNameTitleIndex;
 LPWSTR CounterNameTitle;
 DWORD CounterHelpTitleIndex;
 LPWSTR CounterHelpTitle;
 LONG DefaultScale;
 DWORD DetailLevel;
 DWORD CounterType;
 DWORD CounterSize;
 DWORD CounterOffset;
} PERF_COUNTER_DEFINITION,*PPERF_COUNTER_DEFINITION;
typedef struct _PERF_INSTANCE_DEFINITION {
 DWORD ByteLength;
 DWORD ParentObjectTitleIndex;
 DWORD ParentObjectInstance;
 LONG UniqueID;
 DWORD NameOffset;
 DWORD NameLength;
} PERF_INSTANCE_DEFINITION,*PPERF_INSTANCE_DEFINITION;
typedef struct _PERF_COUNTER_BLOCK {
 DWORD ByteLength;
} PERF_COUNTER_BLOCK, *PPERF_COUNTER_BLOCK;
typedef DWORD(__attribute__((__stdcall__)) PM_OPEN_PROC)(LPWSTR);
typedef DWORD(__attribute__((__stdcall__)) PM_COLLECT_PROC)(LPWSTR,PVOID*,PDWORD,PDWORD);
typedef DWORD(__attribute__((__stdcall__)) PM_CLOSE_PROC)(void);
# 67 "c:\\mingw\\include\\windows.h" 2 3

# 1 "c:\\mingw\\include\\commdlg.h" 1 3



       
# 5 "c:\\mingw\\include\\commdlg.h" 3





#pragma pack(push,1)
# 232 "c:\\mingw\\include\\commdlg.h" 3
typedef UINT (__attribute__((__stdcall__)) *__CDHOOKPROC)(HWND,UINT,WPARAM,LPARAM);
typedef __CDHOOKPROC LPCCHOOKPROC;
typedef __CDHOOKPROC LPCFHOOKPROC;
typedef __CDHOOKPROC LPFRHOOKPROC;
typedef __CDHOOKPROC LPOFNHOOKPROC;
typedef __CDHOOKPROC LPPAGEPAINTHOOK;
typedef __CDHOOKPROC LPPAGESETUPHOOK;
typedef __CDHOOKPROC LPSETUPHOOKPROC;
typedef __CDHOOKPROC LPPRINTHOOKPROC;
typedef struct tagCHOOSECOLORA {
 DWORD lStructSize;
 HWND hwndOwner;
 HWND hInstance;
 COLORREF rgbResult;
 COLORREF* lpCustColors;
 DWORD Flags;
 LPARAM lCustData;
 LPCCHOOKPROC lpfnHook;
 LPCSTR lpTemplateName;
} CHOOSECOLORA,*LPCHOOSECOLORA;
typedef struct tagCHOOSECOLORW {
 DWORD lStructSize;
 HWND hwndOwner;
 HWND hInstance;
 COLORREF rgbResult;
 COLORREF* lpCustColors;
 DWORD Flags;
 LPARAM lCustData;
 LPCCHOOKPROC lpfnHook;
 LPCWSTR lpTemplateName;
} CHOOSECOLORW,*LPCHOOSECOLORW;
typedef struct tagCHOOSEFONTA {
 DWORD lStructSize;
 HWND hwndOwner;
 HDC hDC;
 LPLOGFONTA lpLogFont;
 INT iPointSize;
 DWORD Flags;
 DWORD rgbColors;
 LPARAM lCustData;
 LPCFHOOKPROC lpfnHook;
 LPCSTR lpTemplateName;
 HINSTANCE hInstance;
 LPSTR lpszStyle;
 WORD nFontType;
 WORD ___MISSING_ALIGNMENT__;
 INT nSizeMin;
 INT nSizeMax;
} CHOOSEFONTA,*LPCHOOSEFONTA;
typedef struct tagCHOOSEFONTW {
 DWORD lStructSize;
 HWND hwndOwner;
 HDC hDC;
 LPLOGFONTW lpLogFont;
 INT iPointSize;
 DWORD Flags;
 DWORD rgbColors;
 LPARAM lCustData;
 LPCFHOOKPROC lpfnHook;
 LPCWSTR lpTemplateName;
 HINSTANCE hInstance;
 LPWSTR lpszStyle;
 WORD nFontType;
 WORD ___MISSING_ALIGNMENT__;
 INT nSizeMin;
 INT nSizeMax;
} CHOOSEFONTW,*LPCHOOSEFONTW;
typedef struct tagDEVNAMES {
 WORD wDriverOffset;
 WORD wDeviceOffset;
 WORD wOutputOffset;
 WORD wDefault;
} DEVNAMES,*LPDEVNAMES;
typedef struct {
 DWORD lStructSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 DWORD Flags;
 LPSTR lpstrFindWhat;
 LPSTR lpstrReplaceWith;
 WORD wFindWhatLen;
 WORD wReplaceWithLen;
 LPARAM lCustData;
 LPFRHOOKPROC lpfnHook;
 LPCSTR lpTemplateName;
} FINDREPLACEA,*LPFINDREPLACEA;
typedef struct {
 DWORD lStructSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 DWORD Flags;
 LPWSTR lpstrFindWhat;
 LPWSTR lpstrReplaceWith;
 WORD wFindWhatLen;
 WORD wReplaceWithLen;
 LPARAM lCustData;
 LPFRHOOKPROC lpfnHook;
 LPCWSTR lpTemplateName;
} FINDREPLACEW,*LPFINDREPLACEW;
typedef struct tagOFNA {
 DWORD lStructSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 LPCSTR lpstrFilter;
 LPSTR lpstrCustomFilter;
 DWORD nMaxCustFilter;
 DWORD nFilterIndex;
 LPSTR lpstrFile;
 DWORD nMaxFile;
 LPSTR lpstrFileTitle;
 DWORD nMaxFileTitle;
 LPCSTR lpstrInitialDir;
 LPCSTR lpstrTitle;
 DWORD Flags;
 WORD nFileOffset;
 WORD nFileExtension;
 LPCSTR lpstrDefExt;
 DWORD lCustData;
 LPOFNHOOKPROC lpfnHook;
 LPCSTR lpTemplateName;

 void * pvReserved;
 DWORD dwReserved;
 DWORD FlagsEx;

} OPENFILENAMEA,*LPOPENFILENAMEA;
typedef struct tagOFNW {
 DWORD lStructSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 LPCWSTR lpstrFilter;
 LPWSTR lpstrCustomFilter;
 DWORD nMaxCustFilter;
 DWORD nFilterIndex;
 LPWSTR lpstrFile;
 DWORD nMaxFile;
 LPWSTR lpstrFileTitle;
 DWORD nMaxFileTitle;
 LPCWSTR lpstrInitialDir;
 LPCWSTR lpstrTitle;
 DWORD Flags;
 WORD nFileOffset;
 WORD nFileExtension;
 LPCWSTR lpstrDefExt;
 DWORD lCustData;
 LPOFNHOOKPROC lpfnHook;
 LPCWSTR lpTemplateName;

 void * pvReserved;
 DWORD dwReserved;
 DWORD FlagsEx;

} OPENFILENAMEW,*LPOPENFILENAMEW;
typedef struct _OFNOTIFYA {
 NMHDR hdr;
 LPOPENFILENAMEA lpOFN;
 LPSTR pszFile;
} OFNOTIFYA,*LPOFNOTIFYA;
typedef struct _OFNOTIFYW {
 NMHDR hdr;
 LPOPENFILENAMEW lpOFN;
 LPWSTR pszFile;
} OFNOTIFYW,*LPOFNOTIFYW;
typedef struct tagPSDA {
 DWORD lStructSize;
 HWND hwndOwner;
 HGLOBAL hDevMode;
 HGLOBAL hDevNames;
 DWORD Flags;
 POINT ptPaperSize;
 RECT rtMinMargin;
 RECT rtMargin;
 HINSTANCE hInstance;
 LPARAM lCustData;
 LPPAGESETUPHOOK lpfnPageSetupHook;
 LPPAGEPAINTHOOK lpfnPagePaintHook;
 LPCSTR lpPageSetupTemplateName;
 HGLOBAL hPageSetupTemplate;
} PAGESETUPDLGA,*LPPAGESETUPDLGA;
typedef struct tagPSDW {
 DWORD lStructSize;
 HWND hwndOwner;
 HGLOBAL hDevMode;
 HGLOBAL hDevNames;
 DWORD Flags;
 POINT ptPaperSize;
 RECT rtMinMargin;
 RECT rtMargin;
 HINSTANCE hInstance;
 LPARAM lCustData;
 LPPAGESETUPHOOK lpfnPageSetupHook;
 LPPAGEPAINTHOOK lpfnPagePaintHook;
 LPCWSTR lpPageSetupTemplateName;
 HGLOBAL hPageSetupTemplate;
} PAGESETUPDLGW,*LPPAGESETUPDLGW;
typedef struct tagPDA {
 DWORD lStructSize;
 HWND hwndOwner;
 HANDLE hDevMode;
 HANDLE hDevNames;
 HDC hDC;
 DWORD Flags;
 WORD nFromPage;
 WORD nToPage;
 WORD nMinPage;
 WORD nMaxPage;
 WORD nCopies;
 HINSTANCE hInstance;
 DWORD lCustData;
 LPPRINTHOOKPROC lpfnPrintHook;
 LPSETUPHOOKPROC lpfnSetupHook;
 LPCSTR lpPrintTemplateName;
 LPCSTR lpSetupTemplateName;
 HANDLE hPrintTemplate;
 HANDLE hSetupTemplate;
} PRINTDLGA,*LPPRINTDLGA;
typedef struct tagPDW {
 DWORD lStructSize;
 HWND hwndOwner;
 HANDLE hDevMode;
 HANDLE hDevNames;
 HDC hDC;
 DWORD Flags;
 WORD nFromPage;
 WORD nToPage;
 WORD nMinPage;
 WORD nMaxPage;
 WORD nCopies;
 HINSTANCE hInstance;
 DWORD lCustData;
 LPPRINTHOOKPROC lpfnPrintHook;
 LPSETUPHOOKPROC lpfnSetupHook;
 LPCWSTR lpPrintTemplateName;
 LPCWSTR lpSetupTemplateName;
 HANDLE hPrintTemplate;
 HANDLE hSetupTemplate;
} PRINTDLGW,*LPPRINTDLGW;

# 1 "c:\\mingw\\include\\unknwn.h" 1 3







       
# 9 "c:\\mingw\\include\\unknwn.h" 3





# 1 "c:\\mingw\\include\\objfwd.h" 1 3



       
# 5 "c:\\mingw\\include\\objfwd.h" 3







typedef struct IMoniker *LPMONIKER;
typedef struct IStream *LPSTREAM;
typedef struct IMarshal *LPMARSHAL;
typedef struct IMalloc *LPMALLOC;
typedef struct IMallocSpy *LPMALLOCSPY;
typedef struct IMessageFilter *LPMESSAGEFILTER;
typedef struct IPersist *LPPERSIST;
typedef struct IPersistStream *LPPERSISTSTREAM;
typedef struct IRunningObjectTable *LPRUNNINGOBJECTTABLE;
typedef struct IBindCtx *LPBINDCTX,*LPBC;
typedef struct IAdviseSink *LPADVISESINK;
typedef struct IAdviseSink2 *LPADVISESINK2;
typedef struct IDataObject *LPDATAOBJECT;
typedef struct IDataAdviseHolder *LPDATAADVISEHOLDER;
typedef struct IEnumMoniker *LPENUMMONIKER;
typedef struct IEnumFORMATETC *LPENUMFORMATETC;
typedef struct IEnumSTATDATA *LPENUMSTATDATA;
typedef struct IEnumSTATSTG *LPENUMSTATSTG;
typedef struct IEnumSTATPROPSTG LPENUMSTATPROPSTG;
typedef struct IEnumString *LPENUMSTRING;
typedef struct IEnumUnknown *LPENUMUNKNOWN;
typedef struct IStorage *LPSTORAGE;
typedef struct IPersistStorage *LPPERSISTSTORAGE;
typedef struct ILockBytes *LPLOCKBYTES;
typedef struct IStdMarshalInfo *LPSTDMARSHALINFO;
typedef struct IExternalConnection *LPEXTERNALCONNECTION;
typedef struct IRunnableObject *LPRUNNABLEOBJECT;
typedef struct IROTData *LPROTDATA;
typedef struct IPersistFile *LPPERSISTFILE;
typedef struct IRootStorage *LPROOTSTORAGE;
typedef struct IRpcChannelBuffer *LPRPCCHANNELBUFFER;
typedef struct IRpcProxyBuffer *LPRPCPROXYBUFFER;
typedef struct IRpcStubBuffer *LPRPCSTUBBUFFER;
typedef struct IPropertyStorage *LPPROPERTYSTORAGE;
typedef struct IEnumSTATPROPSETSTG *LPENUMSTATPROPSETSTG;
typedef struct IPropertySetStorage *LPPROPERTYSETSTORAGE;
typedef struct IClientSecurity *LPCLIENTSECURITY;
typedef struct IServerSecurity *LPSERVERSECURITY;
typedef struct IClassActivator *LPCLASSACTIVATOR;
typedef struct IFillLockBytes *LPFILLLOCKBYTES;
typedef struct IProgressNotify *LPPROGRESSNOTIFY;
typedef struct ILayoutStorage *LPLAYOUTSTORAGE;
# 15 "c:\\mingw\\include\\unknwn.h" 2 3
# 1 "c:\\mingw\\include\\wtypes.h" 1 3
# 34 "c:\\mingw\\include\\wtypes.h" 3
       
# 35 "c:\\mingw\\include\\wtypes.h" 3
# 48 "c:\\mingw\\include\\wtypes.h" 3
# 1 "c:\\mingw\\include\\rpc.h" 1 3
# 49 "c:\\mingw\\include\\wtypes.h" 2 3
# 1 "c:\\mingw\\include\\rpcndr.h" 1 3




       
# 6 "c:\\mingw\\include\\rpcndr.h" 3





# 1 "c:\\mingw\\include\\rpcnsip.h" 1 3



       
# 5 "c:\\mingw\\include\\rpcnsip.h" 3





typedef struct {
 RPC_NS_HANDLE LookupContext;
 RPC_BINDING_HANDLE ProposedHandle;
 RPC_BINDING_VECTOR *Bindings;
} RPC_IMPORT_CONTEXT_P,*PRPC_IMPORT_CONTEXT_P;
RPC_STATUS __attribute__((__stdcall__)) I_RpcNsGetBuffer( PRPC_MESSAGE);
RPC_STATUS __attribute__((__stdcall__)) I_RpcNsSendReceive( PRPC_MESSAGE, RPC_BINDING_HANDLE*);
void __attribute__((__stdcall__)) I_RpcNsRaiseException( PRPC_MESSAGE, RPC_STATUS);
RPC_STATUS __attribute__((__stdcall__)) I_RpcReBindBuffer( PRPC_MESSAGE);
RPC_STATUS __attribute__((__stdcall__)) I_NsServerBindSearch(void);
RPC_STATUS __attribute__((__stdcall__)) I_NsClientBindSearch(void);
void __attribute__((__stdcall__)) I_NsClientBindDone(void);
# 12 "c:\\mingw\\include\\rpcndr.h" 2 3
# 51 "c:\\mingw\\include\\rpcndr.h" 3
typedef unsigned char byte;
typedef unsigned char boolean;
# 96 "c:\\mingw\\include\\rpcndr.h" 3
typedef void *NDR_CCONTEXT;
typedef struct {
 void *pad[2];
 void *userContext;
} *NDR_SCONTEXT;
typedef void (__attribute__((__stdcall__)) *NDR_RUNDOWN)(void*);
typedef struct _SCONTEXT_QUEUE {
 unsigned long NumberOfObjects;
 NDR_SCONTEXT *ArrayOfObjects;
} SCONTEXT_QUEUE,*PSCONTEXT_QUEUE;
struct _MIDL_STUB_MESSAGE;
struct _MIDL_STUB_DESC;
struct _FULL_PTR_XLAT_TABLES;
typedef unsigned char *RPC_BUFPTR;
typedef unsigned long RPC_LENGTH;
typedef void(__attribute__((__stdcall__)) *EXPR_EVAL)(struct _MIDL_STUB_MESSAGE*);
typedef const unsigned char *PFORMAT_STRING;
typedef struct {
 long Dimension;
 unsigned long *BufferConformanceMark;
 unsigned long *BufferVarianceMark;
 unsigned long *MaxCountArray;
 unsigned long *OffsetArray;
 unsigned long *ActualCountArray;
} ARRAY_INFO,*PARRAY_INFO;

RPC_BINDING_HANDLE __attribute__((__stdcall__)) NDRCContextBinding(NDR_CCONTEXT);
void __attribute__((__stdcall__)) NDRCContextMarshall(NDR_CCONTEXT,void*);
void __attribute__((__stdcall__)) NDRCContextUnmarshall(NDR_CCONTEXT*,RPC_BINDING_HANDLE,void*,unsigned long);
void __attribute__((__stdcall__)) NDRSContextMarshall(NDR_SCONTEXT,void*,NDR_RUNDOWN);
NDR_SCONTEXT __attribute__((__stdcall__)) NDRSContextUnmarshall(void*pBuff,unsigned long);
void __attribute__((__stdcall__)) RpcSsDestroyClientContext(void**);
void __attribute__((__stdcall__)) NDRcopy(void*,void*,unsigned int);
unsigned int __attribute__((__stdcall__)) MIDL_wchar_strlen(wchar_t*);
void __attribute__((__stdcall__)) MIDL_wchar_strcpy(void*,wchar_t*);
void __attribute__((__stdcall__)) char_from_ndr(PRPC_MESSAGE,unsigned char*);
void __attribute__((__stdcall__)) char_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,unsigned char*);
void __attribute__((__stdcall__)) short_from_ndr(PRPC_MESSAGE,unsigned short*);
void __attribute__((__stdcall__)) short_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,unsigned short*);
void __attribute__((__stdcall__)) short_from_ndr_temp(unsigned char**,unsigned short*,unsigned long);
void __attribute__((__stdcall__)) long_from_ndr(PRPC_MESSAGE,unsigned long*);
void __attribute__((__stdcall__)) long_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,unsigned long*);
void __attribute__((__stdcall__)) long_from_ndr_temp(unsigned char**,unsigned long*,unsigned long);
void __attribute__((__stdcall__)) enum_from_ndr(PRPC_MESSAGE,unsigned int*);
void __attribute__((__stdcall__)) float_from_ndr(PRPC_MESSAGE,void*);
void __attribute__((__stdcall__)) float_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,void*);
void __attribute__((__stdcall__)) double_from_ndr(PRPC_MESSAGE,void*);
void __attribute__((__stdcall__)) double_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,void*);
void __attribute__((__stdcall__)) hyper_from_ndr(PRPC_MESSAGE,long long*);
void __attribute__((__stdcall__)) hyper_array_from_ndr(PRPC_MESSAGE,unsigned long,unsigned long,long long*);
void __attribute__((__stdcall__)) hyper_from_ndr_temp(unsigned char**,long long*,unsigned long);
void __attribute__((__stdcall__)) data_from_ndr(PRPC_MESSAGE,void*,char*,unsigned char);
void __attribute__((__stdcall__)) data_into_ndr(void*,PRPC_MESSAGE,char*,unsigned char);
void __attribute__((__stdcall__)) tree_into_ndr(void*,PRPC_MESSAGE,char*,unsigned char);
void __attribute__((__stdcall__)) data_size_ndr(void*,PRPC_MESSAGE,char*,unsigned char);
void __attribute__((__stdcall__)) tree_size_ndr(void*,PRPC_MESSAGE,char*,unsigned char);
void __attribute__((__stdcall__)) tree_peek_ndr(PRPC_MESSAGE,unsigned char**,char*,unsigned char);
void *__attribute__((__stdcall__)) midl_allocate(int);

#pragma pack(push,4)
typedef struct _MIDL_STUB_MESSAGE {
 PRPC_MESSAGE RpcMsg;
 unsigned char *Buffer;
 unsigned char *BufferStart;
 unsigned char *BufferEnd;
 unsigned char *BufferMark;
 unsigned long BufferLength;
 unsigned long MemorySize;
 unsigned char *Memory;
 int IsClient;
 int ReuseBuffer;
 unsigned char *AllocAllNodesMemory;
 unsigned char *AllocAllNodesMemoryEnd;
 int IgnoreEmbeddedPointers;
 unsigned char *PointerBufferMark;
 unsigned char fBufferValid;
 unsigned char Unused;
 unsigned long MaxCount;
 unsigned long Offset;
 unsigned long ActualCount;
 void*(__attribute__((__stdcall__)) *pfnAllocate)(unsigned int);
 void(__attribute__((__stdcall__)) *pfnFree)(void*);
 unsigned char *StackTop;
 unsigned char *pPresentedType;
 unsigned char *pTransmitType;
 handle_t SavedHandle;
 const struct _MIDL_STUB_DESC *StubDesc;
 struct _FULL_PTR_XLAT_TABLES *FullPtrXlatTables;
 unsigned long FullPtrRefId;
 int fCheckBounds;
 int fInDontFree :1;
 int fDontCallFreeInst :1;
 int fInOnlyParam :1;
 int fHasReturn :1;
 unsigned long dwDestContext;
 void*pvDestContext;
 NDR_SCONTEXT *SavedContextHandles;
 long ParamNumber;
 struct IRpcChannelBuffer *pRpcChannelBuffer;
 PARRAY_INFO pArrayInfo;
 unsigned long *SizePtrCountArray;
 unsigned long *SizePtrOffsetArray;
 unsigned long *SizePtrLengthArray;
 void*pArgQueue;
 unsigned long dwStubPhase;
 unsigned long w2kReserved[5];
} MIDL_STUB_MESSAGE,*PMIDL_STUB_MESSAGE;
#pragma pack(pop)
typedef void*(__attribute__((__stdcall__)) *GENERIC_BINDING_ROUTINE)(void*);
typedef void (__attribute__((__stdcall__)) *GENERIC_UNBIND_ROUTINE)(void*,unsigned char*);
typedef struct _GENERIC_BINDING_ROUTINE_PAIR {
 GENERIC_BINDING_ROUTINE pfnBind;
 GENERIC_UNBIND_ROUTINE pfnUnbind;
} GENERIC_BINDING_ROUTINE_PAIR,*PGENERIC_BINDING_ROUTINE_PAIR;
typedef struct __GENERIC_BINDING_INFO {
 void *pObj;
 unsigned int Size;
 GENERIC_BINDING_ROUTINE pfnBind;
 GENERIC_UNBIND_ROUTINE pfnUnbind;
} GENERIC_BINDING_INFO,*PGENERIC_BINDING_INFO;
typedef void(__attribute__((__stdcall__)) *XMIT_HELPER_ROUTINE)(PMIDL_STUB_MESSAGE);
typedef struct _XMIT_ROUTINE_QUINTUPLE {
 XMIT_HELPER_ROUTINE pfnTranslateToXmit;
 XMIT_HELPER_ROUTINE pfnTranslateFromXmit;
 XMIT_HELPER_ROUTINE pfnFreeXmit;
 XMIT_HELPER_ROUTINE pfnFreeInst;
} XMIT_ROUTINE_QUINTUPLE,*PXMIT_ROUTINE_QUINTUPLE;
typedef struct _MALLOC_FREE_STRUCT {
void*(__attribute__((__stdcall__)) *pfnAllocate)(unsigned int);
void(__attribute__((__stdcall__)) *pfnFree)(void*);
} MALLOC_FREE_STRUCT;
typedef struct _COMM_FAULT_OFFSETS {
 short CommOffset;
 short FaultOffset;
} COMM_FAULT_OFFSETS;
typedef unsigned long (__attribute__((__stdcall__)) *USER_MARSHAL_SIZING_ROUTINE)(unsigned long *,unsigned long,void *);
typedef unsigned char *(__attribute__((__stdcall__)) *USER_MARSHAL_MARSHALLING_ROUTINE)(unsigned long *,unsigned char *,void *);
typedef unsigned char *(__attribute__((__stdcall__)) *USER_MARSHAL_UNMARSHALLING_ROUTINE)(unsigned long *,unsigned char *,void *);
typedef void (__attribute__((__stdcall__)) *USER_MARSHAL_FREEING_ROUTINE)(unsigned long *,void *);
typedef struct _USER_MARSHAL_ROUTINE_QUADRUPLE {
 USER_MARSHAL_SIZING_ROUTINE pfnBufferSize;
 USER_MARSHAL_MARSHALLING_ROUTINE pfnMarshall;
 USER_MARSHAL_UNMARSHALLING_ROUTINE pfnUnmarshall;
 USER_MARSHAL_FREEING_ROUTINE pfnFree;
} USER_MARSHAL_ROUTINE_QUADRUPLE;
typedef void (__attribute__((__stdcall__)) *NDR_NOTIFY_ROUTINE)(void);
typedef enum _IDL_CS_CONVERT {
 IDL_CS_NO_CONVERT,
 IDL_CS_IN_PLACE_CONVERT,
 IDL_CS_NEW_BUFFER_CONVERT
} IDL_CS_CONVERT;
typedef void (__attribute__((__stdcall__)) *CS_TYPE_NET_SIZE_ROUTINE)(RPC_BINDING_HANDLE,unsigned long,unsigned long,IDL_CS_CONVERT*,unsigned long*,error_status_t*);
typedef void (__attribute__((__stdcall__)) *CS_TYPE_LOCAL_SIZE_ROUTINE)(RPC_BINDING_HANDLE,unsigned long,unsigned long,IDL_CS_CONVERT*,unsigned long*,error_status_t*);
typedef void (__attribute__((__stdcall__)) *CS_TYPE_TO_NETCS_ROUTINE)(RPC_BINDING_HANDLE,unsigned long,void*,unsigned long,byte*,unsigned long*,error_status_t*);
typedef void (__attribute__((__stdcall__)) *CS_TYPE_FROM_NETCS_ROUTINE)(RPC_BINDING_HANDLE,unsigned long,byte*,unsigned long,unsigned long,void*,unsigned long*,error_status_t*);
typedef void (__attribute__((__stdcall__)) *CS_TAG_GETTING_ROUTINE)(RPC_BINDING_HANDLE,int,unsigned long*,unsigned long*,unsigned long*,error_status_t*);
typedef struct _NDR_CS_SIZE_CONVERT_ROUTINES {
 CS_TYPE_NET_SIZE_ROUTINE pfnNetSize;
 CS_TYPE_TO_NETCS_ROUTINE pfnToNetCs;
 CS_TYPE_LOCAL_SIZE_ROUTINE pfnLocalSize;
 CS_TYPE_FROM_NETCS_ROUTINE pfnFromNetCs;
} NDR_CS_SIZE_CONVERT_ROUTINES;
typedef struct _NDR_CS_ROUTINES {
 NDR_CS_SIZE_CONVERT_ROUTINES *pSizeConvertRoutines;
 CS_TAG_GETTING_ROUTINE *pTagGettingRoutines;
} NDR_CS_ROUTINES;
typedef struct _MIDL_STUB_DESC {
 void*RpcInterfaceInformation;
 void*(__attribute__((__stdcall__)) *pfnAllocate)(unsigned int);
 void(__attribute__((__stdcall__)) *pfnFree)(void*);
 union {
  handle_t *pAutoHandle;
  handle_t *pPrimitiveHandle;
  PGENERIC_BINDING_INFO pGenericBindingInfo;
 } IMPLICIT_HANDLE_INFO;
 const NDR_RUNDOWN *apfnNdrRundownRoutines;
 const GENERIC_BINDING_ROUTINE_PAIR *aGenericBindingRoutinePairs;
 const EXPR_EVAL *apfnExprEval;
 const XMIT_ROUTINE_QUINTUPLE *aXmitQuintuple;
 const unsigned char *pFormatTypes;
 int fCheckBounds;
 unsigned long Version;
 MALLOC_FREE_STRUCT *pMallocFreeStruct;
 long MIDLVersion;
 const COMM_FAULT_OFFSETS *CommFaultOffsets;
 const USER_MARSHAL_ROUTINE_QUADRUPLE *aUserMarshalQuadruple;
 const NDR_NOTIFY_ROUTINE *NotifyRoutineTable;
 ULONG_PTR mFlags;
 const NDR_CS_ROUTINES *CsRoutineTables;
 void *Reserved4;
 ULONG_PTR Reserved5;
} MIDL_STUB_DESC;
typedef const MIDL_STUB_DESC *PMIDL_STUB_DESC;
typedef void*PMIDL_XMIT_TYPE;
typedef struct _MIDL_FORMAT_STRING {
 short Pad;
 unsigned char Format[1];
} MIDL_FORMAT_STRING;
typedef void(__attribute__((__stdcall__)) *STUB_THUNK)(PMIDL_STUB_MESSAGE);
typedef long(__attribute__((__stdcall__)) *SERVER_ROUTINE)(void);
typedef struct _MIDL_SERVER_INFO_ {
 PMIDL_STUB_DESC pStubDesc;
 const SERVER_ROUTINE *DispatchTable;
 PFORMAT_STRING ProcString;
 const unsigned short *FmtStringOffset;
 const STUB_THUNK *ThunkTable;
} MIDL_SERVER_INFO,*PMIDL_SERVER_INFO;
typedef struct _MIDL_STUBLESS_PROXY_INFO {
 PMIDL_STUB_DESC pStubDesc;
 PFORMAT_STRING ProcFormatString;
 const unsigned short *FormatStringOffset;
} MIDL_STUBLESS_PROXY_INFO;
typedef MIDL_STUBLESS_PROXY_INFO *PMIDL_STUBLESS_PROXY_INFO;
typedef union _CLIENT_CALL_RETURN {
 void *Pointer;
 long Simple;
} CLIENT_CALL_RETURN;
typedef enum { XLAT_SERVER = 1,XLAT_CLIENT } XLAT_SIDE;
typedef struct _FULL_PTR_TO_REFID_ELEMENT {
 struct _FULL_PTR_TO_REFID_ELEMENT *Next;
 void*Pointer;
 unsigned long RefId;
 unsigned char State;
} FULL_PTR_TO_REFID_ELEMENT,*PFULL_PTR_TO_REFID_ELEMENT;
typedef struct _FULL_PTR_XLAT_TABLES {
 struct {
  void **XlatTable;
  unsigned char *StateTable;
  unsigned long NumberOfEntries;
 } RefIdToPointer;
 struct {
  PFULL_PTR_TO_REFID_ELEMENT *XlatTable;
  unsigned long NumberOfBuckets;
  unsigned long HashMask;
 } PointerToRefId;
 unsigned long NextRefId;
 XLAT_SIDE XlatSide;
} FULL_PTR_XLAT_TABLES,*PFULL_PTR_XLAT_TABLES;
void __attribute__((__stdcall__)) NdrSimpleTypeMarshall(PMIDL_STUB_MESSAGE,unsigned char*,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrPointerMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING pFormat);
unsigned char *__attribute__((__stdcall__)) NdrSimpleStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantVaryingStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrHardStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrComplexStructMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrFixedArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantVaryingArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrVaryingArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrComplexArrayMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrNonConformantStringMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrConformantStringMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrEncapsulatedUnionMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrNonEncapsulatedUnionMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrByteCountPointerMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrXmitOrRepAsMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char *__attribute__((__stdcall__)) NdrInterfacePointerMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrClientContextMarshall(PMIDL_STUB_MESSAGE,NDR_CCONTEXT,int);
void __attribute__((__stdcall__)) NdrServerContextMarshall(PMIDL_STUB_MESSAGE,NDR_SCONTEXT,NDR_RUNDOWN);
void __attribute__((__stdcall__)) NdrSimpleTypeUnmarshall(PMIDL_STUB_MESSAGE,unsigned char*,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrPointerUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrSimpleStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantVaryingStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrHardStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrComplexStructUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrFixedArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantVaryingArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrVaryingArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrComplexArrayUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrNonConformantStringUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrConformantStringUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrEncapsulatedUnionUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrNonEncapsulatedUnionUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrByteCountPointerUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrXmitOrRepAsUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
unsigned char *__attribute__((__stdcall__)) NdrInterfacePointerUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
void __attribute__((__stdcall__)) NdrClientContextUnmarshall(PMIDL_STUB_MESSAGE,NDR_CCONTEXT*,RPC_BINDING_HANDLE);
NDR_SCONTEXT __attribute__((__stdcall__)) NdrServerContextUnmarshall(PMIDL_STUB_MESSAGE);
void __attribute__((__stdcall__)) NdrPointerBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrSimpleStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantVaryingStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrHardStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrComplexStructBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrFixedArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantVaryingArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrVaryingArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrComplexArrayBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantStringBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrNonConformantStringBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrEncapsulatedUnionBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrNonEncapsulatedUnionBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrByteCountPointerBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrXmitOrRepAsBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrInterfacePointerBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrContextHandleSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrPointerMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrSimpleStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantVaryingStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrHardStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrComplexStructMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrFixedArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantVaryingArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrVaryingArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrComplexArrayMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrConformantStringMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrNonConformantStringMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrEncapsulatedUnionMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrNonEncapsulatedUnionMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrXmitOrRepAsMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrInterfacePointerMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrPointerFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrSimpleStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantVaryingStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrHardStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrComplexStructFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrFixedArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConformantVaryingArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrVaryingArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrComplexArrayFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrEncapsulatedUnionFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrNonEncapsulatedUnionFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrByteCountPointerFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrXmitOrRepAsFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrInterfacePointerFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrConvert(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrClientInitializeNew(PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC,unsigned int);
unsigned char *__attribute__((__stdcall__)) NdrServerInitializeNew(PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC);
void __attribute__((__stdcall__)) NdrClientInitialize(PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC,unsigned int);
unsigned char *__attribute__((__stdcall__)) NdrServerInitialize(PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC);
unsigned char *__attribute__((__stdcall__)) NdrServerInitializeUnmarshall(PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC,PRPC_MESSAGE);
void __attribute__((__stdcall__)) NdrServerInitializeMarshall(PRPC_MESSAGE,PMIDL_STUB_MESSAGE);
unsigned char *__attribute__((__stdcall__)) NdrGetBuffer(PMIDL_STUB_MESSAGE,unsigned long,RPC_BINDING_HANDLE);
unsigned char *__attribute__((__stdcall__)) NdrNsGetBuffer(PMIDL_STUB_MESSAGE,unsigned long,RPC_BINDING_HANDLE);
unsigned char *__attribute__((__stdcall__)) NdrSendReceive(PMIDL_STUB_MESSAGE,unsigned char*);
unsigned char *__attribute__((__stdcall__)) NdrNsSendReceive(PMIDL_STUB_MESSAGE,unsigned char*,RPC_BINDING_HANDLE*);
void __attribute__((__stdcall__)) NdrFreeBuffer(PMIDL_STUB_MESSAGE);
CLIENT_CALL_RETURN __attribute__((__cdecl__)) NdrClientCall(PMIDL_STUB_DESC,PFORMAT_STRING,...);
CLIENT_CALL_RETURN __attribute__((__cdecl__)) NdrClientCall2(PMIDL_STUB_DESC,PFORMAT_STRING,...);
typedef enum {
 STUB_UNMARSHAL,
 STUB_CALL_SERVER,
 STUB_MARSHAL,
 STUB_CALL_SERVER_NO_HRESULT
} STUB_PHASE;
typedef enum {
 PROXY_CALCSIZE,
 PROXY_GETBUFFER,
 PROXY_MARSHAL,
 PROXY_SENDRECEIVE,
 PROXY_UNMARSHAL
} PROXY_PHASE;
long __attribute__((__stdcall__)) NdrStubCall(struct IRpcStubBuffer*,struct IRpcChannelBuffer*,PRPC_MESSAGE,unsigned long*);
void __attribute__((__stdcall__)) NdrServerCall(PRPC_MESSAGE);
int __attribute__((__stdcall__)) NdrServerUnmarshall(struct IRpcChannelBuffer*,PRPC_MESSAGE,PMIDL_STUB_MESSAGE,PMIDL_STUB_DESC,PFORMAT_STRING,void*);
void __attribute__((__stdcall__)) NdrServerMarshall(struct IRpcStubBuffer*,struct IRpcChannelBuffer*,PMIDL_STUB_MESSAGE,PFORMAT_STRING);
RPC_STATUS __attribute__((__stdcall__)) NdrMapCommAndFaultStatus(PMIDL_STUB_MESSAGE,unsigned long*,unsigned long*,RPC_STATUS);
int __attribute__((__stdcall__)) NdrSH_UPDecision(PMIDL_STUB_MESSAGE,unsigned char**,RPC_BUFPTR);
int __attribute__((__stdcall__)) NdrSH_TLUPDecision(PMIDL_STUB_MESSAGE,unsigned char**);
int __attribute__((__stdcall__)) NdrSH_TLUPDecisionBuffer(PMIDL_STUB_MESSAGE,unsigned char**);
int __attribute__((__stdcall__)) NdrSH_IfAlloc(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
int __attribute__((__stdcall__)) NdrSH_IfAllocRef(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
int __attribute__((__stdcall__)) NdrSH_IfAllocSet(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
RPC_BUFPTR __attribute__((__stdcall__)) NdrSH_IfCopy(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
RPC_BUFPTR __attribute__((__stdcall__)) NdrSH_IfAllocCopy(PMIDL_STUB_MESSAGE,unsigned char**,unsigned long);
unsigned long __attribute__((__stdcall__)) NdrSH_Copy(unsigned char*,unsigned char*,unsigned long);
void __attribute__((__stdcall__)) NdrSH_IfFree(PMIDL_STUB_MESSAGE,unsigned char*);
RPC_BUFPTR __attribute__((__stdcall__)) NdrSH_StringMarshall(PMIDL_STUB_MESSAGE,unsigned char*,unsigned long,int);
RPC_BUFPTR __attribute__((__stdcall__)) NdrSH_StringUnMarshall(PMIDL_STUB_MESSAGE,unsigned char**,int);
typedef void *RPC_SS_THREAD_HANDLE;
typedef void* __attribute__((__stdcall__)) RPC_CLIENT_ALLOC(unsigned int);
typedef void __attribute__((__stdcall__)) RPC_CLIENT_FREE(void*);
void*__attribute__((__stdcall__)) RpcSsAllocate(unsigned int);
void __attribute__((__stdcall__)) RpcSsDisableAllocate(void);
void __attribute__((__stdcall__)) RpcSsEnableAllocate(void);
void __attribute__((__stdcall__)) RpcSsFree(void*);
RPC_SS_THREAD_HANDLE __attribute__((__stdcall__)) RpcSsGetThreadHandle(void);
void __attribute__((__stdcall__)) RpcSsSetClientAllocFree(RPC_CLIENT_ALLOC*,RPC_CLIENT_FREE*);
void __attribute__((__stdcall__)) RpcSsSetThreadHandle(RPC_SS_THREAD_HANDLE);
void __attribute__((__stdcall__)) RpcSsSwapClientAllocFree(RPC_CLIENT_ALLOC*,RPC_CLIENT_FREE*,RPC_CLIENT_ALLOC**,RPC_CLIENT_FREE**);
void*__attribute__((__stdcall__)) RpcSmAllocate(unsigned int,RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) RpcSmClientFree(void*);
RPC_STATUS __attribute__((__stdcall__)) RpcSmDestroyClientContext(void**);
RPC_STATUS __attribute__((__stdcall__)) RpcSmDisableAllocate(void);
RPC_STATUS __attribute__((__stdcall__)) RpcSmEnableAllocate(void);
RPC_STATUS __attribute__((__stdcall__)) RpcSmFree(void*);
RPC_SS_THREAD_HANDLE __attribute__((__stdcall__)) RpcSmGetThreadHandle(RPC_STATUS*);
RPC_STATUS __attribute__((__stdcall__)) RpcSmSetClientAllocFree(RPC_CLIENT_ALLOC*,RPC_CLIENT_FREE*);
RPC_STATUS __attribute__((__stdcall__)) RpcSmSetThreadHandle(RPC_SS_THREAD_HANDLE);
RPC_STATUS __attribute__((__stdcall__)) RpcSmSwapClientAllocFree(RPC_CLIENT_ALLOC*,RPC_CLIENT_FREE*,RPC_CLIENT_ALLOC**,RPC_CLIENT_FREE**);
void __attribute__((__stdcall__)) NdrRpcSsEnableAllocate(PMIDL_STUB_MESSAGE);
void __attribute__((__stdcall__)) NdrRpcSsDisableAllocate(PMIDL_STUB_MESSAGE);
void __attribute__((__stdcall__)) NdrRpcSmSetClientToOsf(PMIDL_STUB_MESSAGE);
void*__attribute__((__stdcall__)) NdrRpcSmClientAllocate(unsigned int);
void __attribute__((__stdcall__)) NdrRpcSmClientFree(void*);
void*__attribute__((__stdcall__)) NdrRpcSsDefaultAllocate(unsigned int);
void __attribute__((__stdcall__)) NdrRpcSsDefaultFree(void*);
PFULL_PTR_XLAT_TABLES __attribute__((__stdcall__)) NdrFullPointerXlatInit(unsigned long,XLAT_SIDE);
void __attribute__((__stdcall__)) NdrFullPointerXlatFree(PFULL_PTR_XLAT_TABLES);
int __attribute__((__stdcall__)) NdrFullPointerQueryPointer(PFULL_PTR_XLAT_TABLES,void*,unsigned char,unsigned long*);
int __attribute__((__stdcall__)) NdrFullPointerQueryRefId(PFULL_PTR_XLAT_TABLES,unsigned long,unsigned char,void**);
void __attribute__((__stdcall__)) NdrFullPointerInsertRefId(PFULL_PTR_XLAT_TABLES,unsigned long,void*);
int __attribute__((__stdcall__)) NdrFullPointerFree(PFULL_PTR_XLAT_TABLES,void*);
void*__attribute__((__stdcall__)) NdrAllocate(PMIDL_STUB_MESSAGE,unsigned int);
void __attribute__((__stdcall__)) NdrClearOutParameters(PMIDL_STUB_MESSAGE,PFORMAT_STRING,void*);
void*__attribute__((__stdcall__)) NdrOleAllocate(unsigned int);
void __attribute__((__stdcall__)) NdrOleFree(void*);
unsigned char*__attribute__((__stdcall__)) NdrUserMarshalMarshall(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned char*__attribute__((__stdcall__)) NdrUserMarshalUnmarshall(PMIDL_STUB_MESSAGE,unsigned char**,PFORMAT_STRING,unsigned char);
void __attribute__((__stdcall__)) NdrUserMarshalBufferSize(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
unsigned long __attribute__((__stdcall__)) NdrUserMarshalMemorySize(PMIDL_STUB_MESSAGE,PFORMAT_STRING);
void __attribute__((__stdcall__)) NdrUserMarshalFree(PMIDL_STUB_MESSAGE,unsigned char*,PFORMAT_STRING);
# 50 "c:\\mingw\\include\\wtypes.h" 2 3


# 61 "c:\\mingw\\include\\wtypes.h" 3

# 71 "c:\\mingw\\include\\wtypes.h" 3


typedef
struct _BLOB
{ ULONG cbSize;
  BYTE *pBlobData;
} BLOB, *PBLOB, *LPBLOB;


# 90 "c:\\mingw\\include\\wtypes.h" 3


typedef
enum tagDVASPECT
{ DVASPECT_CONTENT = 1,
  DVASPECT_THUMBNAIL = 2,
  DVASPECT_ICON = 4,
  DVASPECT_DOCPRINT = 8
} DVASPECT;

typedef
enum tagDVASPECT2
{ DVASPECT_OPAQUE = 16,
  DVASPECT_TRANSPARENT = 32
} DVASPECT2;

typedef
enum tagSTATFLAG
{ STATFLAG_DEFAULT = 0,
  STATFLAG_NONAME = 1
} STATFLAG;

typedef
enum tagMEMCTX
{ MEMCTX_LOCAL = 0,
  MEMCTX_TASK,
  MEMCTX_SHARED,
  MEMCTX_MACSYSTEM,
  MEMCTX_UNKNOWN = -1,
  MEMCTX_SAME = -2
} MEMCTX;

typedef
enum tagMSHCTX
{ MSHCTX_LOCAL = 0,
  MSHCTX_NOSHAREDMEM,
  MSHCTX_DIFFERENTMACHINE,
  MSHCTX_INPROC,
  MSHCTX_CROSSCTX
} MSHCTX;

typedef
enum tagCLSCTX
{ CLSCTX_INPROC_SERVER = 1,
  CLSCTX_INPROC_HANDLER = 2,
  CLSCTX_LOCAL_SERVER = 4,
  CLSCTX_INPROC_SERVER16 = 8,
  CLSCTX_REMOTE_SERVER = 16
} CLSCTX;

typedef
enum tagMSHLFLAGS
{ MSHLFLAGS_NORMAL,
  MSHLFLAGS_TABLESTRONG,
  MSHLFLAGS_TABLEWEAK
} MSHLFLAGS;

typedef
struct _FLAGGED_WORD_BLOB
{ unsigned long fFlags;
  unsigned long clSize;
  unsigned short asData[1];
} FLAGGED_WORD_BLOB;


typedef WCHAR OLECHAR;
typedef LPWSTR LPOLESTR;
typedef LPCWSTR LPCOLESTR;
# 169 "c:\\mingw\\include\\wtypes.h" 3
typedef unsigned short VARTYPE;
typedef short VARIANT_BOOL;
typedef VARIANT_BOOL _VARIANT_BOOL;




typedef OLECHAR *BSTR;
typedef FLAGGED_WORD_BLOB *wireBSTR;
typedef BSTR *LPBSTR;
typedef LONG SCODE;
typedef void *HCONTEXT;

typedef
union tagCY
{ __extension__ struct
  { unsigned long Lo;
    long Hi;
  } ;
  LONGLONG int64;
} CY;

typedef double DATE;

typedef
struct tagBSTRBLOB
{ ULONG cbSize;
  PBYTE pData;
} BSTRBLOB, *LPBSTRBLOB;

typedef
struct tagCLIPDATA
{ ULONG cbSize;
  long ulClipFmt;
  PBYTE pClipData;
} CLIPDATA;

typedef
enum tagSTGC
{ STGC_DEFAULT,
  STGC_OVERWRITE,
  STGC_ONLYIFCURRENT,
  STGC_DANGEROUSLYCOMMITMERELYTODISKCACHE
} STGC;

typedef
enum tagSTGMOVE
{ STGMOVE_MOVE,
  STGMOVE_COPY,
  STGMOVE_SHALLOWCOPY
} STGMOVE;

enum VARENUM
{ VT_EMPTY,
  VT_NULL,
  VT_I2,
  VT_I4,
  VT_R4,
  VT_R8,
  VT_CY,
  VT_DATE,
  VT_BSTR,
  VT_DISPATCH,
  VT_ERROR,
  VT_BOOL,
  VT_VARIANT,
  VT_UNKNOWN,
  VT_DECIMAL,
  VT_I1 = 16,
  VT_UI1,
  VT_UI2,
  VT_UI4,
  VT_I8,
  VT_UI8,
  VT_INT,
  VT_UINT,
  VT_VOID,
  VT_HRESULT,
  VT_PTR,
  VT_SAFEARRAY,
  VT_CARRAY,
  VT_USERDEFINED,
  VT_LPSTR,
  VT_LPWSTR,
  VT_RECORD = 36,
  VT_INT_PTR = 37,
  VT_UINT_PTR = 38,
  VT_FILETIME = 64,
  VT_BLOB,
  VT_STREAM,
  VT_STORAGE,
  VT_STREAMED_OBJECT,
  VT_STORED_OBJECT,
  VT_BLOB_OBJECT,
  VT_CF,
  VT_CLSID,
  VT_BSTR_BLOB = 0x0FFF,
  VT_VECTOR = 0x1000,
  VT_ARRAY = 0x2000,
  VT_BYREF = 0x4000,
  VT_RESERVED = 0x8000,
  VT_ILLEGAL = 0xFFFF,
  VT_ILLEGALMASKED = 0x0FFF,
  VT_TYPEMASK = 0x0FFF
};

typedef
struct _BYTE_SIZEDARR
{ unsigned long clSize;
  byte *pData;
} BYTE_SIZEDARR;

typedef
struct _SHORT_SIZEDARR
{ unsigned long clSize;
  unsigned short *pData;
} WORD_SIZEDARR;

typedef
struct _LONG_SIZEDARR
{ unsigned long clSize;
  unsigned long *pData;
} DWORD_SIZEDARR;

typedef
struct _HYPER_SIZEDARR
{ unsigned long clSize;
  long long *pData;
} HYPER_SIZEDARR;

typedef double DOUBLE;

typedef
struct tagDEC
{ USHORT wReserved;
  __extension__ union
  { __extension__ struct
    { BYTE scale;
      BYTE sign;
    } ;
    USHORT signscale;
  } ;
  ULONG Hi32;
  __extension__ union
  { __extension__ struct
    { ULONG Lo32;
      ULONG Mid32;
    } ;
    ULONGLONG Lo64;
  } ;
} DECIMAL, *LPDECIMAL;
# 332 "c:\\mingw\\include\\wtypes.h" 3
typedef void *HMETAFILEPICT;


# 16 "c:\\mingw\\include\\unknwn.h" 2 3

void * __attribute__((__stdcall__)) MIDL_user_allocate(size_t);
void __attribute__((__stdcall__)) MIDL_user_free(void*);
extern const IID IID_IUnknown;
extern const IID IID_IClassFactory;



typedef struct IUnknown { struct IUnknownVtbl *lpVtbl; } IUnknown; typedef struct IUnknownVtbl IUnknownVtbl; struct IUnknownVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IUnknown *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IUnknown *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IUnknown *) ;
};

typedef IUnknown *LPUNKNOWN;




typedef struct IClassFactory { struct IClassFactoryVtbl *lpVtbl; } IClassFactory; typedef struct IClassFactoryVtbl IClassFactoryVtbl; struct IClassFactoryVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IClassFactory *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IClassFactory *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IClassFactory *) ;
 HRESULT(__attribute__((__stdcall__)) *CreateInstance)(IClassFactory *, LPUNKNOWN,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *LockServer)(IClassFactory *, BOOL) ;
};

typedef IClassFactory *LPCLASSFACTORY;

HRESULT __attribute__((__stdcall__)) IUnknown_QueryInterface_Proxy(IUnknown*,const IID* const,void**);
void __attribute__((__stdcall__)) IUnknown_QueryInterface_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IUnknown_AddRef_Proxy(IUnknown*);
void __attribute__((__stdcall__)) IUnknown_AddRef_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IUnknown_Release_Proxy(IUnknown*);
void __attribute__((__stdcall__)) IUnknown_Release_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IClassFactory_RemoteCreateInstance_Proxy(IClassFactory*,const IID* const,IUnknown**);
void __attribute__((__stdcall__)) IClassFactory_RemoteCreateInstance_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IClassFactory_RemoteLockServer_Proxy(IClassFactory*,BOOL);
void __attribute__((__stdcall__)) IClassFactory_RemoteLockServer_Stub(LPRPCSTUBBUFFER,LPRPCCHANNELBUFFER,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IClassFactory_CreateInstance_Proxy(IClassFactory*,IUnknown*,const IID* const,void**);
HRESULT __attribute__((__stdcall__)) IClassFactory_CreateInstance_Stub(IClassFactory*,const IID* const,IUnknown**);
HRESULT __attribute__((__stdcall__)) IClassFactory_LockServer_Proxy(IClassFactory*,BOOL);
HRESULT __attribute__((__stdcall__)) IClassFactory_LockServer_Stub(IClassFactory*,BOOL);
# 471 "c:\\mingw\\include\\commdlg.h" 2 3
# 1 "c:\\mingw\\include\\prsht.h" 1 3



       
# 5 "c:\\mingw\\include\\prsht.h" 3
# 141 "c:\\mingw\\include\\prsht.h" 3
#pragma pack(push,8)
typedef struct _PROPSHEETPAGEA {
 DWORD dwSize;
 DWORD dwFlags;
 HINSTANCE hInstance;
 __extension__ union {
  LPCSTR pszTemplate;
  LPCDLGTEMPLATE pResource;
 } ;
 __extension__ union {
  HICON hIcon;
  LPCSTR pszIcon;
 } ;
 LPCSTR pszTitle;
 DLGPROC pfnDlgProc;
 LPARAM lParam;
 UINT(__attribute__((__stdcall__)) *pfnCallback)(HWND,UINT,struct _PROPSHEETPAGEA*);
 UINT *pcRefParent;




} PROPSHEETPAGEA,*LPPROPSHEETPAGEA;
typedef const PROPSHEETPAGEA *LPCPROPSHEETPAGEA;
typedef struct _PROPSHEETPAGEW {
 DWORD dwSize;
 DWORD dwFlags;
 HINSTANCE hInstance;
 __extension__ union {
  LPCWSTR pszTemplate;
  LPCDLGTEMPLATE pResource;
 } ;
 __extension__ union {
  HICON hIcon;
  LPCWSTR pszIcon;
 } ;
 LPCWSTR pszTitle;
 DLGPROC pfnDlgProc;
 LPARAM lParam;
 UINT(__attribute__((__stdcall__)) *pfnCallback)(HWND,UINT,struct _PROPSHEETPAGEW*);
 UINT *pcRefParent;




} PROPSHEETPAGEW,*LPPROPSHEETPAGEW;
typedef const PROPSHEETPAGEW *LPCPROPSHEETPAGEW;
typedef UINT(__attribute__((__stdcall__)) *LPFNPSPCALLBACKA)(HWND,UINT,LPPROPSHEETPAGEA);
typedef UINT(__attribute__((__stdcall__)) *LPFNPSPCALLBACKW)(HWND,UINT,LPPROPSHEETPAGEW);
typedef int(__attribute__((__stdcall__)) *PFNPROPSHEETCALLBACK)(HWND,UINT,LPARAM);
typedef struct HPROPSHEETPAGE__{int i;}*HPROPSHEETPAGE;
typedef struct _PROPSHEETHEADERA {
 DWORD dwSize;
 DWORD dwFlags;
 HWND hwndParent;
 HINSTANCE hInstance;
 __extension__ union {
  HICON hIcon;
  LPCSTR pszIcon;
 };
 LPCSTR pszCaption;
 UINT nPages;
 __extension__ union {
  UINT nStartPage;
  LPCSTR pStartPage;
 };
 __extension__ union {
  LPCPROPSHEETPAGEA ppsp;
  HPROPSHEETPAGE *phpage;
 };
 PFNPROPSHEETCALLBACK pfnCallback;
# 223 "c:\\mingw\\include\\prsht.h" 3
} PROPSHEETHEADERA,*LPPROPSHEETHEADERA;
typedef const PROPSHEETHEADERA *LPCPROPSHEETHEADERA;
typedef struct _PROPSHEETHEADERW {
 DWORD dwSize;
 DWORD dwFlags;
 HWND hwndParent;
 HINSTANCE hInstance;
 __extension__ union {
  HICON hIcon;
  LPCWSTR pszIcon;
 };
 LPCWSTR pszCaption;
 UINT nPages;
 __extension__ union {
  UINT nStartPage;
  LPCWSTR pStartPage;
 };
 __extension__ union {
  LPCPROPSHEETPAGEW ppsp;
  HPROPSHEETPAGE *phpage;
 };
 PFNPROPSHEETCALLBACK pfnCallback;
# 256 "c:\\mingw\\include\\prsht.h" 3
} PROPSHEETHEADERW,*LPPROPSHEETHEADERW;
typedef const PROPSHEETHEADERW *LPCPROPSHEETHEADERW;
typedef BOOL(__attribute__((__stdcall__)) *LPFNADDPROPSHEETPAGE)(HPROPSHEETPAGE,LPARAM);
typedef BOOL(__attribute__((__stdcall__)) *LPFNADDPROPSHEETPAGES)(LPVOID,LPFNADDPROPSHEETPAGE,LPARAM);
typedef struct _PSHNOTIFY {
 NMHDR hdr;
 LPARAM lParam;
} PSHNOTIFY,*LPPSHNOTIFY;

#pragma pack(pop)

HPROPSHEETPAGE __attribute__((__stdcall__)) CreatePropertySheetPageA(LPCPROPSHEETPAGEA);
HPROPSHEETPAGE __attribute__((__stdcall__)) CreatePropertySheetPageW(LPCPROPSHEETPAGEW);
BOOL __attribute__((__stdcall__)) DestroyPropertySheetPage(HPROPSHEETPAGE);
int __attribute__((__stdcall__)) PropertySheetA(LPCPROPSHEETHEADERA);
int __attribute__((__stdcall__)) PropertySheetW(LPCPROPSHEETHEADERW);
# 472 "c:\\mingw\\include\\commdlg.h" 2 3
typedef struct tagPRINTPAGERANGE {
   DWORD nFromPage;
   DWORD nToPage;
} PRINTPAGERANGE, *LPPRINTPAGERANGE;
typedef struct tagPDEXA {
   DWORD lStructSize;
   HWND hwndOwner;
   HGLOBAL hDevMode;
   HGLOBAL hDevNames;
   HDC hDC;
   DWORD Flags;
   DWORD Flags2;
   DWORD ExclusionFlags;
   DWORD nPageRanges;
   DWORD nMaxPageRanges;
   LPPRINTPAGERANGE lpPageRanges;
   DWORD nMinPage;
   DWORD nMaxPage;
   DWORD nCopies;
   HINSTANCE hInstance;
   LPCSTR lpPrintTemplateName;
   LPUNKNOWN lpCallback;
   DWORD nPropertyPages;
   HPROPSHEETPAGE *lphPropertyPages;
   DWORD nStartPage;
   DWORD dwResultAction;
} PRINTDLGEXA, *LPPRINTDLGEXA;
typedef struct tagPDEXW {
   DWORD lStructSize;
   HWND hwndOwner;
   HGLOBAL hDevMode;
   HGLOBAL hDevNames;
   HDC hDC;
   DWORD Flags;
   DWORD Flags2;
   DWORD ExclusionFlags;
   DWORD nPageRanges;
   DWORD nMaxPageRanges;
   LPPRINTPAGERANGE lpPageRanges;
   DWORD nMinPage;
   DWORD nMaxPage;
   DWORD nCopies;
   HINSTANCE hInstance;
   LPCWSTR lpPrintTemplateName;
   LPUNKNOWN lpCallback;
   DWORD nPropertyPages;
   HPROPSHEETPAGE *lphPropertyPages;
   DWORD nStartPage;
   DWORD dwResultAction;
} PRINTDLGEXW, *LPPRINTDLGEXW;


BOOL __attribute__((__stdcall__)) ChooseColorA(LPCHOOSECOLORA);
BOOL __attribute__((__stdcall__)) ChooseColorW(LPCHOOSECOLORW);
BOOL __attribute__((__stdcall__)) ChooseFontA(LPCHOOSEFONTA);
BOOL __attribute__((__stdcall__)) ChooseFontW(LPCHOOSEFONTW);
DWORD __attribute__((__stdcall__)) CommDlgExtendedError(void);
HWND __attribute__((__stdcall__)) FindTextA(LPFINDREPLACEA);
HWND __attribute__((__stdcall__)) FindTextW(LPFINDREPLACEW);
short __attribute__((__stdcall__)) GetFileTitleA(LPCSTR,LPSTR,WORD);
short __attribute__((__stdcall__)) GetFileTitleW(LPCWSTR,LPWSTR,WORD);
BOOL __attribute__((__stdcall__)) GetOpenFileNameA(LPOPENFILENAMEA);
BOOL __attribute__((__stdcall__)) GetOpenFileNameW(LPOPENFILENAMEW);
BOOL __attribute__((__stdcall__)) GetSaveFileNameA(LPOPENFILENAMEA);
BOOL __attribute__((__stdcall__)) GetSaveFileNameW(LPOPENFILENAMEW);
BOOL __attribute__((__stdcall__)) PageSetupDlgA(LPPAGESETUPDLGA);
BOOL __attribute__((__stdcall__)) PageSetupDlgW(LPPAGESETUPDLGW);
BOOL __attribute__((__stdcall__)) PrintDlgA(LPPRINTDLGA);
BOOL __attribute__((__stdcall__)) PrintDlgW(LPPRINTDLGW);
HWND __attribute__((__stdcall__)) ReplaceTextA(LPFINDREPLACEA);
HWND __attribute__((__stdcall__)) ReplaceTextW(LPFINDREPLACEW);

HRESULT __attribute__((__stdcall__)) PrintDlgExA(LPPRINTDLGEXA);
HRESULT __attribute__((__stdcall__)) PrintDlgExW(LPPRINTDLGEXW);
# 584 "c:\\mingw\\include\\commdlg.h" 3
typedef CHOOSECOLORA CHOOSECOLOR,*LPCHOOSECOLOR;
typedef CHOOSEFONTA CHOOSEFONT,*LPCHOOSEFONT;
typedef FINDREPLACEA FINDREPLACE,*LPFINDREPLACE;
typedef OPENFILENAMEA OPENFILENAME,*LPOPENFILENAME;
typedef OFNOTIFYA OFNOTIFY,*LPOFNOTIFY;
typedef PAGESETUPDLGA PAGESETUPDLG,*LPPAGESETUPDLG;
typedef PRINTDLGA PRINTDLG,*LPPRINTDLG;
# 601 "c:\\mingw\\include\\commdlg.h" 3
typedef PRINTDLGEXA PRINTDLGEX, *LPPRINTDLGEX;



#pragma pack(pop)
# 69 "c:\\mingw\\include\\windows.h" 2 3
# 1 "c:\\mingw\\include\\winspool.h" 1 3



       
# 5 "c:\\mingw\\include\\winspool.h" 3
# 237 "c:\\mingw\\include\\winspool.h" 3
typedef struct _ADDJOB_INFO_1A {
 LPSTR Path;
 DWORD JobId;
} ADDJOB_INFO_1A,*PADDJOB_INFO_1A,*LPADDJOB_INFO_1A;
typedef struct _ADDJOB_INFO_1W {
 LPWSTR Path;
 DWORD JobId;
} ADDJOB_INFO_1W,*PADDJOB_INFO_1W,*LPADDJOB_INFO_1W;
typedef struct _DATATYPES_INFO_1A{LPSTR pName;} DATATYPES_INFO_1A,*PDATATYPES_INFO_1A,*LPDATATYPES_INFO_1A;
typedef struct _DATATYPES_INFO_1W{LPWSTR pName;} DATATYPES_INFO_1W,*PDATATYPES_INFO_1W,*LPDATATYPES_INFO_1W;
typedef struct _JOB_INFO_1A {
 DWORD JobId;
 LPSTR pPrinterName;
 LPSTR pMachineName;
 LPSTR pUserName;
 LPSTR pDocument;
 LPSTR pDatatype;
 LPSTR pStatus;
 DWORD Status;
 DWORD Priority;
 DWORD Position;
 DWORD TotalPages;
 DWORD PagesPrinted;
 SYSTEMTIME Submitted;
} JOB_INFO_1A,*PJOB_INFO_1A,*LPJOB_INFO_1A;
typedef struct _JOB_INFO_1W {
 DWORD JobId;
 LPWSTR pPrinterName;
 LPWSTR pMachineName;
 LPWSTR pUserName;
 LPWSTR pDocument;
 LPWSTR pDatatype;
 LPWSTR pStatus;
 DWORD Status;
 DWORD Priority;
 DWORD Position;
 DWORD TotalPages;
 DWORD PagesPrinted;
 SYSTEMTIME Submitted;
} JOB_INFO_1W,*PJOB_INFO_1W,*LPJOB_INFO_1W;
typedef struct _JOB_INFO_2A {
 DWORD JobId;
 LPSTR pPrinterName;
 LPSTR pMachineName;
 LPSTR pUserName;
 LPSTR pDocument;
 LPSTR pNotifyName;
 LPSTR pDatatype;
 LPSTR pPrintProcessor;
 LPSTR pParameters;
 LPSTR pDriverName;
 LPDEVMODEA pDevMode;
 LPSTR pStatus;
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
 DWORD Status;
 DWORD Priority;
 DWORD Position;
 DWORD StartTime;
 DWORD UntilTime;
 DWORD TotalPages;
 DWORD Size;
 SYSTEMTIME Submitted;
 DWORD Time;
 DWORD PagesPrinted;
} JOB_INFO_2A,*PJOB_INFO_2A,*LPJOB_INFO_2A;
typedef struct _JOB_INFO_2W {
 DWORD JobId;
 LPWSTR pPrinterName;
 LPWSTR pMachineName;
 LPWSTR pUserName;
 LPWSTR pDocument;
 LPWSTR pNotifyName;
 LPWSTR pDatatype;
 LPWSTR pPrintProcessor;
 LPWSTR pParameters;
 LPWSTR pDriverName;
 LPDEVMODEW pDevMode;
 LPWSTR pStatus;
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
 DWORD Status;
 DWORD Priority;
 DWORD Position;
 DWORD StartTime;
 DWORD UntilTime;
 DWORD TotalPages;
 DWORD Size;
 SYSTEMTIME Submitted;
 DWORD Time;
 DWORD PagesPrinted;
} JOB_INFO_2W,*PJOB_INFO_2W,*LPJOB_INFO_2W;
typedef struct _JOB_INFO_3 {
 DWORD JobId;
 DWORD NextJobId;
 DWORD Reserved;
} JOB_INFO_3,*PJOB_INFO_3,*LPJOB_INFO_3;
typedef struct _DOC_INFO_1A {
 LPSTR pDocName;
 LPSTR pOutputFile;
 LPSTR pDatatype;
} DOC_INFO_1A,*PDOC_INFO_1A,*LPDOC_INFO_1A;
typedef struct _DOC_INFO_1W {
 LPWSTR pDocName;
 LPWSTR pOutputFile;
 LPWSTR pDatatype;
} DOC_INFO_1W,*PDOC_INFO_1W,*LPDOC_INFO_1W;
typedef struct _DOC_INFO_2A {
 LPSTR pDocName;
 LPSTR pOutputFile;
 LPSTR pDatatype;
 DWORD dwMode;
 DWORD JobId;
} DOC_INFO_2A,*PDOC_INFO_2A,*LPDOC_INFO_2A;
typedef struct _DOC_INFO_2W {
 LPWSTR pDocName;
 LPWSTR pOutputFile;
 LPWSTR pDatatype;
 DWORD dwMode;
 DWORD JobId;
} DOC_INFO_2W,*PDOC_INFO_2W,*LPDOC_INFO_2W;
typedef struct _DRIVER_INFO_1A {LPSTR pName;} DRIVER_INFO_1A,*PDRIVER_INFO_1A,*LPDRIVER_INFO_1A;
typedef struct _DRIVER_INFO_1W {LPWSTR pName;} DRIVER_INFO_1W,*PDRIVER_INFO_1W,*LPDRIVER_INFO_1W;
typedef struct _DRIVER_INFO_2A {
 DWORD cVersion;
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDriverPath;
 LPSTR pDataFile;
 LPSTR pConfigFile;
} DRIVER_INFO_2A,*PDRIVER_INFO_2A,*LPDRIVER_INFO_2A;
typedef struct _DRIVER_INFO_2W {
 DWORD cVersion;
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDriverPath;
 LPWSTR pDataFile;
 LPWSTR pConfigFile;
} DRIVER_INFO_2W,*PDRIVER_INFO_2W,*LPDRIVER_INFO_2W;
typedef struct _DRIVER_INFO_3A {
 DWORD cVersion;
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDriverPath;
 LPSTR pDataFile;
 LPSTR pConfigFile;
 LPSTR pHelpFile;
 LPSTR pDependentFiles;
 LPSTR pMonitorName;
 LPSTR pDefaultDataType;
} DRIVER_INFO_3A,*PDRIVER_INFO_3A,*LPDRIVER_INFO_3A;
typedef struct _DRIVER_INFO_3W {
 DWORD cVersion;
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDriverPath;
 LPWSTR pDataFile;
 LPWSTR pConfigFile;
 LPWSTR pHelpFile;
 LPWSTR pDependentFiles;
 LPWSTR pMonitorName;
 LPWSTR pDefaultDataType;
} DRIVER_INFO_3W,*PDRIVER_INFO_3W,*LPDRIVER_INFO_3W;

typedef struct _DRIVER_INFO_4A {
 DWORD cVersion;
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDriverPath;
 LPSTR pDataFile;
 LPSTR pConfigFile;
 LPSTR pHelpFile;
 LPSTR pDependentFiles;
 LPSTR pMonitorName;
 LPSTR pDefaultDataType;
 LPSTR pszzPreviousNames;
} DRIVER_INFO_4A,*PDRIVER_INFO_4A,*LPDRIVER_INFO_4A;
typedef struct _DRIVER_INFO_4W {
 DWORD cVersion;
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDriverPath;
 LPWSTR pDataFile;
 LPWSTR pConfigFile;
 LPWSTR pHelpFile;
 LPWSTR pDependentFiles;
 LPWSTR pMonitorName;
 LPWSTR pDefaultDataType;
 LPWSTR pszzPreviousNames;
} DRIVER_INFO_4W,*PDRIVER_INFO_4W,*LPDRIVER_INFO_4W;
typedef struct _DRIVER_INFO_5A {
 DWORD cVersion;
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDriverPath;
 LPSTR pDataFile;
 LPSTR pConfigFile;
 DWORD dwDriverAttributes;
 DWORD dwConfigVersion;
 DWORD dwDriverVersion;
} DRIVER_INFO_5A,*PDRIVER_INFO_5A,*LPDRIVER_INFO_5A;
typedef struct _DRIVER_INFO_5W {
 DWORD cVersion;
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDriverPath;
 LPWSTR pDataFile;
 LPWSTR pConfigFile;
 DWORD dwDriverAttributes;
 DWORD dwConfigVersion;
 DWORD dwDriverVersion;
} DRIVER_INFO_5W,*PDRIVER_INFO_5W,*LPDRIVER_INFO_5W;
typedef struct _DRIVER_INFO_6A {
 DWORD cVersion;
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDriverPath;
 LPSTR pDataFile;
 LPSTR pConfigFile;
 LPSTR pHelpFile;
 LPSTR pDependentFiles;
 LPSTR pMonitorName;
 LPSTR pDefaultDataType;
 LPSTR pszzPreviousNames;
 FILETIME ftDriverDate;
 DWORDLONG dwlDriverVersion;
 LPSTR pszMfgName;
 LPSTR pszOEMUrl;
 LPSTR pszHardwareID;
 LPSTR pszProvider;
} DRIVER_INFO_6A,*PDRIVER_INFO_6A,*LPDRIVER_INFO_6A;
typedef struct _DRIVER_INFO_6W {
 DWORD cVersion;
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDriverPath;
 LPWSTR pDataFile;
 LPWSTR pConfigFile;
 LPWSTR pHelpFile;
 LPWSTR pDependentFiles;
 LPWSTR pMonitorName;
 LPWSTR pDefaultDataType;
 LPWSTR pszzPreviousNames;
 FILETIME ftDriverDate;
 DWORDLONG dwlDriverVersion;
 LPWSTR pszMfgName;
 LPWSTR pszOEMUrl;
 LPWSTR pszHardwareID;
 LPWSTR pszProvider;
} DRIVER_INFO_6W,*PDRIVER_INFO_6W,*LPDRIVER_INFO_6W;

typedef struct _MONITOR_INFO_1A{LPSTR pName;} MONITOR_INFO_1A,*PMONITOR_INFO_1A,*LPMONITOR_INFO_1A;
typedef struct _MONITOR_INFO_1W{LPWSTR pName;} MONITOR_INFO_1W,*PMONITOR_INFO_1W,*LPMONITOR_INFO_1W;
typedef struct _PORT_INFO_1A {LPSTR pName;} PORT_INFO_1A,*PPORT_INFO_1A,*LPPORT_INFO_1A;
typedef struct _PORT_INFO_1W {LPWSTR pName;} PORT_INFO_1W,*PPORT_INFO_1W,*LPPORT_INFO_1W;
typedef struct _MONITOR_INFO_2A{
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDLLName;
} MONITOR_INFO_2A,*PMONITOR_INFO_2A,*LPMONITOR_INFO_2A;
typedef struct _MONITOR_INFO_2W{
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDLLName;
} MONITOR_INFO_2W,*PMONITOR_INFO_2W,*LPMONITOR_INFO_2W;
typedef struct _PORT_INFO_2A {
 LPSTR pPortName;
 LPSTR pMonitorName;
 LPSTR pDescription;
 DWORD fPortType;
 DWORD Reserved;
} PORT_INFO_2A,*PPORT_INFO_2A,*LPPORT_INFO_2A;
typedef struct _PORT_INFO_2W {
 LPWSTR pPortName;
 LPWSTR pMonitorName;
 LPWSTR pDescription;
 DWORD fPortType;
 DWORD Reserved;
} PORT_INFO_2W,*PPORT_INFO_2W,*LPPORT_INFO_2W;
typedef struct _PORT_INFO_3A {
 DWORD dwStatus;
 LPSTR pszStatus;
 DWORD dwSeverity;
} PORT_INFO_3A,*PPORT_INFO_3A,*LPPORT_INFO_3A;
typedef struct _PORT_INFO_3W {
 DWORD dwStatus;
 LPWSTR pszStatus;
 DWORD dwSeverity;
} PORT_INFO_3W,*PPORT_INFO_3W,*LPPORT_INFO_3W;

typedef struct _PRINTER_ENUM_VALUESA {
 LPSTR pValueName;
 DWORD cbValueName;
 DWORD dwType;
 LPBYTE pData;
 DWORD cbData;
} PRINTER_ENUM_VALUESA,*PPRINTER_ENUM_VALUESA,*LPRINTER_ENUM_VALUESA;
typedef struct _PRINTER_ENUM_VALUESW {
 LPWSTR pValueName;
 DWORD cbValueName;
 DWORD dwType;
 LPBYTE pData;
 DWORD cbData;
} PRINTER_ENUM_VALUESW,*PPRINTER_ENUM_VALUESW,*LPRINTER_ENUM_VALUESW;

typedef struct _PRINTER_INFO_1A {
 DWORD Flags;
 LPSTR pDescription;
 LPSTR pName;
 LPSTR pComment;
} PRINTER_INFO_1A,*PPRINTER_INFO_1A,*LPPRINTER_INFO_1A;
typedef struct _PRINTER_INFO_1W {
 DWORD Flags;
 LPWSTR pDescription;
 LPWSTR pName;
 LPWSTR pComment;
} PRINTER_INFO_1W,*PPRINTER_INFO_1W,*LPPRINTER_INFO_1W;
typedef struct _PRINTER_INFO_2A {
 LPSTR pServerName;
 LPSTR pPrinterName;
 LPSTR pShareName;
 LPSTR pPortName;
 LPSTR pDriverName;
 LPSTR pComment;
 LPSTR pLocation;
 LPDEVMODEA pDevMode;
 LPSTR pSepFile;
 LPSTR pPrintProcessor;
 LPSTR pDatatype;
 LPSTR pParameters;
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
 DWORD Attributes;
 DWORD Priority;
 DWORD DefaultPriority;
 DWORD StartTime;
 DWORD UntilTime;
 DWORD Status;
 DWORD cJobs;
 DWORD AveragePPM;
} PRINTER_INFO_2A,*PPRINTER_INFO_2A,*LPPRINTER_INFO_2A;
typedef struct _PRINTER_INFO_2W {
 LPWSTR pServerName;
 LPWSTR pPrinterName;
 LPWSTR pShareName;
 LPWSTR pPortName;
 LPWSTR pDriverName;
 LPWSTR pComment;
 LPWSTR pLocation;
 LPDEVMODEW pDevMode;
 LPWSTR pSepFile;
 LPWSTR pPrintProcessor;
 LPWSTR pDatatype;
 LPWSTR pParameters;
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
 DWORD Attributes;
 DWORD Priority;
 DWORD DefaultPriority;
 DWORD StartTime;
 DWORD UntilTime;
 DWORD Status;
 DWORD cJobs;
 DWORD AveragePPM;
} PRINTER_INFO_2W,*PPRINTER_INFO_2W,*LPPRINTER_INFO_2W;
typedef struct _PRINTER_INFO_3 {
 PSECURITY_DESCRIPTOR pSecurityDescriptor;
} PRINTER_INFO_3,*PPRINTER_INFO_3,*LPPRINTER_INFO_3;
typedef struct _PRINTER_INFO_4A {
 LPSTR pPrinterName;
 LPSTR pServerName;
 DWORD Attributes;
} PRINTER_INFO_4A,*PPRINTER_INFO_4A,*LPPRINTER_INFO_4A;
typedef struct _PRINTER_INFO_4W {
 LPWSTR pPrinterName;
 LPWSTR pServerName;
 DWORD Attributes;
} PRINTER_INFO_4W,*PPRINTER_INFO_4W,*LPPRINTER_INFO_4W;
typedef struct _PRINTER_INFO_5A {
 LPSTR pPrinterName;
 LPSTR pPortName;
 DWORD Attributes;
 DWORD DeviceNotSelectedTimeout;
 DWORD TransmissionRetryTimeout;
} PRINTER_INFO_5A,*PPRINTER_INFO_5A,*LPPRINTER_INFO_5A;
typedef struct _PRINTER_INFO_5W {
 LPWSTR pPrinterName;
 LPWSTR pPortName;
 DWORD Attributes;
 DWORD DeviceNotSelectedTimeout;
 DWORD TransmissionRetryTimeout;
} PRINTER_INFO_5W,*PPRINTER_INFO_5W,*LPPRINTER_INFO_5W;
typedef struct _PRINTER_INFO_6 {
 DWORD dwStatus;
} PRINTER_INFO_6,*PPRINTER_INFO_6,*LPPRINTER_INFO_6;

typedef struct _PRINTER_INFO_7A {
 LPWSTR pszObjectGUID;
 DWORD dwAction;
} PRINTER_INFO_7A,*PPRINTER_INFO_7A,*LPPRINTER_INFO_7A;
typedef struct _PRINTER_INFO_7W {
 LPWSTR pszObjectGUID;
 DWORD dwAction;
} PRINTER_INFO_7W,*PPRINTER_INFO_7W,*LPPRINTER_INFO_7W;
typedef struct _PRINTER_INFO_8 {
 LPDEVMODE pDevMode;
} PRINTER_INFO_8,*PPRINTER_INFO_8,*LPPRINTER_INFO_8;
typedef struct _PRINTER_INFO_9 {
 LPDEVMODE pDevMode;
} PRINTER_INFO_9,*PPRINTER_INFO_9,*LPPRINTER_INFO_9;

typedef struct _PRINTPROCESSOR_INFO_1A {LPSTR pName;} PRINTPROCESSOR_INFO_1A,*PPRINTPROCESSOR_INFO_1A,*LPPRINTPROCESSOR_INFO_1A;
typedef struct _PRINTPROCESSOR_INFO_1W {LPWSTR pName;} PRINTPROCESSOR_INFO_1W,*PPRINTPROCESSOR_INFO_1W,*LPPRINTPROCESSOR_INFO_1W;
typedef struct _PRINTER_NOTIFY_INFO_DATA {
 WORD Type;
 WORD Field;
 DWORD Reserved;
 DWORD Id;
 union {
  DWORD adwData[2];
  struct {
   DWORD cbBuf;
   PVOID pBuf;
  } Data;
 } NotifyData;
} PRINTER_NOTIFY_INFO_DATA,*PPRINTER_NOTIFY_INFO_DATA,*LPPRINTER_NOTIFY_INFO_DATA;
typedef struct _PRINTER_NOTIFY_INFO {
 DWORD Version;
 DWORD Flags;
 DWORD Count;
 PRINTER_NOTIFY_INFO_DATA aData[1];
} PRINTER_NOTIFY_INFO,*PPRINTER_NOTIFY_INFO,*LPPRINTER_NOTIFY_INFO;
typedef struct _FORM_INFO_1A {
 DWORD Flags;
 LPSTR pName;
 SIZEL Size;
 RECTL ImageableArea;
} FORM_INFO_1A,*PFORM_INFO_1A,*LPFORM_INFO_1A;
typedef struct _FORM_INFO_1W {
 DWORD Flags;
 LPWSTR pName;
 SIZEL Size;
 RECTL ImageableArea;
} FORM_INFO_1W,*PFORM_INFO_1W,*LPFORM_INFO_1W;
typedef struct _PRINTER_DEFAULTSA {
 LPSTR pDatatype;
 LPDEVMODE pDevMode;
 ACCESS_MASK DesiredAccess;
} PRINTER_DEFAULTSA,*PPRINTER_DEFAULTSA,*LPPRINTER_DEFAULTSA;
typedef struct _PRINTER_DEFAULTSW {
 LPWSTR pDatatype;
 LPDEVMODE pDevMode;
 ACCESS_MASK DesiredAccess;
} PRINTER_DEFAULTSW,*PPRINTER_DEFAULTSW,*LPPRINTER_DEFAULTSW;

typedef struct _PRINTPROCESSOR_CAPS_1 {
 DWORD dwLevel;
 DWORD dwNupOptions;
 DWORD dwPageOrderFlags;
 DWORD dwNumberOfCopies;
} PRINTPROCESSOR_CAPS_1,*PPRINTPROCESSOR_CAPS_1,*LPPRINTPROCESSOR_CAPS_1;

typedef struct _PROVIDOR_INFO_1A {
 LPSTR pName;
 LPSTR pEnvironment;
 LPSTR pDLLName;
} PROVIDOR_INFO_1A,*PPROVIDOR_INFO_1A,*LPPROVIDOR_INFO_1A;
typedef struct _PROVIDOR_INFO_1W {
 LPWSTR pName;
 LPWSTR pEnvironment;
 LPWSTR pDLLName;
} PROVIDOR_INFO_1W,*PPROVIDOR_INFO_1W,*LPPROVIDOR_INFO_1W;
typedef struct _PROVIDOR_INFO_2A {
 LPSTR pOrder;
} PROVIDOR_INFO_2A,*PPROVIDOR_INFO_2A,*LPROVIDOR_INFO_2A;
typedef struct _PROVIDOR_INFO_2W {
 LPWSTR pOrder;
} PROVIDOR_INFO_2W,*PPROVIDOR_INFO_2W,*LPROVIDOR_INFO_2W;

BOOL __attribute__((__stdcall__)) AbortPrinter(HANDLE);
BOOL __attribute__((__stdcall__)) AddFormA(HANDLE,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddFormW(HANDLE,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddJobA(HANDLE,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) AddJobW(HANDLE,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) AddMonitorA(LPSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddMonitorW(LPWSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPortA(LPSTR,HWND,LPSTR);
BOOL __attribute__((__stdcall__)) AddPortW(LPWSTR,HWND,LPWSTR);
HANDLE __attribute__((__stdcall__)) AddPrinterA(LPSTR,DWORD,PBYTE);
HANDLE __attribute__((__stdcall__)) AddPrinterW(LPWSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPrinterConnectionA(LPSTR);
BOOL __attribute__((__stdcall__)) AddPrinterConnectionW(LPWSTR);
BOOL __attribute__((__stdcall__)) AddPrinterDriverA(LPSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPrinterDriverW(LPWSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPrintProcessorA(LPSTR,LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) AddPrintProcessorW(LPWSTR,LPWSTR,LPWSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) AddPrintProvidorA(LPSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) AddPrintProvidorW(LPWSTR,DWORD,PBYTE);
LONG __attribute__((__stdcall__)) AdvancedDocumentPropertiesA(HWND,HANDLE,LPSTR,PDEVMODE,PDEVMODEA);
LONG __attribute__((__stdcall__)) AdvancedDocumentPropertiesW(HWND,HANDLE,LPWSTR,PDEVMODE,PDEVMODEW);
BOOL __attribute__((__stdcall__)) ClosePrinter(HANDLE);
BOOL __attribute__((__stdcall__)) ConfigurePortA(LPSTR,HWND,LPSTR);
BOOL __attribute__((__stdcall__)) ConfigurePortW(LPWSTR,HWND,LPWSTR);
HANDLE __attribute__((__stdcall__)) ConnectToPrinterDlg(HWND,DWORD);
BOOL __attribute__((__stdcall__)) DeleteFormA(HANDLE,LPSTR);
BOOL __attribute__((__stdcall__)) DeleteFormW(HANDLE,LPWSTR);
BOOL __attribute__((__stdcall__)) DeleteMonitorA(LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) DeleteMonitorW(LPWSTR,LPWSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePortA(LPSTR,HWND,LPSTR);
BOOL __attribute__((__stdcall__)) DeletePortW(LPWSTR,HWND,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePrinter(HANDLE);
BOOL __attribute__((__stdcall__)) DeletePrinterConnectionA(LPSTR);
BOOL __attribute__((__stdcall__)) DeletePrinterConnectionW(LPWSTR);
DWORD __attribute__((__stdcall__)) DeletePrinterDataA(HANDLE,LPSTR);
DWORD __attribute__((__stdcall__)) DeletePrinterDataW(HANDLE,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePrinterDriverA(LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) DeletePrinterDriverW(LPWSTR,LPWSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePrintProcessorA(LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) DeletePrintProcessorW(LPWSTR,LPWSTR,LPWSTR);
BOOL __attribute__((__stdcall__)) DeletePrintProvidorA(LPSTR,LPSTR,LPSTR);
BOOL __attribute__((__stdcall__)) DeletePrintProvidorW(LPWSTR,LPWSTR,LPWSTR);
LONG __attribute__((__stdcall__)) DocumentPropertiesA(HWND,HANDLE,LPSTR,PDEVMODEA,PDEVMODEA,DWORD);
LONG __attribute__((__stdcall__)) DocumentPropertiesW(HWND,HANDLE,LPWSTR,PDEVMODEW,PDEVMODEW,DWORD);
BOOL __attribute__((__stdcall__)) EndDocPrinter(HANDLE);
BOOL __attribute__((__stdcall__)) EndPagePrinter(HANDLE);
BOOL __attribute__((__stdcall__)) EnumFormsA(HANDLE,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumFormsW(HANDLE,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumJobsA(HANDLE,DWORD,DWORD,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumJobsW(HANDLE,DWORD,DWORD,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumMonitorsA(LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumMonitorsW(LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPortsA(LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPortsW(LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
DWORD __attribute__((__stdcall__)) EnumPrinterDataA(HANDLE,DWORD,LPSTR,DWORD,PDWORD,PDWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) EnumPrinterDataW(HANDLE,DWORD,LPWSTR,DWORD,PDWORD,PDWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrinterDriversA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrinterDriversW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintersA(DWORD,LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintersW(DWORD,LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintProcessorDatatypesA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintProcessorDatatypesW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintProcessorsA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) EnumPrintProcessorsW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD,PDWORD);
BOOL __attribute__((__stdcall__)) FindClosePrinterChangeNotification(HANDLE);
HANDLE __attribute__((__stdcall__)) FindFirstPrinterChangeNotification(HANDLE,DWORD,DWORD,PVOID);
HANDLE __attribute__((__stdcall__)) FindNextPrinterChangeNotification(HANDLE,PDWORD,PVOID,PVOID*);
BOOL __attribute__((__stdcall__)) FreePrinterNotifyInfo(PPRINTER_NOTIFY_INFO);

BOOL __attribute__((__stdcall__)) GetDefaultPrinterA(LPSTR,LPDWORD);
BOOL __attribute__((__stdcall__)) GetDefaultPrinterW(LPWSTR,LPDWORD);

BOOL __attribute__((__stdcall__)) GetFormA(HANDLE,LPSTR,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetFormW(HANDLE,LPWSTR,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetJobA(HANDLE,DWORD,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetJobW(HANDLE,DWORD,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetPrinterA(HANDLE,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) GetPrinterW(HANDLE,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDataA(HANDLE,LPSTR,PDWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDataW(HANDLE,LPWSTR,PDWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDriverA(HANDLE,LPSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDriverW(HANDLE,LPWSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDriverDirectoryA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrinterDriverDirectoryW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrintProcessorDirectoryA(LPSTR,LPSTR,DWORD,PBYTE,DWORD,PDWORD);
DWORD __attribute__((__stdcall__)) GetPrintProcessorDirectoryW(LPWSTR,LPWSTR,DWORD,PBYTE,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) OpenPrinterA(LPSTR,PHANDLE,LPPRINTER_DEFAULTSA);
BOOL __attribute__((__stdcall__)) OpenPrinterW(LPWSTR,PHANDLE,LPPRINTER_DEFAULTSW);
DWORD __attribute__((__stdcall__)) PrinterMessageBoxA(HANDLE,DWORD,HWND,LPSTR,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) PrinterMessageBoxW(HANDLE,DWORD,HWND,LPWSTR,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) PrinterProperties(HWND,HANDLE);
BOOL __attribute__((__stdcall__)) ReadPrinter(HANDLE,PVOID,DWORD,PDWORD);
BOOL __attribute__((__stdcall__)) ResetPrinterA(HANDLE,LPPRINTER_DEFAULTSA);
BOOL __attribute__((__stdcall__)) ResetPrinterW(HANDLE,LPPRINTER_DEFAULTSW);
BOOL __attribute__((__stdcall__)) ScheduleJob(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) SetFormA(HANDLE,LPSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) SetFormW(HANDLE,LPWSTR,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) SetJobA(HANDLE,DWORD,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetJobW(HANDLE,DWORD,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrinterA(HANDLE,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrinterW(HANDLE,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrinterDataA(HANDLE,LPSTR,DWORD,PBYTE,DWORD);
BOOL __attribute__((__stdcall__)) SetPrinterDataW(HANDLE,LPWSTR,DWORD,PBYTE,DWORD);
DWORD __attribute__((__stdcall__)) StartDocPrinterA(HANDLE,DWORD,PBYTE);
DWORD __attribute__((__stdcall__)) StartDocPrinterW(HANDLE,DWORD,PBYTE);
BOOL __attribute__((__stdcall__)) StartPagePrinter(HANDLE);
DWORD __attribute__((__stdcall__)) WaitForPrinterChange(HANDLE,DWORD);
BOOL __attribute__((__stdcall__)) WritePrinter(HANDLE,PVOID,DWORD,PDWORD);
# 900 "c:\\mingw\\include\\winspool.h" 3
typedef JOB_INFO_1A JOB_INFO_1,*PJOB_INFO_1,*LPJOB_INFO_1;
typedef JOB_INFO_2A JOB_INFO_2,*PJOB_INFO_2,*LPJOB_INFO_2;
typedef ADDJOB_INFO_1A ADDJOB_INFO_1,*PADDJOB_INFO_1,*LPADDJOB_INFO_1;
typedef DATATYPES_INFO_1A DATATYPES_INFO_1,*PDATATYPES_INFO_1,*LPDATATYPES_INFO_1;
typedef MONITOR_INFO_1A MONITOR_INFO_1,*PMONITOR_INFO_1,*LPMONITOR_INFO_1;
typedef MONITOR_INFO_2A MONITOR_INFO_2,*PMONITOR_INFO_2,*LPMONITOR_INFO_2;
typedef DOC_INFO_1A DOC_INFO_1,*PDOC_INFO_1,*LPDOC_INFO_1;
typedef DOC_INFO_2A DOC_INFO_2,*PDOC_INFO_2,*LPDOC_INFO_2;
typedef PORT_INFO_1A PORT_INFO_1,*PPORT_INFO_1,*LPPORT_INFO_1;
typedef PORT_INFO_2A PORT_INFO_2,*PPORT_INFO_2,*LPPORT_INFO_2;
typedef PORT_INFO_3A PORT_INFO_3,*PPORT_INFO_3,*LPPORT_INFO_3;
typedef DRIVER_INFO_1A DRIVER_INFO_1,*PDRIVER_INFO_1,*LPDRIVER_INFO_1;
typedef DRIVER_INFO_2A DRIVER_INFO_2,*PDRIVER_INFO_2,*LPDRIVER_INFO_2;
typedef DRIVER_INFO_3A DRIVER_INFO_3,*PDRIVER_INFO_3,*LPDRIVER_INFO_3;

typedef DRIVER_INFO_4A DRIVER_INFO_4,*PDRIVER_INFO_4,*LPDRIVER_INFO_4;
typedef DRIVER_INFO_5A DRIVER_INFO_5,*PDRIVER_INFO_5,*LPDRIVER_INFO_5;
typedef DRIVER_INFO_6A DRIVER_INFO_6,*PDRIVER_INFO_6,*LPDRIVER_INFO_6;
typedef PRINTER_ENUM_VALUESA PRINTER_ENUM_VALUES,*PPRINTER_ENUM_VALUES,*LPRINTER_ENUM_VALUES;

typedef PRINTER_INFO_1A PRINTER_INFO_1,*PPRINTER_INFO_1,*LPPRINTER_INFO_1;
typedef PRINTER_INFO_2A PRINTER_INFO_2,*PPRINTER_INFO_2,*LPPRINTER_INFO_2;
typedef PRINTER_INFO_4A PRINTER_INFO_4,*PPRINTER_INFO_4,*LPPRINTER_INFO_4;
typedef PRINTER_INFO_5A PRINTER_INFO_5,*PPRINTER_INFO_5,*LPPRINTER_INFO_5;

typedef PRINTER_INFO_7A PRINTER_INFO_7,*PPRINTER_INFO_7,*LPPRINTER_INFO_7;

typedef PRINTPROCESSOR_INFO_1A PRINTPROCESSOR_INFO_1,*PPRINTPROCESSOR_INFO_1,*LPPRINTPROCESSOR_INFO_1;
typedef FORM_INFO_1A FORM_INFO_1,*PFORM_INFO_1,*LPFORM_INFO_1;
typedef PRINTER_DEFAULTSA PRINTER_DEFAULTS,*PPRINTER_DEFAULTS,*LPPRINTER_DEFAULTS;
typedef PROVIDOR_INFO_1A PROVIDOR_INFO_1,*PPROVIDOR_INFO_1,*LPROVIDOR_INFO_1;
typedef PROVIDOR_INFO_2A PROVIDOR_INFO_2,*PPROVIDOR_INFO_2,*LPROVIDOR_INFO_2;
# 70 "c:\\mingw\\include\\windows.h" 2 3
# 85 "c:\\mingw\\include\\windows.h" 3
# 1 "c:\\mingw\\include\\_winsock.h" 1 3
# 36 "c:\\mingw\\include\\_winsock.h" 3
       
# 37 "c:\\mingw\\include\\_winsock.h" 3
# 50 "c:\\mingw\\include\\_winsock.h" 3
# 1 "c:\\mingw\\include\\winsock2.h" 1 3
# 42 "c:\\mingw\\include\\winsock2.h" 3
       
# 43 "c:\\mingw\\include\\winsock2.h" 3
# 62 "c:\\mingw\\include\\winsock2.h" 3
# 1 "c:\\mingw\\include\\winsock.h" 1 3
# 46 "c:\\mingw\\include\\winsock.h" 3
       
# 47 "c:\\mingw\\include\\winsock.h" 3







# 1 "c:\\mingw\\include\\sys\\bsdtypes.h" 1 3
# 35 "c:\\mingw\\include\\sys\\bsdtypes.h" 3
        
# 36 "c:\\mingw\\include\\sys\\bsdtypes.h" 3
# 59 "c:\\mingw\\include\\sys\\bsdtypes.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
# 55 "c:\\mingw\\include\\winsock.h" 2 3
# 1 "c:\\mingw\\include\\sys\\time.h" 1 3
# 34 "c:\\mingw\\include\\sys\\time.h" 3
       
# 35 "c:\\mingw\\include\\sys\\time.h" 3
# 55 "c:\\mingw\\include\\sys\\time.h" 3
struct timeval
{







  long tv_sec;
  long tv_usec;
};
# 56 "c:\\mingw\\include\\winsock.h" 2 3
# 101 "c:\\mingw\\include\\winsock.h" 3


typedef u_int SOCKET;
# 119 "c:\\mingw\\include\\winsock.h" 3
typedef
struct fd_set
{ u_int fd_count;
  SOCKET fd_array[64];
} fd_set;


int FD_ISSET (SOCKET, fd_set *);






int __attribute__((__stdcall__)) __WSAFDIsSet (SOCKET, fd_set *);



extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) int __FD_ISSET( SOCKET __fd, fd_set *__set )
{ return __WSAFDIsSet (__fd, __set); }
# 153 "c:\\mingw\\include\\winsock.h" 3
void FD_SET (SOCKET, fd_set *);
# 169 "c:\\mingw\\include\\winsock.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) void __FD_SET (SOCKET __fd, fd_set *__set)
{ if( (__set->fd_count < 64) && ! __FD_ISSET ((__fd), (__set)) )
    __set->fd_array[__set->fd_count++] = __fd;
}



void FD_CLR (SOCKET, fd_set *);

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) void __FD_CLR (SOCKET __fd, fd_set *__set)
{ u_int __m, __n; for (__m = __n = 0; __n < __set->fd_count; __n++)
  { if (__fd != __set->fd_array[__n])
    { if (__m < __n) __set->fd_array[__m] = __set->fd_array[__n];
      ++__m;
    }
  } __set->fd_count = __m;
}



void FD_ZERO (fd_set *);

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) void __FD_ZERO (fd_set *__set)
{ __set->fd_count = 0; }
# 207 "c:\\mingw\\include\\winsock.h" 3
struct hostent
{ char *h_name;
  char **h_aliases;
  short h_addrtype;
  short h_length;

  char **h_addr_list;
};

struct linger
{ u_short l_onoff;
  u_short l_linger;
};
# 249 "c:\\mingw\\include\\winsock.h" 3
struct netent
{ char *n_name;
  char **n_aliases;
  short n_addrtype;
  u_long n_net;
};

struct servent
{ char *s_name;
  char **s_aliases;
  short s_port;
  char *s_proto;
};

struct protoent
{ char *p_name;
  char **p_aliases;
  short p_proto;
};
# 314 "c:\\mingw\\include\\winsock.h" 3
struct in_addr






{ union
  { struct { u_char s_b1,s_b2,s_b3,s_b4; } S_un_b;
    struct { u_short s_w1,s_w2; } S_un_w;
    u_long S_addr;
  } S_un;
};
# 347 "c:\\mingw\\include\\winsock.h" 3
struct sockaddr_in
{ short sin_family;
  u_short sin_port;
  struct in_addr sin_addr;
  char sin_zero[8];
};




typedef
struct WSAData
{ WORD wVersion;
  WORD wHighVersion;
  char szDescription[256 +1];
  char szSystemStatus[128 +1];
  unsigned short iMaxSockets;
  unsigned short iMaxUdpDg;
  char *lpVendorInfo;
} WSADATA, *LPWSADATA;
# 458 "c:\\mingw\\include\\winsock.h" 3
struct sockaddr
{ u_short sa_family;
  char sa_data[14];
};



struct sockproto
{ u_short sp_family;
  u_short sp_protocol;
};
# 518 "c:\\mingw\\include\\winsock.h" 3
enum
{


  FD_READ_BIT = 0,


  FD_WRITE_BIT,


  FD_OOB_BIT,


  FD_ACCEPT_BIT,


  FD_CONNECT_BIT,


  FD_CLOSE_BIT,
# 546 "c:\\mingw\\include\\winsock.h" 3
  FD_QOS_BIT,


  FD_GROUP_QOS_BIT,


  FD_ROUTING_INTERFACE_CHANGE_BIT,


  FD_ADDRESS_LIST_CHANGE_BIT,







  FD_MAX_EVENTS,

};
# 580 "c:\\mingw\\include\\winsock.h" 3
 SOCKET __attribute__((__stdcall__)) accept (SOCKET, struct sockaddr *, int *);

 int __attribute__((__stdcall__)) bind (SOCKET, const struct sockaddr *, int);
 int __attribute__((__stdcall__)) closesocket (SOCKET);
 int __attribute__((__stdcall__)) connect (SOCKET, const struct sockaddr *, int);
 int __attribute__((__stdcall__)) ioctlsocket (SOCKET, long, u_long *);
 int __attribute__((__stdcall__)) getpeername (SOCKET, struct sockaddr *, int *);
 int __attribute__((__stdcall__)) getsockname (SOCKET, struct sockaddr *, int *);
 int __attribute__((__stdcall__)) getsockopt (SOCKET, int, int, char *, int *);

 unsigned long __attribute__((__stdcall__)) inet_addr (const char *);

 __attribute__((__stdcall__)) char * inet_ntoa (struct in_addr);

 int __attribute__((__stdcall__)) listen (SOCKET, int);
 int __attribute__((__stdcall__)) recv (SOCKET, char *, int, int);
 int __attribute__((__stdcall__)) recvfrom (SOCKET, char *, int, int, struct sockaddr *, int *);
 int __attribute__((__stdcall__)) send (SOCKET, const char *, int, int);
 int __attribute__((__stdcall__)) sendto (SOCKET, const char *, int, int, const struct sockaddr *, int);
 int __attribute__((__stdcall__)) setsockopt (SOCKET, int, int, const char *, int);
 int __attribute__((__stdcall__)) shutdown (SOCKET, int);

 SOCKET __attribute__((__stdcall__)) socket (int, int, int);

 __attribute__((__stdcall__)) struct hostent * gethostbyaddr (const char *, int, int);
 __attribute__((__stdcall__)) struct hostent * gethostbyname (const char *);
 __attribute__((__stdcall__)) struct servent * getservbyport (int, const char *);
 __attribute__((__stdcall__)) struct servent * getservbyname (const char *, const char *);
 __attribute__((__stdcall__)) struct protoent * getprotobynumber (int);
 __attribute__((__stdcall__)) struct protoent * getprotobyname (const char *);

 int __attribute__((__stdcall__)) WSAStartup (WORD, LPWSADATA);
 int __attribute__((__stdcall__)) WSACleanup (void);
 void __attribute__((__stdcall__)) WSASetLastError (int);
 int __attribute__((__stdcall__)) WSAGetLastError (void);






 BOOL __attribute__((__stdcall__)) WSAIsBlocking (void) __attribute__((__deprecated__));
 int __attribute__((__stdcall__)) WSAUnhookBlockingHook (void) __attribute__((__deprecated__));
 FARPROC __attribute__((__stdcall__)) WSASetBlockingHook (FARPROC) __attribute__((__deprecated__));
 int __attribute__((__stdcall__)) WSACancelBlockingCall (void) __attribute__((__deprecated__));

 HANDLE __attribute__((__stdcall__)) WSAAsyncGetServByName (HWND, u_int, const char *, const char *, char *, int);
 HANDLE __attribute__((__stdcall__)) WSAAsyncGetServByPort (HWND, u_int, int, const char *, char *, int);
 HANDLE __attribute__((__stdcall__)) WSAAsyncGetProtoByName (HWND, u_int, const char *, char *, int);
 HANDLE __attribute__((__stdcall__)) WSAAsyncGetProtoByNumber (HWND, u_int, int, char *, int);
 HANDLE __attribute__((__stdcall__)) WSAAsyncGetHostByName (HWND, u_int, const char *, char *, int);
 HANDLE __attribute__((__stdcall__)) WSAAsyncGetHostByAddr (HWND, u_int, const char *, int, int, char *, int);

 int __attribute__((__stdcall__)) WSACancelAsyncRequest (HANDLE);
 int __attribute__((__stdcall__)) WSAAsyncSelect (SOCKET, HWND, u_int, long);



 u_long __attribute__((__stdcall__)) htonl (u_long);
 u_long __attribute__((__stdcall__)) ntohl (u_long);
 u_short __attribute__((__stdcall__)) htons (u_short);
 u_short __attribute__((__stdcall__)) ntohs (u_short);
 int __attribute__((__stdcall__)) select (int nfds, fd_set *, fd_set *, fd_set *, const struct timeval *);



 int __attribute__((__stdcall__)) gethostname (char *, int);
# 655 "c:\\mingw\\include\\winsock.h" 3
typedef struct sockaddr SOCKADDR, *PSOCKADDR, *LPSOCKADDR;
typedef struct sockaddr_in SOCKADDR_IN, *PSOCKADDR_IN, *LPSOCKADDR_IN;
typedef struct linger LINGER, *PLINGER, *LPLINGER;
typedef struct in_addr IN_ADDR, *PIN_ADDR, *LPIN_ADDR;
typedef struct hostent HOSTENT, *PHOSTENT, *LPHOSTENT;
typedef struct servent SERVENT, *PSERVENT, *LPSERVENT;
typedef struct protoent PROTOENT, *PPROTOENT, *LPPROTOENT;
typedef struct timeval TIMEVAL, *PTIMEVAL, *LPTIMEVAL;


# 63 "c:\\mingw\\include\\winsock2.h" 2 3
# 72 "c:\\mingw\\include\\winsock2.h" 3
# 1 "c:\\mingw\\include\\nspapi.h" 1 3
# 34 "c:\\mingw\\include\\nspapi.h" 3
       
# 35 "c:\\mingw\\include\\nspapi.h" 3
# 100 "c:\\mingw\\include\\nspapi.h" 3
# 1 "c:\\mingw\\include\\wtypes.h" 1 3
# 101 "c:\\mingw\\include\\nspapi.h" 2 3


# 116 "c:\\mingw\\include\\nspapi.h" 3
typedef
struct _SOCKET_ADDRESS
{ LPSOCKADDR lpSockaddr;
  INT iSockaddrLength;
} SOCKET_ADDRESS, *PSOCKET_ADDRESS, *LPSOCKET_ADDRESS;
# 132 "c:\\mingw\\include\\nspapi.h" 3
typedef struct _CSADDR_INFO CSADDR_INFO, *PCSADDR_INFO, *LPCSADDR_INFO;


# 73 "c:\\mingw\\include\\winsock2.h" 2 3


# 103 "c:\\mingw\\include\\winsock2.h" 3
typedef struct _OVERLAPPED *LPWSAOVERLAPPED;
# 120 "c:\\mingw\\include\\winsock2.h" 3
typedef
struct _WSABUF
{ unsigned long len;
  char *buf;
} WSABUF, *LPWSABUF;

typedef enum
{ BestEffortService,
  ControlledLoadService,
  PredictiveService,
  GuaranteedDelayService,
  GuaranteedService
} GUARANTEE;
# 177 "c:\\mingw\\include\\winsock2.h" 3
struct sockaddr_storage
{ short ss_family;
  char __ss_pad1[(sizeof(long long) - sizeof(short))];
  long long __ss_align;
  char __ss_pad2[(128 - (sizeof(short) + (sizeof(long long) - sizeof(short)) + sizeof(long long)))];
};
# 206 "c:\\mingw\\include\\winsock2.h" 3
typedef unsigned int SERVICETYPE;

typedef
struct _flowspec
{ unsigned int TokenRate;
  unsigned int TokenBucketSize;
  unsigned int PeakBandwidth;
  unsigned int Latency;
  unsigned int DelayVariation;
  SERVICETYPE ServiceType;
  unsigned int MaxSduSize;
  unsigned int MinimumPolicedSize;
} FLOWSPEC, *PFLOWSPEC, *LPFLOWSPEC;

typedef
struct _QualityOfService
{ FLOWSPEC SendingFlowspec;
  FLOWSPEC ReceivingFlowspec;
  WSABUF ProviderSpecific;
} QOS, *LPQOS;





typedef unsigned int GROUP;




typedef
struct _WSANETWORKEVENTS
{ long lNetworkEvents;
  int iErrorCode[FD_MAX_EVENTS];
} WSANETWORKEVENTS, *LPWSANETWORKEVENTS;






typedef
enum _WSAESETSERVICEOP
{ RNRSERVICE_REGISTER = 0,
  RNRSERVICE_DEREGISTER,
  RNRSERVICE_DELETE
} WSAESETSERVICEOP, *PWSAESETSERVICEOP, *LPWSAESETSERVICEOP;

typedef
struct _AFPROTOCOLS
{ INT iAddressFamily;
  INT iProtocol;
} AFPROTOCOLS, *PAFPROTOCOLS, *LPAFPROTOCOLS;

typedef
enum _WSAEcomparator
{ COMP_EQUAL = 0,
  COMP_NOTLESS
} WSAECOMPARATOR, *PWSAECOMPARATOR, *LPWSAECOMPARATOR;

typedef
struct _WSAVersion
{ DWORD dwVersion;
  WSAECOMPARATOR ecHow;
} WSAVERSION, *PWSAVERSION, *LPWSAVERSION;

typedef
struct _SOCKET_ADDRESS_LIST
{ INT iAddressCount;
  SOCKET_ADDRESS Address[1];
} SOCKET_ADDRESS_LIST, *LPSOCKET_ADDRESS_LIST;

typedef
struct _WSAQuerySetA
{ DWORD dwSize;
  LPSTR lpszServiceInstanceName;
  LPGUID lpServiceClassId;
  LPWSAVERSION lpVersion;
  LPSTR lpszComment;
  DWORD dwNameSpace;
  LPGUID lpNSProviderId;
  LPSTR lpszContext;
  DWORD dwNumberOfProtocols;
  LPAFPROTOCOLS lpafpProtocols;
  LPSTR lpszQueryString;
  DWORD dwNumberOfCsAddrs;
  LPCSADDR_INFO lpcsaBuffer;
  DWORD dwOutputFlags;
  LPBLOB lpBlob;
} WSAQUERYSETA, *PWSAQUERYSETA, *LPWSAQUERYSETA;

typedef
struct _WSAQuerySetW
{ DWORD dwSize;
  LPWSTR lpszServiceInstanceName;
  LPGUID lpServiceClassId;
  LPWSAVERSION lpVersion;
  LPWSTR lpszComment;
  DWORD dwNameSpace;
  LPGUID lpNSProviderId;
  LPWSTR lpszContext;
  DWORD dwNumberOfProtocols;
  LPAFPROTOCOLS lpafpProtocols;
  LPWSTR lpszQueryString;
  DWORD dwNumberOfCsAddrs;
  LPCSADDR_INFO lpcsaBuffer;
  DWORD dwOutputFlags;
  LPBLOB lpBlob;
} WSAQUERYSETW, *PWSAQUERYSETW, *LPWSAQUERYSETW;

typedef WSAQUERYSETA WSAQUERYSET;
typedef PWSAQUERYSETA PWSAQUERYSET;
typedef LPWSAQUERYSETA LPWSAQUERYSET;
# 337 "c:\\mingw\\include\\winsock2.h" 3
typedef
struct _WSANSClassInfoA
{ LPSTR lpszName;
  DWORD dwNameSpace;
  DWORD dwValueType;
  DWORD dwValueSize;
  LPVOID lpValue;
} WSANSCLASSINFOA, *PWSANSCLASSINFOA, *LPWSANSCLASSINFOA;

typedef
struct _WSANSClassInfoW
{ LPWSTR lpszName;
  DWORD dwNameSpace;
  DWORD dwValueType;
  DWORD dwValueSize;
  LPVOID lpValue;
} WSANSCLASSINFOW, *PWSANSCLASSINFOW, *LPWSANSCLASSINFOW;

typedef WSANSCLASSINFOA WSANSCLASSINFO;
typedef PWSANSCLASSINFOA PWSANSCLASSINFO;
typedef LPWSANSCLASSINFOA LPWSANSCLASSINFO;

typedef
struct _WSAServiceClassInfoA
{ LPGUID lpServiceClassId;
  LPSTR lpszServiceClassName;
  DWORD dwCount;
  LPWSANSCLASSINFOA lpClassInfos;
} WSASERVICECLASSINFOA, *PWSASERVICECLASSINFOA, *LPWSASERVICECLASSINFOA;

typedef
struct _WSAServiceClassInfoW
{ LPGUID lpServiceClassId;
  LPWSTR lpszServiceClassName;
  DWORD dwCount;
  LPWSANSCLASSINFOW lpClassInfos;
} WSASERVICECLASSINFOW, *PWSASERVICECLASSINFOW, *LPWSASERVICECLASSINFOW;

typedef WSASERVICECLASSINFOA WSASERVICECLASSINFO;
typedef PWSASERVICECLASSINFOA PWSASERVICECLASSINFO;
typedef LPWSASERVICECLASSINFOA LPWSASERVICECLASSINFO;

typedef
struct _WSANAMESPACE_INFOA
{ GUID NSProviderId;
  DWORD dwNameSpace;
  BOOL fActive;
  DWORD dwVersion;
  LPSTR lpszIdentifier;
} WSANAMESPACE_INFOA, *PWSANAMESPACE_INFOA, *LPWSANAMESPACE_INFOA;

typedef
struct _WSANAMESPACE_INFOW
{ GUID NSProviderId;
  DWORD dwNameSpace;
  BOOL fActive;
  DWORD dwVersion;
  LPWSTR lpszIdentifier;
} WSANAMESPACE_INFOW, *PWSANAMESPACE_INFOW, *LPWSANAMESPACE_INFOW;

typedef WSANAMESPACE_INFOA WSANAMESPACE_INFO;
typedef PWSANAMESPACE_INFOA PWSANAMESPACE_INFO;
typedef LPWSANAMESPACE_INFOA LPWSANAMESPACE_INFO;

typedef
struct _WSAPROTOCOLCHAIN
{ int ChainLen;
  DWORD ChainEntries[7];
} WSAPROTOCOLCHAIN, *LPWSAPROTOCOLCHAIN;



typedef
struct _WSAPROTOCOL_INFOA
{ DWORD dwServiceFlags1;
  DWORD dwServiceFlags2;
  DWORD dwServiceFlags3;
  DWORD dwServiceFlags4;
  DWORD dwProviderFlags;
  GUID ProviderId;
  DWORD dwCatalogEntryId;
  WSAPROTOCOLCHAIN ProtocolChain;
  int iVersion;
  int iAddressFamily;
  int iMaxSockAddr;
  int iMinSockAddr;
  int iSocketType;
  int iProtocol;
  int iProtocolMaxOffset;
  int iNetworkByteOrder;
  int iSecurityScheme;
  DWORD dwMessageSize;
  DWORD dwProviderReserved;
  CHAR szProtocol[255 +1];
} WSAPROTOCOL_INFOA, *LPWSAPROTOCOL_INFOA;

typedef
struct _WSAPROTOCOL_INFOW
{ DWORD dwServiceFlags1;
  DWORD dwServiceFlags2;
  DWORD dwServiceFlags3;
  DWORD dwServiceFlags4;
  DWORD dwProviderFlags;
  GUID ProviderId;
  DWORD dwCatalogEntryId;
  WSAPROTOCOLCHAIN ProtocolChain;
  int iVersion;
  int iAddressFamily;
  int iMaxSockAddr;
  int iMinSockAddr;
  int iSocketType;
  int iProtocol;
  int iProtocolMaxOffset;
  int iNetworkByteOrder;
  int iSecurityScheme;
  DWORD dwMessageSize;
  DWORD dwProviderReserved;
  WCHAR szProtocol[255 +1];
} WSAPROTOCOL_INFOW, *LPWSAPROTOCOL_INFOW;

typedef WSAPROTOCOL_INFOA WSAPROTOCOL_INFO;
typedef LPWSAPROTOCOL_INFOA LPWSAPROTOCOL_INFO;

typedef int (__attribute__((__stdcall__)) *LPCONDITIONPROC) (LPWSABUF, LPWSABUF, LPQOS, LPQOS, LPWSABUF, LPWSABUF, GROUP *, DWORD);
typedef void (__attribute__((__stdcall__)) *LPWSAOVERLAPPED_COMPLETION_ROUTINE) (DWORD, DWORD, LPWSAOVERLAPPED, DWORD);



typedef
enum _WSACOMPLETIONTYPE
{ NSP_NOTIFY_IMMEDIATELY = 0,
  NSP_NOTIFY_HWND,
  NSP_NOTIFY_EVENT,
  NSP_NOTIFY_PORT,
  NSP_NOTIFY_APC
} WSACOMPLETIONTYPE, *PWSACOMPLETIONTYPE, *LPWSACOMPLETIONTYPE;

typedef
struct _WSACOMPLETION
{ WSACOMPLETIONTYPE Type;
  union
  { struct
    { HWND hWnd;
      UINT uMsg;
      WPARAM context;
    } WindowMessage;
    struct
    { LPWSAOVERLAPPED lpOverlapped;
    } Event;
    struct
    { LPWSAOVERLAPPED lpOverlapped;
      LPWSAOVERLAPPED_COMPLETION_ROUTINE lpfnCompletionProc;
    } Apc;
    struct
    { LPWSAOVERLAPPED lpOverlapped;
      HANDLE hPort;
      ULONG_PTR Key;
    } Port;
  } Parameters;
} WSACOMPLETION, *PWSACOMPLETION, *LPWSACOMPLETION;
# 568 "c:\\mingw\\include\\winsock2.h" 3
typedef SOCKET (__attribute__((__stdcall__)) *LPFN_ACCEPT) (SOCKET, struct sockaddr *, int *);

typedef int (__attribute__((__stdcall__)) *LPFN_BIND) (SOCKET, const struct sockaddr *, int);
typedef int (__attribute__((__stdcall__)) *LPFN_CLOSESOCKET) (SOCKET);
typedef int (__attribute__((__stdcall__)) *LPFN_CONNECT) (SOCKET, const struct sockaddr *, int);
typedef int (__attribute__((__stdcall__)) *LPFN_IOCTLSOCKET) (SOCKET, long, u_long *);
typedef int (__attribute__((__stdcall__)) *LPFN_GETPEERNAME) (SOCKET, struct sockaddr *, int *);
typedef int (__attribute__((__stdcall__)) *LPFN_GETSOCKNAME) (SOCKET, struct sockaddr *, int *);
typedef int (__attribute__((__stdcall__)) *LPFN_GETSOCKOPT) (SOCKET, int, int, char *, int *);

typedef u_long (__attribute__((__stdcall__)) *LPFN_HTONL) (u_long);
typedef u_short (__attribute__((__stdcall__)) *LPFN_HTONS) (u_short);

typedef unsigned long (__attribute__((__stdcall__)) *LPFN_INET_ADDR) (const char *);

typedef char *(__attribute__((__stdcall__)) *LPFN_INET_NTOA) (struct in_addr);

typedef int (__attribute__((__stdcall__)) *LPFN_LISTEN) (SOCKET, int);

typedef u_long (__attribute__((__stdcall__)) *LPFN_NTOHL) (u_long);
typedef u_short (__attribute__((__stdcall__)) *LPFN_NTOHS) (u_short);

typedef int (__attribute__((__stdcall__)) *LPFN_RECV) (SOCKET, char *, int, int);
typedef int (__attribute__((__stdcall__)) *LPFN_RECVFROM) (SOCKET, char *, int, int, struct sockaddr *, int *);
typedef int (__attribute__((__stdcall__)) *LPFN_SELECT) (int, fd_set *, fd_set *, fd_set *, const struct timeval *);
typedef int (__attribute__((__stdcall__)) *LPFN_SEND) (SOCKET, const char *, int, int);
typedef int (__attribute__((__stdcall__)) *LPFN_SENDTO) (SOCKET, const char *, int, int, const struct sockaddr *, int);
typedef int (__attribute__((__stdcall__)) *LPFN_SETSOCKOPT) (SOCKET, int, int, const char *, int);
typedef int (__attribute__((__stdcall__)) *LPFN_SHUTDOWN) (SOCKET, int);

typedef SOCKET (__attribute__((__stdcall__)) *LPFN_SOCKET) (int, int, int);

typedef struct hostent *(__attribute__((__stdcall__)) *LPFN_GETHOSTBYADDR) ( const char *, int, int);
typedef struct hostent *(__attribute__((__stdcall__)) *LPFN_GETHOSTBYNAME) ( const char *);

typedef int (__attribute__((__stdcall__)) *LPFN_GETHOSTNAME) (char *, int);

typedef struct servent *(__attribute__((__stdcall__)) *LPFN_GETSERVBYPORT) (int, const char *);
typedef struct servent *(__attribute__((__stdcall__)) *LPFN_GETSERVBYNAME) (const char *, const char *);
typedef struct protoent *(__attribute__((__stdcall__)) *LPFN_GETPROTOBYNUMBER) (int);
typedef struct protoent *(__attribute__((__stdcall__)) *LPFN_GETPROTOBYNAME) (const char *);

typedef int (__attribute__((__stdcall__)) *LPFN_WSASTARTUP) (WORD, LPWSADATA);
typedef int (__attribute__((__stdcall__)) *LPFN_WSACLEANUP) (void);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAGETLASTERROR) (void);
typedef void (__attribute__((__stdcall__)) *LPFN_WSASETLASTERROR) (int);

typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSAISBLOCKING) (void);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAUNHOOKBLOCKINGHOOK) (void);
typedef FARPROC (__attribute__((__stdcall__)) *LPFN_WSASETBLOCKINGHOOK) (FARPROC);
typedef int (__attribute__((__stdcall__)) *LPFN_WSACANCELBLOCKINGCALL) (void);

typedef HANDLE (__attribute__((__stdcall__)) *LPFN_WSAASYNCGETSERVBYNAME) (HWND, u_int, const char *, const char *, char *, int);
typedef HANDLE (__attribute__((__stdcall__)) *LPFN_WSAASYNCGETSERVBYPORT) (HWND, u_int, int, const char *, char *, int);
typedef HANDLE (__attribute__((__stdcall__)) *LPFN_WSAASYNCGETPROTOBYNAME) (HWND, u_int, const char*, char*, int);
typedef HANDLE (__attribute__((__stdcall__)) *LPFN_WSAASYNCGETPROTOBYNUMBER) (HWND, u_int, int, char*, int);
typedef HANDLE (__attribute__((__stdcall__)) *LPFN_WSAASYNCGETHOSTBYADDR) (HWND, u_int, const char*, int, int, char*, int);

typedef int (__attribute__((__stdcall__)) *LPFN_WSACANCELASYNCREQUEST) (HANDLE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAASYNCSELECT) (SOCKET, HWND, u_int, long);

typedef struct sockaddr_storage SOCKADDR_STORAGE, *PSOCKADDR_STORAGE;

 SOCKET __attribute__((__stdcall__)) WSAAccept (SOCKET, struct sockaddr *, LPINT, LPCONDITIONPROC, DWORD);


 INT __attribute__((__stdcall__)) WSAAddressToStringA (LPSOCKADDR, DWORD, LPWSAPROTOCOL_INFOA, LPSTR, LPDWORD);
 INT __attribute__((__stdcall__)) WSAAddressToStringW (LPSOCKADDR, DWORD, LPWSAPROTOCOL_INFOW, LPWSTR, LPDWORD);

 BOOL __attribute__((__stdcall__)) WSACloseEvent (HANDLE);
 int __attribute__((__stdcall__)) WSAConnect (SOCKET, const struct sockaddr *, int, LPWSABUF, LPWSABUF, LPQOS, LPQOS);
 HANDLE __attribute__((__stdcall__)) WSACreateEvent (void);


 int __attribute__((__stdcall__)) WSADuplicateSocketA (SOCKET, DWORD, LPWSAPROTOCOL_INFOA);
 int __attribute__((__stdcall__)) WSADuplicateSocketW (SOCKET, DWORD, LPWSAPROTOCOL_INFOW);


 INT __attribute__((__stdcall__)) WSAEnumNameSpaceProvidersA (LPDWORD, LPWSANAMESPACE_INFOA);
 INT __attribute__((__stdcall__)) WSAEnumNameSpaceProvidersW (LPDWORD, LPWSANAMESPACE_INFOW);

 int __attribute__((__stdcall__)) WSAEnumNetworkEvents (SOCKET, HANDLE, LPWSANETWORKEVENTS);


 int __attribute__((__stdcall__)) WSAEnumProtocolsA (LPINT, LPWSAPROTOCOL_INFOA, LPDWORD);
 int __attribute__((__stdcall__)) WSAEnumProtocolsW (LPINT, LPWSAPROTOCOL_INFOW, LPDWORD);

 int __attribute__((__stdcall__)) WSAEventSelect (SOCKET, HANDLE, long);
 BOOL __attribute__((__stdcall__)) WSAGetOverlappedResult (SOCKET, LPWSAOVERLAPPED, LPDWORD, BOOL, LPDWORD);
 BOOL __attribute__((__stdcall__)) WSAGetQOSByName (SOCKET, LPWSABUF, LPQOS);


 INT __attribute__((__stdcall__)) WSAGetServiceClassInfoA (LPGUID, LPGUID, LPDWORD, LPWSASERVICECLASSINFOA);
 INT __attribute__((__stdcall__)) WSAGetServiceClassInfoW (LPGUID, LPGUID, LPDWORD, LPWSASERVICECLASSINFOW);


 INT __attribute__((__stdcall__)) WSAGetServiceClassNameByClassIdA (LPGUID, LPSTR, LPDWORD);
 INT __attribute__((__stdcall__)) WSAGetServiceClassNameByClassIdW (LPGUID, LPWSTR, LPDWORD);

 int __attribute__((__stdcall__)) WSAHtonl (SOCKET, unsigned long, unsigned long *);
 int __attribute__((__stdcall__)) WSAHtons (SOCKET, unsigned short, unsigned short *);


 INT __attribute__((__stdcall__)) WSAInstallServiceClassA (LPWSASERVICECLASSINFOA);
 INT __attribute__((__stdcall__)) WSAInstallServiceClassW (LPWSASERVICECLASSINFOW);

 int __attribute__((__stdcall__)) WSAIoctl (SOCKET, DWORD, LPVOID, DWORD, LPVOID, DWORD, LPDWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
 SOCKET __attribute__((__stdcall__)) WSAJoinLeaf (SOCKET, const struct sockaddr *, int, LPWSABUF, LPWSABUF, LPQOS, LPQOS, DWORD);


 INT __attribute__((__stdcall__)) WSALookupServiceBeginA (LPWSAQUERYSETA, DWORD, LPHANDLE);
 INT __attribute__((__stdcall__)) WSALookupServiceBeginW (LPWSAQUERYSETW, DWORD, LPHANDLE);


 INT __attribute__((__stdcall__)) WSALookupServiceNextA (HANDLE, DWORD, LPDWORD, LPWSAQUERYSETA);
 INT __attribute__((__stdcall__)) WSALookupServiceNextW (HANDLE, DWORD, LPDWORD, LPWSAQUERYSETW);

 INT __attribute__((__stdcall__)) WSALookupServiceEnd (HANDLE);
 int __attribute__((__stdcall__)) WSANSPIoctl (HANDLE, DWORD, LPVOID, DWORD, LPVOID, DWORD, LPDWORD, LPWSACOMPLETION);
 int __attribute__((__stdcall__)) WSANtohl (SOCKET, unsigned long, unsigned long *);
 int __attribute__((__stdcall__)) WSANtohs (SOCKET, unsigned short, unsigned short *);
 int __attribute__((__stdcall__)) WSARecv (SOCKET, LPWSABUF, DWORD, LPDWORD, LPDWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
 int __attribute__((__stdcall__)) WSARecvDisconnect (SOCKET, LPWSABUF);
 int __attribute__((__stdcall__)) WSARecvFrom (SOCKET, LPWSABUF, DWORD, LPDWORD, LPDWORD, struct sockaddr *, LPINT, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
 INT __attribute__((__stdcall__)) WSARemoveServiceClass (LPGUID);
 BOOL __attribute__((__stdcall__)) WSAResetEvent (HANDLE);
 int __attribute__((__stdcall__)) WSASend (SOCKET, LPWSABUF, DWORD, LPDWORD, DWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
 int __attribute__((__stdcall__)) WSASendDisconnect (SOCKET, LPWSABUF);
 int __attribute__((__stdcall__)) WSASendTo (SOCKET, LPWSABUF, DWORD, LPDWORD, DWORD, const struct sockaddr *, int, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
 BOOL __attribute__((__stdcall__)) WSASetEvent (HANDLE);


 INT __attribute__((__stdcall__)) WSASetServiceA (LPWSAQUERYSETA, WSAESETSERVICEOP, DWORD);
 INT __attribute__((__stdcall__)) WSASetServiceW (LPWSAQUERYSETW, WSAESETSERVICEOP, DWORD);


 SOCKET __attribute__((__stdcall__)) WSASocketA (int, int, int, LPWSAPROTOCOL_INFOA, GROUP, DWORD);
 SOCKET __attribute__((__stdcall__)) WSASocketW (int, int, int, LPWSAPROTOCOL_INFOW, GROUP, DWORD);


 INT __attribute__((__stdcall__)) WSAStringToAddressA (LPSTR, INT, LPWSAPROTOCOL_INFOA, LPSOCKADDR, LPINT);
 INT __attribute__((__stdcall__)) WSAStringToAddressW (LPWSTR, INT, LPWSAPROTOCOL_INFOW, LPSOCKADDR, LPINT);

 DWORD __attribute__((__stdcall__)) WSAWaitForMultipleEvents (DWORD, const HANDLE *, BOOL, DWORD, BOOL);

typedef SOCKET (__attribute__((__stdcall__)) *LPFN_WSAACCEPT) (SOCKET, struct sockaddr *, LPINT, LPCONDITIONPROC, DWORD);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSAADDRESSTOSTRINGA) (LPSOCKADDR, DWORD, LPWSAPROTOCOL_INFOA, LPSTR, LPDWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAADDRESSTOSTRINGW) (LPSOCKADDR, DWORD, LPWSAPROTOCOL_INFOW, LPWSTR, LPDWORD);

typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSACLOSEEVENT) (HANDLE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSACONNECT) (SOCKET, const struct sockaddr *, int, LPWSABUF, LPWSABUF, LPQOS, LPQOS);
typedef HANDLE (__attribute__((__stdcall__)) *LPFN_WSACREATEEVENT) (void);


typedef int (__attribute__((__stdcall__)) *LPFN_WSADUPLICATESOCKETA) (SOCKET, DWORD, LPWSAPROTOCOL_INFOA);
typedef int (__attribute__((__stdcall__)) *LPFN_WSADUPLICATESOCKETW) (SOCKET, DWORD, LPWSAPROTOCOL_INFOW);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSAENUMNAMESPACEPROVIDERSA) (LPDWORD, LPWSANAMESPACE_INFOA);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAENUMNAMESPACEPROVIDERSW) (LPDWORD, LPWSANAMESPACE_INFOW);

typedef int (__attribute__((__stdcall__)) *LPFN_WSAENUMNETWORKEVENTS) (SOCKET, HANDLE, LPWSANETWORKEVENTS);


typedef int (__attribute__((__stdcall__)) *LPFN_WSAENUMPROTOCOLSA) (LPINT, LPWSAPROTOCOL_INFOA, LPDWORD);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAENUMPROTOCOLSW) (LPINT, LPWSAPROTOCOL_INFOW, LPDWORD);

typedef int (__attribute__((__stdcall__)) *LPFN_WSAEVENTSELECT) (SOCKET, HANDLE, long);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSAGETOVERLAPPEDRESULT) (SOCKET, LPWSAOVERLAPPED, LPDWORD, BOOL, LPDWORD);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSAGETQOSBYNAME) (SOCKET, LPWSABUF, LPQOS);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSAGETSERVICECLASSINFOA) (LPGUID, LPGUID, LPDWORD, LPWSASERVICECLASSINFOA);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAGETSERVICECLASSINFOW) (LPGUID, LPGUID, LPDWORD, LPWSASERVICECLASSINFOW);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSAGETSERVICECLASSNAMEBYCLASSIDA) (LPGUID, LPSTR, LPDWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAGETSERVICECLASSNAMEBYCLASSIDW) (LPGUID, LPWSTR, LPDWORD);

typedef int (__attribute__((__stdcall__)) *LPFN_WSAHTONL) (SOCKET, unsigned long, unsigned long *);
typedef int (__attribute__((__stdcall__)) *LPFN_WSAHTONS) (SOCKET, unsigned short, unsigned short *);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSAINSTALLSERVICECLASSA) (LPWSASERVICECLASSINFOA);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAINSTALLSERVICECLASSW) (LPWSASERVICECLASSINFOW);

typedef int (__attribute__((__stdcall__)) *LPFN_WSAIOCTL) (SOCKET, DWORD, LPVOID, DWORD, LPVOID, DWORD, LPDWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef SOCKET (__attribute__((__stdcall__)) *LPFN_WSAJOINLEAF) (SOCKET, const struct sockaddr *, int, LPWSABUF, LPWSABUF, LPQOS, LPQOS, DWORD);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICEBEGINA) (LPWSAQUERYSETA, DWORD, LPHANDLE);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICEBEGINW) (LPWSAQUERYSETW, DWORD, LPHANDLE);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICENEXTA) (HANDLE, DWORD, LPDWORD, LPWSAQUERYSETA);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICENEXTW) (HANDLE, DWORD, LPDWORD, LPWSAQUERYSETW);

typedef INT (__attribute__((__stdcall__)) *LPFN_WSALOOKUPSERVICEEND) (HANDLE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSANSPIoctl) (HANDLE, DWORD, LPVOID, DWORD, LPVOID, DWORD, LPDWORD, LPWSACOMPLETION);
typedef int (__attribute__((__stdcall__)) *LPFN_WSANTOHL) (SOCKET, unsigned long, unsigned long *);
typedef int (__attribute__((__stdcall__)) *LPFN_WSANTOHS) (SOCKET, unsigned short, unsigned short *);
typedef int (__attribute__((__stdcall__)) *LPFN_WSARECV) (SOCKET, LPWSABUF, DWORD, LPDWORD, LPDWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSARECVDISCONNECT) (SOCKET, LPWSABUF);
typedef int (__attribute__((__stdcall__)) *LPFN_WSARECVFROM) (SOCKET, LPWSABUF, DWORD, LPDWORD, LPDWORD, struct sockaddr *, LPINT, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSAREMOVESERVICECLASS) (LPGUID);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSARESETEVENT) (HANDLE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSASEND) (SOCKET, LPWSABUF, DWORD, LPDWORD, DWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef int (__attribute__((__stdcall__)) *LPFN_WSASENDDISCONNECT) (SOCKET, LPWSABUF);
typedef int (__attribute__((__stdcall__)) *LPFN_WSASENDTO) (SOCKET, LPWSABUF, DWORD, LPDWORD, DWORD, const struct sockaddr *, int, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE);
typedef BOOL (__attribute__((__stdcall__)) *LPFN_WSASETEVENT) (HANDLE);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSASETSERVICEA) (LPWSAQUERYSETA, WSAESETSERVICEOP, DWORD);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSASETSERVICEW) (LPWSAQUERYSETW, WSAESETSERVICEOP, DWORD);


typedef SOCKET (__attribute__((__stdcall__)) *LPFN_WSASOCKETA) (int, int, int, LPWSAPROTOCOL_INFOA, GROUP, DWORD);
typedef SOCKET (__attribute__((__stdcall__)) *LPFN_WSASOCKETW) (int, int, int, LPWSAPROTOCOL_INFOW, GROUP, DWORD);


typedef INT (__attribute__((__stdcall__)) *LPFN_WSASTRINGTOADDRESSA) (LPSTR, INT, LPWSAPROTOCOL_INFOA, LPSOCKADDR, LPINT);
typedef INT (__attribute__((__stdcall__)) *LPFN_WSASTRINGTOADDRESSW) (LPWSTR, INT, LPWSAPROTOCOL_INFOW, LPSOCKADDR, LPINT);

typedef DWORD (__attribute__((__stdcall__)) *LPFN_WSAWAITFORMULTIPLEEVENTS) (DWORD, const HANDLE *, BOOL, DWORD, BOOL);


# 51 "c:\\mingw\\include\\_winsock.h" 2 3
# 86 "c:\\mingw\\include\\windows.h" 2 3
# 100 "c:\\mingw\\include\\windows.h" 3
# 1 "c:\\mingw\\include\\ole2.h" 1 3



       
# 5 "c:\\mingw\\include\\ole2.h" 3


#pragma pack(push,8)

# 1 "c:\\mingw\\include\\objbase.h" 1 3


# 1 "c:\\mingw\\include\\rpc.h" 1 3
# 4 "c:\\mingw\\include\\objbase.h" 2 3





       
# 10 "c:\\mingw\\include\\objbase.h" 3



#pragma pack(push,8)
# 54 "c:\\mingw\\include\\objbase.h" 3
typedef enum tagSTGFMT {
 STGFMT_STORAGE = 0,
 STGFMT_FILE = 3,
 STGFMT_ANY = 4,
 STGFMT_DOCFILE = 5
} STGFMT;
typedef struct tagSTGOPTIONS {
 USHORT usVersion;
 USHORT reserved;
 ULONG ulSectorSize;
 const WCHAR *pwcsTemplateFile;
} STGOPTIONS;
typedef enum tagREGCLS {
 REGCLS_SINGLEUSE = 0,
 REGCLS_MULTIPLEUSE = 1,
 REGCLS_MULTI_SEPARATE = 2
} REGCLS;

# 1 "c:\\mingw\\include\\unknwn.h" 1 3
# 73 "c:\\mingw\\include\\objbase.h" 2 3
# 1 "c:\\mingw\\include\\objidl.h" 1 3



       
# 5 "c:\\mingw\\include\\objidl.h" 3
# 46 "c:\\mingw\\include\\objidl.h" 3
typedef struct tagSTATSTG {
 LPOLESTR pwcsName;
 DWORD type;
 ULARGE_INTEGER cbSize;
 FILETIME mtime;
 FILETIME ctime;
 FILETIME atime;
 DWORD grfMode;
 DWORD grfLocksSupported;
 CLSID clsid;
 DWORD grfStateBits;
 DWORD reserved;
} STATSTG;
typedef enum tagSTGTY {
 STGTY_STORAGE=1,
 STGTY_STREAM,
 STGTY_LOCKBYTES,
 STGTY_PROPERTY
} STGTY;
typedef enum tagSTREAM_SEEK {
 STREAM_SEEK_SET,
 STREAM_SEEK_CUR,
 STREAM_SEEK_END
} STREAM_SEEK;
typedef struct tagINTERFACEINFO {
 LPUNKNOWN pUnk;
 IID iid;
 WORD wMethod;
} INTERFACEINFO,*LPINTERFACEINFO;
typedef enum tagCALLTYPE {
 CALLTYPE_TOPLEVEL=1,
 CALLTYPE_NESTED,
 CALLTYPE_ASYNC,
 CALLTYPE_TOPLEVEL_CALLPENDING,
 CALLTYPE_ASYNC_CALLPENDING
} CALLTYPE;
typedef enum tagPENDINGTYPE {
 PENDINGTYPE_TOPLEVEL=1,
 PENDINGTYPE_NESTED
} PENDINGTYPE;
typedef enum tagPENDINGMSG {
 PENDINGMSG_CANCELCALL=0,
 PENDINGMSG_WAITNOPROCESS,
 PENDINGMSG_WAITDEFPROCESS
} PENDINGMSG;
typedef OLECHAR **SNB;
typedef enum tagDATADIR {
 DATADIR_GET=1,
 DATADIR_SET
} DATADIR;
typedef WORD CLIPFORMAT,*LPCLIPFORMAT;
typedef struct tagDVTARGETDEVICE {
 DWORD tdSize;
 WORD tdDriverNameOffset;
 WORD tdDeviceNameOffset;
 WORD tdPortNameOffset;
 WORD tdExtDevmodeOffset;
 BYTE tdData[1];
} DVTARGETDEVICE;
typedef struct tagFORMATETC {
 CLIPFORMAT cfFormat;
 DVTARGETDEVICE*ptd;
 DWORD dwAspect;
 LONG lindex;
 DWORD tymed;
} FORMATETC,*LPFORMATETC;
typedef struct tagRemSTGMEDIUM {
 DWORD tymed;
 DWORD dwHandleType;
 ULONG pData;
 unsigned long pUnkForRelease;
 unsigned long cbData;
 BYTE data[1];
} RemSTGMEDIUM;
typedef struct tagHLITEM {
 ULONG uHLID;
 LPWSTR pwzFriendlyName;
} HLITEM;
typedef struct tagSTATDATA {
 FORMATETC formatetc;
 DWORD grfAdvf;
 struct IAdviseSink *pAdvSink;
 DWORD dwConnection;
} STATDATA;
typedef struct tagSTATPROPSETSTG {
 FMTID fmtid;
 CLSID clsid;
 DWORD grfFlags;
 FILETIME mtime;
 FILETIME ctime;
 FILETIME atime;
} STATPROPSETSTG;
typedef enum tagEXTCONN {
 EXTCONN_STRONG=1,
 EXTCONN_WEAK=2,
 EXTCONN_CALLABLE=4
} EXTCONN;
typedef struct tagMULTI_QI {
 const IID *pIID;
 IUnknown *pItf;
 HRESULT hr;
} MULTI_QI;
typedef struct _AUTH_IDENTITY {
 USHORT *User;
 ULONG UserLength;
 USHORT *Domain;
 ULONG DomainLength;
 USHORT *Password;
 ULONG PasswordLength;
 ULONG Flags;
} AUTH_IDENTITY;
typedef struct _COAUTHINFO{
 DWORD dwAuthnSvc;
 DWORD dwAuthzSvc;
 LPWSTR pwszServerPrincName;
 DWORD dwAuthnLevel;
 DWORD dwImpersonationLevel;
 AUTH_IDENTITY *pAuthIdentityData;
 DWORD dwCapabilities;
} COAUTHINFO;
typedef struct _COSERVERINFO {
 DWORD dwReserved1;
 LPWSTR pwszName;
 COAUTHINFO *pAuthInfo;
 DWORD dwReserved2;
} COSERVERINFO;
typedef struct tagBIND_OPTS {
 DWORD cbStruct;
 DWORD grfFlags;
 DWORD grfMode;
 DWORD dwTickCountDeadline;
} BIND_OPTS,*LPBIND_OPTS;
typedef struct tagBIND_OPTS2 {
 DWORD cbStruct;
 DWORD grfFlags;
 DWORD grfMode;
 DWORD dwTickCountDeadline;
 DWORD dwTrackFlags;
 DWORD dwClassContext;
 LCID locale;
 COSERVERINFO *pServerInfo;
} BIND_OPTS2,*LPBIND_OPTS2;
typedef enum tagBIND_FLAGS {
 BIND_MAYBOTHERUSER=1,
 BIND_JUSTTESTEXISTENCE
} BIND_FLAGS;
typedef struct tagSTGMEDIUM {
 DWORD tymed;
 __extension__ union {
  HBITMAP hBitmap;
  PVOID hMetaFilePict;
  HENHMETAFILE hEnhMetaFile;
  HGLOBAL hGlobal;
  LPWSTR lpszFileName;
  LPSTREAM pstm;
  LPSTORAGE pstg;
 } ;
 LPUNKNOWN pUnkForRelease;
} STGMEDIUM,*LPSTGMEDIUM;
typedef enum tagLOCKTYPE {
 LOCK_WRITE=1,
 LOCK_EXCLUSIVE=2,
 LOCK_ONLYONCE=4
} LOCKTYPE;
typedef unsigned long RPCOLEDATAREP;
typedef struct tagRPCOLEMESSAGE {
 PVOID reserved1;
 RPCOLEDATAREP dataRepresentation;
 PVOID Buffer;
 ULONG cbBuffer;
 ULONG iMethod;
 PVOID reserved2[5];
 ULONG rpcFlags;
} RPCOLEMESSAGE, *PRPCOLEMESSAGE;
typedef enum tagMKSYS {
 MKSYS_NONE,
 MKSYS_GENERICCOMPOSITE,
 MKSYS_FILEMONIKER,
 MKSYS_ANTIMONIKER,
 MKSYS_ITEMMONIKER,
 MKSYS_POINTERMONIKER
} MKSYS;
typedef enum tagMKREDUCE {
 MKRREDUCE_ALL,
 MKRREDUCE_ONE=196608,
 MKRREDUCE_TOUSER=131072,
 MKRREDUCE_THROUGHUSER=65536
} MKRREDUCE;
typedef struct tagRemSNB {
 unsigned long ulCntStr;
 unsigned long ulCntChar;
 OLECHAR rgString[1];
} RemSNB;
typedef enum tagADVF {
 ADVF_NODATA=1,ADVF_PRIMEFIRST=2,ADVF_ONLYONCE=4,ADVF_DATAONSTOP=64,
 ADVFCACHE_NOHANDLER=8,ADVFCACHE_FORCEBUILTIN=16,ADVFCACHE_ONSAVE=32
} ADVF;
typedef enum tagTYMED {
 TYMED_HGLOBAL=1,TYMED_FILE=2,TYMED_ISTREAM=4,TYMED_ISTORAGE=8,
 TYMED_GDI=16,TYMED_MFPICT=32,TYMED_ENHMF=64,TYMED_NULL=0
} TYMED;
typedef enum tagSERVERCALL {
 SERVERCALL_ISHANDLED,SERVERCALL_REJECTED,SERVERCALL_RETRYLATER
} SERVERCALL;
typedef struct tagCAUB {
 ULONG cElems;
 unsigned char *pElems;
}CAUB;
typedef struct tagCAI {
 ULONG cElems;
 short *pElems;
}CAI;
typedef struct tagCAUI {
 ULONG cElems;
 USHORT *pElems;
}CAUI;
typedef struct tagCAL {
 ULONG cElems;
 long *pElems;
}CAL;
typedef struct tagCAUL {
 ULONG cElems;
 ULONG *pElems;
}CAUL;
typedef struct tagCAFLT {
 ULONG cElems;
 float *pElems;
}CAFLT;
typedef struct tagCADBL {
 ULONG cElems;
 double *pElems;
}CADBL;
typedef struct tagCACY {
 ULONG cElems;
 CY *pElems;
}CACY;
typedef struct tagCADATE {
 ULONG cElems;
 DATE *pElems;
}CADATE;
typedef struct tagCABSTR {
 ULONG cElems;
 BSTR *pElems;
}CABSTR;
typedef struct tagCABSTRBLOB {
 ULONG cElems;
 BSTRBLOB *pElems;
}CABSTRBLOB;
typedef struct tagCABOOL {
 ULONG cElems;
 VARIANT_BOOL *pElems;
}CABOOL;
typedef struct tagCASCODE {
 ULONG cElems;
 SCODE *pElems;
}CASCODE;
typedef struct tagCAH {
 ULONG cElems;
 LARGE_INTEGER *pElems;
}CAH;
typedef struct tagCAUH {
 ULONG cElems;
 ULARGE_INTEGER *pElems;
}CAUH;
typedef struct tagCALPSTR {
 ULONG cElems;
 LPSTR *pElems;
}CALPSTR;
typedef struct tagCALPWSTR {
 ULONG cElems;
 LPWSTR *pElems;
}CALPWSTR;
typedef struct tagCAFILETIME {
 ULONG cElems;
 FILETIME *pElems;
}CAFILETIME;
typedef struct tagCACLIPDATA {
 ULONG cElems;
 CLIPDATA *pElems;
}CACLIPDATA;
typedef struct tagCACLSID {
 ULONG cElems;
 CLSID *pElems;
}CACLSID;
typedef struct tagPROPVARIANT *LPPROPVARIANT;
typedef struct tagCAPROPVARIANT {
 ULONG cElems;
 LPPROPVARIANT pElems;
}CAPROPVARIANT;
typedef struct tagPROPVARIANT {
 VARTYPE vt;
 WORD wReserved1;
 WORD wReserved2;
 WORD wReserved3;
 __extension__ union {
  CHAR cVal;
  UCHAR bVal;
  short iVal;
  USHORT uiVal;
  VARIANT_BOOL boolVal;





  long lVal;
  ULONG ulVal;
  float fltVal;
  SCODE scode;
  LARGE_INTEGER hVal;
  ULARGE_INTEGER uhVal;
  double dblVal;
  CY cyVal;
  DATE date;
  FILETIME filetime;
  CLSID *puuid;
  BLOB blob;
  CLIPDATA *pclipdata;
  LPSTREAM pStream;
  LPSTORAGE pStorage;
  BSTR bstrVal;
  BSTRBLOB bstrblobVal;
  LPSTR pszVal;
  LPWSTR pwszVal;
  CAUB caub;
  CAI cai;
  CAUI caui;
  CABOOL cabool;
  CAL cal;
  CAUL caul;
  CAFLT caflt;
  CASCODE cascode;
  CAH cah;
  CAUH cauh;
  CADBL cadbl;
  CACY cacy;
  CADATE cadate;
  CAFILETIME cafiletime;
  CACLSID cauuid;
  CACLIPDATA caclipdata;
  CABSTR cabstr;
  CABSTRBLOB cabstrblob;
  CALPSTR calpstr;
  CALPWSTR calpwstr;
  CAPROPVARIANT capropvar;
 } ;
} PROPVARIANT;
typedef struct tagPROPSPEC {
 ULONG ulKind;
 __extension__ union {
  PROPID propid;
  LPOLESTR lpwstr;
 } ;
}PROPSPEC;
typedef struct tagSTATPROPSTG {
 LPOLESTR lpwstrName;
 PROPID propid;
 VARTYPE vt;
} STATPROPSTG;
typedef enum PROPSETFLAG {
 PROPSETFLAG_DEFAULT,PROPSETFLAG_NONSIMPLE,PROPSETFLAG_ANSI,
 PROPSETFLAG_UNBUFFERED=4
} PROPSETFLAG;
typedef struct tagSTORAGELAYOUT {
 DWORD LayoutType;
 OLECHAR* pwcsElementName;
 LARGE_INTEGER cOffset;
 LARGE_INTEGER cBytes;
} STORAGELAYOUT;
typedef struct tagSOLE_AUTHENTICATION_SERVICE {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    OLECHAR *pPrincipalName;
    HRESULT hr;
} SOLE_AUTHENTICATION_SERVICE;

typedef enum tagEOLE_AUTHENTICATION_CAPABILITIES {
 EOAC_NONE = 0,
 EOAC_MUTUAL_AUTH = 0x1,
 EOAC_STATIC_CLOAKING = 0x20,
 EOAC_DYNAMIC_CLOAKING = 0x40,
 EOAC_ANY_AUTHORITY = 0x80,
 EOAC_MAKE_FULLSIC = 0x100,
 EOAC_DEFAULT = 0x800,
 EOAC_SECURE_REFS = 0x2,
 EOAC_ACCESS_CONTROL = 0x4,
 EOAC_APPID = 0x8,
 EOAC_DYNAMIC = 0x10,
 EOAC_REQUIRE_FULLSIC = 0x200,
 EOAC_AUTO_IMPERSONATE = 0x400,
 EOAC_NO_CUSTOM_MARSHAL = 0x2000,
 EOAC_DISABLE_AAA = 0x1000
} EOLE_AUTHENTICATION_CAPABILITIES;
typedef struct tagSOLE_AUTHENTICATION_INFO {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    void* pAuthInfo;
} SOLE_AUTHENTICATION_INFO;

typedef struct tagSOLE_AUTHENTICATION_LIST {
    DWORD cAuthInfo;
    SOLE_AUTHENTICATION_INFO* aAuthInfo;
} SOLE_AUTHENTICATION_LIST;

extern const FMTID FMTID_SummaryInformation;
extern const FMTID FMTID_DocSummaryInformation;
extern const FMTID FMTID_UserDefinedProperties;

typedef struct IEnumFORMATETC { struct IEnumFORMATETCVtbl *lpVtbl; } IEnumFORMATETC; typedef struct IEnumFORMATETCVtbl IEnumFORMATETCVtbl; struct IEnumFORMATETCVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumFORMATETC*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumFORMATETC*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumFORMATETC*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumFORMATETC*, ULONG,FORMATETC*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumFORMATETC*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumFORMATETC*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumFORMATETC*, IEnumFORMATETC**) ; };
typedef struct IEnumHLITEM { struct IEnumHLITEMVtbl *lpVtbl; } IEnumHLITEM; typedef struct IEnumHLITEMVtbl IEnumHLITEMVtbl; struct IEnumHLITEMVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumHLITEM*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumHLITEM*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumHLITEM*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumHLITEM*, ULONG,HLITEM*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumHLITEM*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumHLITEM*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumHLITEM*, IEnumHLITEM**) ; };
typedef struct IEnumSTATDATA { struct IEnumSTATDATAVtbl *lpVtbl; } IEnumSTATDATA; typedef struct IEnumSTATDATAVtbl IEnumSTATDATAVtbl; struct IEnumSTATDATAVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumSTATDATA*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumSTATDATA*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumSTATDATA*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumSTATDATA*, ULONG,STATDATA*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumSTATDATA*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumSTATDATA*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumSTATDATA*, IEnumSTATDATA**) ; };
typedef struct IEnumSTATPROPSETSTG { struct IEnumSTATPROPSETSTGVtbl *lpVtbl; } IEnumSTATPROPSETSTG; typedef struct IEnumSTATPROPSETSTGVtbl IEnumSTATPROPSETSTGVtbl; struct IEnumSTATPROPSETSTGVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumSTATPROPSETSTG*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumSTATPROPSETSTG*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumSTATPROPSETSTG*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumSTATPROPSETSTG*, ULONG,STATPROPSETSTG*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumSTATPROPSETSTG*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumSTATPROPSETSTG*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumSTATPROPSETSTG*, IEnumSTATPROPSETSTG**) ; };
typedef struct IEnumSTATPROPSTG { struct IEnumSTATPROPSTGVtbl *lpVtbl; } IEnumSTATPROPSTG; typedef struct IEnumSTATPROPSTGVtbl IEnumSTATPROPSTGVtbl; struct IEnumSTATPROPSTGVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumSTATPROPSTG*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumSTATPROPSTG*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumSTATPROPSTG*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumSTATPROPSTG*, ULONG,STATPROPSTG*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumSTATPROPSTG*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumSTATPROPSTG*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumSTATPROPSTG*, IEnumSTATPROPSTG**) ; };
typedef struct IEnumSTATSTG { struct IEnumSTATSTGVtbl *lpVtbl; } IEnumSTATSTG; typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl; struct IEnumSTATSTGVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumSTATSTG*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumSTATSTG*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumSTATSTG*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumSTATSTG*, ULONG,STATSTG*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumSTATSTG*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumSTATSTG*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumSTATSTG*, IEnumSTATSTG**) ; };
typedef struct IEnumString { struct IEnumStringVtbl *lpVtbl; } IEnumString; typedef struct IEnumStringVtbl IEnumStringVtbl; struct IEnumStringVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumString*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumString*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumString*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumString*, ULONG,LPOLESTR*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumString*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumString*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumString*, IEnumString**) ; };
typedef struct IEnumMoniker { struct IEnumMonikerVtbl *lpVtbl; } IEnumMoniker; typedef struct IEnumMonikerVtbl IEnumMonikerVtbl; struct IEnumMonikerVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumMoniker*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumMoniker*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumMoniker*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumMoniker*, ULONG,struct IMoniker**,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumMoniker*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumMoniker*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumMoniker*, IEnumMoniker**) ; };
typedef struct IEnumUnknown { struct IEnumUnknownVtbl *lpVtbl; } IEnumUnknown; typedef struct IEnumUnknownVtbl IEnumUnknownVtbl; struct IEnumUnknownVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumUnknown*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumUnknown*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumUnknown*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumUnknown*, ULONG,IUnknown**,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumUnknown*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumUnknown*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumUnknown*, IEnumUnknown**) ; };

extern const IID IID_ISequentialStream;

typedef struct ISequentialStream { struct ISequentialStreamVtbl *lpVtbl; } ISequentialStream; typedef struct ISequentialStreamVtbl ISequentialStreamVtbl; struct ISequentialStreamVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ISequentialStream *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ISequentialStream *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ISequentialStream *) ;
 HRESULT(__attribute__((__stdcall__)) *Read)(ISequentialStream *, void*,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Write)(ISequentialStream *, void const*,ULONG,ULONG*) ;
};


extern const IID IID_IStream;

typedef struct IStream { struct IStreamVtbl *lpVtbl; } IStream; typedef struct IStreamVtbl IStreamVtbl; struct IStreamVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IStream *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IStream *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IStream *) ;
 HRESULT(__attribute__((__stdcall__)) *Read)(IStream *, void*,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Write)(IStream *, void const*,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Seek)(IStream *, LARGE_INTEGER,DWORD,ULARGE_INTEGER*) ;
 HRESULT(__attribute__((__stdcall__)) *SetSize)(IStream *, ULARGE_INTEGER) ;
 HRESULT(__attribute__((__stdcall__)) *CopyTo)(IStream *, IStream*,ULARGE_INTEGER,ULARGE_INTEGER*,ULARGE_INTEGER*) ;
 HRESULT(__attribute__((__stdcall__)) *Commit)(IStream *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Revert)(IStream *) ;
 HRESULT(__attribute__((__stdcall__)) *LockRegion)(IStream *, ULARGE_INTEGER,ULARGE_INTEGER,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *UnlockRegion)(IStream *, ULARGE_INTEGER,ULARGE_INTEGER,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Stat)(IStream *, STATSTG*,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Clone)(IStream *, LPSTREAM*) ;
};


extern const IID IID_IMarshal;

typedef struct IMarshal { struct IMarshalVtbl *lpVtbl; } IMarshal; typedef struct IMarshalVtbl IMarshalVtbl; struct IMarshalVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMarshal *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMarshal *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMarshal *) ;
 HRESULT(__attribute__((__stdcall__)) *GetUnmarshalClass) (IMarshal *, const IID* const,PVOID,DWORD,PVOID,DWORD,CLSID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetMarshalSizeMax) (IMarshal *, const IID* const,PVOID,DWORD,PVOID,PDWORD,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *MarshalInterface) (IMarshal *, IStream*,const IID* const,PVOID,DWORD,PVOID,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *UnmarshalInterface) (IMarshal *, IStream*,const IID* const,void**) ;
 HRESULT(__attribute__((__stdcall__)) *ReleaseMarshalData) (IMarshal *, IStream*) ;
 HRESULT(__attribute__((__stdcall__)) *DisconnectObject) (IMarshal *, DWORD) ;
};


extern const IID IID_IStdMarshalInfo;

typedef struct IStdMarshalInfo { struct IStdMarshalInfoVtbl *lpVtbl; } IStdMarshalInfo; typedef struct IStdMarshalInfoVtbl IStdMarshalInfoVtbl; struct IStdMarshalInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IStdMarshalInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IStdMarshalInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IStdMarshalInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassForHandler)(IStdMarshalInfo *, DWORD,PVOID,CLSID*) ;
};


extern const IID IID_IMalloc;

typedef struct IMalloc { struct IMallocVtbl *lpVtbl; } IMalloc; typedef struct IMallocVtbl IMallocVtbl; struct IMallocVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMalloc *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMalloc *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMalloc *) ;
 void*(__attribute__((__stdcall__)) *Alloc)(IMalloc *, ULONG) ;
 void*(__attribute__((__stdcall__)) *Realloc)(IMalloc *, void*,ULONG) ;
 void(__attribute__((__stdcall__)) *Free)(IMalloc *, void*) ;
 ULONG(__attribute__((__stdcall__)) *GetSize)(IMalloc *, void*) ;
 int(__attribute__((__stdcall__)) *DidAlloc)(IMalloc *, void*) ;
 void(__attribute__((__stdcall__)) *HeapMinimize)(IMalloc *) ;
};


extern const IID IID_IMallocSpy;

typedef struct IMallocSpy { struct IMallocSpyVtbl *lpVtbl; } IMallocSpy; typedef struct IMallocSpyVtbl IMallocSpyVtbl; struct IMallocSpyVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMallocSpy *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMallocSpy *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMallocSpy *) ;
 ULONG(__attribute__((__stdcall__)) *PreAlloc)(IMallocSpy *, ULONG) ;
 void*(__attribute__((__stdcall__)) *PostAlloc)(IMallocSpy *, void*) ;
 void*(__attribute__((__stdcall__)) *PreFree)(IMallocSpy *, void*,BOOL) ;
 void(__attribute__((__stdcall__)) *PostFree)(IMallocSpy *, BOOL) ;
 ULONG(__attribute__((__stdcall__)) *PreRealloc)(IMallocSpy *, void*,ULONG,void**,BOOL) ;
 void*(__attribute__((__stdcall__)) *PostRealloc)(IMallocSpy *, void*,BOOL) ;
 void*(__attribute__((__stdcall__)) *PreGetSize)(IMallocSpy *, void*,BOOL) ;
 ULONG(__attribute__((__stdcall__)) *PostGetSize)(IMallocSpy *, ULONG,BOOL) ;
 void*(__attribute__((__stdcall__)) *PreDidAlloc)(IMallocSpy *, void*,BOOL) ;
 int(__attribute__((__stdcall__)) *PostDidAlloc)(IMallocSpy *, void*,BOOL,int) ;
 void(__attribute__((__stdcall__)) *PreHeapMinimize)(IMallocSpy *) ;
 void(__attribute__((__stdcall__)) *PostHeapMinimize)(IMallocSpy *) ;
};


extern const IID IID_IMessageFilter;

typedef struct IMessageFilter { struct IMessageFilterVtbl *lpVtbl; } IMessageFilter; typedef struct IMessageFilterVtbl IMessageFilterVtbl; struct IMessageFilterVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMessageFilter *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMessageFilter *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMessageFilter *) ;
 DWORD(__attribute__((__stdcall__)) *HandleInComingCall)(IMessageFilter *, DWORD,HTASK,DWORD,LPINTERFACEINFO) ;
 DWORD(__attribute__((__stdcall__)) *RetryRejectedCall)(IMessageFilter *, HTASK,DWORD,DWORD) ;
 DWORD(__attribute__((__stdcall__)) *MessagePending)(IMessageFilter *, HTASK,DWORD,DWORD) ;
};


extern const IID IID_IPersist;

typedef struct IPersist { struct IPersistVtbl *lpVtbl; } IPersist; typedef struct IPersistVtbl IPersistVtbl; struct IPersistVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPersist *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPersist *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPersist *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IPersist *, CLSID*) ;
};


extern const IID IID_IPersistStream;

typedef struct IPersistStream { struct IPersistStreamVtbl *lpVtbl; } IPersistStream; typedef struct IPersistStreamVtbl IPersistStreamVtbl; struct IPersistStreamVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPersistStream *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPersistStream *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPersistStream *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IPersistStream *, LPCLSID) ;
 HRESULT(__attribute__((__stdcall__)) *IsDirty)(IPersistStream *) ;
 HRESULT(__attribute__((__stdcall__)) *Load)(IPersistStream *, IStream*) ;
 HRESULT(__attribute__((__stdcall__)) *Save)(IPersistStream *, IStream*,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetSizeMax)(IPersistStream *, PULARGE_INTEGER) ;
};


extern const IID IID_IRunningObjectTable;

typedef struct IRunningObjectTable { struct IRunningObjectTableVtbl *lpVtbl; } IRunningObjectTable; typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl; struct IRunningObjectTableVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRunningObjectTable *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRunningObjectTable *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRunningObjectTable *) ;
 HRESULT(__attribute__((__stdcall__)) *Register)(IRunningObjectTable *, DWORD,LPUNKNOWN,LPMONIKER,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Revoke)(IRunningObjectTable *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *IsRunning)(IRunningObjectTable *, LPMONIKER) ;
 HRESULT(__attribute__((__stdcall__)) *GetObjectA)(IRunningObjectTable *, LPMONIKER,LPUNKNOWN*) ;
 HRESULT(__attribute__((__stdcall__)) *NoteChangeTime)(IRunningObjectTable *, DWORD,LPFILETIME) ;
 HRESULT(__attribute__((__stdcall__)) *GetTimeOfLastChange)(IRunningObjectTable *, LPMONIKER,LPFILETIME) ;
 HRESULT(__attribute__((__stdcall__)) *EnumRunning)(IRunningObjectTable *, IEnumMoniker**) ;
};


extern const IID IID_IBindCtx;

typedef struct IBindCtx { struct IBindCtxVtbl *lpVtbl; } IBindCtx; typedef struct IBindCtxVtbl IBindCtxVtbl; struct IBindCtxVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IBindCtx *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IBindCtx *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IBindCtx *) ;
 HRESULT(__attribute__((__stdcall__)) *RegisterObjectBound)(IBindCtx *, LPUNKNOWN) ;
 HRESULT(__attribute__((__stdcall__)) *RevokeObjectBound)(IBindCtx *, LPUNKNOWN) ;
 HRESULT(__attribute__((__stdcall__)) *ReleaseBoundObjects)(IBindCtx *) ;
 HRESULT(__attribute__((__stdcall__)) *SetBindOptions)(IBindCtx *, LPBIND_OPTS) ;
 HRESULT(__attribute__((__stdcall__)) *GetBindOptions)(IBindCtx *, LPBIND_OPTS) ;
 HRESULT(__attribute__((__stdcall__)) *GetRunningObjectTable)(IBindCtx *, IRunningObjectTable**) ;
 HRESULT(__attribute__((__stdcall__)) *RegisterObjectParam)(IBindCtx *, LPOLESTR,IUnknown*) ;
 HRESULT(__attribute__((__stdcall__)) *GetObjectParam)(IBindCtx *, LPOLESTR,IUnknown**) ;
 HRESULT(__attribute__((__stdcall__)) *EnumObjectParam)(IBindCtx *, IEnumString**) ;
 HRESULT(__attribute__((__stdcall__)) *RevokeObjectParam)(IBindCtx *, LPOLESTR) ;
};


extern const IID IID_IMoniker;

typedef struct IMoniker { struct IMonikerVtbl *lpVtbl; } IMoniker; typedef struct IMonikerVtbl IMonikerVtbl; struct IMonikerVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IMoniker *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IMoniker *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IMoniker *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IMoniker *, LPCLSID) ;
 HRESULT(__attribute__((__stdcall__)) *IsDirty)(IMoniker *) ;
 HRESULT(__attribute__((__stdcall__)) *Load)(IMoniker *, IStream*) ;
 HRESULT(__attribute__((__stdcall__)) *Save)(IMoniker *, IStream*,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetSizeMax)(IMoniker *, PULARGE_INTEGER) ;
 HRESULT(__attribute__((__stdcall__)) *BindToObject)(IMoniker *, IBindCtx*,IMoniker*,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *BindToStorage)(IMoniker *, IBindCtx*,IMoniker*,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *Reduce)(IMoniker *, IBindCtx*,DWORD,IMoniker**,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *ComposeWith)(IMoniker *, IMoniker*,BOOL,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *Enum)(IMoniker *, BOOL,IEnumMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *IsEqual)(IMoniker *, IMoniker*) ;
 HRESULT(__attribute__((__stdcall__)) *Hash)(IMoniker *, PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *IsRunning)(IMoniker *, IBindCtx*,IMoniker*,IMoniker*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTimeOfLastChange)(IMoniker *, IBindCtx*,IMoniker*,LPFILETIME) ;
 HRESULT(__attribute__((__stdcall__)) *Inverse)(IMoniker *, IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *CommonPrefixWith)(IMoniker *, IMoniker*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *RelativePathTo)(IMoniker *, IMoniker*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *GetDisplayName)(IMoniker *, IBindCtx*,IMoniker*,LPOLESTR*) ;
 HRESULT(__attribute__((__stdcall__)) *ParseDisplayName)(IMoniker *, IBindCtx*,IMoniker*,LPOLESTR,ULONG*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *IsSystemMoniker)(IMoniker *, PDWORD) ;
};


extern const IID IID_IPersistStorage;

typedef struct IPersistStorage { struct IPersistStorageVtbl *lpVtbl; } IPersistStorage; typedef struct IPersistStorageVtbl IPersistStorageVtbl; struct IPersistStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPersistStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPersistStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPersistStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IPersistStorage *, CLSID*) ;
 HRESULT(__attribute__((__stdcall__)) *IsDirty)(IPersistStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *InitNew)(IPersistStorage *, LPSTORAGE) ;
 HRESULT(__attribute__((__stdcall__)) *Load)(IPersistStorage *, LPSTORAGE) ;
 HRESULT(__attribute__((__stdcall__)) *Save)(IPersistStorage *, LPSTORAGE,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *SaveCompleted)(IPersistStorage *, LPSTORAGE) ;
 HRESULT(__attribute__((__stdcall__)) *HandsOffStorage)(IPersistStorage *) ;
};


extern const IID IID_IPersistFile;

typedef struct IPersistFile { struct IPersistFileVtbl *lpVtbl; } IPersistFile; typedef struct IPersistFileVtbl IPersistFileVtbl; struct IPersistFileVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPersistFile *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPersistFile *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPersistFile *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassID)(IPersistFile *, CLSID*) ;
 HRESULT(__attribute__((__stdcall__)) *IsDirty)(IPersistFile *) ;
 HRESULT(__attribute__((__stdcall__)) *Load)(IPersistFile *, LPCOLESTR,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Save)(IPersistFile *, LPCOLESTR,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *SaveCompleted)(IPersistFile *, LPCOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *GetCurFile)(IPersistFile *, LPOLESTR*) ;
};


extern const IID IID_IAdviseSink;

typedef struct IAdviseSink { struct IAdviseSinkVtbl *lpVtbl; } IAdviseSink; typedef struct IAdviseSinkVtbl IAdviseSinkVtbl; struct IAdviseSinkVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IAdviseSink *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IAdviseSink *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IAdviseSink *) ;
 void(__attribute__((__stdcall__)) *OnDataChange)(IAdviseSink *, FORMATETC*,STGMEDIUM*) ;
 void(__attribute__((__stdcall__)) *OnViewChange)(IAdviseSink *, DWORD,LONG) ;
 void(__attribute__((__stdcall__)) *OnRename)(IAdviseSink *, IMoniker*) ;
 void(__attribute__((__stdcall__)) *OnSave)(IAdviseSink *) ;
 void(__attribute__((__stdcall__)) *OnClose)(IAdviseSink *) ;
};


extern const IID IID_IAdviseSink2;

typedef struct IAdviseSink2 { struct IAdviseSink2Vtbl *lpVtbl; } IAdviseSink2; typedef struct IAdviseSink2Vtbl IAdviseSink2Vtbl; struct IAdviseSink2Vtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IAdviseSink2 *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IAdviseSink2 *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IAdviseSink2 *) ;
 void(__attribute__((__stdcall__)) *OnDataChange)(IAdviseSink2 *, FORMATETC*,STGMEDIUM*) ;
 void(__attribute__((__stdcall__)) *OnViewChange)(IAdviseSink2 *, DWORD,LONG) ;
 void(__attribute__((__stdcall__)) *OnRename)(IAdviseSink2 *, IMoniker*) ;
 void(__attribute__((__stdcall__)) *OnSave)(IAdviseSink2 *) ;
 void(__attribute__((__stdcall__)) *OnClose)(IAdviseSink2 *) ;
 void(__attribute__((__stdcall__)) *OnLinkSrcChange)(IAdviseSink2 *, IMoniker*);
};


extern const IID IID_IDataObject;

typedef struct IDataObject { struct IDataObjectVtbl *lpVtbl; } IDataObject; typedef struct IDataObjectVtbl IDataObjectVtbl; struct IDataObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDataObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDataObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDataObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetData)(IDataObject *, FORMATETC*,STGMEDIUM*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDataHere)(IDataObject *, FORMATETC*,STGMEDIUM*) ;
 HRESULT(__attribute__((__stdcall__)) *QueryGetData)(IDataObject *, FORMATETC*) ;
 HRESULT(__attribute__((__stdcall__)) *GetCanonicalFormatEtc)(IDataObject *, FORMATETC*,FORMATETC*) ;
 HRESULT(__attribute__((__stdcall__)) *SetData)(IDataObject *, FORMATETC*,STGMEDIUM*,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *EnumFormatEtc)(IDataObject *, DWORD,IEnumFORMATETC**) ;
 HRESULT(__attribute__((__stdcall__)) *DAdvise)(IDataObject *, FORMATETC*,DWORD,IAdviseSink*,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *DUnadvise)(IDataObject *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumDAdvise)(IDataObject *, IEnumSTATDATA**) ;
};


extern const IID IID_IDataAdviseHolder;

typedef struct IDataAdviseHolder { struct IDataAdviseHolderVtbl *lpVtbl; } IDataAdviseHolder; typedef struct IDataAdviseHolderVtbl IDataAdviseHolderVtbl; struct IDataAdviseHolderVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDataAdviseHolder *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDataAdviseHolder *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDataAdviseHolder *) ;
 HRESULT(__attribute__((__stdcall__)) *Advise)(IDataAdviseHolder *, IDataObject*,FORMATETC*,DWORD,IAdviseSink*,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unadvise)(IDataAdviseHolder *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumAdvise)(IDataAdviseHolder *, IEnumSTATDATA**) ;
 HRESULT(__attribute__((__stdcall__)) *SendOnDataChange)(IDataAdviseHolder *, IDataObject*,DWORD,DWORD) ;
};


extern const IID IID_IStorage;

typedef struct IStorage { struct IStorageVtbl *lpVtbl; } IStorage; typedef struct IStorageVtbl IStorageVtbl; struct IStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *CreateStream)(IStorage *, LPCWSTR,DWORD,DWORD,DWORD,IStream**) ;
 HRESULT(__attribute__((__stdcall__)) *OpenStream)(IStorage *, LPCWSTR,PVOID,DWORD,DWORD,IStream**) ;
 HRESULT(__attribute__((__stdcall__)) *CreateStorage)(IStorage *, LPCWSTR,DWORD,DWORD,DWORD,IStorage**) ;
 HRESULT(__attribute__((__stdcall__)) *OpenStorage)(IStorage *, LPCWSTR,IStorage*,DWORD,SNB,DWORD,IStorage**) ;
 HRESULT(__attribute__((__stdcall__)) *CopyTo)(IStorage *, DWORD,IID const*,SNB,IStorage*) ;
 HRESULT(__attribute__((__stdcall__)) *MoveElementTo)(IStorage *, LPCWSTR,IStorage*,LPCWSTR,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Commit)(IStorage *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Revert)(IStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *EnumElements)(IStorage *, DWORD,PVOID,DWORD,IEnumSTATSTG**) ;
 HRESULT(__attribute__((__stdcall__)) *DestroyElement)(IStorage *, LPCWSTR) ;
 HRESULT(__attribute__((__stdcall__)) *RenameElement)(IStorage *, LPCWSTR,LPCWSTR) ;
 HRESULT(__attribute__((__stdcall__)) *SetElementTimes)(IStorage *, LPCWSTR,FILETIME const*,FILETIME const*,FILETIME const*) ;
 HRESULT(__attribute__((__stdcall__)) *SetClass)(IStorage *, const CLSID* const) ;
 HRESULT(__attribute__((__stdcall__)) *SetStateBits)(IStorage *, DWORD,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Stat)(IStorage *, STATSTG*,DWORD) ;
};


extern const IID IID_IRootStorage;

typedef struct IRootStorage { struct IRootStorageVtbl *lpVtbl; } IRootStorage; typedef struct IRootStorageVtbl IRootStorageVtbl; struct IRootStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRootStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRootStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRootStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *SwitchToFile)(IRootStorage *, LPOLESTR) ;
};


extern const IID IID_IRpcChannelBuffer;

typedef struct IRpcChannelBuffer { struct IRpcChannelBufferVtbl *lpVtbl; } IRpcChannelBuffer; typedef struct IRpcChannelBufferVtbl IRpcChannelBufferVtbl; struct IRpcChannelBufferVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRpcChannelBuffer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRpcChannelBuffer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRpcChannelBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *GetBuffer)(IRpcChannelBuffer *, RPCOLEMESSAGE*,const IID* const) ;
 HRESULT(__attribute__((__stdcall__)) *SendReceive)(IRpcChannelBuffer *, RPCOLEMESSAGE*,PULONG) ;
 HRESULT(__attribute__((__stdcall__)) *FreeBuffer)(IRpcChannelBuffer *, RPCOLEMESSAGE*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDestCtx)(IRpcChannelBuffer *, PDWORD,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *IsConnected)(IRpcChannelBuffer *) ;
};


extern const IID IID_IRpcProxyBuffer;

typedef struct IRpcProxyBuffer { struct IRpcProxyBufferVtbl *lpVtbl; } IRpcProxyBuffer; typedef struct IRpcProxyBufferVtbl IRpcProxyBufferVtbl; struct IRpcProxyBufferVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRpcProxyBuffer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRpcProxyBuffer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRpcProxyBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *Connect)(IRpcProxyBuffer *, IRpcChannelBuffer*) ;
 void(__attribute__((__stdcall__)) *Disconnect)(IRpcProxyBuffer *) ;

};


extern const IID IID_IRpcStubBuffer;

typedef struct IRpcStubBuffer { struct IRpcStubBufferVtbl *lpVtbl; } IRpcStubBuffer; typedef struct IRpcStubBufferVtbl IRpcStubBufferVtbl; struct IRpcStubBufferVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRpcStubBuffer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRpcStubBuffer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRpcStubBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *Connect)(IRpcStubBuffer *, LPUNKNOWN) ;
 void(__attribute__((__stdcall__)) *Disconnect)(IRpcStubBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *Invoke)(IRpcStubBuffer *, RPCOLEMESSAGE*,LPRPCSTUBBUFFER) ;
 LPRPCSTUBBUFFER(__attribute__((__stdcall__)) *IsIIDSupported)(IRpcStubBuffer *, const IID* const) ;
 ULONG(__attribute__((__stdcall__)) *CountRefs)(IRpcStubBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *DebugServerQueryInterface)(IRpcStubBuffer *, PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *DebugServerRelease)(IRpcStubBuffer *, PVOID) ;
};


extern const IID IID_IPSFactoryBuffer;

typedef struct IPSFactoryBuffer { struct IPSFactoryBufferVtbl *lpVtbl; } IPSFactoryBuffer; typedef struct IPSFactoryBufferVtbl IPSFactoryBufferVtbl; struct IPSFactoryBufferVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPSFactoryBuffer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPSFactoryBuffer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPSFactoryBuffer *) ;
 HRESULT(__attribute__((__stdcall__)) *CreateProxy)(IPSFactoryBuffer *, LPUNKNOWN,const IID* const,LPRPCPROXYBUFFER*,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *CreateStub)(IPSFactoryBuffer *, const IID* const,LPUNKNOWN,LPRPCSTUBBUFFER*) ;
};

typedef struct IPSFactoryBuffer *LPPSFACTORYBUFFER;

extern const IID IID_ILockBytes;

typedef struct ILockBytes { struct ILockBytesVtbl *lpVtbl; } ILockBytes; typedef struct ILockBytesVtbl ILockBytesVtbl; struct ILockBytesVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ILockBytes *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ILockBytes *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ILockBytes *) ;
 HRESULT(__attribute__((__stdcall__)) *ReadAt)(ILockBytes *, ULARGE_INTEGER,PVOID,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *WriteAt)(ILockBytes *, ULARGE_INTEGER,PCVOID,ULONG,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Flush)(ILockBytes *) ;
 HRESULT(__attribute__((__stdcall__)) *SetSize)(ILockBytes *, ULARGE_INTEGER) ;
 HRESULT(__attribute__((__stdcall__)) *LockRegion)(ILockBytes *, ULARGE_INTEGER,ULARGE_INTEGER,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *UnlockRegion)(ILockBytes *, ULARGE_INTEGER,ULARGE_INTEGER,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Stat)(ILockBytes *, STATSTG*,DWORD) ;
};


extern const IID IID_IExternalConnection;

typedef struct IExternalConnection { struct IExternalConnectionVtbl *lpVtbl; } IExternalConnection; typedef struct IExternalConnectionVtbl IExternalConnectionVtbl; struct IExternalConnectionVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IExternalConnection *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IExternalConnection *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IExternalConnection *) ;
 DWORD(__attribute__((__stdcall__)) *AddConnection)(IExternalConnection *, DWORD,DWORD) ;
 DWORD(__attribute__((__stdcall__)) *ReleaseConnection)(IExternalConnection *, DWORD,DWORD,BOOL) ;
};


extern const IID IID_IRunnableObject;

typedef struct IRunnableObject { struct IRunnableObjectVtbl *lpVtbl; } IRunnableObject; typedef struct IRunnableObjectVtbl IRunnableObjectVtbl; struct IRunnableObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRunnableObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRunnableObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRunnableObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetRunningClass)(IRunnableObject *, LPCLSID) ;
 HRESULT(__attribute__((__stdcall__)) *Run)(IRunnableObject *, LPBC) ;
 BOOL(__attribute__((__stdcall__)) *IsRunning)(IRunnableObject *) ;
 HRESULT(__attribute__((__stdcall__)) *LockRunning)(IRunnableObject *, BOOL,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *SetContainedObject)(IRunnableObject *, BOOL) ;
};


extern const IID IID_IROTData;

typedef struct IROTData { struct IROTDataVtbl *lpVtbl; } IROTData; typedef struct IROTDataVtbl IROTDataVtbl; struct IROTDataVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IROTData *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IROTData *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IROTData *) ;
 HRESULT(__attribute__((__stdcall__)) *GetComparisonData)(IROTData *, PVOID,ULONG,PULONG) ;
};


extern const IID IID_IChannelHook;

typedef struct IChannelHook { struct IChannelHookVtbl *lpVtbl; } IChannelHook; typedef struct IChannelHookVtbl IChannelHookVtbl; struct IChannelHookVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IChannelHook *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IChannelHook *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IChannelHook *) ;
 void(__attribute__((__stdcall__)) *ClientGetSize)(IChannelHook *, const GUID* const,const IID* const,PULONG) ;
 void(__attribute__((__stdcall__)) *ClientFillBuffer)(IChannelHook *, const GUID* const,const IID* const,PULONG,PVOID) ;
 void(__attribute__((__stdcall__)) *ClientNotify)(IChannelHook *, const GUID* const,const IID* const,ULONG,PVOID,DWORD,HRESULT) ;
 void(__attribute__((__stdcall__)) *ServerNotify)(IChannelHook *, const GUID* const,const IID* const,ULONG,PVOID,DWORD) ;
 void(__attribute__((__stdcall__)) *ServerGetSize)(IChannelHook *, const GUID* const,const IID* const,HRESULT,PULONG) ;
 void(__attribute__((__stdcall__)) *ServerFillBuffer)(IChannelHook *, const GUID* const,const IID* const,PULONG,PVOID,HRESULT) ;
};


extern const IID IID_IPropertyStorage;

typedef struct IPropertyStorage { struct IPropertyStorageVtbl *lpVtbl; } IPropertyStorage; typedef struct IPropertyStorageVtbl IPropertyStorageVtbl; struct IPropertyStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPropertyStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPropertyStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPropertyStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *ReadMultiple)(IPropertyStorage *, ULONG,PROPSPEC const*,PROPVARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *WriteMultiple)(IPropertyStorage *, ULONG,PROPSPEC const*,PROPVARIANT*,PROPID) ;
 HRESULT(__attribute__((__stdcall__)) *DeleteMultiple)(IPropertyStorage *, ULONG,PROPSPEC const*) ;
 HRESULT(__attribute__((__stdcall__)) *ReadPropertyNames)(IPropertyStorage *, ULONG,PROPID const*,LPWSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *WritePropertyNames)(IPropertyStorage *, ULONG,PROPID const*,LPWSTR const*) ;
 HRESULT(__attribute__((__stdcall__)) *DeletePropertyNames)(IPropertyStorage *, ULONG,PROPID const*) ;
 HRESULT(__attribute__((__stdcall__)) *SetClass)(IPropertyStorage *, const CLSID* const) ;
 HRESULT(__attribute__((__stdcall__)) *Commit)(IPropertyStorage *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Revert)(IPropertyStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *Enum)(IPropertyStorage *, IEnumSTATPROPSTG**) ;
 HRESULT(__attribute__((__stdcall__)) *Stat)(IPropertyStorage *, STATPROPSTG*) ;
 HRESULT(__attribute__((__stdcall__)) *SetTimes)(IPropertyStorage *, FILETIME const*,FILETIME const*,FILETIME const*) ;
};


extern const IID IID_IPropertySetStorage;

typedef struct IPropertySetStorage { struct IPropertySetStorageVtbl *lpVtbl; } IPropertySetStorage; typedef struct IPropertySetStorageVtbl IPropertySetStorageVtbl; struct IPropertySetStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IPropertySetStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IPropertySetStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IPropertySetStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *Create)(IPropertySetStorage *, const FMTID* const,CLSID*,DWORD,DWORD,LPPROPERTYSTORAGE*) ;
 HRESULT(__attribute__((__stdcall__)) *Open)(IPropertySetStorage *, const FMTID* const,DWORD,LPPROPERTYSTORAGE*) ;
 HRESULT(__attribute__((__stdcall__)) *Delete)(IPropertySetStorage *, const FMTID* const) ;
 HRESULT(__attribute__((__stdcall__)) *Enum)(IPropertySetStorage *, IEnumSTATPROPSETSTG**) ;
};


extern const IID IID_IClientSecurity;

typedef struct IClientSecurity { struct IClientSecurityVtbl *lpVtbl; } IClientSecurity; typedef struct IClientSecurityVtbl IClientSecurityVtbl; struct IClientSecurityVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IClientSecurity *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IClientSecurity *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IClientSecurity *) ;
 HRESULT(__attribute__((__stdcall__)) *QueryBlanket)(IClientSecurity *, PVOID,PDWORD,PDWORD,OLECHAR**,PDWORD,PDWORD,RPC_AUTH_IDENTITY_HANDLE**,PDWORD*) ;
 HRESULT(__attribute__((__stdcall__)) *SetBlanket)(IClientSecurity *, PVOID,DWORD,DWORD,LPWSTR,DWORD,DWORD,RPC_AUTH_IDENTITY_HANDLE*,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *CopyProxy)(IClientSecurity *, LPUNKNOWN,LPUNKNOWN*) ;
};


extern const IID IID_IServerSecurity;

typedef struct IServerSecurity { struct IServerSecurityVtbl *lpVtbl; } IServerSecurity; typedef struct IServerSecurityVtbl IServerSecurityVtbl; struct IServerSecurityVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IServerSecurity *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IServerSecurity *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IServerSecurity *) ;
 HRESULT(__attribute__((__stdcall__)) *QueryBlanket)(IServerSecurity *, PDWORD,PDWORD,OLECHAR**,PDWORD,PDWORD,RPC_AUTHZ_HANDLE*,PDWORD*) ;
 HRESULT(__attribute__((__stdcall__)) *ImpersonateClient)(IServerSecurity *) ;
 HRESULT(__attribute__((__stdcall__)) *RevertToSelf)(IServerSecurity *) ;
 HRESULT(__attribute__((__stdcall__)) *IsImpersonating)(IServerSecurity *) ;
};


extern const IID IID_IClassActivator;

typedef struct IClassActivator { struct IClassActivatorVtbl *lpVtbl; } IClassActivator; typedef struct IClassActivatorVtbl IClassActivatorVtbl; struct IClassActivatorVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IClassActivator *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IClassActivator *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IClassActivator *) ;
 HRESULT(__attribute__((__stdcall__)) *GetClassObject)(IClassActivator *, const CLSID* const,DWORD,LCID,const IID* const,PVOID*) ;
};


extern const IID IID_IFillLockBytes;

typedef struct IFillLockBytes { struct IFillLockBytesVtbl *lpVtbl; } IFillLockBytes; typedef struct IFillLockBytesVtbl IFillLockBytesVtbl; struct IFillLockBytesVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IFillLockBytes *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IFillLockBytes *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IFillLockBytes *) ;
 HRESULT(__attribute__((__stdcall__)) *FillAppend)(IFillLockBytes *, void const*,ULONG,PULONG) ;
 HRESULT(__attribute__((__stdcall__)) *FillAt)(IFillLockBytes *, ULARGE_INTEGER,void const*,ULONG,PULONG) ;
 HRESULT(__attribute__((__stdcall__)) *SetFillSize)(IFillLockBytes *, ULARGE_INTEGER) ;
 HRESULT(__attribute__((__stdcall__)) *Terminate)(IFillLockBytes *, BOOL) ;
};


extern const IID IID_IProgressNotify;

typedef struct IProgressNotify { struct IProgressNotifyVtbl *lpVtbl; } IProgressNotify; typedef struct IProgressNotifyVtbl IProgressNotifyVtbl; struct IProgressNotifyVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IProgressNotify *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IProgressNotify *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IProgressNotify *) ;
 HRESULT(__attribute__((__stdcall__)) *OnProgress)(IProgressNotify *, DWORD,DWORD,BOOL,BOOL) ;
};


extern const IID IID_ILayoutStorage;

typedef struct ILayoutStorage { struct ILayoutStorageVtbl *lpVtbl; } ILayoutStorage; typedef struct ILayoutStorageVtbl ILayoutStorageVtbl; struct ILayoutStorageVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ILayoutStorage *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ILayoutStorage *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ILayoutStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *LayoutScript)(ILayoutStorage *, STORAGELAYOUT*,DWORD,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *BeginMonitor)(ILayoutStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *EndMonitor)(ILayoutStorage *) ;
 HRESULT(__attribute__((__stdcall__)) *ReLayoutDocfile)(ILayoutStorage *, OLECHAR*) ;
};


extern const IID IID_IGlobalInterfaceTable;

typedef struct IGlobalInterfaceTable { struct IGlobalInterfaceTableVtbl *lpVtbl; } IGlobalInterfaceTable; typedef struct IGlobalInterfaceTableVtbl IGlobalInterfaceTableVtbl; struct IGlobalInterfaceTableVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IGlobalInterfaceTable *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IGlobalInterfaceTable *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IGlobalInterfaceTable *) ;
 HRESULT(__attribute__((__stdcall__)) *RegisterInterfaceInGlobal)(IGlobalInterfaceTable *, IUnknown*,const IID* const,DWORD*) ;
 HRESULT(__attribute__((__stdcall__)) *RevokeInterfaceFromGlobal)(IGlobalInterfaceTable *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GetInterfaceFromGlobal)(IGlobalInterfaceTable *, DWORD,const IID* const,void**) ;
};
# 1065 "c:\\mingw\\include\\objidl.h" 3
HRESULT __attribute__((__stdcall__)) IMarshal_GetUnmarshalClass_Proxy(IMarshal*,const IID* const,void*,DWORD,void*,DWORD,CLSID*);
void __attribute__((__stdcall__)) IMarshal_GetUnmarshalClass_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_GetMarshalSizeMax_Proxy(IMarshal*,const IID* const,void*,DWORD,void*,DWORD,DWORD*);
void __attribute__((__stdcall__)) IMarshal_GetMarshalSizeMax_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_MarshalInterface_Proxy(IMarshal*,IStream*,const IID* const,void*,DWORD,void*,DWORD);
void __attribute__((__stdcall__)) IMarshal_MarshalInterface_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_UnmarshalInterface_Proxy(IMarshal*,IStream*,const IID* const,void**);
void __attribute__((__stdcall__)) IMarshal_UnmarshalInterface_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_ReleaseMarshalData_Proxy(IMarshal*,IStream*);
void __attribute__((__stdcall__)) IMarshal_ReleaseMarshalData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMarshal_DisconnectObject_Proxy(IMarshal*,DWORD);
void __attribute__((__stdcall__)) IMarshal_DisconnectObject_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMalloc_Alloc_Proxy(IMalloc*,ULONG);
void __attribute__((__stdcall__)) IMalloc_Alloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMalloc_Realloc_Proxy(IMalloc*,void*,ULONG);
void __attribute__((__stdcall__)) IMalloc_Realloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMalloc_Free_Proxy(IMalloc*,void*);
void __attribute__((__stdcall__)) IMalloc_Free_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IMalloc_GetSize_Proxy(IMalloc*,void*);
void __attribute__((__stdcall__)) IMalloc_GetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
int __attribute__((__stdcall__)) IMalloc_DidAlloc_Proxy(IMalloc*,void*);
void __attribute__((__stdcall__)) IMalloc_DidAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMalloc_HeapMinimize_Proxy(IMalloc*);
void __attribute__((__stdcall__)) IMalloc_HeapMinimize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IMallocSpy_PreAlloc_Proxy(IMallocSpy*,ULONG cbRequest);
void __attribute__((__stdcall__)) IMallocSpy_PreAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PostAlloc_Proxy(IMallocSpy*,void*);
void __attribute__((__stdcall__)) IMallocSpy_PostAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PreFree_Proxy(IMallocSpy*,void*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PreFree_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMallocSpy_PostFree_Proxy(IMallocSpy*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PostFree_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IMallocSpy_PreRealloc_Proxy(IMallocSpy*,void*,ULONG,void**,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PreRealloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PostRealloc_Proxy(IMallocSpy*,void*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PostRealloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PreGetSize_Proxy(IMallocSpy*,void*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PreGetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IMallocSpy_PostGetSize_Proxy(IMallocSpy*,ULONG,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PostGetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void* __attribute__((__stdcall__)) IMallocSpy_PreDidAlloc_Proxy(IMallocSpy*,void*,BOOL);
void __attribute__((__stdcall__)) IMallocSpy_PreDidAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
int __attribute__((__stdcall__)) IMallocSpy_PostDidAlloc_Proxy(IMallocSpy*,void*,BOOL,int);
void __attribute__((__stdcall__)) IMallocSpy_PostDidAlloc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMallocSpy_PreHeapMinimize_Proxy(IMallocSpy* );
void __attribute__((__stdcall__)) IMallocSpy_PreHeapMinimize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IMallocSpy_PostHeapMinimize_Proxy(IMallocSpy*);
void __attribute__((__stdcall__)) IMallocSpy_PostHeapMinimize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStdMarshalInfo_GetClassForHandler_Proxy(IStdMarshalInfo*,DWORD,void*,CLSID*);
void __attribute__((__stdcall__)) IStdMarshalInfo_GetClassForHandler_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IExternalConnection_AddConnection_Proxy(IExternalConnection*,DWORD,DWORD);
void __attribute__((__stdcall__)) IExternalConnection_AddConnection_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IExternalConnection_ReleaseConnection_Proxy(IExternalConnection*,DWORD,DWORD,BOOL);
void __attribute__((__stdcall__)) IExternalConnection_ReleaseConnection_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_RemoteNext_Proxy(IEnumUnknown*,ULONG,IUnknown**,ULONG*);
void __attribute__((__stdcall__)) IEnumUnknown_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Skip_Proxy(IEnumUnknown*,ULONG);
void __attribute__((__stdcall__)) IEnumUnknown_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Reset_Proxy(IEnumUnknown* );
void __attribute__((__stdcall__)) IEnumUnknown_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Clone_Proxy(IEnumUnknown*,IEnumUnknown**);
void __attribute__((__stdcall__)) IEnumUnknown_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_RegisterObjectBound_Proxy(IBindCtx*,IUnknown*punk);
void __attribute__((__stdcall__)) IBindCtx_RegisterObjectBound_Stub(IRpcStubBuffer*,IRpcChannelBuffer*_pRpcChannelBuffer,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_RevokeObjectBound_Proxy(IBindCtx*,IUnknown*punk);
void __attribute__((__stdcall__)) IBindCtx_RevokeObjectBound_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_ReleaseBoundObjects_Proxy(IBindCtx*);
void __attribute__((__stdcall__)) IBindCtx_ReleaseBoundObjects_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_SetBindOptions_Proxy(IBindCtx*,BIND_OPTS*);
void __attribute__((__stdcall__)) IBindCtx_SetBindOptions_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_GetBindOptions_Proxy(IBindCtx*,BIND_OPTS*pbindopts);
void __attribute__((__stdcall__)) IBindCtx_GetBindOptions_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_GetRunningObjectTable_Proxy(IBindCtx*,IRunningObjectTable**);
void __attribute__((__stdcall__)) IBindCtx_GetRunningObjectTable_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_RegisterObjectParam_Proxy(IBindCtx*,LPCSTR,IUnknown*);
void __attribute__((__stdcall__)) IBindCtx_RegisterObjectParam_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_GetObjectParam_Proxy(IBindCtx*,LPCSTR,IUnknown**);
void __attribute__((__stdcall__)) IBindCtx_GetObjectParam_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_EnumObjectParam_Proxy(IBindCtx*,IEnumString**);
void __attribute__((__stdcall__)) IBindCtx_EnumObjectParam_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IBindCtx_RevokeObjectParam_Proxy(IBindCtx*,LPCSTR);
void __attribute__((__stdcall__)) IBindCtx_RevokeObjectParam_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_RemoteNext_Proxy(IEnumMoniker*,ULONG,IMoniker**,ULONG*);
void __attribute__((__stdcall__)) IEnumMoniker_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Skip_Proxy(IEnumMoniker*,ULONG);
void __attribute__((__stdcall__)) IEnumMoniker_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Reset_Proxy(IEnumMoniker*);
void __attribute__((__stdcall__)) IEnumMoniker_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Clone_Proxy(IEnumMoniker*,IEnumMoniker**);
void __attribute__((__stdcall__)) IEnumMoniker_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunnableObject_GetRunningClass_Proxy(IRunnableObject*,LPCLSID);
void __attribute__((__stdcall__)) IRunnableObject_GetRunningClass_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunnableObject_Run_Proxy(IRunnableObject*,LPBINDCTX);
void __attribute__((__stdcall__)) IRunnableObject_Run_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
BOOL __attribute__((__stdcall__)) IRunnableObject_IsRunning_Proxy(IRunnableObject*);
void __attribute__((__stdcall__)) IRunnableObject_IsRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunnableObject_LockRunning_Proxy(IRunnableObject*,BOOL,BOOL);
void __attribute__((__stdcall__)) IRunnableObject_LockRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunnableObject_SetContainedObject_Proxy(IRunnableObject*,BOOL);
void __attribute__((__stdcall__)) IRunnableObject_SetContainedObject_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_Register_Proxy(IRunningObjectTable*,DWORD,IUnknown*,IMoniker*,DWORD*);
void __attribute__((__stdcall__)) IRunningObjectTable_Register_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_Revoke_Proxy(IRunningObjectTable*,DWORD);
void __attribute__((__stdcall__)) IRunningObjectTable_Revoke_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_IsRunning_Proxy(IRunningObjectTable*,IMoniker*);
void __attribute__((__stdcall__)) IRunningObjectTable_IsRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_GetObject_Proxy(IRunningObjectTable*,IMoniker*,IUnknown**);
void __attribute__((__stdcall__)) IRunningObjectTable_GetObject_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_NoteChangeTime_Proxy(IRunningObjectTable*,DWORD,FILETIME*);
void __attribute__((__stdcall__)) IRunningObjectTable_NoteChangeTime_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_GetTimeOfLastChange_Proxy(IRunningObjectTable*,IMoniker*,FILETIME*);
void __attribute__((__stdcall__)) IRunningObjectTable_GetTimeOfLastChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRunningObjectTable_EnumRunning_Proxy(IRunningObjectTable*,IEnumMoniker**);
void __attribute__((__stdcall__)) IRunningObjectTable_EnumRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersist_GetClassID_Proxy(IPersist*,CLSID*);
void __attribute__((__stdcall__)) IPersist_GetClassID_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStream_IsDirty_Proxy(IPersistStream*);
void __attribute__((__stdcall__)) IPersistStream_IsDirty_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStream_Load_Proxy(IPersistStream*,IStream*);
void __attribute__((__stdcall__)) IPersistStream_Load_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStream_Save_Proxy(IPersistStream*,IStream*,BOOL);
void __attribute__((__stdcall__)) IPersistStream_Save_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStream_GetSizeMax_Proxy(IPersistStream*,ULARGE_INTEGER*);
void __attribute__((__stdcall__)) IPersistStream_GetSizeMax_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_RemoteBindToObject_Proxy(IMoniker*,IBindCtx*,IMoniker*,const IID* const,IUnknown**);
void __attribute__((__stdcall__)) IMoniker_RemoteBindToObject_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_RemoteBindToStorage_Proxy(IMoniker*,IBindCtx*,IMoniker*,const IID* const,IUnknown**);
void __attribute__((__stdcall__)) IMoniker_RemoteBindToStorage_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_Reduce_Proxy(IMoniker*,IBindCtx*,DWORD,IMoniker**,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_Reduce_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_ComposeWith_Proxy(IMoniker*,IMoniker*,BOOL,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_ComposeWith_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_Enum_Proxy(IMoniker*,BOOL,IEnumMoniker**);
void __attribute__((__stdcall__)) IMoniker_Enum_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_IsEqual_Proxy(IMoniker*,IMoniker*);
void __attribute__((__stdcall__)) IMoniker_IsEqual_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_Hash_Proxy(IMoniker*,DWORD*);
void __attribute__((__stdcall__)) IMoniker_Hash_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_IsRunning_Proxy(IMoniker*,IBindCtx*,IMoniker*,IMoniker*);
void __attribute__((__stdcall__)) IMoniker_IsRunning_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_GetTimeOfLastChange_Proxy(IMoniker*,IBindCtx*,IMoniker*,FILETIME*);
void __attribute__((__stdcall__)) IMoniker_GetTimeOfLastChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_Inverse_Proxy(IMoniker*,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_Inverse_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_CommonPrefixWith_Proxy(IMoniker*,IMoniker*,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_CommonPrefixWith_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_RelativePathTo_Proxy(IMoniker*,IMoniker*,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_RelativePathTo_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_GetDisplayName_Proxy(IMoniker*,IBindCtx*,IMoniker*,LPCSTR*);
void __attribute__((__stdcall__)) IMoniker_GetDisplayName_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_ParseDisplayName_Proxy(IMoniker*,IBindCtx*,IMoniker*,LPCSTR,ULONG*,IMoniker**);
void __attribute__((__stdcall__)) IMoniker_ParseDisplayName_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IMoniker_IsSystemMoniker_Proxy(IMoniker*,DWORD*);
void __attribute__((__stdcall__)) IMoniker_IsSystemMoniker_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IROTData_GetComparisonData_Proxy(IROTData*,BYTE*,ULONG cbMax,ULONG*);
void __attribute__((__stdcall__)) IROTData_GetComparisonData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumString_RemoteNext_Proxy(IEnumString*,ULONG,LPCSTR*rgelt,ULONG*);
void __attribute__((__stdcall__)) IEnumString_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumString_Skip_Proxy(IEnumString*,ULONG);
void __attribute__((__stdcall__)) IEnumString_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumString_Reset_Proxy(IEnumString*);
void __attribute__((__stdcall__)) IEnumString_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumString_Clone_Proxy(IEnumString*,IEnumString**);
void __attribute__((__stdcall__)) IEnumString_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_RemoteRead_Proxy(IStream*,BYTE*,ULONG,ULONG*);
void __attribute__((__stdcall__)) IStream_RemoteRead_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_RemoteWrite_Proxy(IStream*,BYTE*pv,ULONG,ULONG*);
void __attribute__((__stdcall__)) IStream_RemoteWrite_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_RemoteSeek_Proxy(IStream*,LARGE_INTEGER,DWORD,ULARGE_INTEGER*);
void __attribute__((__stdcall__)) IStream_RemoteSeek_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_SetSize_Proxy(IStream*,ULARGE_INTEGER);
void __attribute__((__stdcall__)) IStream_SetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_RemoteCopyTo_Proxy(IStream*,IStream*,ULARGE_INTEGER,ULARGE_INTEGER*,ULARGE_INTEGER*);
void __attribute__((__stdcall__)) IStream_RemoteCopyTo_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_Commit_Proxy(IStream*,DWORD);
void __attribute__((__stdcall__)) IStream_Commit_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_Revert_Proxy(IStream*);
void __attribute__((__stdcall__)) IStream_Revert_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_LockRegion_Proxy(IStream*,ULARGE_INTEGER,ULARGE_INTEGER,DWORD);
void __attribute__((__stdcall__)) IStream_LockRegion_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_UnlockRegion_Proxy(IStream*,ULARGE_INTEGER,ULARGE_INTEGER,DWORD);
void __attribute__((__stdcall__)) IStream_UnlockRegion_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_Stat_Proxy(IStream*,STATSTG*,DWORD);
void __attribute__((__stdcall__)) IStream_Stat_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStream_Clone_Proxy(IStream*,IStream**);
void __attribute__((__stdcall__)) IStream_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_RemoteNext_Proxy(IEnumSTATSTG*,ULONG,STATSTG*,ULONG*);
void __attribute__((__stdcall__)) IEnumSTATSTG_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Skip_Proxy(IEnumSTATSTG*,ULONG celt);
void __attribute__((__stdcall__)) IEnumSTATSTG_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Reset_Proxy(IEnumSTATSTG*);
void __attribute__((__stdcall__)) IEnumSTATSTG_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Clone_Proxy(IEnumSTATSTG*,IEnumSTATSTG**);
void __attribute__((__stdcall__)) IEnumSTATSTG_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_CreateStream_Proxy(IStorage*,OLECHAR*,DWORD,DWORD,DWORD,IStream**);
void __attribute__((__stdcall__)) IStorage_CreateStream_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_RemoteOpenStream_Proxy(IStorage*,const OLECHAR*,unsigned long,BYTE*,DWORD,DWORD,IStream**);
void __attribute__((__stdcall__)) IStorage_RemoteOpenStream_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_CreateStorage_Proxy(IStorage*,OLECHAR*,DWORD,DWORD,DWORD,IStorage**);
void __attribute__((__stdcall__)) IStorage_CreateStorage_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_OpenStorage_Proxy(IStorage*,OLECHAR*,IStorage*,DWORD,SNB,DWORD,IStorage**);
void __attribute__((__stdcall__)) IStorage_OpenStorage_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_CopyTo_Proxy(IStorage*,DWORD,const IID*,SNB,IStorage*);
void __attribute__((__stdcall__)) IStorage_CopyTo_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_MoveElementTo_Proxy(IStorage*,const OLECHAR*,IStorage*,const OLECHAR*,DWORD);
void __attribute__((__stdcall__)) IStorage_MoveElementTo_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_Commit_Proxy(IStorage*,DWORD);
void __attribute__((__stdcall__)) IStorage_Commit_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_Revert_Proxy(IStorage*);
void __attribute__((__stdcall__)) IStorage_Revert_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_RemoteEnumElements_Proxy(IStorage*,DWORD,unsigned long,BYTE*,DWORD,IEnumSTATSTG**);
void __attribute__((__stdcall__)) IStorage_RemoteEnumElements_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_DestroyElement_Proxy(IStorage*,OLECHAR*);
void __attribute__((__stdcall__)) IStorage_DestroyElement_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_RenameElement_Proxy(IStorage*,const OLECHAR*,const OLECHAR*);
void __attribute__((__stdcall__)) IStorage_RenameElement_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_SetElementTimes_Proxy(IStorage*,const OLECHAR*,const FILETIME*,const FILETIME*,const FILETIME*);
void __attribute__((__stdcall__)) IStorage_SetElementTimes_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_SetClass_Proxy(IStorage*,const CLSID* const);
void __attribute__((__stdcall__)) IStorage_SetClass_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_SetStateBits_Proxy(IStorage*,DWORD,DWORD);
void __attribute__((__stdcall__)) IStorage_SetStateBits_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IStorage_Stat_Proxy(IStorage*,STATSTG*,DWORD);
void __attribute__((__stdcall__)) IStorage_Stat_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_IsDirty_Proxy(IPersistFile*);
void __attribute__((__stdcall__)) IPersistFile_IsDirty_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_Load_Proxy(IPersistFile*,LPCOLESTR,DWORD);
void __attribute__((__stdcall__)) IPersistFile_Load_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_Save_Proxy(IPersistFile*,LPCOLESTR pszFileName,BOOL);
void __attribute__((__stdcall__)) IPersistFile_Save_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_SaveCompleted_Proxy(IPersistFile*,LPCOLESTR);
void __attribute__((__stdcall__)) IPersistFile_SaveCompleted_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistFile_GetCurFile_Proxy(IPersistFile*,LPCSTR*);
void __attribute__((__stdcall__)) IPersistFile_GetCurFile_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_IsDirty_Proxy(IPersistStorage*);
void __attribute__((__stdcall__)) IPersistStorage_IsDirty_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_InitNew_Proxy(IPersistStorage*,IStorage*);
void __attribute__((__stdcall__)) IPersistStorage_InitNew_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_Load_Proxy(IPersistStorage*,IStorage*);
void __attribute__((__stdcall__)) IPersistStorage_Load_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_Save_Proxy(IPersistStorage*,IStorage*,BOOL);
void __attribute__((__stdcall__)) IPersistStorage_Save_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_SaveCompleted_Proxy(IPersistStorage*,IStorage*);
void __attribute__((__stdcall__)) IPersistStorage_SaveCompleted_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPersistStorage_HandsOffStorage_Proxy(IPersistStorage*);
void __attribute__((__stdcall__)) IPersistStorage_HandsOffStorage_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_RemoteReadAt_Proxy(ILockBytes*,ULARGE_INTEGER,BYTE*,ULONG,ULONG*);
void __attribute__((__stdcall__)) ILockBytes_RemoteReadAt_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_RemoteWriteAt_Proxy(ILockBytes*,ULARGE_INTEGER,BYTE*pv,ULONG,ULONG*);
void __attribute__((__stdcall__)) ILockBytes_RemoteWriteAt_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_Flush_Proxy(ILockBytes*);
void __attribute__((__stdcall__)) ILockBytes_Flush_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_SetSize_Proxy(ILockBytes*,ULARGE_INTEGER);
void __attribute__((__stdcall__)) ILockBytes_SetSize_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_LockRegion_Proxy(ILockBytes*,ULARGE_INTEGER,ULARGE_INTEGER,DWORD);
void __attribute__((__stdcall__)) ILockBytes_LockRegion_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_UnlockRegion_Proxy(ILockBytes*,ULARGE_INTEGER,ULARGE_INTEGER,DWORD);
void __attribute__((__stdcall__)) ILockBytes_UnlockRegion_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) ILockBytes_Stat_Proxy(ILockBytes*,STATSTG*,DWORD);
void __attribute__((__stdcall__)) ILockBytes_Stat_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_RemoteNext_Proxy(IEnumFORMATETC*,ULONG,FORMATETC*,ULONG*);
void __attribute__((__stdcall__)) IEnumFORMATETC_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Skip_Proxy(IEnumFORMATETC*,ULONG);
void __attribute__((__stdcall__)) IEnumFORMATETC_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Reset_Proxy(IEnumFORMATETC*);
void __attribute__((__stdcall__)) IEnumFORMATETC_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Clone_Proxy(IEnumFORMATETC*,IEnumFORMATETC**);
void __attribute__((__stdcall__)) IEnumFORMATETC_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Next_Proxy(IEnumFORMATETC*,ULONG,FORMATETC*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumFORMATETC_Next_Stub(IEnumFORMATETC*,ULONG,FORMATETC*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_RemoteNext_Proxy(IEnumSTATDATA*,ULONG,STATDATA*,ULONG*);
void __attribute__((__stdcall__)) IEnumSTATDATA_RemoteNext_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Skip_Proxy(IEnumSTATDATA*,ULONG);
void __attribute__((__stdcall__)) IEnumSTATDATA_Skip_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Reset_Proxy(IEnumSTATDATA*);
void __attribute__((__stdcall__)) IEnumSTATDATA_Reset_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Clone_Proxy(IEnumSTATDATA*,IEnumSTATDATA**);
void __attribute__((__stdcall__)) IEnumSTATDATA_Clone_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Next_Proxy(IEnumSTATDATA*,ULONG,STATDATA*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumSTATDATA_Next_Stub(IEnumSTATDATA*,ULONG,STATDATA*,ULONG*);
HRESULT __attribute__((__stdcall__)) IRootStorage_SwitchToFile_Proxy(IRootStorage*,LPCSTR);
void __attribute__((__stdcall__)) IRootStorage_SwitchToFile_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnDataChange_Proxy(IAdviseSink*,FORMATETC*,RemSTGMEDIUM*);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnDataChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnViewChange_Proxy(IAdviseSink*,DWORD,LONG);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnViewChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnRename_Proxy(IAdviseSink*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnRename_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnSave_Proxy(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnSave_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IAdviseSink_RemoteOnClose_Proxy(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink_RemoteOnClose_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink_OnDataChange_Proxy(IAdviseSink*,FORMATETC*,STGMEDIUM*);
void __attribute__((__stdcall__)) IAdviseSink_OnDataChange_Stub(IAdviseSink*,FORMATETC*,RemSTGMEDIUM*);
void __attribute__((__stdcall__)) IAdviseSink_OnViewChange_Proxy(IAdviseSink*,DWORD,LONG);
void __attribute__((__stdcall__)) IAdviseSink_OnViewChange_Stub(IAdviseSink*,DWORD,LONG);
void __attribute__((__stdcall__)) IAdviseSink_OnRename_Proxy(IAdviseSink*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink_OnRename_Stub(IAdviseSink*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink_OnSave_Proxy(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink_OnSave_Stub(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink_OnClose_Proxy(IAdviseSink*);
HRESULT __attribute__((__stdcall__)) IAdviseSink_OnClose_Stub(IAdviseSink*);
void __attribute__((__stdcall__)) IAdviseSink2_RemoteOnLinkSrcChange_Proxy(IAdviseSink2*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink2_RemoteOnLinkSrcChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IAdviseSink2_OnLinkSrcChange_Proxy(IAdviseSink2*,IMoniker*);
void __attribute__((__stdcall__)) IAdviseSink2_OnLinkSrcChange_Stub(IAdviseSink2*,IMoniker*);
HRESULT __attribute__((__stdcall__)) IDataObject_RemoteGetData_Proxy(IDataObject*,FORMATETC*,RemSTGMEDIUM**);
void __attribute__((__stdcall__)) IDataObject_RemoteGetData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_RemoteGetDataHere_Proxy(IDataObject*,FORMATETC*,RemSTGMEDIUM**);
void __attribute__((__stdcall__)) IDataObject_RemoteGetDataHere_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_QueryGetData_Proxy(IDataObject*,FORMATETC*);
void __attribute__((__stdcall__)) IDataObject_QueryGetData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_GetCanonicalFormatEtc_Proxy(IDataObject*,FORMATETC*,FORMATETC*);
void __attribute__((__stdcall__)) IDataObject_GetCanonicalFormatEtc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_RemoteSetData_Proxy(IDataObject*,FORMATETC*,RemSTGMEDIUM*,BOOL);
void __attribute__((__stdcall__)) IDataObject_RemoteSetData_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_EnumFormatEtc_Proxy(IDataObject*,DWORD,IEnumFORMATETC**);
void __attribute__((__stdcall__)) IDataObject_EnumFormatEtc_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_DAdvise_Proxy(IDataObject*,FORMATETC*,DWORD,IAdviseSink*,DWORD*);
void __attribute__((__stdcall__)) IDataObject_DAdvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_DUnadvise_Proxy(IDataObject*,DWORD);
void __attribute__((__stdcall__)) IDataObject_DUnadvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_EnumDAdvise_Proxy(IDataObject*,IEnumSTATDATA**);
void __attribute__((__stdcall__)) IDataObject_EnumDAdvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataObject_GetData_Proxy(IDataObject*,FORMATETC*,STGMEDIUM*);
HRESULT __attribute__((__stdcall__)) IDataObject_GetData_Stub(IDataObject*,FORMATETC*,RemSTGMEDIUM**);
HRESULT __attribute__((__stdcall__)) IDataObject_GetDataHere_Proxy(IDataObject*,FORMATETC*,STGMEDIUM*);
HRESULT __attribute__((__stdcall__)) IDataObject_GetDataHere_Stub(IDataObject*,FORMATETC*,RemSTGMEDIUM**);
HRESULT __attribute__((__stdcall__)) IDataObject_SetData_Proxy(IDataObject*,FORMATETC*,STGMEDIUM*,BOOL);
HRESULT __attribute__((__stdcall__)) IDataObject_SetData_Stub(IDataObject*,FORMATETC*,RemSTGMEDIUM*,BOOL);
HRESULT __attribute__((__stdcall__)) IDataAdviseHolder_Advise_Proxy(IDataAdviseHolder*,IDataObject*,FORMATETC*,DWORD,IAdviseSink*,DWORD*);
void __attribute__((__stdcall__)) IDataAdviseHolder_Advise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataAdviseHolder_Unadvise_Proxy(IDataAdviseHolder*,DWORD);
void __attribute__((__stdcall__)) IDataAdviseHolder_Unadvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataAdviseHolder_EnumAdvise_Proxy(IDataAdviseHolder*,IEnumSTATDATA**);
void __attribute__((__stdcall__)) IDataAdviseHolder_EnumAdvise_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IDataAdviseHolder_SendOnDataChange_Proxy(IDataAdviseHolder*,IDataObject*,DWORD,DWORD);
void __attribute__((__stdcall__)) IDataAdviseHolder_SendOnDataChange_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IMessageFilter_HandleInComingCall_Proxy(IMessageFilter*,DWORD,HTASK,DWORD,LPINTERFACEINFO);
void __attribute__((__stdcall__)) IMessageFilter_HandleInComingCall_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IMessageFilter_RetryRejectedCall_Proxy(IMessageFilter*,HTASK,DWORD,DWORD);
void __attribute__((__stdcall__)) IMessageFilter_RetryRejectedCall_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
DWORD __attribute__((__stdcall__)) IMessageFilter_MessagePending_Proxy(IMessageFilter*,HTASK,DWORD,DWORD);
void __attribute__((__stdcall__)) IMessageFilter_MessagePending_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_GetBuffer_Proxy(IRpcChannelBuffer*,RPCOLEMESSAGE*,const IID* const);
void __attribute__((__stdcall__)) IRpcChannelBuffer_GetBuffer_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_SendReceive_Proxy(IRpcChannelBuffer*,RPCOLEMESSAGE*,ULONG*);
void __attribute__((__stdcall__)) IRpcChannelBuffer_SendReceive_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_FreeBuffer_Proxy(IRpcChannelBuffer*,RPCOLEMESSAGE*);
void __attribute__((__stdcall__)) IRpcChannelBuffer_FreeBuffer_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_GetDestCtx_Proxy(IRpcChannelBuffer*,DWORD*,void**);
void __attribute__((__stdcall__)) IRpcChannelBuffer_GetDestCtx_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcChannelBuffer_IsConnected_Proxy(IRpcChannelBuffer*);
void __attribute__((__stdcall__)) IRpcChannelBuffer_IsConnected_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcProxyBuffer_Connect_Proxy(IRpcProxyBuffer*,IRpcChannelBuffer*pRpcChannelBuffer);
void __attribute__((__stdcall__)) IRpcProxyBuffer_Connect_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IRpcProxyBuffer_Disconnect_Proxy(IRpcProxyBuffer*);
void __attribute__((__stdcall__)) IRpcProxyBuffer_Disconnect_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcStubBuffer_Connect_Proxy(IRpcStubBuffer*,IUnknown*);
void __attribute__((__stdcall__)) IRpcStubBuffer_Connect_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IRpcStubBuffer_Disconnect_Proxy(IRpcStubBuffer*);
void __attribute__((__stdcall__)) IRpcStubBuffer_Disconnect_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcStubBuffer_Invoke_Proxy(IRpcStubBuffer*,RPCOLEMESSAGE*,IRpcChannelBuffer*);
void __attribute__((__stdcall__)) IRpcStubBuffer_Invoke_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
IRpcStubBuffer*__attribute__((__stdcall__)) IRpcStubBuffer_IsIIDSupported_Proxy(IRpcStubBuffer*,const IID* const);
void __attribute__((__stdcall__)) IRpcStubBuffer_IsIIDSupported_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
ULONG __attribute__((__stdcall__)) IRpcStubBuffer_CountRefs_Proxy(IRpcStubBuffer*);
void __attribute__((__stdcall__)) IRpcStubBuffer_CountRefs_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IRpcStubBuffer_DebugServerQueryInterface_Proxy(IRpcStubBuffer*,void**);
void __attribute__((__stdcall__)) IRpcStubBuffer_DebugServerQueryInterface_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) IRpcStubBuffer_DebugServerRelease_Proxy(IRpcStubBuffer*,void*);
void __attribute__((__stdcall__)) IRpcStubBuffer_DebugServerRelease_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPSFactoryBuffer_CreateProxy_Proxy(IPSFactoryBuffer*,IUnknown*,const IID* const,IRpcProxyBuffer**,void**);
void __attribute__((__stdcall__)) IPSFactoryBuffer_CreateProxy_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
HRESULT __attribute__((__stdcall__)) IPSFactoryBuffer_CreateStub_Proxy(IPSFactoryBuffer*,const IID* const,IUnknown*,IRpcStubBuffer**);
void __attribute__((__stdcall__)) IPSFactoryBuffer_CreateStub_Stub(IRpcStubBuffer*,IRpcChannelBuffer*,PRPC_MESSAGE,PDWORD);
void __attribute__((__stdcall__)) SNB_to_xmit(SNB*,RemSNB**);
void __attribute__((__stdcall__)) SNB_from_xmit(RemSNB*,SNB*);
void __attribute__((__stdcall__)) SNB_free_inst(SNB*);
void __attribute__((__stdcall__)) SNB_free_xmit(RemSNB*);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Next_Proxy(IEnumUnknown*,ULONG,IUnknown**,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumUnknown_Next_Stub(IEnumUnknown*,ULONG,IUnknown**,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Next_Proxy(IEnumMoniker*,ULONG,IMoniker**,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumMoniker_Next_Stub(IEnumMoniker*,ULONG,IMoniker**,ULONG*);
HRESULT __attribute__((__stdcall__)) IMoniker_BindToObject_Proxy(IMoniker*,IBindCtx*,IMoniker*,const IID* const,void**);
HRESULT __attribute__((__stdcall__)) IMoniker_BindToObject_Stub(IMoniker*,IBindCtx*,IMoniker*,const IID* const,IUnknown**);
HRESULT __attribute__((__stdcall__)) IMoniker_BindToStorage_Proxy(IMoniker*,IBindCtx*,IMoniker*,const IID* const,void**);
HRESULT __attribute__((__stdcall__)) IMoniker_BindToStorage_Stub(IMoniker*,IBindCtx*,IMoniker*,const IID* const,IUnknown**);
HRESULT __attribute__((__stdcall__)) IEnumString_Next_Proxy(IEnumString*,ULONG,LPCSTR*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumString_Next_Stub(IEnumString*,ULONG,LPCSTR*,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Read_Proxy(IStream*,void*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Read_Stub(IStream*,BYTE*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Write_Proxy(IStream*,void*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Write_Stub(IStream*,BYTE*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) IStream_Seek_Proxy(IStream*,LARGE_INTEGER,DWORD,ULARGE_INTEGER*);
HRESULT __attribute__((__stdcall__)) IStream_Seek_Stub(IStream*,LARGE_INTEGER,DWORD,ULARGE_INTEGER*);
HRESULT __attribute__((__stdcall__)) IStream_CopyTo_Proxy(IStream*,IStream*,ULARGE_INTEGER,ULARGE_INTEGER*,ULARGE_INTEGER*);
HRESULT __attribute__((__stdcall__)) IStream_CopyTo_Stub(IStream*,IStream*,ULARGE_INTEGER,ULARGE_INTEGER*,ULARGE_INTEGER*);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Next_Proxy(IEnumSTATSTG*,ULONG,STATSTG*,ULONG*);
HRESULT __attribute__((__stdcall__)) IEnumSTATSTG_Next_Stub(IEnumSTATSTG*,ULONG,STATSTG*,ULONG*);
HRESULT __attribute__((__stdcall__)) IStorage_OpenStream_Proxy(IStorage*,OLECHAR*,void*,DWORD,DWORD,IStream**);
HRESULT __attribute__((__stdcall__)) IStorage_OpenStream_Stub(IStorage*,OLECHAR*,unsigned long,BYTE*,DWORD,DWORD,IStream** );
HRESULT __attribute__((__stdcall__)) IStorage_EnumElements_Proxy(IStorage*,DWORD,void*,DWORD,IEnumSTATSTG**);
HRESULT __attribute__((__stdcall__)) IStorage_EnumElements_Stub(IStorage*,DWORD,unsigned long,BYTE*,DWORD,IEnumSTATSTG**);
HRESULT __attribute__((__stdcall__)) ILockBytes_ReadAt_Proxy(ILockBytes*,ULARGE_INTEGER,void*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) ILockBytes_ReadAt_Stub(ILockBytes*,ULARGE_INTEGER,BYTE*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) ILockBytes_WriteAt_Proxy(ILockBytes*,ULARGE_INTEGER,const void*,ULONG,ULONG*);
HRESULT __attribute__((__stdcall__)) ILockBytes_WriteAt_Stub(ILockBytes*,ULARGE_INTEGER,BYTE*,ULONG,ULONG*);
# 74 "c:\\mingw\\include\\objbase.h" 2 3
# 87 "c:\\mingw\\include\\objbase.h" 3
# 1 "c:\\mingw\\include\\cguid.h" 1 3



       
# 5 "c:\\mingw\\include\\cguid.h" 3





extern const IID GUID_NULL;
extern const IID IID_IRpcChannel;
extern const IID IID_IRpcStub;
extern const IID IID_IStubManager;
extern const IID IID_IRpcProxy;
extern const IID IID_IProxyManager;
extern const IID IID_IPSFactory;
extern const IID IID_IInternalMoniker;
extern const IID IID_IDfReserved1;
extern const IID IID_IDfReserved2;
extern const IID IID_IDfReserved3;
extern const CLSID CLSID_StdMarshal;
extern const IID IID_IStub;
extern const IID IID_IProxy;
extern const IID IID_IEnumGeneric;
extern const IID IID_IEnumHolder;
extern const IID IID_IEnumCallback;
extern const IID IID_IOleManager;
extern const IID IID_IOlePresObj;
extern const IID IID_IDebug;
extern const IID IID_IDebugStream;
extern const CLSID CLSID_PSGenObject;
extern const CLSID CLSID_PSClientSite;
extern const CLSID CLSID_PSClassObject;
extern const CLSID CLSID_PSInPlaceActive;
extern const CLSID CLSID_PSInPlaceFrame;
extern const CLSID CLSID_PSDragDrop;
extern const CLSID CLSID_PSBindCtx;
extern const CLSID CLSID_PSEnumerators;
extern const CLSID CLSID_StaticMetafile;
extern const CLSID CLSID_StaticDib;
extern const CLSID CID_CDfsVolume;
extern const CLSID CLSID_CCDFormKrnl;
extern const CLSID CLSID_CCDPropertyPage;
extern const CLSID CLSID_CCDFormDialog;
extern const CLSID CLSID_CCDCommandButton;
extern const CLSID CLSID_CCDComboBox;
extern const CLSID CLSID_CCDTextBox;
extern const CLSID CLSID_CCDCheckBox;
extern const CLSID CLSID_CCDLabel;
extern const CLSID CLSID_CCDOptionButton;
extern const CLSID CLSID_CCDListBox;
extern const CLSID CLSID_CCDScrollBar;
extern const CLSID CLSID_CCDGroupBox;
extern const CLSID CLSID_CCDGeneralPropertyPage;
extern const CLSID CLSID_CCDGenericPropertyPage;
extern const CLSID CLSID_CCDFontPropertyPage;
extern const CLSID CLSID_CCDColorPropertyPage;
extern const CLSID CLSID_CCDLabelPropertyPage;
extern const CLSID CLSID_CCDCheckBoxPropertyPage;
extern const CLSID CLSID_CCDTextBoxPropertyPage;
extern const CLSID CLSID_CCDOptionButtonPropertyPage;
extern const CLSID CLSID_CCDListBoxPropertyPage;
extern const CLSID CLSID_CCDCommandButtonPropertyPage;
extern const CLSID CLSID_CCDComboBoxPropertyPage;
extern const CLSID CLSID_CCDScrollBarPropertyPage;
extern const CLSID CLSID_CCDGroupBoxPropertyPage;
extern const CLSID CLSID_CCDXObjectPropertyPage;
extern const CLSID CLSID_CStdPropertyFrame;
extern const CLSID CLSID_CFormPropertyPage;
extern const CLSID CLSID_CGridPropertyPage;
extern const CLSID CLSID_CWSJArticlePage;
extern const CLSID CLSID_CSystemPage;
extern const CLSID CLSID_IdentityUnmarshal;
extern const CLSID CLSID_InProcFreeMarshaler;
extern const CLSID CLSID_Picture_Metafile;
extern const CLSID CLSID_Picture_EnhMetafile;
extern const CLSID CLSID_Picture_Dib;
extern const CLSID CLSID_StdGlobalInterfaceTable;
extern const GUID GUID_TRISTATE;
# 88 "c:\\mingw\\include\\objbase.h" 2 3

typedef enum tagCOINIT {
 COINIT_APARTMENTTHREADED = 0x2,
 COINIT_MULTITHREADED = 0x0,
 COINIT_DISABLE_OLE1DDE = 0x4,
 COINIT_SPEED_OVER_MEMORY = 0x8
} COINIT;
typedef enum tagSTDMSHLFLAGS {
    SMEXF_SERVER = 0x01,
    SMEXF_HANDLER = 0x02
} STDMSHLFLAGS;

extern DWORD __attribute__((__stdcall__)) CoBuildVersion(void);
extern HRESULT __attribute__((__stdcall__)) CoInitialize(PVOID);
extern HRESULT __attribute__((__stdcall__)) CoInitializeEx(LPVOID,DWORD);
extern void __attribute__((__stdcall__)) CoUninitialize(void);
extern HRESULT __attribute__((__stdcall__)) CoGetMalloc(DWORD,LPMALLOC*);
extern DWORD __attribute__((__stdcall__)) CoGetCurrentProcess(void);
extern HRESULT __attribute__((__stdcall__)) CoRegisterMallocSpy(LPMALLOCSPY);
extern HRESULT __attribute__((__stdcall__)) CoRevokeMallocSpy(void);
extern HRESULT __attribute__((__stdcall__)) CoCreateStandardMalloc(DWORD,IMalloc**);




extern HRESULT __attribute__((__stdcall__)) CoGetClassObject(const CLSID* const,DWORD,COSERVERINFO*,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoRegisterClassObject(const CLSID* const,LPUNKNOWN,DWORD,DWORD,PDWORD);
extern HRESULT __attribute__((__stdcall__)) CoRevokeClassObject(DWORD);
extern HRESULT __attribute__((__stdcall__)) CoGetMarshalSizeMax(ULONG*,const IID* const,LPUNKNOWN,DWORD,PVOID,DWORD);
extern HRESULT __attribute__((__stdcall__)) CoMarshalInterface(LPSTREAM,const IID* const,LPUNKNOWN,DWORD,PVOID,DWORD);
extern HRESULT __attribute__((__stdcall__)) CoUnmarshalInterface(LPSTREAM,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoMarshalHresult(LPSTREAM,HRESULT);
extern HRESULT __attribute__((__stdcall__)) CoUnmarshalHresult(LPSTREAM,HRESULT*);
extern HRESULT __attribute__((__stdcall__)) CoReleaseMarshalData(LPSTREAM);
extern HRESULT __attribute__((__stdcall__)) CoDisconnectObject(LPUNKNOWN,DWORD);
extern HRESULT __attribute__((__stdcall__)) CoLockObjectExternal(LPUNKNOWN,BOOL,BOOL);
extern HRESULT __attribute__((__stdcall__)) CoGetStandardMarshal(const IID* const,LPUNKNOWN,DWORD,PVOID,DWORD,LPMARSHAL*);
extern HRESULT __attribute__((__stdcall__)) CoGetStdMarshalEx(LPUNKNOWN,DWORD,LPUNKNOWN*);
extern BOOL __attribute__((__stdcall__)) CoIsHandlerConnected(LPUNKNOWN);
extern BOOL __attribute__((__stdcall__)) CoHasStrongExternalConnections(LPUNKNOWN);
extern HRESULT __attribute__((__stdcall__)) CoMarshalInterThreadInterfaceInStream(const IID* const,LPUNKNOWN,LPSTREAM*);
extern HRESULT __attribute__((__stdcall__)) CoGetInterfaceAndReleaseStream(LPSTREAM,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoCreateFreeThreadedMarshaler(LPUNKNOWN,LPUNKNOWN*);
extern HINSTANCE __attribute__((__stdcall__)) CoLoadLibrary(LPOLESTR,BOOL);
extern void __attribute__((__stdcall__)) CoFreeLibrary(HINSTANCE);
extern void __attribute__((__stdcall__)) CoFreeAllLibraries(void);
extern void __attribute__((__stdcall__)) CoFreeUnusedLibraries(void);
extern HRESULT __attribute__((__stdcall__)) CoCreateInstance(const CLSID* const,LPUNKNOWN,DWORD,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoCreateInstanceEx(const CLSID* const,IUnknown*,DWORD,COSERVERINFO*,DWORD,MULTI_QI*);
extern HRESULT __attribute__((__stdcall__)) StringFromCLSID(const CLSID* const,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) CLSIDFromString(LPOLESTR,LPCLSID);
extern HRESULT __attribute__((__stdcall__)) StringFromIID(const IID* const,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) IIDFromString(LPOLESTR,LPIID);
extern BOOL __attribute__((__stdcall__)) CoIsOle1Class(const CLSID* const);
extern HRESULT __attribute__((__stdcall__)) ProgIDFromCLSID(const CLSID* const,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) CLSIDFromProgID(LPCOLESTR,LPCLSID);
extern int __attribute__((__stdcall__)) StringFromGUID2(const GUID* const,LPOLESTR,int);
extern HRESULT __attribute__((__stdcall__)) CoCreateGuid(GUID*);
extern BOOL __attribute__((__stdcall__)) CoFileTimeToDosDateTime(FILETIME*,LPWORD,LPWORD);
extern BOOL __attribute__((__stdcall__)) CoDosDateTimeToFileTime(WORD,WORD,FILETIME*);
extern HRESULT __attribute__((__stdcall__)) CoFileTimeNow(FILETIME*);
extern HRESULT __attribute__((__stdcall__)) CoRegisterMessageFilter(LPMESSAGEFILTER,LPMESSAGEFILTER*);
extern HRESULT __attribute__((__stdcall__)) CoGetTreatAsClass(const CLSID* const,LPCLSID);
extern HRESULT __attribute__((__stdcall__)) CoTreatAsClass(const CLSID* const,const CLSID* const);
typedef HRESULT (__attribute__((__stdcall__)) *LPFNGETCLASSOBJECT)(const CLSID* const,const IID* const,PVOID*);
typedef HRESULT (__attribute__((__stdcall__)) *LPFNCANUNLOADNOW)(void);
extern HRESULT __attribute__((__stdcall__)) DllGetClassObject(const CLSID* const,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) DllCanUnloadNow(void);
extern PVOID __attribute__((__stdcall__)) CoTaskMemAlloc(ULONG);
extern PVOID __attribute__((__stdcall__)) CoTaskMemRealloc(PVOID,ULONG);
extern void __attribute__((__stdcall__)) CoTaskMemFree(PVOID);
extern HRESULT __attribute__((__stdcall__)) CreateDataAdviseHolder(LPDATAADVISEHOLDER*);
extern HRESULT __attribute__((__stdcall__)) CreateDataCache(LPUNKNOWN,const CLSID* const,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) StgCreateDocfile(const OLECHAR*,DWORD,DWORD,IStorage**);
extern HRESULT __attribute__((__stdcall__)) StgCreateDocfileOnILockBytes(ILockBytes*,DWORD,DWORD,IStorage**);
extern HRESULT __attribute__((__stdcall__)) StgOpenStorage(const OLECHAR*,IStorage*,DWORD,SNB,DWORD,IStorage**);
extern HRESULT __attribute__((__stdcall__)) StgOpenStorageOnILockBytes(ILockBytes*,IStorage*,DWORD,SNB,DWORD,IStorage**);
extern HRESULT __attribute__((__stdcall__)) StgIsStorageFile(const OLECHAR*);
extern HRESULT __attribute__((__stdcall__)) StgIsStorageILockBytes(ILockBytes*);
extern HRESULT __attribute__((__stdcall__)) StgSetTimes(OLECHAR const*,FILETIME const*,FILETIME const*,FILETIME const*);
extern HRESULT __attribute__((__stdcall__)) StgCreateStorageEx(const WCHAR*,DWORD,DWORD,DWORD,STGOPTIONS*,void*,const IID* const,void**);
extern HRESULT __attribute__((__stdcall__)) StgOpenStorageEx(const WCHAR*,DWORD,DWORD,DWORD,STGOPTIONS*,void*,const IID* const,void**);
extern HRESULT __attribute__((__stdcall__)) BindMoniker(LPMONIKER,DWORD,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) CoGetObject(LPCWSTR,BIND_OPTS*,const IID* const,void**);
extern HRESULT __attribute__((__stdcall__)) MkParseDisplayName(LPBC,LPCOLESTR,ULONG*,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) MonikerRelativePathTo(LPMONIKER,LPMONIKER,LPMONIKER*,BOOL);
extern HRESULT __attribute__((__stdcall__)) MonikerCommonPrefixWith(LPMONIKER,LPMONIKER,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) CreateBindCtx(DWORD,LPBC*);
extern HRESULT __attribute__((__stdcall__)) CreateGenericComposite(LPMONIKER,LPMONIKER,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) GetClassFile (LPCOLESTR,CLSID*);
extern HRESULT __attribute__((__stdcall__)) CreateFileMoniker(LPCOLESTR,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) CreateItemMoniker(LPCOLESTR,LPCOLESTR,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) CreateAntiMoniker(LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) CreatePointerMoniker(LPUNKNOWN,LPMONIKER*);
extern HRESULT __attribute__((__stdcall__)) GetRunningObjectTable(DWORD,LPRUNNINGOBJECTTABLE*);
extern HRESULT __attribute__((__stdcall__)) CoInitializeSecurity(PSECURITY_DESCRIPTOR,LONG,SOLE_AUTHENTICATION_SERVICE*, void*,DWORD,DWORD,void*,DWORD,void*);
extern HRESULT __attribute__((__stdcall__)) CoGetCallContext(const IID* const,void**);
extern HRESULT __attribute__((__stdcall__)) CoQueryProxyBlanket(IUnknown*, DWORD*,DWORD*,OLECHAR**,DWORD*,DWORD*,RPC_AUTH_IDENTITY_HANDLE*,DWORD*);
extern HRESULT __attribute__((__stdcall__)) CoSetProxyBlanket(IUnknown*,DWORD,DWORD,OLECHAR*,DWORD,DWORD,RPC_AUTH_IDENTITY_HANDLE, DWORD);
extern HRESULT __attribute__((__stdcall__)) CoCopyProxy(IUnknown*,IUnknown**);
extern HRESULT __attribute__((__stdcall__)) CoQueryClientBlanket(DWORD*,DWORD*,OLECHAR**, DWORD*,DWORD*,RPC_AUTHZ_HANDLE*,DWORD*);
extern HRESULT __attribute__((__stdcall__)) CoImpersonateClient(void);
extern HRESULT __attribute__((__stdcall__)) CoRevertToSelf(void);
extern HRESULT __attribute__((__stdcall__)) CoQueryAuthenticationServices(DWORD*, SOLE_AUTHENTICATION_SERVICE**);
extern HRESULT __attribute__((__stdcall__)) CoSwitchCallContext(IUnknown*,IUnknown**);
extern HRESULT __attribute__((__stdcall__)) CoGetInstanceFromFile(COSERVERINFO*, CLSID*,IUnknown*,DWORD,DWORD,OLECHAR*,DWORD,MULTI_QI*);
extern HRESULT __attribute__((__stdcall__)) CoGetInstanceFromIStorage(COSERVERINFO*,CLSID*, IUnknown*,DWORD,struct IStorage*, DWORD,MULTI_QI*);
extern ULONG __attribute__((__stdcall__)) CoAddRefServerProcess(void);
extern ULONG __attribute__((__stdcall__)) CoReleaseServerProcess(void);
extern HRESULT __attribute__((__stdcall__)) CoResumeClassObjects(void);
extern HRESULT __attribute__((__stdcall__)) CoSuspendClassObjects(void);
extern HRESULT __attribute__((__stdcall__)) CoGetPSClsid(const IID* const,CLSID*);
extern HRESULT __attribute__((__stdcall__)) CoRegisterPSClsid(const IID* const,const CLSID* const);

#pragma pack(pop)
# 10 "c:\\mingw\\include\\ole2.h" 2 3
# 1 "c:\\mingw\\include\\olectlid.h" 1 3



       
# 5 "c:\\mingw\\include\\olectlid.h" 3






extern const GUID IID_IDispatch;
extern const GUID IID_IPropertyNotifySink;
extern const GUID IID_IClassFactory2;
extern const GUID IID_IProvideClassInfo;
extern const GUID IID_IProvideClassInfo2;
extern const GUID IID_IConnectionPointContainer;
extern const GUID IID_IEnumConnectionPoints;
extern const GUID IID_IConnectionPoint;
extern const GUID IID_IEnumConnections;
extern const GUID IID_IOleControl;
extern const GUID IID_IOleControlSite;
extern const GUID IID_ISimpleFrameSite;
extern const GUID IID_IPersistStreamInit;
extern const GUID IID_IPersistMemory;
extern const GUID IID_IPersistPropertyBag;
extern const GUID IID_IPropertyBag;
extern const GUID IID_IErrorLog;
extern const GUID IID_IPropertyFrame;
extern const GUID IID_ISpecifyPropertyPages;
extern const GUID IID_IPerPropertyBrowsing;
extern const GUID IID_IPropertyPageSite;
extern const GUID IID_IPropertyPage;
extern const GUID IID_IPropertyPage2;
extern const GUID CLSID_CFontPropPage;
extern const GUID CLSID_CColorPropPage;
extern const GUID CLSID_CPicturePropPage;
extern const GUID CLSID_PersistPropset;
extern const GUID CLSID_ConvertVBX;
extern const GUID CLSID_StdFont;
extern const GUID CLSID_StdPicture;
extern const GUID IID_IFont;
extern const GUID IID_IFontDisp;
extern const GUID IID_IPicture;
extern const GUID IID_IPictureDisp;
extern const GUID GUID_HIMETRIC;
extern const GUID GUID_COLOR;
extern const GUID GUID_XPOSPIXEL;
extern const GUID GUID_YPOSPIXEL;
extern const GUID GUID_XSIZEPIXEL;
extern const GUID GUID_YSIZEPIXEL;
extern const GUID GUID_XPOS;
extern const GUID GUID_YPOS;
extern const GUID GUID_XSIZE;
extern const GUID GUID_YSIZE;
extern const GUID GUID_TRISTATE;
extern const GUID GUID_OPTIONVALUEEXCLUSIVE;
extern const GUID GUID_CHECKVALUEEXCLUSIVE;
extern const GUID GUID_FONTNAME;
extern const GUID GUID_FONTSIZE;
extern const GUID GUID_FONTBOLD;
extern const GUID GUID_FONTITALIC;
extern const GUID GUID_FONTUNDERSCORE;
extern const GUID GUID_FONTSTRIKETHROUGH;
extern const GUID GUID_HANDLE;
extern const GUID IID_IEnumUnknown;
extern const GUID IID_IEnumString;
extern const GUID IID_IEnumMoniker;
extern const GUID IID_IEnumFORMATETC;
extern const GUID IID_IEnumOLEVERB;
extern const GUID IID_IEnumSTATDATA;
extern const GUID IID_IEnumSTATSTG;
extern const GUID IID_IEnumGeneric;
extern const GUID IID_IEnumHolder;
extern const GUID IID_IEnumCallback;
extern const GUID IID_IPersistStream;
extern const GUID IID_IPersistStorage;
extern const GUID IID_IPersistFile;
extern const GUID IID_IPersist;
extern const GUID IID_IViewObject;
extern const GUID IID_IDataObject;
extern const GUID IID_IAdviseSink;
extern const GUID IID_IDataAdviseHolder;
extern const GUID IID_IOleAdviseHolder;
extern const GUID IID_IOleObject;
extern const GUID IID_IOleInPlaceObject;
extern const GUID IID_IOleWindow;
extern const GUID IID_IOleInPlaceUIWindow;
extern const GUID IID_IOleInPlaceFrame;
extern const GUID IID_IOleInPlaceActiveObject;
extern const GUID IID_IOleClientSite;
extern const GUID IID_IOleInPlaceSite;
extern const GUID IID_IParseDisplayName;
extern const GUID IID_IOleContainer;
extern const GUID IID_IOleItemContainer;
extern const GUID IID_IOleLink;
extern const GUID IID_IOleCache;
extern const GUID IID_IOleManager;
extern const GUID IID_IOlePresObj;
extern const GUID IID_IDropSource;
extern const GUID IID_IDropTarget;
extern const GUID IID_IDebug;
extern const GUID IID_IDebugStream;
extern const GUID IID_IAdviseSink2;
extern const GUID IID_IRunnableObject;
extern const GUID IID_IViewObject2;
extern const GUID IID_IOleCache2;
extern const GUID IID_IOleCacheControl;
extern const GUID CLSID_Picture_Metafile;
extern const GUID CLSID_Picture_Dib;
# 11 "c:\\mingw\\include\\ole2.h" 2 3
# 1 "c:\\mingw\\include\\oleauto.h" 1 3



       
# 5 "c:\\mingw\\include\\oleauto.h" 3


#pragma pack(push,8)
# 158 "c:\\mingw\\include\\oleauto.h" 3
# 1 "c:\\mingw\\include\\oaidl.h" 1 3



       
# 5 "c:\\mingw\\include\\oaidl.h" 3




# 1 "c:\\mingw\\include\\ole2.h" 1 3
# 10 "c:\\mingw\\include\\oaidl.h" 2 3
# 66 "c:\\mingw\\include\\oaidl.h" 3
typedef struct ITypeLib *LPTYPELIB;
typedef struct ITypeLib2 *LPTYPELIB2;
typedef struct ICreateTypeInfo *LPCREATETYPEINFO;
typedef struct ICreateTypeInfo2 *LPCREATETYPEINFO2;
typedef struct ICreateTypeLib *LPCREATETYPELIB;
typedef struct ICreateTypeLib2 *LPCREATETYPELIB2;
typedef struct ITypeComp *LPTYPECOMP;
typedef struct ITypeInfo *LPTYPEINFO;
typedef struct ITypeInfo2 *LPTYPEINFO2;
typedef struct IErrorInfo *LPERRORINFO;
typedef struct IDispatch *LPDISPATCH;
typedef struct IEnumVARIANT *LPENUMVARIANT;
typedef struct ICreateErrorInfo *LPCREATEERRORINFO;
typedef struct ISupportErrorInfo *LPSUPPORTERRORINFO;
typedef struct IRecordInfo *LPRECORDINFO;

extern const IID IID_ITypeLib;
extern const IID IID_ITypeLib2;
extern const IID IID_ICreateTypeInfo;
extern const IID IID_ICreateTypeInfo2;
extern const IID IID_ICreateTypeLib;
extern const IID IID_ICreateTypeLib2;
extern const IID IID_ITypeInfo;
extern const IID IID_ITypeInfo2;
extern const IID IID_IErrorInfo;
extern const IID IID_IDispatch;
extern const IID IID_IEnumVARIANT;
extern const IID IID_ICreateErrorInfo;
extern const IID IID_ISupportErrorInfo;
extern const IID IID_IRecordInfo;
extern const IID IID_ITypeMarshal;

typedef enum tagSYSKIND {
 SYS_WIN16,SYS_WIN32,SYS_MAC
} SYSKIND;
typedef enum tagLIBFLAGS {
 LIBFLAG_FRESTRICTED=1,LIBFLAG_FCONTROL=2,LIBFLAG_FHIDDEN=4,
 LIBFLAG_FHASDISKIMAGE=8
} LIBFLAGS;
typedef struct tagTLIBATTR {
 GUID guid;
 LCID lcid;
 SYSKIND syskind;
 WORD wMajorVerNum;
 WORD wMinorVerNum;
 WORD wLibFlags;
} TLIBATTR,*LPTLIBATTR;
typedef CY CURRENCY;
typedef struct tagSAFEARRAYBOUND {
 ULONG cElements;
 LONG lLbound;
}SAFEARRAYBOUND,*LPSAFEARRAYBOUND;
typedef struct _wireSAFEARR_BSTR
{
 ULONG Size;
 wireBSTR *aBstr;
}SAFEARR_BSTR;
typedef struct _wireSAFEARR_UNKNOWN {
 ULONG Size;
 IUnknown **apUnknown;
}SAFEARR_UNKNOWN;
typedef struct _wireSAFEARR_DISPATCH {
 ULONG Size;
 LPDISPATCH *apDispatch;
}SAFEARR_DISPATCH;
typedef struct _wireSAFEARR_VARIANT {
 ULONG Size;
 struct _wireVARIANT *aVariant;
}SAFEARR_VARIANT;
typedef enum tagSF_TYPE {
 SF_ERROR=VT_ERROR,
 SF_I1=VT_I1,
 SF_I2=VT_I2,
 SF_I4=VT_I4,
 SF_I8=VT_I8,
 SF_BSTR=VT_BSTR,
 SF_UNKNOWN=VT_UNKNOWN,
 SF_DISPATCH=VT_DISPATCH,
 SF_VARIANT=VT_VARIANT
}SF_TYPE;
typedef struct _wireBRECORD {
 ULONG fFlags;
 ULONG clSize;
 LPRECORDINFO* pRecInfo;
 byte* pRecord;
} *wireBRECORD;
typedef struct _wireSAFEARR_BRECORD {
    ULONG Size;
    wireBRECORD* aRecord;
    } SAFEARR_BRECORD;
typedef struct _wireSAFEARR_HAVEIID {
 ULONG Size;
 IUnknown** apUnknown;
 IID iid;
 } SAFEARR_HAVEIID;
typedef struct _wireSAFEARRAY_UNION {
 ULONG sfType;
 union {
  SAFEARR_BSTR BstrStr;
  SAFEARR_UNKNOWN UnknownStr;
  SAFEARR_DISPATCH DispatchStr;
  SAFEARR_VARIANT VariantStr;
  SAFEARR_BRECORD RecordStr;
  SAFEARR_HAVEIID HaveIidStr;
  BYTE_SIZEDARR ByteStr;
  WORD_SIZEDARR WordStr;
  DWORD_SIZEDARR LongStr;
  HYPER_SIZEDARR HyperStr;
 }u;
}SAFEARRAYUNION;
typedef struct _wireSAFEARRAY {
 USHORT cDims;
 USHORT fFeatures;
 ULONG cbElements;
 ULONG cLocks;
 SAFEARRAYUNION uArrayStructs;
 SAFEARRAYBOUND rgsabound[1];
}*wireSAFEARRAY;
typedef wireSAFEARRAY *wirePSAFEARRAY;
typedef struct tagSAFEARRAY {
 USHORT cDims;
 USHORT fFeatures;
 ULONG cbElements;
 ULONG cLocks;
 PVOID pvData;
 SAFEARRAYBOUND rgsabound[1];
}SAFEARRAY,*LPSAFEARRAY;

__extension__

typedef struct tagVARIANT {
  __extension__ union {
 struct {
 VARTYPE vt;
 WORD wReserved1;
 WORD wReserved2;
 WORD wReserved3;
 __extension__ union {
  long lVal;
  LONGLONG llVal;
  unsigned char bVal;
  short iVal;
  float fltVal;
  double dblVal;
  VARIANT_BOOL boolVal;
  SCODE scode;
  CY cyVal;
  DATE date;
  BSTR bstrVal;
  IUnknown *punkVal;
  LPDISPATCH pdispVal;
  SAFEARRAY *parray;
  unsigned char *pbVal;
  short *piVal;
  long *plVal;
  LONGLONG * pllVal;
  float *pfltVal;
  double *pdblVal;
  VARIANT_BOOL *pboolVal;
  _VARIANT_BOOL *pbool;
  SCODE *pscode;
  CY *pcyVal;
  DATE *pdate;
  BSTR *pbstrVal;
  IUnknown **ppunkVal;
  LPDISPATCH *ppdispVal;
  SAFEARRAY **pparray;
  struct tagVARIANT *pvarVal;
  void *byref;
  CHAR cVal;
  USHORT uiVal;
  ULONG ulVal;
  ULONGLONG ullVal;
  INT intVal;
  UINT uintVal;
  DECIMAL *pdecVal;
  CHAR *pcVal;
  USHORT *puiVal;
  ULONG *pulVal;
  ULONGLONG * pullVal;
  INT *pintVal;
  UINT *puintVal;
  __extension__ struct {
   PVOID pvRecord;
   struct IRecordInfo *pRecInfo;
  } ;
 } ;
    } ;
    DECIMAL decVal;
  } ;
} VARIANT,*LPVARIANT;
typedef VARIANT VARIANTARG;
typedef VARIANT *LPVARIANTARG;
typedef struct _wireVARIANT {
 DWORD clSize;
 DWORD rpcReserved;
 USHORT vt;
 USHORT wReserved1;
 USHORT wReserved2;
 USHORT wReserved3;
 __extension__ union {
  LONG lVal;
  LONGLONG llVal;
  BYTE bVal;
  SHORT iVal;
  FLOAT fltVal;
  DOUBLE dblVal;
  VARIANT_BOOL boolVal;
  SCODE scode;
  CY cyVal;
  DATE date;
  wireBSTR bstrVal;
  IUnknown *punkVal;
  LPDISPATCH pdispVal;
  wirePSAFEARRAY parray;
  wireBRECORD brecVal;
  BYTE *pbVal;
  SHORT *piVal;
  LONG *plVal;
  FLOAT *pfltVal;
  DOUBLE *pdblVal;
  VARIANT_BOOL *pboolVal;
  SCODE *pscode;
  CY *pcyVal;
  DATE *pdate;
  wireBSTR *pbstrVal;
  IUnknown **ppunkVal;
  LPDISPATCH *ppdispVal;
  wirePSAFEARRAY *pparray;
  struct _wireVARIANT *pvarVal;
  CHAR cVal;
  USHORT uiVal;
  ULONG ulVal;
  ULONGLONG ullVal;
  INT intVal;
  UINT uintVal;
  DECIMAL decVal;
  DECIMAL *pdecVal;
  CHAR *pcVal;
  USHORT *puiVal;
  ULONG *pulVal;
  INT *pintVal;
  UINT *puintVal;
 } ;
} *wireVARIANT;
typedef LONG DISPID;
typedef DISPID MEMBERID;
typedef DWORD HREFTYPE;
typedef enum tagTYPEKIND {
 TKIND_ENUM,TKIND_RECORD,TKIND_MODULE,TKIND_INTERFACE,TKIND_DISPATCH,
 TKIND_COCLASS,TKIND_ALIAS,TKIND_UNION,TKIND_MAX
}TYPEKIND;
typedef struct tagTYPEDESC {
 __extension__ union {
  struct tagTYPEDESC *lptdesc;
  struct tagARRAYDESC *lpadesc;
  HREFTYPE hreftype;
 } ;
 VARTYPE vt;
}TYPEDESC;
typedef struct tagARRAYDESC {
 TYPEDESC tdescElem;
 USHORT cDims;
 SAFEARRAYBOUND rgbounds[1];
}ARRAYDESC;
typedef struct tagPARAMDESCEX {
 ULONG cBytes;
 VARIANTARG varDefaultValue;
}PARAMDESCEX,*LPPARAMDESCEX;
typedef struct tagPARAMDESC {
 LPPARAMDESCEX pparamdescex;
 USHORT wParamFlags;
}PARAMDESC,*LPPARAMDESC;
typedef struct tagIDLDESC {
 ULONG dwReserved;
 USHORT wIDLFlags;
}IDLDESC,*LPIDLDESC;
typedef struct tagELEMDESC {
 TYPEDESC tdesc;
 __extension__ union {
  IDLDESC idldesc;
  PARAMDESC paramdesc;
 } ;
} ELEMDESC,*LPELEMDESC;
typedef struct tagTYPEATTR {
 GUID guid;
 LCID lcid;
 DWORD dwReserved;
 MEMBERID memidConstructor;
 MEMBERID memidDestructor;
 LPOLESTR lpstrSchema;
 ULONG cbSizeInstance;
 TYPEKIND typekind;
 WORD cFuncs;
 WORD cVars;
 WORD cImplTypes;
 WORD cbSizeVft;
 WORD cbAlignment;
 WORD wTypeFlags;
 WORD wMajorVerNum;
 WORD wMinorVerNum;
 TYPEDESC tdescAlias;
 IDLDESC idldescType;
}TYPEATTR,*LPTYPEATTR;
typedef struct tagDISPPARAMS {
 VARIANTARG *rgvarg;
 DISPID *rgdispidNamedArgs;
 UINT cArgs;
 UINT cNamedArgs;
}DISPPARAMS;
typedef struct tagEXCEPINFO {
 WORD wCode;
 WORD wReserved;
 BSTR bstrSource;
 BSTR bstrDescription;
 BSTR bstrHelpFile;
 DWORD dwHelpContext;
 PVOID pvReserved;
 HRESULT(__attribute__((__stdcall__)) * pfnDeferredFillIn)(struct tagEXCEPINFO*);
 SCODE scode;
} EXCEPINFO,*LPEXCEPINFO;
typedef enum tagCALLCONV {
 CC_FASTCALL,CC_CDECL,CC_MSCPASCAL,CC_PASCAL=CC_MSCPASCAL,
 CC_MACPASCAL,CC_STDCALL,CC_FPFASTCALL,CC_SYSCALL,CC_MPWCDECL,
 CC_MPWPASCAL,CC_MAX=CC_MPWPASCAL
}CALLCONV;
typedef enum tagFUNCKIND {
 FUNC_VIRTUAL,FUNC_PUREVIRTUAL,FUNC_NONVIRTUAL,
 FUNC_STATIC,FUNC_DISPATCH
}FUNCKIND;
typedef enum tagINVOKEKIND {
 INVOKE_FUNC=1,INVOKE_PROPERTYGET,INVOKE_PROPERTYPUT=4,
 INVOKE_PROPERTYPUTREF=8
}INVOKEKIND;
typedef struct tagFUNCDESC {
 MEMBERID memid;
 SCODE *lprgscode;
 ELEMDESC *lprgelemdescParam;
 FUNCKIND funckind;
 INVOKEKIND invkind;
 CALLCONV callconv;
 SHORT cParams;
 SHORT cParamsOpt;
 SHORT oVft;
 SHORT cScodes;
 ELEMDESC elemdescFunc;
 WORD wFuncFlags;
}FUNCDESC,*LPFUNCDESC;
typedef enum tagVARKIND {
 VAR_PERINSTANCE,VAR_STATIC,VAR_CONST,VAR_DISPATCH
} VARKIND;
typedef struct tagVARDESC {
 MEMBERID memid;
 LPOLESTR lpstrSchema;
 __extension__ union {
  ULONG oInst;
  VARIANT *lpvarValue;
 } ;
 ELEMDESC elemdescVar;
 WORD wVarFlags;
 VARKIND varkind;
} VARDESC,*LPVARDESC;
typedef enum tagTYPEFLAGS {
 TYPEFLAG_FAPPOBJECT=1,TYPEFLAG_FCANCREATE=2,TYPEFLAG_FLICENSED=4,
 TYPEFLAG_FPREDECLID=8,TYPEFLAG_FHIDDEN=16,TYPEFLAG_FCONTROL=32,
 TYPEFLAG_FDUAL=64,TYPEFLAG_FNONEXTENSIBLE=128,
 TYPEFLAG_FOLEAUTOMATION=256,TYPEFLAG_FRESTRICTED=512,
 TYPEFLAG_FAGGREGATABLE=1024,TYPEFLAG_FREPLACEABLE=2048,
 TYPEFLAG_FDISPATCHABLE=4096,TYPEFLAG_FREVERSEBIND=8192
} TYPEFLAGS;
typedef enum tagFUNCFLAGS {
 FUNCFLAG_FRESTRICTED=1,FUNCFLAG_FSOURCE=2,FUNCFLAG_FBINDABLE=4,
 FUNCFLAG_FREQUESTEDIT=8,FUNCFLAG_FDISPLAYBIND=16,FUNCFLAG_FDEFAULTBIND=32,
 FUNCFLAG_FHIDDEN=64,FUNCFLAG_FUSESGETLASTERROR=128,FUNCFLAG_FDEFAULTCOLLELEM=256,
 FUNCFLAG_FUIDEFAULT=512,FUNCFLAG_FNONBROWSABLE=1024,FUNCFLAG_FREPLACEABLE=2048,
 FUNCFLAG_FIMMEDIATEBIND=4096
} FUNCFLAGS;
typedef enum tagVARFLAGS {
 VARFLAG_FREADONLY=1,VARFLAG_FSOURCE=2,VARFLAG_FBINDABLE=4,VARFLAG_FREQUESTEDIT=8,
 VARFLAG_FDISPLAYBIND=16,VARFLAG_FDEFAULTBIND=32,VARFLAG_FHIDDEN=64,VARFLAG_FRESTRICTED=128,
 VARFLAG_FDEFAULTCOLLELEM=256,VARFLAG_FUIDEFAULT=512,VARFLAG_FNONBROWSABLE=1024,
 VARFLAG_FREPLACEABLE=2048,VARFLAG_FIMMEDIATEBIND=4096
} VARFLAGS;
typedef struct tagCLEANLOCALSTORAGE {
 IUnknown *pInterface;
 PVOID pStorage;
 DWORD flags;
} CLEANLOCALSTORAGE;
typedef struct tagCUSTDATAITEM {
 GUID guid;
 VARIANTARG varValue;
} CUSTDATAITEM,*LPCUSTDATAITEM;
typedef struct tagCUSTDATA {
 DWORD cCustData;
 LPCUSTDATAITEM prgCustData;
} CUSTDATA,*LPCUSTDATA;

typedef enum tagDESCKIND {
        DESCKIND_NONE=0,DESCKIND_FUNCDESC=DESCKIND_NONE+1,
        DESCKIND_VARDESC=DESCKIND_FUNCDESC+1,DESCKIND_TYPECOMP=DESCKIND_VARDESC+1,
        DESCKIND_IMPLICITAPPOBJ=DESCKIND_TYPECOMP+1,
        DESCKIND_MAX=DESCKIND_IMPLICITAPPOBJ+1
} DESCKIND;

typedef union tagBINDPTR {
        LPFUNCDESC lpfuncdesc;
        LPVARDESC lpvardesc;
        LPTYPECOMP lptcomp;
} BINDPTR,*LPBINDPTR;


typedef struct IDispatch { struct IDispatchVtbl *lpVtbl; } IDispatch; typedef struct IDispatchVtbl IDispatchVtbl; struct IDispatchVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDispatch *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDispatch *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDispatch *) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfoCount)(IDispatch *, UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfo)(IDispatch *, UINT,LCID,LPTYPEINFO*) ;
 HRESULT(__attribute__((__stdcall__)) *GetIDsOfNames)(IDispatch *, const IID* const,LPOLESTR*,UINT,LCID,DISPID*) ;
 HRESULT(__attribute__((__stdcall__)) *Invoke)(IDispatch *, DISPID,const IID* const,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) ;
};
# 500 "c:\\mingw\\include\\oaidl.h" 3
typedef struct IEnumVARIANT { struct IEnumVARIANTVtbl *lpVtbl; } IEnumVARIANT; typedef struct IEnumVARIANTVtbl IEnumVARIANTVtbl; struct IEnumVARIANTVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumVARIANT *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumVARIANT *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IEnumVARIANT *) ;
 HRESULT(__attribute__((__stdcall__)) *Next)(IEnumVARIANT *, ULONG,VARIANT*,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumVARIANT *, ULONG) ;
 HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumVARIANT *) ;
 HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumVARIANT *, IEnumVARIANT**) ;
};



typedef struct ITypeComp { struct ITypeCompVtbl *lpVtbl; } ITypeComp; typedef struct ITypeCompVtbl ITypeCompVtbl; struct ITypeCompVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeComp *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeComp *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeComp *) ;
 HRESULT(__attribute__((__stdcall__)) *Bind)(ITypeComp *, LPOLESTR,ULONG,WORD,LPTYPEINFO*,DESCKIND*,LPBINDPTR) ;
 HRESULT(__attribute__((__stdcall__)) *BindType)(ITypeComp *, LPOLESTR,ULONG,LPTYPEINFO*,LPTYPECOMP*) ;
};



typedef struct ITypeInfo { struct ITypeInfoVtbl *lpVtbl; } ITypeInfo; typedef struct ITypeInfoVtbl ITypeInfoVtbl; struct ITypeInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeAttr)(ITypeInfo *, LPTYPEATTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeComp)(ITypeInfo *, LPTYPECOMP*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFuncDesc)(ITypeInfo *, UINT,LPFUNCDESC*) ;
 HRESULT(__attribute__((__stdcall__)) *GetVarDesc)(ITypeInfo *, UINT,LPVARDESC*) ;
 HRESULT(__attribute__((__stdcall__)) *GetNames)(ITypeInfo *, MEMBERID,BSTR*,UINT,UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetRefTypeOfImplType)(ITypeInfo *, UINT,HREFTYPE*) ;
 HRESULT(__attribute__((__stdcall__)) *GetImplTypeFlags)(ITypeInfo *, UINT,INT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetIDsOfNames)(ITypeInfo *, LPOLESTR*,UINT,MEMBERID*) ;
 HRESULT(__attribute__((__stdcall__)) *Invoke)(ITypeInfo *, PVOID,MEMBERID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDocumentation)(ITypeInfo *, MEMBERID,BSTR*,BSTR*,DWORD*,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDllEntry)(ITypeInfo *, MEMBERID,INVOKEKIND,BSTR*,BSTR*,WORD*) ;
 HRESULT(__attribute__((__stdcall__)) *GetRefTypeInfo)(ITypeInfo *, HREFTYPE,LPTYPEINFO*) ;
 HRESULT(__attribute__((__stdcall__)) *AddressOfMember)(ITypeInfo *, MEMBERID,INVOKEKIND,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *CreateInstance)(ITypeInfo *, LPUNKNOWN,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetMops)(ITypeInfo *, MEMBERID,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetContainingTypeLib)(ITypeInfo *, LPTYPELIB*,UINT*) ;
 void(__attribute__((__stdcall__)) *ReleaseTypeAttr)(ITypeInfo *, LPTYPEATTR) ;
 void(__attribute__((__stdcall__)) *ReleaseFuncDesc)(ITypeInfo *, LPFUNCDESC) ;
 void(__attribute__((__stdcall__)) *ReleaseVarDesc)(ITypeInfo *, LPVARDESC) ;
};
# 577 "c:\\mingw\\include\\oaidl.h" 3
typedef struct ITypeInfo2 { struct ITypeInfo2Vtbl *lpVtbl; } ITypeInfo2; typedef struct ITypeInfo2Vtbl ITypeInfo2Vtbl; struct ITypeInfo2Vtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeInfo2 *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeInfo2 *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeInfo2 *) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeAttr)(ITypeInfo2 *, LPTYPEATTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeComp)(ITypeInfo2 *, LPTYPECOMP*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFuncDesc)(ITypeInfo2 *, UINT,LPFUNCDESC*) ;
 HRESULT(__attribute__((__stdcall__)) *GetVarDesc)(ITypeInfo2 *, UINT,LPVARDESC*) ;
 HRESULT(__attribute__((__stdcall__)) *GetNames)(ITypeInfo2 *, MEMBERID,BSTR*,UINT,UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetRefTypeOfImplType)(ITypeInfo2 *, UINT,HREFTYPE*) ;
 HRESULT(__attribute__((__stdcall__)) *GetImplTypeFlags)(ITypeInfo2 *, UINT,INT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetIDsOfNames)(ITypeInfo2 *, LPOLESTR*,UINT,MEMBERID*) ;
 HRESULT(__attribute__((__stdcall__)) *Invoke)(ITypeInfo2 *, PVOID,MEMBERID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDocumentation)(ITypeInfo2 *, MEMBERID,BSTR*,BSTR*,DWORD*,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDllEntry)(ITypeInfo2 *, MEMBERID,INVOKEKIND,BSTR*,BSTR*,WORD*) ;
 HRESULT(__attribute__((__stdcall__)) *GetRefTypeInfo)(ITypeInfo2 *, HREFTYPE,LPTYPEINFO*) ;
 HRESULT(__attribute__((__stdcall__)) *AddressOfMember)(ITypeInfo2 *, MEMBERID,INVOKEKIND,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *CreateInstance)(ITypeInfo2 *, LPUNKNOWN,const IID* const,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetMops)(ITypeInfo2 *, MEMBERID,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetContainingTypeLib)(ITypeInfo2 *, LPTYPELIB*,UINT*) ;
 void(__attribute__((__stdcall__)) *ReleaseTypeAttr)(ITypeInfo2 *, LPTYPEATTR) ;
 void(__attribute__((__stdcall__)) *ReleaseFuncDesc)(ITypeInfo2 *, LPFUNCDESC) ;
 void(__attribute__((__stdcall__)) *ReleaseVarDesc)(ITypeInfo2 *, LPVARDESC) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeKind)(ITypeInfo2 *, TYPEKIND*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeFlags)(ITypeInfo2 *, ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFuncIndexOfMemId)(ITypeInfo2 *, MEMBERID,INVOKEKIND,UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetVarIndexOfMemId)(ITypeInfo2 *, MEMBERID,UINT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetCustData)(ITypeInfo2 *, const GUID* const,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFuncCustData)(ITypeInfo2 *, UINT,const GUID* const,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetParamCustData)(ITypeInfo2 *, UINT,UINT,const GUID* const,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetVarCustData)(ITypeInfo2 *, UINT,const GUID* const,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetImplTypeCustData)(ITypeInfo2 *, UINT,const GUID* const,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDocumentation2)(ITypeInfo2 *, MEMBERID,LCID,BSTR*,DWORD*,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAllCustData)(ITypeInfo2 *, CUSTDATA*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAllFuncCustData)(ITypeInfo2 *, UINT,CUSTDATA*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAllParamCustData)(ITypeInfo2 *, UINT,UINT,CUSTDATA*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAllVarCustData)(ITypeInfo2 *, UINT,CUSTDATA*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAllImplTypeCustData)(ITypeInfo2 *, UINT,CUSTDATA*) ;
};



typedef struct ITypeLib { struct ITypeLibVtbl *lpVtbl; } ITypeLib; typedef struct ITypeLibVtbl ITypeLibVtbl; struct ITypeLibVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeLib *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeLib *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeLib *) ;
 UINT(__attribute__((__stdcall__)) *GetTypeInfoCount)(ITypeLib *) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfo)(ITypeLib *, UINT,ITypeInfo**) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfoType)(ITypeLib *, UINT,TYPEKIND*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfoOfGuid)(ITypeLib *, const GUID* const,ITypeInfo**) ;
 HRESULT(__attribute__((__stdcall__)) *GetLibAttr)(ITypeLib *, TLIBATTR**) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeComp)(ITypeLib *, ITypeComp**) ;
 HRESULT(__attribute__((__stdcall__)) *GetDocumentation)(ITypeLib *, INT,BSTR*,BSTR*,DWORD*,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *IsName)(ITypeLib *, LPOLESTR,ULONG,BOOL*) ;
 HRESULT(__attribute__((__stdcall__)) *FindName)(ITypeLib *, LPOLESTR,ULONG,ITypeInfo**,MEMBERID*,USHORT*) ;
 void(__attribute__((__stdcall__)) *ReleaseTLibAttr)(ITypeLib *, TLIBATTR*) ;
};



typedef struct ITypeLib2 { struct ITypeLib2Vtbl *lpVtbl; } ITypeLib2; typedef struct ITypeLib2Vtbl ITypeLib2Vtbl; struct ITypeLib2Vtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeLib2 *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeLib2 *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeLib2 *) ;
 UINT(__attribute__((__stdcall__)) *GetTypeInfoCount)(ITypeLib2 *) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfo)(ITypeLib2 *, UINT,ITypeInfo**) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfoType)(ITypeLib2 *, UINT,TYPEKIND*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfoOfGuid)(ITypeLib2 *, const GUID* const,ITypeInfo**) ;
 HRESULT(__attribute__((__stdcall__)) *GetLibAttr)(ITypeLib2 *, TLIBATTR**) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeComp)(ITypeLib2 *, ITypeComp**) ;
 HRESULT(__attribute__((__stdcall__)) *GetDocumentation)(ITypeLib2 *, INT,BSTR*,BSTR*,DWORD*,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *IsName)(ITypeLib2 *, LPOLESTR,ULONG,BOOL*) ;
 HRESULT(__attribute__((__stdcall__)) *FindName)(ITypeLib2 *, LPOLESTR,ULONG,ITypeInfo**,MEMBERID*,USHORT*) ;
 void(__attribute__((__stdcall__)) *ReleaseTLibAttr)(ITypeLib2 *, TLIBATTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetCustData)(ITypeLib2 *, const GUID* const,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetLibStatistics)(ITypeLib2 *, ULONG*,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDocumentation2)(ITypeLib2 *, INT,LCID,BSTR*,DWORD*,BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAllCustData)(ITypeLib2 *, CUSTDATA*) ;
};


extern const IID IID_IErrorInfo;

typedef struct IErrorInfo { struct IErrorInfoVtbl *lpVtbl; } IErrorInfo; typedef struct IErrorInfoVtbl IErrorInfoVtbl; struct IErrorInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IErrorInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IErrorInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IErrorInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *GetGUID)(IErrorInfo *, GUID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetSource)(IErrorInfo *, BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetDescription)(IErrorInfo *, BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetHelpFile)(IErrorInfo *, BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetHelpContext)(IErrorInfo *, DWORD*) ;
};
# 687 "c:\\mingw\\include\\oaidl.h" 3
extern const IID IID_ICreateErrorInfo;

typedef struct ICreateErrorInfo { struct ICreateErrorInfoVtbl *lpVtbl; } ICreateErrorInfo; typedef struct ICreateErrorInfoVtbl ICreateErrorInfoVtbl; struct ICreateErrorInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ICreateErrorInfo *, const IID* const,PVOID*);
 ULONG(__attribute__((__stdcall__)) *AddRef)(ICreateErrorInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ICreateErrorInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *SetGUID)(ICreateErrorInfo *, const GUID* const) ;
 HRESULT(__attribute__((__stdcall__)) *SetSource)(ICreateErrorInfo *, LPOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *SetDescription)(ICreateErrorInfo *, LPOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *SetHelpFile)(ICreateErrorInfo *, LPOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *SetHelpContext)(ICreateErrorInfo *, DWORD) ;
};


extern const IID IID_ISupportErrorInfo;

typedef struct ISupportErrorInfo { struct ISupportErrorInfoVtbl *lpVtbl; } ISupportErrorInfo; typedef struct ISupportErrorInfoVtbl ISupportErrorInfoVtbl; struct ISupportErrorInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ISupportErrorInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ISupportErrorInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ISupportErrorInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *InterfaceSupportsErrorInfo)(ISupportErrorInfo *, const IID* const) ;
};


extern const IID IID_IRecordInfo;

typedef struct IRecordInfo { struct IRecordInfoVtbl *lpVtbl; } IRecordInfo; typedef struct IRecordInfoVtbl IRecordInfoVtbl; struct IRecordInfoVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IRecordInfo *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IRecordInfo *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IRecordInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *RecordInit)(IRecordInfo *, PVOID) ;
 HRESULT(__attribute__((__stdcall__)) *RecordClear)(IRecordInfo *, PVOID) ;
 HRESULT(__attribute__((__stdcall__)) *RecordCopy)(IRecordInfo *, PVOID, PVOID) ;
 HRESULT(__attribute__((__stdcall__)) *GetGuid)(IRecordInfo *, GUID*) ;
 HRESULT(__attribute__((__stdcall__)) *GetName)(IRecordInfo *, BSTR*) ;
 HRESULT(__attribute__((__stdcall__)) *GetSize)(IRecordInfo *, ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *GetTypeInfo)(IRecordInfo *, ITypeInfo**) ;
 HRESULT(__attribute__((__stdcall__)) *GetField)(IRecordInfo *, PVOID,LPCOLESTR,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFieldNoCopy)(IRecordInfo *, PVOID,LPCOLESTR,VARIANT*,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *PutField)(IRecordInfo *, ULONG,PVOID,LPCOLESTR, VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *PutFieldNoCopy)(IRecordInfo *, ULONG,PVOID,LPCOLESTR,VARIANT*) ;
 HRESULT(__attribute__((__stdcall__)) *GetFieldNames)(IRecordInfo *, ULONG*,BSTR*) ;
 BOOL(__attribute__((__stdcall__)) *IsMatchingType)(IRecordInfo *, IRecordInfo*) ;
 PVOID(__attribute__((__stdcall__)) *RecordCreate)(IRecordInfo *) ;
 HRESULT(__attribute__((__stdcall__)) *RecordCreateCopy)(IRecordInfo *, PVOID,PVOID*) ;
 HRESULT(__attribute__((__stdcall__)) *RecordDestroy)(IRecordInfo *, PVOID) ;
};
# 761 "c:\\mingw\\include\\oaidl.h" 3
extern const IID IID_ITypeMarshal;

typedef struct ITypeMarshal { struct ITypeMarshalVtbl *lpVtbl; } ITypeMarshal; typedef struct ITypeMarshalVtbl ITypeMarshalVtbl; struct ITypeMarshalVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(ITypeMarshal *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(ITypeMarshal *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(ITypeMarshal *) ;
 HRESULT(__attribute__((__stdcall__)) *Size)(ITypeMarshal *, PVOID,DWORD,PVOID,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Marshal)(ITypeMarshal *, PVOID,DWORD,PVOID,ULONG,BYTE*,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Unmarshal)(ITypeMarshal *, PVOID,DWORD,ULONG,BYTE*,ULONG*) ;
 HRESULT(__attribute__((__stdcall__)) *Free)(ITypeMarshal *, PVOID) ;
};
# 159 "c:\\mingw\\include\\oleauto.h" 2 3

typedef enum tagREGKIND {
 REGKIND_DEFAULT,
 REGKIND_REGISTER,
 REGKIND_NONE
} REGKIND;
typedef struct tagPARAMDATA {
 OLECHAR *szName;
 VARTYPE vt;
} PARAMDATA,*LPPARAMDATA;
typedef struct tagMETHODDATA {
 OLECHAR *szName;
 PARAMDATA *ppdata;
 DISPID dispid;
 UINT iMeth;
 CALLCONV cc;
 UINT cArgs;
 WORD wFlags;
 VARTYPE vtReturn;
} METHODDATA,*LPMETHODDATA;
typedef struct tagINTERFACEDATA {
 METHODDATA *pmethdata;
 UINT cMembers;
} INTERFACEDATA,*LPINTERFACEDATA;

typedef struct {
 SYSTEMTIME st;
 USHORT wDayOfYear;
} UDATE;

typedef struct {
 int cDig;
 unsigned long dwInFlags;
 unsigned long dwOutFlags;
 int cchUsed;
 int nBaseShift;
 int nPwr10;
} NUMPARSE;

extern BSTR __attribute__((__stdcall__)) SysAllocString(const OLECHAR*);
extern int __attribute__((__stdcall__)) SysReAllocString(BSTR*,const OLECHAR*);
extern BSTR __attribute__((__stdcall__)) SysAllocStringLen(const OLECHAR*,unsigned int);
extern int __attribute__((__stdcall__)) SysReAllocStringLen(BSTR*,const OLECHAR*,unsigned int);
extern void __attribute__((__stdcall__)) SysFreeString(BSTR);
extern unsigned int __attribute__((__stdcall__)) SysStringLen(BSTR);
extern unsigned int __attribute__((__stdcall__)) SysStringByteLen(BSTR);
extern BSTR __attribute__((__stdcall__)) SysAllocStringByteLen(const char*,unsigned int);
extern int __attribute__((__stdcall__)) DosDateTimeToVariantTime(unsigned short,unsigned short,double*);
extern int __attribute__((__stdcall__)) VariantTimeToDosDateTime(double,unsigned short*,unsigned short*);
extern int __attribute__((__stdcall__)) VariantTimeToSystemTime(double,LPSYSTEMTIME);
extern int __attribute__((__stdcall__)) SystemTimeToVariantTime(LPSYSTEMTIME, double*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromUdate(UDATE*,ULONG,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromUdateEx(UDATE*,LCID,ULONG,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarUdateFromDate(DATE,ULONG,UDATE*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayAllocDescriptor(unsigned int,SAFEARRAY**);
extern HRESULT __attribute__((__stdcall__)) SafeArrayAllocData(SAFEARRAY*);
extern SAFEARRAY* __attribute__((__stdcall__)) SafeArrayCreate(VARTYPE,unsigned int,SAFEARRAYBOUND*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayDestroyDescriptor(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayDestroyData(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayDestroy(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayRedim(SAFEARRAY*,SAFEARRAYBOUND*);
extern unsigned int __attribute__((__stdcall__)) SafeArrayGetDim(SAFEARRAY*);
extern unsigned int __attribute__((__stdcall__)) SafeArrayGetElemsize(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetUBound(SAFEARRAY*,unsigned int,long*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetLBound(SAFEARRAY*,unsigned int,long*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayLock(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayUnlock(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayAccessData(SAFEARRAY*,void**);
extern HRESULT __attribute__((__stdcall__)) SafeArrayUnaccessData(SAFEARRAY*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetElement(SAFEARRAY*,long*,void*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayPutElement(SAFEARRAY*,long*,void*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayCopy(SAFEARRAY*,SAFEARRAY**);
extern HRESULT __attribute__((__stdcall__)) SafeArrayPtrOfIndex(SAFEARRAY*,long*,void**);
extern SAFEARRAY* __attribute__((__stdcall__)) SafeArrayCreateVector(VARTYPE,LONG,ULONG);
extern SAFEARRAY* __attribute__((__stdcall__)) SafeArrayCreateVectorEx(VARTYPE,LONG,ULONG,LPVOID);
extern HRESULT __attribute__((__stdcall__)) SafeArrayAllocDescriptorEx(VARTYPE,UINT,SAFEARRAY**);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetVartype(SAFEARRAY*,VARTYPE*);
extern HRESULT __attribute__((__stdcall__)) SafeArraySetRecordInfo(SAFEARRAY*,IRecordInfo*);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetRecordInfo(SAFEARRAY*,IRecordInfo**);
extern HRESULT __attribute__((__stdcall__)) SafeArraySetIID(SAFEARRAY*,const GUID* const);
extern HRESULT __attribute__((__stdcall__)) SafeArrayGetIID(SAFEARRAY*,GUID*);
extern void __attribute__((__stdcall__)) VariantInit(VARIANTARG*);
extern HRESULT __attribute__((__stdcall__)) VariantClear(VARIANTARG*);
extern HRESULT __attribute__((__stdcall__)) VariantCopy(VARIANTARG*,VARIANTARG*);
extern HRESULT __attribute__((__stdcall__)) VariantCopyInd(VARIANT*,VARIANTARG*);
extern HRESULT __attribute__((__stdcall__)) VariantChangeType(VARIANTARG*,VARIANTARG*,unsigned short,VARTYPE);
extern HRESULT __attribute__((__stdcall__)) VariantChangeTypeEx(VARIANTARG*,VARIANTARG*,LCID,unsigned short,VARTYPE);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromI2(short,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromI4(long,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromR4(float,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromR8(double,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromCy(CY,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromDate(DATE,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromStr(OLECHAR*,LCID,unsigned long,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromDisp(LPDISPATCH,LCID,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromBool(VARIANT_BOOL,unsigned char*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromUI1(unsigned char,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromI4(long,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromR4(float,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromR8(double,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromCy(CY cyIn,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromDate(DATE,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromStr(OLECHAR*,LCID,unsigned long,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromDisp(LPDISPATCH,LCID,short*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromBool(VARIANT_BOOL,short*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromUI1(unsigned char,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromI2(short,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromR4(float,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromR8(double,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromCy(CY,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromDate(DATE,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromStr(OLECHAR*,LCID,unsigned long,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromDisp(LPDISPATCH,LCID,long*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromBool(VARIANT_BOOL,long*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromUI1(unsigned char,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromI2(short,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromI4(long,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromR8(double,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromCy(CY,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromDate(DATE,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromStr(OLECHAR*,LCID,unsigned long,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromDisp(LPDISPATCH,LCID,float*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromBool(VARIANT_BOOL,float*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromUI1(unsigned char,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromI2(short,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromI4(long,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromR4(float,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromCy(CY,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDate(DATE,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromStr(OLECHAR*,LCID,unsigned long,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDisp(LPDISPATCH,LCID,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromBool(VARIANT_BOOL,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDec(DECIMAL*,double*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromUI1(unsigned char,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromI2(short,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromI4(long,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromR4(float,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromR8(double,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromCy(CY,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromStr(OLECHAR*,LCID,unsigned long,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromDisp(LPDISPATCH,LCID,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromBool(VARIANT_BOOL,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromUI1(unsigned char,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromI2(short,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromI4(long,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromR4(float,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromR8(double,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromDate(DATE,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromStr(OLECHAR*,LCID,unsigned long,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromDisp(LPDISPATCH,LCID,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromBool(VARIANT_BOOL,CY*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromUI1(unsigned char,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromI2(short,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromI4(long,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromR4(float,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromR8(double,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromCy(CY,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromDate(DATE,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromDisp(LPDISPATCH,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromBool(VARIANT_BOOL,LCID,unsigned long,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromUI1(unsigned char,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromI2(short,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromI4(long,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromR4(float,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromR8(double,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromDate(DATE,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromCy(CY,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromStr(OLECHAR*,LCID,unsigned long,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromDisp(LPDISPATCH,LCID,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromR8(double,DECIMAL*);
extern ULONG __attribute__((__stdcall__)) LHashValOfNameSysA(SYSKIND,LCID,const char*);
extern ULONG __attribute__((__stdcall__)) LHashValOfNameSys(SYSKIND,LCID,const OLECHAR*);
extern HRESULT __attribute__((__stdcall__)) LoadTypeLib(const OLECHAR*,LPTYPELIB*);
extern HRESULT __attribute__((__stdcall__)) LoadTypeLibEx(LPCOLESTR,REGKIND,LPTYPELIB*);
extern HRESULT __attribute__((__stdcall__)) LoadRegTypeLib(const GUID* const,WORD,WORD,LCID,LPTYPELIB*);
extern HRESULT __attribute__((__stdcall__)) QueryPathOfRegTypeLib(const GUID* const,unsigned short,unsigned short,LCID,LPBSTR);
extern HRESULT __attribute__((__stdcall__)) RegisterTypeLib(LPTYPELIB,OLECHAR*,OLECHAR*);
extern HRESULT __attribute__((__stdcall__)) UnRegisterTypeLib(const GUID* const,WORD,WORD,LCID,SYSKIND);
extern HRESULT __attribute__((__stdcall__)) CreateTypeLib(SYSKIND,const OLECHAR*,LPCREATETYPELIB*);
extern HRESULT __attribute__((__stdcall__)) DispGetParam(DISPPARAMS*,UINT,VARTYPE,VARIANT*,UINT*);
extern HRESULT __attribute__((__stdcall__)) DispGetIDsOfNames(LPTYPEINFO,OLECHAR**,UINT,DISPID*);
extern HRESULT __attribute__((__stdcall__)) DispInvoke(void*,LPTYPEINFO,DISPID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
extern HRESULT __attribute__((__stdcall__)) CreateDispTypeInfo(INTERFACEDATA*,LCID,LPTYPEINFO*);
extern HRESULT __attribute__((__stdcall__)) CreateStdDispatch(IUnknown*,void*,LPTYPEINFO,IUnknown**);
extern HRESULT __attribute__((__stdcall__)) RegisterActiveObject(IUnknown*,const CLSID* const,DWORD,DWORD*);
extern HRESULT __attribute__((__stdcall__)) RevokeActiveObject(DWORD,void*);
extern HRESULT __attribute__((__stdcall__)) GetActiveObject(const CLSID* const,void*,IUnknown**);
extern HRESULT __attribute__((__stdcall__)) SetErrorInfo(unsigned long,LPERRORINFO);
extern HRESULT __attribute__((__stdcall__)) GetErrorInfo(unsigned long,LPERRORINFO*);
extern HRESULT __attribute__((__stdcall__)) CreateErrorInfo(LPCREATEERRORINFO*);
extern unsigned long __attribute__((__stdcall__)) OaBuildVersion(void);
extern HRESULT __attribute__((__stdcall__)) VectorFromBstr (BSTR, SAFEARRAY **);
extern HRESULT __attribute__((__stdcall__)) BstrFromVector (SAFEARRAY *, BSTR *);
extern HRESULT __attribute__((__stdcall__)) VarParseNumFromStr(OLECHAR*,LCID,ULONG,NUMPARSE*,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarNumFromParseNum(NUMPARSE*,BYTE*,ULONG,VARIANT*);
extern HRESULT __attribute__((__stdcall__)) GetRecordInfoFromTypeInfo (ITypeInfo*,IRecordInfo**);
extern HRESULT __attribute__((__stdcall__)) GetRecordInfoFromGuids (const GUID* const,ULONG,ULONG,LCID,const GUID* const,IRecordInfo**);

extern HRESULT __attribute__((__stdcall__)) VarAdd(LPVARIANT, LPVARIANT, LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarSub(LPVARIANT, LPVARIANT, LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarMul(LPVARIANT, LPVARIANT, LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarDiv(LPVARIANT, LPVARIANT, LPVARIANT);

extern HRESULT __attribute__((__stdcall__)) VarUI1FromI2(SHORT,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromI4(LONG,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromI8(LONG64,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromR4(FLOAT,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromR8(DOUBLE,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromDate(DATE,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromBool(VARIANT_BOOL,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromI1(signed char,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromUI2(USHORT,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromUI4(ULONG,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromUI8(ULONG64,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromStr(OLECHAR*,LCID,ULONG,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromCy(CY,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromDec(DECIMAL*,BYTE*);
extern HRESULT __attribute__((__stdcall__)) VarUI1FromDisp(IDispatch*,LCID,BYTE*);

extern HRESULT __attribute__((__stdcall__)) VarI2FromUI1(BYTE,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromI4(LONG,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromI8(LONG64,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromR4(FLOAT,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromR8(DOUBLE,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromDate(DATE,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromBool(VARIANT_BOOL,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromI1(signed char,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromUI2(USHORT,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromUI4(ULONG,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromUI8(ULONG64,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromStr(OLECHAR*,LCID,ULONG,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromCy(CY,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromDec(DECIMAL*,SHORT*);
extern HRESULT __attribute__((__stdcall__)) VarI2FromDisp(IDispatch*,LCID,SHORT*);

extern HRESULT __attribute__((__stdcall__)) VarI4FromUI1(BYTE,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromI2(SHORT,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromI8(LONG64,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromR4(FLOAT,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromR8(DOUBLE,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromDate(DATE,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromBool(VARIANT_BOOL,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromI1(signed char,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromUI2(USHORT,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromUI4(ULONG,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromUI8(ULONG64,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromStr(OLECHAR*,LCID,ULONG,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromCy(CY,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromDec(DECIMAL*,LONG*);
extern HRESULT __attribute__((__stdcall__)) VarI4FromDisp(IDispatch*,LCID,LONG*);

extern HRESULT __attribute__((__stdcall__)) VarI8FromUI1(BYTE,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromI2(SHORT,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromI4(LONG,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromR4(FLOAT,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromR8(DOUBLE,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromDate(DATE,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromStr(OLECHAR*,LCID,ULONG,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromBool(VARIANT_BOOL,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromI1(signed char,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromUI2(USHORT,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromUI4(ULONG,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromUI8(ULONG64,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromDec(DECIMAL *pdecIn,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromInt(INT intIn,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromCy(CY,LONG64*);
extern HRESULT __attribute__((__stdcall__)) VarI8FromDisp(IDispatch*,LCID,LONG64*);

extern HRESULT __attribute__((__stdcall__)) VarR4FromUI1(BYTE,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromI2(SHORT,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromI4(LONG,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromI8(LONG64,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromR8(DOUBLE,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromDate(DATE,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromBool(VARIANT_BOOL,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromI1(signed char,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromUI2(USHORT,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromUI4(ULONG,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromUI8(ULONG64,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromStr(OLECHAR*,LCID,ULONG,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromCy(CY,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromDec(DECIMAL*,FLOAT*);
extern HRESULT __attribute__((__stdcall__)) VarR4FromDisp(IDispatch*,LCID,FLOAT*);

extern HRESULT __attribute__((__stdcall__)) VarR8FromUI1(BYTE,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromI2(SHORT,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromI4(LONG,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromI8(LONG64,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromR4(FLOAT,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDate(DATE,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromBool(VARIANT_BOOL,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromI1(signed char,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromUI2(USHORT,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromUI4(ULONG,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromUI8(ULONG64,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromStr(OLECHAR*,LCID,ULONG,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromCy(CY,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDec(DECIMAL*,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8FromDisp(IDispatch*,LCID,double*);

extern HRESULT __attribute__((__stdcall__)) VarDateFromUI1(BYTE,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromI2(SHORT,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromI4(LONG,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromI8(LONG64,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromR4(FLOAT,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromR8(DOUBLE,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromStr(OLECHAR*,LCID,ULONG,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromI1(signed char,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromUI2(USHORT,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromUI4(ULONG,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromUI8(ULONG64,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromBool(VARIANT_BOOL,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromCy(CY,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromDec(DECIMAL*,DATE*);
extern HRESULT __attribute__((__stdcall__)) VarDateFromDisp(IDispatch*,LCID,DATE*);

extern HRESULT __attribute__((__stdcall__)) VarCyFromUI1(BYTE,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromI2(SHORT sIn,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromI4(LONG,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromI8(LONG64,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromR4(FLOAT,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromR8(DOUBLE,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromDate(DATE,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromStr(OLECHAR*,LCID,ULONG,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromBool(VARIANT_BOOL,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromI1(signed char,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromUI2(USHORT,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromUI4(ULONG,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromUI8(ULONG64,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromDec(DECIMAL*,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromStr(OLECHAR*,LCID,ULONG,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyFromDisp(IDispatch*,LCID,CY*);

extern HRESULT __attribute__((__stdcall__)) VarBstrFromUI1(BYTE,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromI2(SHORT,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromI4(LONG,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromI8(LONG64,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromR4(FLOAT,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromR8(DOUBLE,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromDate(DATE,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromBool(VARIANT_BOOL,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromI1(signed char,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromUI2(USHORT,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromUI8(ULONG64,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromUI4(ULONG,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromCy(CY,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromDec(DECIMAL*,LCID,ULONG,BSTR*);
extern HRESULT __attribute__((__stdcall__)) VarBstrFromDisp(IDispatch*,LCID,ULONG,BSTR*);

extern HRESULT __attribute__((__stdcall__)) VarBoolFromUI1(BYTE,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromI2(SHORT,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromI4(LONG,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromI8(LONG64,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromR4(FLOAT,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromR8(DOUBLE,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromDate(DATE,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromStr(OLECHAR*,LCID,ULONG,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromI1(signed char,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromUI2(USHORT,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromUI4(ULONG,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromUI8(ULONG64,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromCy(CY,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromDec(DECIMAL*,VARIANT_BOOL*);
extern HRESULT __attribute__((__stdcall__)) VarBoolFromDisp(IDispatch*,LCID,VARIANT_BOOL*);

extern HRESULT __attribute__((__stdcall__)) VarI1FromUI1(BYTE,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromI2(SHORT,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromI4(LONG,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromI8(LONG64,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromR4(FLOAT,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromR8(DOUBLE,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromDate(DATE,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromStr(OLECHAR*,LCID,ULONG,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromBool(VARIANT_BOOL,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromUI2(USHORT,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromUI4(ULONG,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromUI8(ULONG64,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromCy(CY,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromDec(DECIMAL*,signed char*);
extern HRESULT __attribute__((__stdcall__)) VarI1FromDisp(IDispatch*,LCID,signed char*);

extern HRESULT __attribute__((__stdcall__)) VarUI2FromUI1(BYTE,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromI2(SHORT,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromI4(LONG,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromI8(LONG64,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromR4(FLOAT,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromR8(DOUBLE,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromDate(DATE,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromStr(OLECHAR*,LCID,ULONG,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromBool(VARIANT_BOOL,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromI1(signed char,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromUI4(ULONG,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromUI8(ULONG64,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromCy(CY,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromDec(DECIMAL*,USHORT*);
extern HRESULT __attribute__((__stdcall__)) VarUI2FromDisp(IDispatch*,LCID,USHORT*);

extern HRESULT __attribute__((__stdcall__)) VarUI4FromStr(OLECHAR*,LCID,ULONG,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromUI1(BYTE,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromI2(SHORT,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromI4(LONG,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromI8(LONG64,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromR4(FLOAT,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromR8(DOUBLE,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromDate(DATE,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromBool(VARIANT_BOOL,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromI1(signed char,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromUI2(USHORT,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromUI8(ULONG64,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromCy(CY,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromDec(DECIMAL*,ULONG*);
extern HRESULT __attribute__((__stdcall__)) VarUI4FromDisp(IDispatch*,LCID,ULONG*);

extern HRESULT __attribute__((__stdcall__)) VarUI8FromUI1(BYTE,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromI2(SHORT,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromI4(LONG,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromI8(LONG64,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromR4(FLOAT,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromR8(DOUBLE,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromDate(DATE,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromStr(OLECHAR*,LCID,ULONG,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromBool(VARIANT_BOOL,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromI1(signed char,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromUI2(USHORT,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromUI4(ULONG,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromDec(DECIMAL*,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromInt(INT,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromCy(CY,ULONG64*);
extern HRESULT __attribute__((__stdcall__)) VarUI8FromDisp(IDispatch*,LCID,ULONG64*);

extern HRESULT __attribute__((__stdcall__)) VarDecFromUI1(BYTE,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromI2(SHORT,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromI4(LONG,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromI8(LONG64,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromR4(FLOAT,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromR8(DOUBLE,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromDate(DATE,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromStr(OLECHAR*,LCID,ULONG,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromBool(VARIANT_BOOL,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromI1(signed char,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromUI2(USHORT,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromUI4(ULONG,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromUI8(ULONG64,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromCy(CY,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFromDisp(IDispatch*,LCID,DECIMAL*);

extern HRESULT __attribute__((__stdcall__)) VarDecNeg(const DECIMAL*,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarR4CmpR8(float,double);
extern HRESULT __attribute__((__stdcall__)) VarR8Pow(double,double,double*);
extern HRESULT __attribute__((__stdcall__)) VarR8Round(double,int,double*);
extern HRESULT __attribute__((__stdcall__)) VarDecAbs(const DECIMAL*,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecAdd(const DECIMAL*,const DECIMAL*,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecCmp(const DECIMAL*,const DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecCmpR8(const DECIMAL*,DOUBLE);
extern HRESULT __attribute__((__stdcall__)) VarDecDiv(const DECIMAL*,const DECIMAL*,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecFix(const DECIMAL*,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecInt(const DECIMAL*,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecMul(const DECIMAL*,const DECIMAL*,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecRound(const DECIMAL*,int,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarDecSub(const DECIMAL*,const DECIMAL*,DECIMAL*);
extern HRESULT __attribute__((__stdcall__)) VarCyAbs(const CY,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyAdd(const CY,const CY,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyCmp(const CY,const CY);
extern HRESULT __attribute__((__stdcall__)) VarCyCmpR8(const CY,DOUBLE);
extern HRESULT __attribute__((__stdcall__)) VarCyFix(const CY,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyInt(const CY,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyMul(const CY,CY,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyMulI4(const CY,LONG,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyMulI8(const CY,LONG64,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyNeg(const CY,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCyRound(const CY,INT,CY*);
extern HRESULT __attribute__((__stdcall__)) VarCySub(const CY,const CY,CY*);
extern HRESULT __attribute__((__stdcall__)) VarAdd(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarAnd(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarCat(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarDiv(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarEqv(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarIdiv(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarImp(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarMod(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarMul(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarOr(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarPow(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarSub(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarXor(LPVARIANT,LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarAbs(LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarFix(LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarInt(LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarNeg(LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarNot(LPVARIANT,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarRound(LPVARIANT,int,LPVARIANT);
extern HRESULT __attribute__((__stdcall__)) VarCmp(LPVARIANT,LPVARIANT,LCID,ULONG);
extern HRESULT __attribute__((__stdcall__)) VarBstrCmp(BSTR,BSTR,LCID,ULONG);
extern HRESULT __attribute__((__stdcall__)) VarBstrCat(BSTR,BSTR,BSTR*);

#pragma pack(pop)
# 12 "c:\\mingw\\include\\ole2.h" 2 3
# 29 "c:\\mingw\\include\\ole2.h" 3
# 1 "c:\\mingw\\include\\oleidl.h" 1 3



       
# 5 "c:\\mingw\\include\\oleidl.h" 3
# 15 "c:\\mingw\\include\\oleidl.h" 3
typedef struct IParseDisplayName *LPPARSEDISPLAYNAME;
typedef struct IOleContainer *LPOLECONTAINER;
typedef struct IOleClientSite *LPOLECLIENTSITE;
typedef struct IOleObject *LPOLEOBJECT;
typedef struct IDropTarget *LPDROPTARGET;
typedef struct IDropSource *LPDROPSOURCE;
typedef struct IEnumOleUndoUnits *LPENUMOLEUNDOUNITS;
typedef struct IEnumOLEVERB *LPENUMOLEVERB;
typedef struct IOleWindow *LPOLEWINDOW;
typedef struct IOleInPlaceUIWindow *LPOLEINPLACEUIWINDOW;
typedef struct IOleInPlaceActiveObject *LPOLEINPLACEACTIVEOBJECT;
typedef struct IOleInPlaceFrame *LPOLEINPLACEFRAME;
typedef struct IOleAdviseHolder *LPOLEADVISEHOLDER;
typedef struct IViewObject *LPVIEWOBJECT;
typedef struct IViewObject2 *LPVIEWOBJECT2;
typedef struct IOleCache *LPOLECACHE;
typedef struct IOleCache2 *LPOLECACHE2;
typedef struct IOleCacheControl *LPOLECACHECONTROL;

typedef enum tagBINDSPEED
{
 BINDSPEED_INDEFINITE=1,
 BINDSPEED_MODERATE,
 BINDSPEED_IMMEDIATE
} BINDSPEED;
typedef enum tagOLEWHICHMK {
 OLEWHICHMK_CONTAINER=1,
 OLEWHICHMK_OBJREL,
 OLEWHICHMK_OBJFULL
} OLEWHICHMK;
typedef enum tagOLEGETMONIKER {
 OLEGETMONIKER_ONLYIFTHERE=1,
 OLEGETMONIKER_FORCEASSIGN,
 OLEGETMONIKER_UNASSIGN,
 OLEGETMONIKER_TEMPFORUSER
} OLEGETMONIKER;
typedef enum tagUSERCLASSTYPE {
 USERCLASSTYPE_FULL=1,
 USERCLASSTYPE_SHORT,
 USERCLASSTYPE_APPNAME
} USERCLASSTYPE;


__extension__

typedef enum tagDROPEFFECT {
 DROPEFFECT_NONE=0,
 DROPEFFECT_COPY=1,
 DROPEFFECT_MOVE=2,
 DROPEFFECT_LINK=4,
 DROPEFFECT_SCROLL=0x80000000
} DROPEFFECT;
typedef struct tagOleMenuGroupWidths {
 LONG width[6];
} OLEMENUGROUPWIDTHS,*LPOLEMENUGROUPWIDTHS;
typedef HGLOBAL HOLEMENU;
typedef enum tagOLECLOSE {
 OLECLOSE_SAVEIFDIRTY,
 OLECLOSE_NOSAVE,
 OLECLOSE_PROMPTSAVE
} OLECLOSE;
typedef struct tagOLEVERB {
 LONG lVerb;
 LPWSTR lpszVerbName;
 DWORD fuFlags;
 DWORD grfAttribs;
} OLEVERB,*LPOLEVERB;
typedef RECT BORDERWIDTHS;
typedef LPRECT LPBORDERWIDTHS;
typedef LPCRECT LPCBORDERWIDTHS;
typedef struct tagOIFI {
 UINT cb;
 BOOL fMDIApp;
 HWND hwndFrame;
 HACCEL haccel;
 UINT cAccelEntries;
}OLEINPLACEFRAMEINFO,*LPOLEINPLACEFRAMEINFO;

typedef struct IEnumOLEVERB { struct IEnumOLEVERBVtbl *lpVtbl; } IEnumOLEVERB; typedef struct IEnumOLEVERBVtbl IEnumOLEVERBVtbl; struct IEnumOLEVERBVtbl { HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IEnumOLEVERB*, const IID* const,PVOID*) ; ULONG(__attribute__((__stdcall__)) *AddRef)(IEnumOLEVERB*) ; ULONG(__attribute__((__stdcall__)) *Release)(IEnumOLEVERB*) ; HRESULT(__attribute__((__stdcall__)) *Next)(IEnumOLEVERB*, ULONG,OLEVERB*,ULONG*) ; HRESULT(__attribute__((__stdcall__)) *Skip)(IEnumOLEVERB*, ULONG) ; HRESULT(__attribute__((__stdcall__)) *Reset)(IEnumOLEVERB*) ; HRESULT(__attribute__((__stdcall__)) *Clone)(IEnumOLEVERB*, IEnumOLEVERB**) ; };
typedef IEnumOLEVERB IEnumOleVerb;

extern const IID IID_IParseDisplayName;

typedef struct IParseDisplayName { struct IParseDisplayNameVtbl *lpVtbl; } IParseDisplayName; typedef struct IParseDisplayNameVtbl IParseDisplayNameVtbl; struct IParseDisplayNameVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IParseDisplayName *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IParseDisplayName *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IParseDisplayName *) ;
 HRESULT(__attribute__((__stdcall__)) *ParseDisplayName)(IParseDisplayName *, IBindCtx*,LPOLESTR,ULONG*,IMoniker**) ;
};
# 114 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleContainer;

typedef struct IOleContainer { struct IOleContainerVtbl *lpVtbl; } IOleContainer; typedef struct IOleContainerVtbl IOleContainerVtbl; struct IOleContainerVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleContainer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleContainer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleContainer *) ;
 HRESULT(__attribute__((__stdcall__)) *ParseDisplayName)(IOleContainer *, IBindCtx*,LPOLESTR,ULONG*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *EnumObjects)(IOleContainer *, DWORD,IEnumUnknown**) ;
 HRESULT(__attribute__((__stdcall__)) *LockContainer)(IOleContainer *, BOOL) ;
};


extern const IID IID_IOleItemContainer;

typedef struct IOleItemContainer { struct IOleItemContainerVtbl *lpVtbl; } IOleItemContainer; typedef struct IOleItemContainerVtbl IOleItemContainerVtbl; struct IOleItemContainerVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleItemContainer *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleItemContainer *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleItemContainer *) ;
 HRESULT(__attribute__((__stdcall__)) *ParseDisplayName)(IOleItemContainer *, IBindCtx*,LPOLESTR,ULONG*,IMoniker**) ;
 HRESULT(__attribute__((__stdcall__)) *EnumObjects)(IOleItemContainer *, DWORD,IEnumUnknown**) ;
 HRESULT(__attribute__((__stdcall__)) *LockContainer)(IOleItemContainer *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetObjectA)(IOleItemContainer *, LPOLESTR,DWORD,IBindCtx*,const IID* const,void**) ;
 HRESULT(__attribute__((__stdcall__)) *GetObjectStorage)(IOleItemContainer *, LPOLESTR,IBindCtx*,const IID* const,void**) ;
 HRESULT(__attribute__((__stdcall__)) *IsRunning)(IOleItemContainer *, LPOLESTR) ;
};
# 155 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleClientSite;

typedef struct IOleClientSite { struct IOleClientSiteVtbl *lpVtbl; } IOleClientSite; typedef struct IOleClientSiteVtbl IOleClientSiteVtbl; struct IOleClientSiteVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleClientSite *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleClientSite *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleClientSite *) ;
 HRESULT(__attribute__((__stdcall__)) *SaveObject)(IOleClientSite *) ;
 HRESULT(__attribute__((__stdcall__)) *GetMoniker)(IOleClientSite *, DWORD,DWORD,LPMONIKER*) ;
 HRESULT(__attribute__((__stdcall__)) *GetContainer)(IOleClientSite *, LPOLECONTAINER*) ;
 HRESULT(__attribute__((__stdcall__)) *ShowObject)(IOleClientSite *) ;
 HRESULT(__attribute__((__stdcall__)) *OnShowWindow)(IOleClientSite *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *RequestNewObjectLayout)(IOleClientSite *) ;
};
# 183 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleObject;

typedef struct IOleObject { struct IOleObjectVtbl *lpVtbl; } IOleObject; typedef struct IOleObjectVtbl IOleObjectVtbl; struct IOleObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleObject *) ;
 HRESULT(__attribute__((__stdcall__)) *SetClientSite)(IOleObject *, LPOLECLIENTSITE) ;
 HRESULT(__attribute__((__stdcall__)) *GetClientSite)(IOleObject *, LPOLECLIENTSITE*) ;
 HRESULT(__attribute__((__stdcall__)) *SetHostNames)(IOleObject *, LPCOLESTR,LPCOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *Close)(IOleObject *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *SetMoniker)(IOleObject *, DWORD,LPMONIKER) ;
 HRESULT(__attribute__((__stdcall__)) *GetMoniker)(IOleObject *, DWORD,DWORD,LPMONIKER*) ;
 HRESULT(__attribute__((__stdcall__)) *InitFromData)(IOleObject *, LPDATAOBJECT,BOOL,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GetClipboardData)(IOleObject *, DWORD,LPDATAOBJECT*) ;
 HRESULT(__attribute__((__stdcall__)) *DoVerb)(IOleObject *, LONG,LPMSG,LPOLECLIENTSITE,LONG,HWND,LPCRECT) ;
 HRESULT(__attribute__((__stdcall__)) *EnumVerbs)(IOleObject *, LPENUMOLEVERB*) ;
 HRESULT(__attribute__((__stdcall__)) *Update)(IOleObject *) ;
 HRESULT(__attribute__((__stdcall__)) *IsUpToDate)(IOleObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetUserClassID)(IOleObject *, LPCLSID) ;
 HRESULT(__attribute__((__stdcall__)) *GetUserType)(IOleObject *, DWORD,LPOLESTR*) ;
 HRESULT(__attribute__((__stdcall__)) *SetExtent)(IOleObject *, DWORD,SIZEL*) ;
 HRESULT(__attribute__((__stdcall__)) *GetExtent)(IOleObject *, DWORD,SIZEL*) ;
 HRESULT(__attribute__((__stdcall__)) *Advise)(IOleObject *, LPADVISESINK,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unadvise)(IOleObject *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumAdvise)(IOleObject *, LPENUMSTATDATA*) ;
 HRESULT(__attribute__((__stdcall__)) *GetMiscStatus)(IOleObject *, DWORD,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *SetColorScheme)(IOleObject *, LPLOGPALETTE) ;
};
# 241 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleWindow;

typedef struct IOleWindow { struct IOleWindowVtbl *lpVtbl; } IOleWindow; typedef struct IOleWindowVtbl IOleWindowVtbl; struct IOleWindowVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleWindow *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleWindow *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleWindow *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleWindow *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleWindow *, BOOL) ;
};
# 261 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleInPlaceUIWindow;

typedef struct IOleInPlaceUIWindow { struct IOleInPlaceUIWindowVtbl *lpVtbl; } IOleInPlaceUIWindow; typedef struct IOleInPlaceUIWindowVtbl IOleInPlaceUIWindowVtbl; struct IOleInPlaceUIWindowVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceUIWindow *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceUIWindow *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceUIWindow *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceUIWindow *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceUIWindow *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetBorder)(IOleInPlaceUIWindow *, LPRECT) ;
 HRESULT(__attribute__((__stdcall__)) *RequestBorderSpace)(IOleInPlaceUIWindow *, LPCBORDERWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetBorderSpace)(IOleInPlaceUIWindow *, LPCBORDERWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetActiveObject)(IOleInPlaceUIWindow *, LPOLEINPLACEACTIVEOBJECT,LPCOLESTR) ;
};


extern const IID IID_IOleInPlaceObject;

typedef struct IOleInPlaceObject { struct IOleInPlaceObjectVtbl *lpVtbl; } IOleInPlaceObject; typedef struct IOleInPlaceObjectVtbl IOleInPlaceObjectVtbl; struct IOleInPlaceObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceObject *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceObject *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *InPlaceDeactivate)(IOleInPlaceObject *) ;
 HRESULT(__attribute__((__stdcall__)) *UIDeactivate)(IOleInPlaceObject *) ;
 HRESULT(__attribute__((__stdcall__)) *SetObjectRects)(IOleInPlaceObject *, LPCRECT,LPCRECT) ;
 HRESULT(__attribute__((__stdcall__)) *ReactivateAndUndo)(IOleInPlaceObject *) ;
};


extern const IID IID_IOleInPlaceActiveObject;

typedef struct IOleInPlaceActiveObject { struct IOleInPlaceActiveObjectVtbl *lpVtbl; } IOleInPlaceActiveObject; typedef struct IOleInPlaceActiveObjectVtbl IOleInPlaceActiveObjectVtbl; struct IOleInPlaceActiveObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceActiveObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceActiveObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceActiveObject *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceActiveObject *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceActiveObject *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *TranslateAcceleratorA)(IOleInPlaceActiveObject *, LPMSG) ;
 HRESULT(__attribute__((__stdcall__)) *OnFrameWindowActivate)(IOleInPlaceActiveObject *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *OnDocWindowActivate)(IOleInPlaceActiveObject *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *ResizeBorder)(IOleInPlaceActiveObject *, LPCRECT,LPOLEINPLACEUIWINDOW,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *EnableModeless)(IOleInPlaceActiveObject *, BOOL) ;
};


extern const IID IID_IOleInPlaceFrame;

typedef struct IOleInPlaceFrame { struct IOleInPlaceFrameVtbl *lpVtbl; } IOleInPlaceFrame; typedef struct IOleInPlaceFrameVtbl IOleInPlaceFrameVtbl; struct IOleInPlaceFrameVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceFrame *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceFrame *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceFrame *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceFrame *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceFrame *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *GetBorder)(IOleInPlaceFrame *, LPRECT) ;
 HRESULT(__attribute__((__stdcall__)) *RequestBorderSpace)(IOleInPlaceFrame *, LPCBORDERWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetBorderSpace)(IOleInPlaceFrame *, LPCBORDERWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetActiveObject)(IOleInPlaceFrame *, LPOLEINPLACEACTIVEOBJECT,LPCOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *InsertMenus)(IOleInPlaceFrame *, HMENU,LPOLEMENUGROUPWIDTHS) ;
 HRESULT(__attribute__((__stdcall__)) *SetMenu)(IOleInPlaceFrame *, HMENU,HOLEMENU,HWND) ;
 HRESULT(__attribute__((__stdcall__)) *RemoveMenus)(IOleInPlaceFrame *, HMENU) ;
 HRESULT(__attribute__((__stdcall__)) *SetStatusText)(IOleInPlaceFrame *, LPCOLESTR) ;
 HRESULT(__attribute__((__stdcall__)) *EnableModeless)(IOleInPlaceFrame *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *TranslateAcceleratorA)(IOleInPlaceFrame *, LPMSG,WORD) ;
};
# 350 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleInPlaceSite;

typedef struct IOleInPlaceSite { struct IOleInPlaceSiteVtbl *lpVtbl; } IOleInPlaceSite; typedef struct IOleInPlaceSiteVtbl IOleInPlaceSiteVtbl; struct IOleInPlaceSiteVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleInPlaceSite *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleInPlaceSite *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindow)(IOleInPlaceSite *, HWND*) ;
 HRESULT(__attribute__((__stdcall__)) *ContextSensitiveHelp)(IOleInPlaceSite *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *CanInPlaceActivate)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *OnInPlaceActivate)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *OnUIActivate)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *GetWindowContext)(IOleInPlaceSite *, IOleInPlaceFrame**,IOleInPlaceUIWindow**,LPRECT,LPRECT,LPOLEINPLACEFRAMEINFO) ;
 HRESULT(__attribute__((__stdcall__)) *Scroll)(IOleInPlaceSite *, SIZE) ;
 HRESULT(__attribute__((__stdcall__)) *OnUIDeactivate)(IOleInPlaceSite *, BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *OnInPlaceDeactivate)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *DiscardUndoState)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *DeactivateAndUndo)(IOleInPlaceSite *) ;
 HRESULT(__attribute__((__stdcall__)) *OnPosRectChange)(IOleInPlaceSite *, LPCRECT) ;
};


extern const IID IID_IOleAdviseHolder;

typedef struct IOleAdviseHolder { struct IOleAdviseHolderVtbl *lpVtbl; } IOleAdviseHolder; typedef struct IOleAdviseHolderVtbl IOleAdviseHolderVtbl; struct IOleAdviseHolderVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleAdviseHolder *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleAdviseHolder *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleAdviseHolder *) ;
 HRESULT(__attribute__((__stdcall__)) *Advise)(IOleAdviseHolder *, LPADVISESINK,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unadvise)(IOleAdviseHolder *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumAdvise)(IOleAdviseHolder *, LPENUMSTATDATA*) ;
 HRESULT(__attribute__((__stdcall__)) *SendOnRename)(IOleAdviseHolder *, LPMONIKER) ;
 HRESULT(__attribute__((__stdcall__)) *SendOnSave)(IOleAdviseHolder *) ;
 HRESULT(__attribute__((__stdcall__)) *SendOnClose)(IOleAdviseHolder *) ;
};
# 400 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IDropSource;

typedef struct IDropSource { struct IDropSourceVtbl *lpVtbl; } IDropSource; typedef struct IDropSourceVtbl IDropSourceVtbl; struct IDropSourceVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDropSource *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDropSource *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDropSource *) ;
 HRESULT(__attribute__((__stdcall__)) *QueryContinueDrag)(IDropSource *, BOOL,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GiveFeedback)(IDropSource *, DWORD) ;
};
# 420 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IDropTarget;

typedef struct IDropTarget { struct IDropTargetVtbl *lpVtbl; } IDropTarget; typedef struct IDropTargetVtbl IDropTargetVtbl; struct IDropTargetVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IDropTarget *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IDropTarget *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IDropTarget *) ;
 HRESULT(__attribute__((__stdcall__)) *DragEnter)(IDropTarget *, LPDATAOBJECT,DWORD,POINTL,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *DragOver)(IDropTarget *, DWORD,POINTL,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *DragLeave)(IDropTarget *) ;
 HRESULT(__attribute__((__stdcall__)) *Drop)(IDropTarget *, LPDATAOBJECT,DWORD,POINTL,PDWORD) ;
};
# 444 "c:\\mingw\\include\\oleidl.h" 3
typedef BOOL(__attribute__((__stdcall__)) *__IView_pfncont)(DWORD);
extern const IID IID_IViewObject;

typedef struct IViewObject { struct IViewObjectVtbl *lpVtbl; } IViewObject; typedef struct IViewObjectVtbl IViewObjectVtbl; struct IViewObjectVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IViewObject *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IViewObject *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IViewObject *) ;
 HRESULT(__attribute__((__stdcall__)) *Draw)(IViewObject *, DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,HDC,LPCRECTL,LPCRECTL,__IView_pfncont pfnContinue,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GetColorSet)(IViewObject *, DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,LPLOGPALETTE*) ;
 HRESULT(__attribute__((__stdcall__)) *Freeze)(IViewObject *, DWORD,LONG,PVOID,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unfreeze)(IViewObject *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *SetAdvise)(IViewObject *, DWORD,DWORD,IAdviseSink*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAdvise)(IViewObject *, PDWORD,PDWORD,IAdviseSink**) ;
};
# 473 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IViewObject2;

typedef struct IViewObject2 { struct IViewObject2Vtbl *lpVtbl; } IViewObject2; typedef struct IViewObject2Vtbl IViewObject2Vtbl; struct IViewObject2Vtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IViewObject2 *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IViewObject2 *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IViewObject2 *) ;
 HRESULT(__attribute__((__stdcall__)) *Draw)(IViewObject2 *, DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,HDC,LPCRECTL,LPCRECTL,__IView_pfncont pfnContinue,DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *GetColorSet)(IViewObject2 *, DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,LPLOGPALETTE*) ;
 HRESULT(__attribute__((__stdcall__)) *Freeze)(IViewObject2 *, DWORD,LONG,PVOID,PDWORD) ;
 HRESULT(__attribute__((__stdcall__)) *Unfreeze)(IViewObject2 *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *SetAdvise)(IViewObject2 *, DWORD,DWORD,IAdviseSink*) ;
 HRESULT(__attribute__((__stdcall__)) *GetAdvise)(IViewObject2 *, PDWORD,PDWORD,IAdviseSink**) ;
 HRESULT(__attribute__((__stdcall__)) *GetExtent)(IViewObject2 *, DWORD,LONG,DVTARGETDEVICE*,LPSIZEL) ;
};
# 503 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleCache;

typedef struct IOleCache { struct IOleCacheVtbl *lpVtbl; } IOleCache; typedef struct IOleCacheVtbl IOleCacheVtbl; struct IOleCacheVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleCache *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleCache *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleCache *) ;
 HRESULT(__attribute__((__stdcall__)) *Cache)(IOleCache *, FORMATETC*,DWORD,DWORD*) ;
 HRESULT(__attribute__((__stdcall__)) *Uncache)(IOleCache *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumCache)(IOleCache *, IEnumSTATDATA**);
 HRESULT(__attribute__((__stdcall__)) *InitCache)(IOleCache *, LPDATAOBJECT);
 HRESULT(__attribute__((__stdcall__)) *SetData)(IOleCache *, FORMATETC*,STGMEDIUM*,BOOL);
};
# 529 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleCache2;

typedef struct IOleCache2 { struct IOleCache2Vtbl *lpVtbl; } IOleCache2; typedef struct IOleCache2Vtbl IOleCache2Vtbl; struct IOleCache2Vtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleCache2 *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleCache2 *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleCache2 *) ;
 HRESULT(__attribute__((__stdcall__)) *Cache)(IOleCache2 *, FORMATETC*,DWORD,DWORD*) ;
 HRESULT(__attribute__((__stdcall__)) *Uncache)(IOleCache2 *, DWORD) ;
 HRESULT(__attribute__((__stdcall__)) *EnumCache)(IOleCache2 *, IEnumSTATDATA**) ;
 HRESULT(__attribute__((__stdcall__)) *InitCache)(IOleCache2 *, LPDATAOBJECT) ;
 HRESULT(__attribute__((__stdcall__)) *SetData)(IOleCache2 *, FORMATETC*,STGMEDIUM*,BOOL) ;
 HRESULT(__attribute__((__stdcall__)) *UpdateCache)(IOleCache2 *, LPDATAOBJECT,DWORD,LPVOID) ;
 HRESULT(__attribute__((__stdcall__)) *DiscardCache)(IOleCache2 *, DWORD) ;
};
# 559 "c:\\mingw\\include\\oleidl.h" 3
extern const IID IID_IOleCacheControl;

typedef struct IOleCacheControl { struct IOleCacheControlVtbl *lpVtbl; } IOleCacheControl; typedef struct IOleCacheControlVtbl IOleCacheControlVtbl; struct IOleCacheControlVtbl
{
 HRESULT(__attribute__((__stdcall__)) *QueryInterface)(IOleCacheControl *, const IID* const,PVOID*) ;
 ULONG(__attribute__((__stdcall__)) *AddRef)(IOleCacheControl *) ;
 ULONG(__attribute__((__stdcall__)) *Release)(IOleCacheControl *) ;
 HRESULT(__attribute__((__stdcall__)) *OnRun)(IOleCacheControl *, LPDATAOBJECT) ;
 HRESULT(__attribute__((__stdcall__)) *OnStop)(IOleCacheControl *) ;
};
# 30 "c:\\mingw\\include\\ole2.h" 2 3

typedef struct _OLESTREAMVTBL *LPOLESTREAMVTBL;
typedef struct _OLESTREAM {
 LPOLESTREAMVTBL lpstbl;
} OLESTREAM,*LPOLESTREAM;
typedef struct _OLESTREAMVTBL {
 DWORD (__attribute__((__stdcall__))* Get)(LPOLESTREAM,void*,DWORD);
 DWORD (__attribute__((__stdcall__))* Put)(LPOLESTREAM,const void*,DWORD);
} OLESTREAMVTBL;

extern HRESULT __attribute__((__stdcall__)) CreateDataAdviseHolder(LPDATAADVISEHOLDER*);
extern DWORD __attribute__((__stdcall__)) OleBuildVersion(void);
extern HRESULT __attribute__((__stdcall__)) ReadClassStg(LPSTORAGE,CLSID*);
extern HRESULT __attribute__((__stdcall__)) WriteClassStg(LPSTORAGE,const CLSID* const);
extern HRESULT __attribute__((__stdcall__)) ReadClassStm(LPSTREAM,CLSID*);
extern HRESULT __attribute__((__stdcall__)) WriteClassStm(LPSTREAM,const CLSID* const);
extern HRESULT __attribute__((__stdcall__)) WriteFmtUserTypeStg(LPSTORAGE,CLIPFORMAT,LPOLESTR);
extern HRESULT __attribute__((__stdcall__)) ReadFmtUserTypeStg(LPSTORAGE,CLIPFORMAT*,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) OleInitialize(PVOID);
extern void __attribute__((__stdcall__)) OleUninitialize(void);
extern HRESULT __attribute__((__stdcall__)) OleQueryLinkFromData(LPDATAOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleQueryCreateFromData(LPDATAOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleCreate(const CLSID* const,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateFromData(LPDATAOBJECT,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateLinkFromData(LPDATAOBJECT,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateStaticFromData(LPDATAOBJECT,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateLink(LPMONIKER,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateLinkToFile(LPCOLESTR,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateFromFile(const CLSID* const,LPCOLESTR,const IID* const,DWORD,LPFORMATETC,LPOLECLIENTSITE,LPSTORAGE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleLoad(LPSTORAGE,const IID* const,LPOLECLIENTSITE,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleSave(LPPERSISTSTORAGE,LPSTORAGE,BOOL);
extern HRESULT __attribute__((__stdcall__)) OleLoadFromStream(LPSTREAM,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleSaveToStream(LPPERSISTSTREAM,LPSTREAM);
extern HRESULT __attribute__((__stdcall__)) OleSetContainedObject(LPUNKNOWN,BOOL);
extern HRESULT __attribute__((__stdcall__)) OleNoteObjectVisible(LPUNKNOWN,BOOL);
extern HRESULT __attribute__((__stdcall__)) RegisterDragDrop(HWND,LPDROPTARGET);
extern HRESULT __attribute__((__stdcall__)) RevokeDragDrop(HWND);
extern HRESULT __attribute__((__stdcall__)) DoDragDrop(LPDATAOBJECT,LPDROPSOURCE,DWORD,PDWORD);
extern HRESULT __attribute__((__stdcall__)) OleSetClipboard(LPDATAOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleGetClipboard(LPDATAOBJECT*);
extern HRESULT __attribute__((__stdcall__)) OleFlushClipboard(void);
extern HRESULT __attribute__((__stdcall__)) OleIsCurrentClipboard(LPDATAOBJECT);
extern HOLEMENU __attribute__((__stdcall__)) OleCreateMenuDescriptor(HMENU,LPOLEMENUGROUPWIDTHS);
extern HRESULT __attribute__((__stdcall__)) OleSetMenuDescriptor(HOLEMENU,HWND,HWND,LPOLEINPLACEFRAME,LPOLEINPLACEACTIVEOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleDestroyMenuDescriptor(HOLEMENU);
extern HRESULT __attribute__((__stdcall__)) OleTranslateAccelerator(LPOLEINPLACEFRAME,LPOLEINPLACEFRAMEINFO,LPMSG);
extern HANDLE __attribute__((__stdcall__)) OleDuplicateData(HANDLE,CLIPFORMAT,UINT);
extern HRESULT __attribute__((__stdcall__)) OleDraw(LPUNKNOWN,DWORD,HDC,LPCRECT);
extern HRESULT __attribute__((__stdcall__)) OleRun(LPUNKNOWN);
extern BOOL __attribute__((__stdcall__)) OleIsRunning(LPOLEOBJECT);
extern HRESULT __attribute__((__stdcall__)) OleLockRunning(LPUNKNOWN,BOOL,BOOL);
extern void __attribute__((__stdcall__)) ReleaseStgMedium(LPSTGMEDIUM);
extern HRESULT __attribute__((__stdcall__)) CreateOleAdviseHolder(LPOLEADVISEHOLDER*);
extern HRESULT __attribute__((__stdcall__)) OleCreateDefaultHandler(const CLSID* const,LPUNKNOWN,const IID* const,PVOID*);
extern HRESULT __attribute__((__stdcall__)) OleCreateEmbeddingHelper(const CLSID* const,LPUNKNOWN,DWORD,LPCLASSFACTORY,const IID* const,PVOID*);
extern BOOL __attribute__((__stdcall__)) IsAccelerator(HACCEL,int,LPMSG,WORD*);
extern HGLOBAL __attribute__((__stdcall__)) OleGetIconOfFile(LPOLESTR,BOOL);
extern HGLOBAL __attribute__((__stdcall__)) OleGetIconOfClass(const CLSID* const,LPOLESTR,BOOL);
extern HGLOBAL __attribute__((__stdcall__)) OleMetafilePictFromIconAndLabel(HICON,LPOLESTR,LPOLESTR,UINT);
extern HRESULT __attribute__((__stdcall__)) OleRegGetUserType(const CLSID* const,DWORD,LPOLESTR*);
extern HRESULT __attribute__((__stdcall__)) OleRegGetMiscStatus(const CLSID* const,DWORD,DWORD*);
extern HRESULT __attribute__((__stdcall__)) OleRegEnumFormatEtc (const CLSID* const,DWORD,LPENUMFORMATETC*);
extern HRESULT __attribute__((__stdcall__)) OleRegEnumVerbs (const CLSID* const,LPENUMOLEVERB*);
extern HRESULT __attribute__((__stdcall__)) OleConvertOLESTREAMToIStorage(LPOLESTREAM,LPSTORAGE,const DVTARGETDEVICE*);
extern HRESULT __attribute__((__stdcall__)) OleConvertIStorageToOLESTREAM(LPSTORAGE,LPOLESTREAM);
extern HRESULT __attribute__((__stdcall__)) GetHGlobalFromILockBytes(LPLOCKBYTES,HGLOBAL*);
extern HRESULT __attribute__((__stdcall__)) CreateILockBytesOnHGlobal(HGLOBAL,BOOL,LPLOCKBYTES*);
extern HRESULT __attribute__((__stdcall__)) GetHGlobalFromStream(LPSTREAM,HGLOBAL*);
extern HRESULT __attribute__((__stdcall__)) CreateStreamOnHGlobal(HGLOBAL,BOOL,LPSTREAM*);
extern HRESULT __attribute__((__stdcall__)) OleDoAutoConvert(LPSTORAGE,LPCLSID);
extern HRESULT __attribute__((__stdcall__)) OleGetAutoConvert(const CLSID* const,LPCLSID);
extern HRESULT __attribute__((__stdcall__)) OleSetAutoConvert(const CLSID* const,const CLSID* const);
extern HRESULT __attribute__((__stdcall__)) GetConvertStg(LPSTORAGE);
extern HRESULT __attribute__((__stdcall__)) SetConvertStg(LPSTORAGE,BOOL);
extern HRESULT __attribute__((__stdcall__)) OleConvertIStorageToOLESTREAMEx(LPSTORAGE,CLIPFORMAT,LONG,LONG,DWORD,LPSTGMEDIUM,LPOLESTREAM);
extern HRESULT __attribute__((__stdcall__)) OleConvertOLESTREAMToIStorageEx(LPOLESTREAM,LPSTORAGE,CLIPFORMAT*,LONG*,LONG*,DWORD*,LPSTGMEDIUM);



#pragma pack(pop)
# 101 "c:\\mingw\\include\\windows.h" 2 3
# 168 "src/./engine/utils/utils.h" 2
# 1 "c:\\mingw\\include\\psapi.h" 1 3
# 20 "c:\\mingw\\include\\psapi.h" 3
       
# 21 "c:\\mingw\\include\\psapi.h" 3
# 29 "c:\\mingw\\include\\psapi.h" 3
typedef struct _MODULEINFO {
 LPVOID lpBaseOfDll;
 DWORD SizeOfImage;
 LPVOID EntryPoint;
} MODULEINFO,*LPMODULEINFO;

typedef struct _PSAPI_WS_WATCH_INFORMATION {
 LPVOID FaultingPc;
 LPVOID FaultingVa;
} PSAPI_WS_WATCH_INFORMATION,*PPSAPI_WS_WATCH_INFORMATION;

typedef struct _PROCESS_MEMORY_COUNTERS {
 DWORD cb;
 DWORD PageFaultCount;
 DWORD PeakWorkingSetSize;
 DWORD WorkingSetSize;
 DWORD QuotaPeakPagedPoolUsage;
 DWORD QuotaPagedPoolUsage;
 DWORD QuotaPeakNonPagedPoolUsage;
 DWORD QuotaNonPagedPoolUsage;
 DWORD PagefileUsage;
 DWORD PeakPagefileUsage;
} PROCESS_MEMORY_COUNTERS,*PPROCESS_MEMORY_COUNTERS;

typedef struct _PROCESS_MEMORY_COUNTERS_EX {
 DWORD cb;
 DWORD PageFaultCount;
 DWORD PeakWorkingSetSize;
 DWORD WorkingSetSize;
 DWORD QuotaPeakPagedPoolUsage;
 DWORD QuotaPagedPoolUsage;
 DWORD QuotaPeakNonPagedPoolUsage;
 DWORD QuotaNonPagedPoolUsage;
 DWORD PagefileUsage;
 DWORD PeakPagefileUsage;
 DWORD PrivateUsage;
} PROCESS_MEMORY_COUNTERS_EX,*PPROCESS_MEMORY_COUNTERS_EX;

typedef struct _PERFORMANCE_INFORMATION {
  DWORD cb;
  DWORD CommitTotal;
  DWORD CommitLimit;
  DWORD CommitPeak;
  DWORD PhysicalTotal;
  DWORD PhysicalAvailable;
  DWORD SystemCache;
  DWORD KernelTotal;
  DWORD KernelPaged;
  DWORD KernelNonpaged;
  DWORD PageSize;
  DWORD HandleCount;
  DWORD ProcessCount;
  DWORD ThreadCount;
} PERFORMANCE_INFORMATION, *PPERFORMANCE_INFORMATION;

typedef union _PSAPI_WORKING_SET_BLOCK {
  ULONG_PTR Flags;
  struct {
    ULONG_PTR Protection :5;
    ULONG_PTR ShareCount :3;
    ULONG_PTR Shared :1;
    ULONG_PTR Reserved :3;
    ULONG_PTR VirtualPage :20;
  } ;
} PSAPI_WORKING_SET_BLOCK, *PPSAPI_WORKING_SET_BLOCK;

typedef struct _PSAPI_WORKING_SET_INFORMATION {
  ULONG_PTR NumberOfEntries;
  PSAPI_WORKING_SET_BLOCK WorkingSetInfo[1];
} PSAPI_WORKING_SET_INFORMATION, *PPSAPI_WORKING_SET_INFORMATION;


BOOL __attribute__((__stdcall__)) EnumProcesses(DWORD *,DWORD,DWORD *);
BOOL __attribute__((__stdcall__)) EnumProcessModules(HANDLE,HMODULE *,DWORD,LPDWORD);
DWORD __attribute__((__stdcall__)) GetModuleBaseNameA(HANDLE,HMODULE,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetModuleBaseNameW(HANDLE,HMODULE,LPWSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetModuleFileNameExA(HANDLE,HMODULE,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetModuleFileNameExW(HANDLE,HMODULE,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) GetModuleInformation(HANDLE,HMODULE,LPMODULEINFO,DWORD);
BOOL __attribute__((__stdcall__)) EmptyWorkingSet(HANDLE);
BOOL __attribute__((__stdcall__)) QueryWorkingSet(HANDLE,PVOID,DWORD);
BOOL __attribute__((__stdcall__)) InitializeProcessForWsWatch(HANDLE);
BOOL __attribute__((__stdcall__)) GetWsChanges(HANDLE,PPSAPI_WS_WATCH_INFORMATION,DWORD);
DWORD __attribute__((__stdcall__)) GetMappedFileNameW(HANDLE,LPVOID,LPWSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetMappedFileNameA(HANDLE,LPVOID,LPSTR,DWORD);
BOOL __attribute__((__stdcall__)) EnumDeviceDrivers(LPVOID *,DWORD,LPDWORD);
DWORD __attribute__((__stdcall__)) GetDeviceDriverBaseNameA(LPVOID,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetDeviceDriverBaseNameW(LPVOID,LPWSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetDeviceDriverFileNameA(LPVOID,LPSTR,DWORD);
DWORD __attribute__((__stdcall__)) GetDeviceDriverFileNameW(LPVOID,LPWSTR,DWORD);
BOOL __attribute__((__stdcall__)) GetProcessMemoryInfo(HANDLE,PPROCESS_MEMORY_COUNTERS,DWORD);
BOOL __attribute__((__stdcall__)) GetPerformanceInfo(PPERFORMANCE_INFORMATION,DWORD);
# 169 "src/./engine/utils/utils.h" 2
    
# 169 "src/./engine/utils/utils.h"
   typedef struct {
        LARGE_INTEGER frequency;
        LARGE_INTEGER t1, t2;
    } uprof_timer_t;
# 183 "src/./engine/utils/utils.h"
typedef struct {
    uprof_timer_t timer;
    i64 mb_mem_used;
    f64 ms_elapsed;
} uprof_t;


i32 get_mem_used();
void uprof_start(uprof_t * profiler);
void uprof_end(uprof_t * profiler);
# 388 "src/./engine/utils/utils.h"
u64 uhash_bytes(void * ptr, u64 size);
# 487 "src/./engine/utils/utils.h"
typedef struct _uvec_u08_t { u08 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_u08_t; void uvec_u08_mk(uvec_u08_t * v, u64 sz); void uvec_u08_incr(uvec_u08_t * v); u64 uvec_u08_add(uvec_u08_t * v, u08 i); u64 uvec_u08_add_at(uvec_u08_t * v, u64 idx, u08 i); u08 uvec_u08_rm_at(uvec_u08_t * v, u64 idx); void uvec_u08_rm(uvec_u08_t * v);; typedef struct _uvec_u16_t { u16 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_u16_t; void uvec_u16_mk(uvec_u16_t * v, u64 sz); void uvec_u16_incr(uvec_u16_t * v); u64 uvec_u16_add(uvec_u16_t * v, u16 i); u64 uvec_u16_add_at(uvec_u16_t * v, u64 idx, u16 i); u08 uvec_u16_rm_at(uvec_u16_t * v, u64 idx); void uvec_u16_rm(uvec_u16_t * v);; typedef struct _uvec_u32_t { u32 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_u32_t; void uvec_u32_mk(uvec_u32_t * v, u64 sz); void uvec_u32_incr(uvec_u32_t * v); u64 uvec_u32_add(uvec_u32_t * v, u32 i); u64 uvec_u32_add_at(uvec_u32_t * v, u64 idx, u32 i); u08 uvec_u32_rm_at(uvec_u32_t * v, u64 idx); void uvec_u32_rm(uvec_u32_t * v);; typedef struct _uvec_u64_t { u64 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_u64_t; void uvec_u64_mk(uvec_u64_t * v, u64 sz); void uvec_u64_incr(uvec_u64_t * v); u64 uvec_u64_add(uvec_u64_t * v, u64 i); u64 uvec_u64_add_at(uvec_u64_t * v, u64 idx, u64 i); u08 uvec_u64_rm_at(uvec_u64_t * v, u64 idx); void uvec_u64_rm(uvec_u64_t * v);;
typedef struct _uvec_i08_t { i08 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_i08_t; void uvec_i08_mk(uvec_i08_t * v, u64 sz); void uvec_i08_incr(uvec_i08_t * v); u64 uvec_i08_add(uvec_i08_t * v, i08 i); u64 uvec_i08_add_at(uvec_i08_t * v, u64 idx, i08 i); u08 uvec_i08_rm_at(uvec_i08_t * v, u64 idx); void uvec_i08_rm(uvec_i08_t * v);; typedef struct _uvec_i16_t { i16 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_i16_t; void uvec_i16_mk(uvec_i16_t * v, u64 sz); void uvec_i16_incr(uvec_i16_t * v); u64 uvec_i16_add(uvec_i16_t * v, i16 i); u64 uvec_i16_add_at(uvec_i16_t * v, u64 idx, i16 i); u08 uvec_i16_rm_at(uvec_i16_t * v, u64 idx); void uvec_i16_rm(uvec_i16_t * v);; typedef struct _uvec_i32_t { i32 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_i32_t; void uvec_i32_mk(uvec_i32_t * v, u64 sz); void uvec_i32_incr(uvec_i32_t * v); u64 uvec_i32_add(uvec_i32_t * v, i32 i); u64 uvec_i32_add_at(uvec_i32_t * v, u64 idx, i32 i); u08 uvec_i32_rm_at(uvec_i32_t * v, u64 idx); void uvec_i32_rm(uvec_i32_t * v);; typedef struct _uvec_i64_t { i64 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_i64_t; void uvec_i64_mk(uvec_i64_t * v, u64 sz); void uvec_i64_incr(uvec_i64_t * v); u64 uvec_i64_add(uvec_i64_t * v, i64 i); u64 uvec_i64_add_at(uvec_i64_t * v, u64 idx, i64 i); u08 uvec_i64_rm_at(uvec_i64_t * v, u64 idx); void uvec_i64_rm(uvec_i64_t * v);;
typedef struct _uvec_f32_t { f32 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_f32_t; void uvec_f32_mk(uvec_f32_t * v, u64 sz); void uvec_f32_incr(uvec_f32_t * v); u64 uvec_f32_add(uvec_f32_t * v, f32 i); u64 uvec_f32_add_at(uvec_f32_t * v, u64 idx, f32 i); u08 uvec_f32_rm_at(uvec_f32_t * v, u64 idx); void uvec_f32_rm(uvec_f32_t * v);; typedef struct _uvec_f64_t { f64 * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_f64_t; void uvec_f64_mk(uvec_f64_t * v, u64 sz); void uvec_f64_incr(uvec_f64_t * v); u64 uvec_f64_add(uvec_f64_t * v, f64 i); u64 uvec_f64_add_at(uvec_f64_t * v, u64 idx, f64 i); u08 uvec_f64_rm_at(uvec_f64_t * v, u64 idx); void uvec_f64_rm(uvec_f64_t * v);;
typedef struct _uvec_u08_arr_t { u08 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_u08_arr_t; void uvec_u08_arr_mk(uvec_u08_arr_t * v, u64 sz); void uvec_u08_arr_incr(uvec_u08_arr_t * v); u64 uvec_u08_arr_add(uvec_u08_arr_t * v, u08 * i); u64 uvec_u08_arr_add_at(uvec_u08_arr_t * v, u64 idx, u08 * i); u08 uvec_u08_arr_rm_at(uvec_u08_arr_t * v, u64 idx); void uvec_u08_arr_rm(uvec_u08_arr_t * v);; typedef struct _uvec_u16_arr_t { u16 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_u16_arr_t; void uvec_u16_arr_mk(uvec_u16_arr_t * v, u64 sz); void uvec_u16_arr_incr(uvec_u16_arr_t * v); u64 uvec_u16_arr_add(uvec_u16_arr_t * v, u16 * i); u64 uvec_u16_arr_add_at(uvec_u16_arr_t * v, u64 idx, u16 * i); u08 uvec_u16_arr_rm_at(uvec_u16_arr_t * v, u64 idx); void uvec_u16_arr_rm(uvec_u16_arr_t * v);; typedef struct _uvec_u32_arr_t { u32 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_u32_arr_t; void uvec_u32_arr_mk(uvec_u32_arr_t * v, u64 sz); void uvec_u32_arr_incr(uvec_u32_arr_t * v); u64 uvec_u32_arr_add(uvec_u32_arr_t * v, u32 * i); u64 uvec_u32_arr_add_at(uvec_u32_arr_t * v, u64 idx, u32 * i); u08 uvec_u32_arr_rm_at(uvec_u32_arr_t * v, u64 idx); void uvec_u32_arr_rm(uvec_u32_arr_t * v);; typedef struct _uvec_u64_arr_t { u64 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_u64_arr_t; void uvec_u64_arr_mk(uvec_u64_arr_t * v, u64 sz); void uvec_u64_arr_incr(uvec_u64_arr_t * v); u64 uvec_u64_arr_add(uvec_u64_arr_t * v, u64 * i); u64 uvec_u64_arr_add_at(uvec_u64_arr_t * v, u64 idx, u64 * i); u08 uvec_u64_arr_rm_at(uvec_u64_arr_t * v, u64 idx); void uvec_u64_arr_rm(uvec_u64_arr_t * v);;
typedef struct _uvec_i08_arr_t { i08 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_i08_arr_t; void uvec_i08_arr_mk(uvec_i08_arr_t * v, u64 sz); void uvec_i08_arr_incr(uvec_i08_arr_t * v); u64 uvec_i08_arr_add(uvec_i08_arr_t * v, i08 * i); u64 uvec_i08_arr_add_at(uvec_i08_arr_t * v, u64 idx, i08 * i); u08 uvec_i08_arr_rm_at(uvec_i08_arr_t * v, u64 idx); void uvec_i08_arr_rm(uvec_i08_arr_t * v);; typedef struct _uvec_i16_arr_t { i16 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_i16_arr_t; void uvec_i16_arr_mk(uvec_i16_arr_t * v, u64 sz); void uvec_i16_arr_incr(uvec_i16_arr_t * v); u64 uvec_i16_arr_add(uvec_i16_arr_t * v, i16 * i); u64 uvec_i16_arr_add_at(uvec_i16_arr_t * v, u64 idx, i16 * i); u08 uvec_i16_arr_rm_at(uvec_i16_arr_t * v, u64 idx); void uvec_i16_arr_rm(uvec_i16_arr_t * v);; typedef struct _uvec_i32_arr_t { i32 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_i32_arr_t; void uvec_i32_arr_mk(uvec_i32_arr_t * v, u64 sz); void uvec_i32_arr_incr(uvec_i32_arr_t * v); u64 uvec_i32_arr_add(uvec_i32_arr_t * v, i32 * i); u64 uvec_i32_arr_add_at(uvec_i32_arr_t * v, u64 idx, i32 * i); u08 uvec_i32_arr_rm_at(uvec_i32_arr_t * v, u64 idx); void uvec_i32_arr_rm(uvec_i32_arr_t * v);; typedef struct _uvec_i64_arr_t { i64 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_i64_arr_t; void uvec_i64_arr_mk(uvec_i64_arr_t * v, u64 sz); void uvec_i64_arr_incr(uvec_i64_arr_t * v); u64 uvec_i64_arr_add(uvec_i64_arr_t * v, i64 * i); u64 uvec_i64_arr_add_at(uvec_i64_arr_t * v, u64 idx, i64 * i); u08 uvec_i64_arr_rm_at(uvec_i64_arr_t * v, u64 idx); void uvec_i64_arr_rm(uvec_i64_arr_t * v);;
typedef struct _uvec_f32_arr_t { f32 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_f32_arr_t; void uvec_f32_arr_mk(uvec_f32_arr_t * v, u64 sz); void uvec_f32_arr_incr(uvec_f32_arr_t * v); u64 uvec_f32_arr_add(uvec_f32_arr_t * v, f32 * i); u64 uvec_f32_arr_add_at(uvec_f32_arr_t * v, u64 idx, f32 * i); u08 uvec_f32_arr_rm_at(uvec_f32_arr_t * v, u64 idx); void uvec_f32_arr_rm(uvec_f32_arr_t * v);; typedef struct _uvec_f64_arr_t { f64 * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_f64_arr_t; void uvec_f64_arr_mk(uvec_f64_arr_t * v, u64 sz); void uvec_f64_arr_incr(uvec_f64_arr_t * v); u64 uvec_f64_arr_add(uvec_f64_arr_t * v, f64 * i); u64 uvec_f64_arr_add_at(uvec_f64_arr_t * v, u64 idx, f64 * i); u08 uvec_f64_arr_rm_at(uvec_f64_arr_t * v, u64 idx); void uvec_f64_arr_rm(uvec_f64_arr_t * v);;
typedef struct _uvec_char_t { char * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_char_t; void uvec_char_mk(uvec_char_t * v, u64 sz); void uvec_char_incr(uvec_char_t * v); u64 uvec_char_add(uvec_char_t * v, char i); u64 uvec_char_add_at(uvec_char_t * v, u64 idx, char i); u08 uvec_char_rm_at(uvec_char_t * v, u64 idx); void uvec_char_rm(uvec_char_t * v);; typedef struct _uvec_char_arr_t { char * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_char_arr_t; void uvec_char_arr_mk(uvec_char_arr_t * v, u64 sz); void uvec_char_arr_incr(uvec_char_arr_t * v); u64 uvec_char_arr_add(uvec_char_arr_t * v, char * i); u64 uvec_char_arr_add_at(uvec_char_arr_t * v, u64 idx, char * i); u08 uvec_char_arr_rm_at(uvec_char_arr_t * v, u64 idx); void uvec_char_arr_rm(uvec_char_arr_t * v);;
typedef struct _uvec_void_t { void * * e; u64 last_accessed_idx; u64 used; u64 sz; } uvec_void_t; void uvec_void_mk(uvec_void_t * v, u64 sz); void uvec_void_incr(uvec_void_t * v); u64 uvec_void_add(uvec_void_t * v, void * i); u64 uvec_void_add_at(uvec_void_t * v, u64 idx, void * i); u08 uvec_void_rm_at(uvec_void_t * v, u64 idx); void uvec_void_rm(uvec_void_t * v);;


typedef struct _uht_u08_t { char * id; u08 data; struct _uht_u08_t * next; } uht_u08_pair_t; typedef struct { uht_u08_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_u08_t; typedef struct { u08 found; u08 data; } uht_item_u08_found_t; void uht_u08_mk(uht_u08_t * t, sz_t sz); void uht_u08_check_resize(uht_u08_t * t); u08 uht_u08_add(uht_u08_t * t, char * id, u08 data); u08 * uht_u08_get(uht_u08_t * t, char * id, u08 * p); uht_item_u08_found_t uht_u08_betget(uht_u08_t * t, char * id); u08 uht_u08_has(uht_u08_t * t, char * id); void uht_u08_rm(uht_u08_t * t);; typedef struct _uht_u16_t { char * id; u16 data; struct _uht_u16_t * next; } uht_u16_pair_t; typedef struct { uht_u16_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_u16_t; typedef struct { u08 found; u16 data; } uht_item_u16_found_t; void uht_u16_mk(uht_u16_t * t, sz_t sz); void uht_u16_check_resize(uht_u16_t * t); u08 uht_u16_add(uht_u16_t * t, char * id, u16 data); u16 * uht_u16_get(uht_u16_t * t, char * id, u16 * p); uht_item_u16_found_t uht_u16_betget(uht_u16_t * t, char * id); u08 uht_u16_has(uht_u16_t * t, char * id); void uht_u16_rm(uht_u16_t * t);; typedef struct _uht_u32_t { char * id; u32 data; struct _uht_u32_t * next; } uht_u32_pair_t; typedef struct { uht_u32_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_u32_t; typedef struct { u08 found; u32 data; } uht_item_u32_found_t; void uht_u32_mk(uht_u32_t * t, sz_t sz); void uht_u32_check_resize(uht_u32_t * t); u08 uht_u32_add(uht_u32_t * t, char * id, u32 data); u32 * uht_u32_get(uht_u32_t * t, char * id, u32 * p); uht_item_u32_found_t uht_u32_betget(uht_u32_t * t, char * id); u08 uht_u32_has(uht_u32_t * t, char * id); void uht_u32_rm(uht_u32_t * t);; typedef struct _uht_u64_t { char * id; u64 data; struct _uht_u64_t * next; } uht_u64_pair_t; typedef struct { uht_u64_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_u64_t; typedef struct { u08 found; u64 data; } uht_item_u64_found_t; void uht_u64_mk(uht_u64_t * t, sz_t sz); void uht_u64_check_resize(uht_u64_t * t); u08 uht_u64_add(uht_u64_t * t, char * id, u64 data); u64 * uht_u64_get(uht_u64_t * t, char * id, u64 * p); uht_item_u64_found_t uht_u64_betget(uht_u64_t * t, char * id); u08 uht_u64_has(uht_u64_t * t, char * id); void uht_u64_rm(uht_u64_t * t);;
typedef struct _uht_i08_t { char * id; i08 data; struct _uht_i08_t * next; } uht_i08_pair_t; typedef struct { uht_i08_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_i08_t; typedef struct { u08 found; i08 data; } uht_item_i08_found_t; void uht_i08_mk(uht_i08_t * t, sz_t sz); void uht_i08_check_resize(uht_i08_t * t); u08 uht_i08_add(uht_i08_t * t, char * id, i08 data); i08 * uht_i08_get(uht_i08_t * t, char * id, i08 * p); uht_item_i08_found_t uht_i08_betget(uht_i08_t * t, char * id); u08 uht_i08_has(uht_i08_t * t, char * id); void uht_i08_rm(uht_i08_t * t);; typedef struct _uht_i16_t { char * id; i16 data; struct _uht_i16_t * next; } uht_i16_pair_t; typedef struct { uht_i16_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_i16_t; typedef struct { u08 found; i16 data; } uht_item_i16_found_t; void uht_i16_mk(uht_i16_t * t, sz_t sz); void uht_i16_check_resize(uht_i16_t * t); u08 uht_i16_add(uht_i16_t * t, char * id, i16 data); i16 * uht_i16_get(uht_i16_t * t, char * id, i16 * p); uht_item_i16_found_t uht_i16_betget(uht_i16_t * t, char * id); u08 uht_i16_has(uht_i16_t * t, char * id); void uht_i16_rm(uht_i16_t * t);; typedef struct _uht_i32_t { char * id; i32 data; struct _uht_i32_t * next; } uht_i32_pair_t; typedef struct { uht_i32_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_i32_t; typedef struct { u08 found; i32 data; } uht_item_i32_found_t; void uht_i32_mk(uht_i32_t * t, sz_t sz); void uht_i32_check_resize(uht_i32_t * t); u08 uht_i32_add(uht_i32_t * t, char * id, i32 data); i32 * uht_i32_get(uht_i32_t * t, char * id, i32 * p); uht_item_i32_found_t uht_i32_betget(uht_i32_t * t, char * id); u08 uht_i32_has(uht_i32_t * t, char * id); void uht_i32_rm(uht_i32_t * t);; typedef struct _uht_i64_t { char * id; i64 data; struct _uht_i64_t * next; } uht_i64_pair_t; typedef struct { uht_i64_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_i64_t; typedef struct { u08 found; i64 data; } uht_item_i64_found_t; void uht_i64_mk(uht_i64_t * t, sz_t sz); void uht_i64_check_resize(uht_i64_t * t); u08 uht_i64_add(uht_i64_t * t, char * id, i64 data); i64 * uht_i64_get(uht_i64_t * t, char * id, i64 * p); uht_item_i64_found_t uht_i64_betget(uht_i64_t * t, char * id); u08 uht_i64_has(uht_i64_t * t, char * id); void uht_i64_rm(uht_i64_t * t);;
typedef struct _uht_f32_t { char * id; f32 data; struct _uht_f32_t * next; } uht_f32_pair_t; typedef struct { uht_f32_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_f32_t; typedef struct { u08 found; f32 data; } uht_item_f32_found_t; void uht_f32_mk(uht_f32_t * t, sz_t sz); void uht_f32_check_resize(uht_f32_t * t); u08 uht_f32_add(uht_f32_t * t, char * id, f32 data); f32 * uht_f32_get(uht_f32_t * t, char * id, f32 * p); uht_item_f32_found_t uht_f32_betget(uht_f32_t * t, char * id); u08 uht_f32_has(uht_f32_t * t, char * id); void uht_f32_rm(uht_f32_t * t);; typedef struct _uht_f64_t { char * id; f64 data; struct _uht_f64_t * next; } uht_f64_pair_t; typedef struct { uht_f64_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_f64_t; typedef struct { u08 found; f64 data; } uht_item_f64_found_t; void uht_f64_mk(uht_f64_t * t, sz_t sz); void uht_f64_check_resize(uht_f64_t * t); u08 uht_f64_add(uht_f64_t * t, char * id, f64 data); f64 * uht_f64_get(uht_f64_t * t, char * id, f64 * p); uht_item_f64_found_t uht_f64_betget(uht_f64_t * t, char * id); u08 uht_f64_has(uht_f64_t * t, char * id); void uht_f64_rm(uht_f64_t * t);;
typedef struct _uht_u08_arr_t { char * id; u08 * data; struct _uht_u08_arr_t * next; } uht_u08_arr_pair_t; typedef struct { uht_u08_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_u08_arr_t; typedef struct { u08 found; u08 * data; } uht_item_u08_arr_found_t; void uht_u08_arr_mk(uht_u08_arr_t * t, sz_t sz); void uht_u08_arr_check_resize(uht_u08_arr_t * t); u08 uht_u08_arr_add(uht_u08_arr_t * t, char * id, u08 * data); u08 * * uht_u08_arr_get(uht_u08_arr_t * t, char * id, u08 * * p); uht_item_u08_arr_found_t uht_u08_arr_betget(uht_u08_arr_t * t, char * id); u08 uht_u08_arr_has(uht_u08_arr_t * t, char * id); void uht_u08_arr_rm(uht_u08_arr_t * t);; typedef struct _uht_u16_arr_t { char * id; u16 * data; struct _uht_u16_arr_t * next; } uht_u16_arr_pair_t; typedef struct { uht_u16_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_u16_arr_t; typedef struct { u08 found; u16 * data; } uht_item_u16_arr_found_t; void uht_u16_arr_mk(uht_u16_arr_t * t, sz_t sz); void uht_u16_arr_check_resize(uht_u16_arr_t * t); u08 uht_u16_arr_add(uht_u16_arr_t * t, char * id, u16 * data); u16 * * uht_u16_arr_get(uht_u16_arr_t * t, char * id, u16 * * p); uht_item_u16_arr_found_t uht_u16_arr_betget(uht_u16_arr_t * t, char * id); u08 uht_u16_arr_has(uht_u16_arr_t * t, char * id); void uht_u16_arr_rm(uht_u16_arr_t * t);; typedef struct _uht_u32_arr_t { char * id; u32 * data; struct _uht_u32_arr_t * next; } uht_u32_arr_pair_t; typedef struct { uht_u32_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_u32_arr_t; typedef struct { u08 found; u32 * data; } uht_item_u32_arr_found_t; void uht_u32_arr_mk(uht_u32_arr_t * t, sz_t sz); void uht_u32_arr_check_resize(uht_u32_arr_t * t); u08 uht_u32_arr_add(uht_u32_arr_t * t, char * id, u32 * data); u32 * * uht_u32_arr_get(uht_u32_arr_t * t, char * id, u32 * * p); uht_item_u32_arr_found_t uht_u32_arr_betget(uht_u32_arr_t * t, char * id); u08 uht_u32_arr_has(uht_u32_arr_t * t, char * id); void uht_u32_arr_rm(uht_u32_arr_t * t);; typedef struct _uht_u64_arr_t { char * id; u64 * data; struct _uht_u64_arr_t * next; } uht_u64_arr_pair_t; typedef struct { uht_u64_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_u64_arr_t; typedef struct { u08 found; u64 * data; } uht_item_u64_arr_found_t; void uht_u64_arr_mk(uht_u64_arr_t * t, sz_t sz); void uht_u64_arr_check_resize(uht_u64_arr_t * t); u08 uht_u64_arr_add(uht_u64_arr_t * t, char * id, u64 * data); u64 * * uht_u64_arr_get(uht_u64_arr_t * t, char * id, u64 * * p); uht_item_u64_arr_found_t uht_u64_arr_betget(uht_u64_arr_t * t, char * id); u08 uht_u64_arr_has(uht_u64_arr_t * t, char * id); void uht_u64_arr_rm(uht_u64_arr_t * t);;
typedef struct _uht_i08_arr_t { char * id; i08 * data; struct _uht_i08_arr_t * next; } uht_i08_arr_pair_t; typedef struct { uht_i08_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_i08_arr_t; typedef struct { u08 found; i08 * data; } uht_item_i08_arr_found_t; void uht_i08_arr_mk(uht_i08_arr_t * t, sz_t sz); void uht_i08_arr_check_resize(uht_i08_arr_t * t); u08 uht_i08_arr_add(uht_i08_arr_t * t, char * id, i08 * data); i08 * * uht_i08_arr_get(uht_i08_arr_t * t, char * id, i08 * * p); uht_item_i08_arr_found_t uht_i08_arr_betget(uht_i08_arr_t * t, char * id); u08 uht_i08_arr_has(uht_i08_arr_t * t, char * id); void uht_i08_arr_rm(uht_i08_arr_t * t);; typedef struct _uht_i16_arr_t { char * id; i16 * data; struct _uht_i16_arr_t * next; } uht_i16_arr_pair_t; typedef struct { uht_i16_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_i16_arr_t; typedef struct { u08 found; i16 * data; } uht_item_i16_arr_found_t; void uht_i16_arr_mk(uht_i16_arr_t * t, sz_t sz); void uht_i16_arr_check_resize(uht_i16_arr_t * t); u08 uht_i16_arr_add(uht_i16_arr_t * t, char * id, i16 * data); i16 * * uht_i16_arr_get(uht_i16_arr_t * t, char * id, i16 * * p); uht_item_i16_arr_found_t uht_i16_arr_betget(uht_i16_arr_t * t, char * id); u08 uht_i16_arr_has(uht_i16_arr_t * t, char * id); void uht_i16_arr_rm(uht_i16_arr_t * t);; typedef struct _uht_i32_arr_t { char * id; i32 * data; struct _uht_i32_arr_t * next; } uht_i32_arr_pair_t; typedef struct { uht_i32_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_i32_arr_t; typedef struct { u08 found; i32 * data; } uht_item_i32_arr_found_t; void uht_i32_arr_mk(uht_i32_arr_t * t, sz_t sz); void uht_i32_arr_check_resize(uht_i32_arr_t * t); u08 uht_i32_arr_add(uht_i32_arr_t * t, char * id, i32 * data); i32 * * uht_i32_arr_get(uht_i32_arr_t * t, char * id, i32 * * p); uht_item_i32_arr_found_t uht_i32_arr_betget(uht_i32_arr_t * t, char * id); u08 uht_i32_arr_has(uht_i32_arr_t * t, char * id); void uht_i32_arr_rm(uht_i32_arr_t * t);; typedef struct _uht_i64_arr_t { char * id; i64 * data; struct _uht_i64_arr_t * next; } uht_i64_arr_pair_t; typedef struct { uht_i64_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_i64_arr_t; typedef struct { u08 found; i64 * data; } uht_item_i64_arr_found_t; void uht_i64_arr_mk(uht_i64_arr_t * t, sz_t sz); void uht_i64_arr_check_resize(uht_i64_arr_t * t); u08 uht_i64_arr_add(uht_i64_arr_t * t, char * id, i64 * data); i64 * * uht_i64_arr_get(uht_i64_arr_t * t, char * id, i64 * * p); uht_item_i64_arr_found_t uht_i64_arr_betget(uht_i64_arr_t * t, char * id); u08 uht_i64_arr_has(uht_i64_arr_t * t, char * id); void uht_i64_arr_rm(uht_i64_arr_t * t);;
typedef struct _uht_f32_arr_t { char * id; f32 * data; struct _uht_f32_arr_t * next; } uht_f32_arr_pair_t; typedef struct { uht_f32_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_f32_arr_t; typedef struct { u08 found; f32 * data; } uht_item_f32_arr_found_t; void uht_f32_arr_mk(uht_f32_arr_t * t, sz_t sz); void uht_f32_arr_check_resize(uht_f32_arr_t * t); u08 uht_f32_arr_add(uht_f32_arr_t * t, char * id, f32 * data); f32 * * uht_f32_arr_get(uht_f32_arr_t * t, char * id, f32 * * p); uht_item_f32_arr_found_t uht_f32_arr_betget(uht_f32_arr_t * t, char * id); u08 uht_f32_arr_has(uht_f32_arr_t * t, char * id); void uht_f32_arr_rm(uht_f32_arr_t * t);; typedef struct _uht_f64_arr_t { char * id; f64 * data; struct _uht_f64_arr_t * next; } uht_f64_arr_pair_t; typedef struct { uht_f64_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_f64_arr_t; typedef struct { u08 found; f64 * data; } uht_item_f64_arr_found_t; void uht_f64_arr_mk(uht_f64_arr_t * t, sz_t sz); void uht_f64_arr_check_resize(uht_f64_arr_t * t); u08 uht_f64_arr_add(uht_f64_arr_t * t, char * id, f64 * data); f64 * * uht_f64_arr_get(uht_f64_arr_t * t, char * id, f64 * * p); uht_item_f64_arr_found_t uht_f64_arr_betget(uht_f64_arr_t * t, char * id); u08 uht_f64_arr_has(uht_f64_arr_t * t, char * id); void uht_f64_arr_rm(uht_f64_arr_t * t);;
typedef struct _uht_char_t { char * id; char data; struct _uht_char_t * next; } uht_char_pair_t; typedef struct { uht_char_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_char_t; typedef struct { u08 found; char data; } uht_item_char_found_t; void uht_char_mk(uht_char_t * t, sz_t sz); void uht_char_check_resize(uht_char_t * t); u08 uht_char_add(uht_char_t * t, char * id, char data); char * uht_char_get(uht_char_t * t, char * id, char * p); uht_item_char_found_t uht_char_betget(uht_char_t * t, char * id); u08 uht_char_has(uht_char_t * t, char * id); void uht_char_rm(uht_char_t * t);; typedef struct _uht_char_arr_t { char * id; char * data; struct _uht_char_arr_t * next; } uht_char_arr_pair_t; typedef struct { uht_char_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_char_arr_t; typedef struct { u08 found; char * data; } uht_item_char_arr_found_t; void uht_char_arr_mk(uht_char_arr_t * t, sz_t sz); void uht_char_arr_check_resize(uht_char_arr_t * t); u08 uht_char_arr_add(uht_char_arr_t * t, char * id, char * data); char * * uht_char_arr_get(uht_char_arr_t * t, char * id, char * * p); uht_item_char_arr_found_t uht_char_arr_betget(uht_char_arr_t * t, char * id); u08 uht_char_arr_has(uht_char_arr_t * t, char * id); void uht_char_arr_rm(uht_char_arr_t * t);;
typedef struct _uht_void_t { char * id; void * data; struct _uht_void_t * next; } uht_void_pair_t; typedef struct { uht_void_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_void_t; typedef struct { u08 found; void * data; } uht_item_void_found_t; void uht_void_mk(uht_void_t * t, sz_t sz); void uht_void_check_resize(uht_void_t * t); u08 uht_void_add(uht_void_t * t, char * id, void * data); void * * uht_void_get(uht_void_t * t, char * id, void * * p); uht_item_void_found_t uht_void_betget(uht_void_t * t, char * id); u08 uht_void_has(uht_void_t * t, char * id); void uht_void_rm(uht_void_t * t);;

typedef struct _uht_vec_char_arr_t { char * id; uvec_char_arr_t data; struct _uht_vec_char_arr_t * next; } uht_vec_char_arr_pair_t; typedef struct { uht_vec_char_arr_pair_t ** e; sz_t used; sz_t sz; u64 collisions; } uht_vec_char_arr_t; typedef struct { u08 found; uvec_char_arr_t data; } uht_item_vec_char_arr_found_t; void uht_vec_char_arr_mk(uht_vec_char_arr_t * t, sz_t sz); void uht_vec_char_arr_check_resize(uht_vec_char_arr_t * t); u08 uht_vec_char_arr_add(uht_vec_char_arr_t * t, char * id, uvec_char_arr_t data); uvec_char_arr_t * uht_vec_char_arr_get(uht_vec_char_arr_t * t, char * id, uvec_char_arr_t * p); uht_item_vec_char_arr_found_t uht_vec_char_arr_betget(uht_vec_char_arr_t * t, char * id); u08 uht_vec_char_arr_has(uht_vec_char_arr_t * t, char * id); void uht_vec_char_arr_rm(uht_vec_char_arr_t * t);;
# 519 "src/./engine/utils/utils.h"
void uparse_config_str(char * str, uht_vec_char_arr_t * config);

char * uwrite_config_str(uht_vec_char_arr_t * config);
# 545 "src/./engine/utils/utils.h"
f32 udist2D(f32 x1, f32 y1, f32 x2, f32 y2);
f32 udir2D(f32 x1, f32 y1, f32 x2, f32 y2);
f32 uilerp(f32 start, f32 stop, f32 amt);
i64 urandnum_gen(i64 lower, i64 upper);




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
uv3_t uv3_add (uv3_t v1, uv3_t v2);
uv3_t uv3_sub (uv3_t v1, uv3_t v2);
uv3_t uv3_lerp (uv3_t v1, uv3_t v2, f32 amt);
void uv3_limit (uv3_t * v, f32 scalar);
void uv3_scale (uv3_t * v, f32 scalar);
void uv3_normalize(uv3_t * v);
void uv3_mag_set (uv3_t * v, f32 scalar);
void uv3_negate (uv3_t * v);

f32 uv3_mag (uv3_t v);
f32 uv3_dot_prod (uv3_t v1, uv3_t v2);
uv3_t uv3_cross_prod (uv3_t v1, uv3_t v2);
f32 uv3_dist_between (uv3_t v1, uv3_t v2);
f32 uv3_angle_between(uv3_t v1, uv3_t v2);
uv3_t uv3_projection (uv3_t v1, uv3_t v2);

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







uv4_t uv4_mk(f32 x, f32 y, f32 z, f32 w);
uv4_t uv4_add (uv4_t v1, uv4_t v2);
uv4_t uv4_sub (uv4_t v1, uv4_t v2);
uv4_t uv4_lerp (uv4_t v1, uv4_t v2, f32 amt);
void uv4_limit (uv4_t * v, f32 scalar);
void uv4_scale (uv4_t * v, f32 scalar);
void uv4_normalize(uv4_t * v);
void uv4_mag_set (uv4_t * v, f32 scalar);
void uv4_negate (uv4_t * v);

f32 uv4_mag (uv4_t v);
f32 uv4_dot_prod (uv4_t v1, uv4_t v2);
f32 uv4_dist_between(uv4_t v1, uv4_t v2);
uv4_t uv4_projection (uv4_t v1, uv4_t v2);


uv3_t uv2_to_uv3(const uv2_t v);
uv4_t uv3_to_uv4(const uv3_t v);
uv3_t uv4_to_uv3(const uv4_t v);
uv2_t uv3_to_v2(const uv3_t v);





typedef struct {
    f32 elems[4][4];
} um4x4_t;

um4x4_t um4x4_mk(f32 m00, f32 m01, f32 m02, f32 m03,
               f32 m04, f32 m05, f32 m06, f32 m07,
               f32 m08, f32 m09, f32 m10, f32 m11,
               f32 m12, f32 m13, f32 m14, f32 m15);




um4x4_t um4x4_mk_zero();
um4x4_t um4x4_mk_identity();
um4x4_t um4x4_mk_diag(f32 val);

um4x4_t um4x4_add (um4x4_t m1, um4x4_t m2);
um4x4_t um4x4_sub (um4x4_t m1, um4x4_t m2);
um4x4_t um4x4_mult (um4x4_t m1, um4x4_t m2);
um4x4_t um4x4_mult_n (u32 um4x4_count, ...);
uv3_t um4x4_mult_uv3(um4x4_t m, uv3_t v);
uv4_t um4x4_mult_uv4(um4x4_t m, uv4_t v);

um4x4_t um4x4_scale_by_uv3 (um4x4_t mat, const uv3_t vector);
um4x4_t um4x4_translate_by_uv3(um4x4_t mat, const uv3_t vector);
um4x4_t um4x4_rotate_by_uv3 (f32 degrees, uv3_t axis);

um4x4_t um4x4_orthographic_projection(f32 l, f32 r, f32 b,
                                    f32 t, f32 n, f32 f);

um4x4_t um4x4_perspective_projection(f32 fov, f32 w, f32 h, f32 n, f32 f);
um4x4_t um4x4_lookat (uv3_t pos, uv3_t target, uv3_t up);

typedef i08 movement_t;
typedef i08 coll_t;

typedef struct {
    uv2_t pos;
    uv2_t vel;
    uv2_t acc;

    uv2_t size;

    u08 move_r;
    u08 move_l;
    u08 move_u;
    u08 move_d;

    u08 coll_l;
    u08 coll_r;
    u08 coll_b;
    u08 coll_t;

    uv2_t cam_true_scroll;

    i32 flip;
} uphys_obj_t;






void uphys_obj_mk(uphys_obj_t * o, uv2_t pos, uv2_t acc, uv2_t size);
# 733 "src/./engine/utils/utils.h"
uv2_t uphys_obj_get_scroll(uphys_obj_t * o, uv2_t render_target_size, f32 speed);


void uphys_obj_update(uphys_obj_t * o, const uphys_obj_t * tiles, const u32 len, i32 max_gravity_val, f64 dt);
# 807 "src/./engine/utils/utils.h"
typedef struct {
    u08 * cells;
    uv2_t size;
    uv2_t cell_size;
} ugrid_t;

void ugrid_mk(ugrid_t * g, u32 w, u32 h, u32 s_w, u32 s_h);
void ugrid_set_px(ugrid_t * g, u32 x, u32 y, u32 val);
u32 ugrid_get_px(ugrid_t * g, u32 x, u32 y);
void ugrid_rm(ugrid_t * g);
# 4 "src/engine.h" 2
# 1 "src/./engine/SDL2/SDL.h" 1
# 32 "src/./engine/SDL2/SDL.h"
# 1 "src/./engine/SDL2/SDL_main.h" 1
# 25 "src/./engine/SDL2/SDL_main.h"
# 1 "src/./engine/SDL2/SDL_stdinc.h" 1
# 31 "src/./engine/SDL2/SDL_stdinc.h"
# 1 "src/./engine/SDL2/SDL_config.h" 1
# 33 "src/./engine/SDL2/SDL_config.h"
# 1 "src/./engine/SDL2/SDL_platform.h" 1
# 203 "src/./engine/SDL2/SDL_platform.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 204 "src/./engine/SDL2/SDL_platform.h" 2
# 225 "src/./engine/SDL2/SDL_platform.h"
extern const char * SDL_GetPlatform (void);





# 1 "src/./engine/SDL2/close_code.h" 1
# 232 "src/./engine/SDL2/SDL_platform.h" 2
# 34 "src/./engine/SDL2/SDL_config.h" 2
# 32 "src/./engine/SDL2/SDL_stdinc.h" 2
# 40 "src/./engine/SDL2/SDL_stdinc.h"
# 1 "c:\\mingw\\include\\sys\\types.h" 1 3
# 34 "c:\\mingw\\include\\sys\\types.h" 3
       
# 35 "c:\\mingw\\include\\sys\\types.h" 3
# 62 "c:\\mingw\\include\\sys\\types.h" 3
  
# 62 "c:\\mingw\\include\\sys\\types.h" 3
 typedef long __off32_t;




  typedef __off32_t _off_t;







  typedef _off_t off_t;
# 91 "c:\\mingw\\include\\sys\\types.h" 3
  typedef long long __off64_t;






  typedef __off64_t off64_t;
# 115 "c:\\mingw\\include\\sys\\types.h" 3
  typedef int _ssize_t;







  typedef _ssize_t ssize_t;
# 174 "c:\\mingw\\include\\sys\\types.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 175 "c:\\mingw\\include\\sys\\types.h" 2 3
# 184 "c:\\mingw\\include\\sys\\types.h" 3
typedef unsigned int _dev_t;
# 195 "c:\\mingw\\include\\sys\\types.h" 3
typedef short _ino_t;
typedef unsigned short _mode_t;
typedef int _pid_t;
typedef int _sigset_t;
# 207 "c:\\mingw\\include\\sys\\types.h" 3
typedef _dev_t dev_t;
typedef _ino_t ino_t;
typedef _mode_t mode_t;
typedef _pid_t pid_t;
typedef _sigset_t sigset_t;


typedef long long fpos64_t;






typedef unsigned long useconds_t __attribute__((__deprecated__));
# 41 "src/./engine/SDL2/SDL_stdinc.h" 2






# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 48 "src/./engine/SDL2/SDL_stdinc.h" 2
# 72 "src/./engine/SDL2/SDL_stdinc.h"
# 1 "c:\\mingw\\include\\wchar.h" 1 3
# 35 "c:\\mingw\\include\\wchar.h" 3
       
# 36 "c:\\mingw\\include\\wchar.h" 3
# 61 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\wctype.h" 1 3
# 33 "c:\\mingw\\include\\wctype.h" 3
       
# 34 "c:\\mingw\\include\\wctype.h" 3
# 191 "c:\\mingw\\include\\wctype.h" 3
typedef wchar_t wctrans_t;


# 202 "c:\\mingw\\include\\wctype.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towctrans (wint_t, wctrans_t);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wctrans_t wctrans (const char*);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wctype_t wctype (const char*);


# 62 "c:\\mingw\\include\\wchar.h" 2 3
# 83 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\stdio.h" 1 3
# 84 "c:\\mingw\\include\\wchar.h" 2 3
# 147 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\stdlib.h" 1 3
# 148 "c:\\mingw\\include\\wchar.h" 2 3
# 199 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\direct.h" 1 3
# 34 "c:\\mingw\\include\\direct.h" 3
       
# 35 "c:\\mingw\\include\\direct.h" 3
# 60 "c:\\mingw\\include\\direct.h" 3

# 86 "c:\\mingw\\include\\direct.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wchdir (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetcwd (wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetdcwd (int, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wmkdir (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wrmdir (const wchar_t *);




# 200 "c:\\mingw\\include\\wchar.h" 2 3
# 212 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\sys/stat.h" 1 3
# 34 "c:\\mingw\\include\\sys/stat.h" 3
       
# 35 "c:\\mingw\\include\\sys/stat.h" 3
# 173 "c:\\mingw\\include\\sys/stat.h" 3
struct _stat { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; _off_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };






struct stat { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; _off_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };







struct _stati64 { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; __off64_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };






struct __stat64 { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; __off64_t st_size; __time64_t st_atime; __time64_t st_mtime; __time64_t st_ctime; };
# 218 "c:\\mingw\\include\\sys/stat.h" 3

# 352 "c:\\mingw\\include\\sys/stat.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstat(const wchar_t *, struct _stat *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstati64 (const wchar_t *, struct _stati64 *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstat64 (const wchar_t *, struct __stat64 *);
# 398 "c:\\mingw\\include\\sys/stat.h" 3

# 213 "c:\\mingw\\include\\wchar.h" 2 3
# 237 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\io.h" 1 3
# 38 "c:\\mingw\\include\\io.h" 3
       
# 39 "c:\\mingw\\include\\io.h" 3
# 67 "c:\\mingw\\include\\io.h" 3
# 1 "c:\\mingw\\include\\stdint.h" 1 3
# 68 "c:\\mingw\\include\\io.h" 2 3
# 104 "c:\\mingw\\include\\io.h" 3
typedef unsigned long _fsize_t;
# 174 "c:\\mingw\\include\\io.h" 3

# 341 "c:\\mingw\\include\\io.h" 3
struct _wfinddata_t { unsigned attrib; time_t time_create; time_t time_access; time_t time_write; _fsize_t size; wchar_t name[(260)]; };
struct _wfinddatai64_t { unsigned attrib; time_t time_create; time_t time_access; time_t time_write; long long size; wchar_t name[(260)]; };







 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirst (const wchar_t *, struct _wfinddata_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnext (intptr_t, struct _wfinddata_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirsti64 (const wchar_t *, struct _wfinddatai64_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnexti64 (intptr_t, struct _wfinddatai64_t *);







struct __wfinddata64_t { unsigned attrib; __time64_t time_create; __time64_t time_access; __time64_t time_write; long long size; wchar_t name[(260)]; };
# 377 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirst64 (const wchar_t *, struct __wfinddata64_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnext64 (intptr_t, struct __wfinddata64_t *);
# 484 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _findclose (intptr_t);
# 525 "c:\\mingw\\include\\io.h" 3

# 551 "c:\\mingw\\include\\io.h" 3

# 636 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _waccess (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wchmod (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcreat (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wunlink (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wopen (const wchar_t *, int, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wsopen (const wchar_t *, int, int, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wmktemp (wchar_t *);
# 701 "c:\\mingw\\include\\io.h" 3

# 238 "c:\\mingw\\include\\wchar.h" 2 3
# 290 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\time.h" 1 3
# 291 "c:\\mingw\\include\\wchar.h" 2 3
# 328 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\locale.h" 1 3
# 34 "c:\\mingw\\include\\locale.h" 3
       
# 35 "c:\\mingw\\include\\locale.h" 3
# 135 "c:\\mingw\\include\\locale.h" 3

# 151 "c:\\mingw\\include\\locale.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wsetlocale (int, const wchar_t *);
# 178 "c:\\mingw\\include\\locale.h" 3

# 329 "c:\\mingw\\include\\wchar.h" 2 3







# 1 "c:\\mingw\\include\\process.h" 1 3
# 33 "c:\\mingw\\include\\process.h" 3
       
# 34 "c:\\mingw\\include\\process.h" 3
# 93 "c:\\mingw\\include\\process.h" 3

# 240 "c:\\mingw\\include\\process.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecl (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecle (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexeclp (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexeclpe (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecv (const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wexecve
(const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecvp (const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wexecvpe
(const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnl (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnle (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnlp (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnlpe (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnv (int, const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wspawnve
(int, const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnvp (int, const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wspawnvpe
(int, const wchar_t *, const wchar_t * const *, const wchar_t * const *);




# 337 "c:\\mingw\\include\\wchar.h" 2 3
# 370 "c:\\mingw\\include\\wchar.h" 3

# 509 "c:\\mingw\\include\\wchar.h" 3
typedef wchar_t _Wint_t;


typedef int mbstate_t;





__attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t btowc (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int wctob (wint_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t mbrlen (const char *__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbrtowc
(wchar_t *__restrict__, const char *__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbsrtowcs
(wchar_t *__restrict__, const char **__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t wcrtomb (char * __restrict__, wchar_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsrtombs
(char *__restrict__, const wchar_t **__restrict__, size_t, mbstate_t *__restrict__);







__attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwide (FILE *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mbsinit (const mbstate_t *);
# 555 "c:\\mingw\\include\\wchar.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemset (wchar_t *, wchar_t, size_t);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemchr (const wchar_t *, wchar_t, size_t);





int wmemcmp (const wchar_t *, const wchar_t *, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
wchar_t *wmemcpy (wchar_t *__restrict__, const wchar_t *__restrict__, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemmove (wchar_t *, const wchar_t *, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long long wcstoll (const wchar_t *__restrict__, wchar_t **__restrict__, int);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long long wcstoull
(const wchar_t *__restrict__, wchar_t **__restrict__, int);



# 73 "src/./engine/SDL2/SDL_stdinc.h" 2


# 1 "c:\\mingw\\include\\inttypes.h" 1 3
# 9 "c:\\mingw\\include\\inttypes.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 10 "c:\\mingw\\include\\inttypes.h" 2 3



typedef struct {
 intmax_t quot;
 intmax_t rem;
 } imaxdiv_t;
# 258 "c:\\mingw\\include\\inttypes.h" 3
intmax_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) imaxabs (intmax_t j);
# 273 "c:\\mingw\\include\\inttypes.h" 3
imaxdiv_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) imaxdiv (intmax_t numer, intmax_t denom);



intmax_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) strtoimax (const char* __restrict__ nptr,
                            char** __restrict__ endptr, int base);
uintmax_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) strtoumax (const char* __restrict__ nptr,
        char** __restrict__ endptr, int base);

intmax_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) wcstoimax (const wchar_t* __restrict__ nptr,
                            wchar_t** __restrict__ endptr, int base);
uintmax_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) wcstoumax (const wchar_t* __restrict__ nptr,
        wchar_t** __restrict__ endptr, int base);


# 76 "src/./engine/SDL2/SDL_stdinc.h" 2
# 93 "src/./engine/SDL2/SDL_stdinc.h"
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\float.h" 1 3 4
# 273 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\float.h" 3 4
# 1 "c:\\mingw\\include\\float.h" 1 3 4
# 34 "c:\\mingw\\include\\float.h" 3 4
        
# 35 "c:\\mingw\\include\\float.h" 3
# 141 "c:\\mingw\\include\\float.h" 3






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int _controlfp (unsigned int unNew, unsigned int unMask);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int _control87 (unsigned int unNew, unsigned int unMask);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int _clearfp (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int _statusfp (void);
# 181 "c:\\mingw\\include\\float.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _fpreset (void);







__attribute__((__cdecl__)) __attribute__((__nothrow__)) void fpreset (void) __attribute__((__deprecated__));
# 207 "c:\\mingw\\include\\float.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__fpecode (void);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _chgsign (double);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _copysign (double, double);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _logb (double);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _nextafter (double, double);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _scalb (double, long);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _finite (double);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fpclass (double);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _isnan (double);


# 274 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\float.h" 2 3 4
# 94 "src/./engine/SDL2/SDL_stdinc.h" 2
# 182 "src/./engine/SDL2/SDL_stdinc.h"

# 182 "src/./engine/SDL2/SDL_stdinc.h"
typedef enum
{
    SDL_FALSE = 0,
    SDL_TRUE = 1
} SDL_bool;







typedef int8_t Sint8;





typedef uint8_t Uint8;





typedef int16_t Sint16;





typedef uint16_t Uint16;





typedef int32_t Sint32;





typedef uint32_t Uint32;






typedef int64_t Sint64;





typedef uint64_t Uint64;
# 371 "src/./engine/SDL2/SDL_stdinc.h"
_Static_assert(sizeof(Uint8) == 1, "sizeof(Uint8) == 1");;
_Static_assert(sizeof(Sint8) == 1, "sizeof(Sint8) == 1");;
_Static_assert(sizeof(Uint16) == 2, "sizeof(Uint16) == 2");;
_Static_assert(sizeof(Sint16) == 2, "sizeof(Sint16) == 2");;
_Static_assert(sizeof(Uint32) == 4, "sizeof(Uint32) == 4");;
_Static_assert(sizeof(Sint32) == 4, "sizeof(Sint32) == 4");;
_Static_assert(sizeof(Uint64) == 8, "sizeof(Uint64) == 8");;
_Static_assert(sizeof(Sint64) == 8, "sizeof(Sint64) == 8");;
# 392 "src/./engine/SDL2/SDL_stdinc.h"
typedef enum
{
    DUMMY_ENUM_VALUE
} SDL_DUMMY_ENUM;

_Static_assert(sizeof(SDL_DUMMY_ENUM) == sizeof(int), "sizeof(SDL_DUMMY_ENUM) == sizeof(int)");;




# 1 "src/./engine/SDL2/begin_code.h" 1
# 403 "src/./engine/SDL2/SDL_stdinc.h" 2
# 416 "src/./engine/SDL2/SDL_stdinc.h"
extern void * SDL_malloc(size_t size);
extern void * SDL_calloc(size_t nmemb, size_t size);
extern void * SDL_realloc(void *mem, size_t size);
extern void SDL_free(void *mem);

typedef void *( *SDL_malloc_func)(size_t size);
typedef void *( *SDL_calloc_func)(size_t nmemb, size_t size);
typedef void *( *SDL_realloc_func)(void *mem, size_t size);
typedef void ( *SDL_free_func)(void *mem);






extern void SDL_GetMemoryFunctions(SDL_malloc_func *malloc_func,
                                                    SDL_calloc_func *calloc_func,
                                                    SDL_realloc_func *realloc_func,
                                                    SDL_free_func *free_func);






extern int SDL_SetMemoryFunctions(SDL_malloc_func malloc_func,
                                                   SDL_calloc_func calloc_func,
                                                   SDL_realloc_func realloc_func,
                                                   SDL_free_func free_func);






extern int SDL_GetNumAllocations(void);

extern char * SDL_getenv(const char *name);
extern int SDL_setenv(const char *name, const char *value, int overwrite);

extern void SDL_qsort(void *base, size_t nmemb, size_t size, int (*compare) (const void *, const void *));

extern int SDL_abs(int x);






extern int SDL_isalpha(int x);
extern int SDL_isalnum(int x);
extern int SDL_isblank(int x);
extern int SDL_iscntrl(int x);
extern int SDL_isdigit(int x);
extern int SDL_isxdigit(int x);
extern int SDL_ispunct(int x);
extern int SDL_isspace(int x);
extern int SDL_isupper(int x);
extern int SDL_islower(int x);
extern int SDL_isprint(int x);
extern int SDL_isgraph(int x);
extern int SDL_toupper(int x);
extern int SDL_tolower(int x);

extern Uint32 SDL_crc32(Uint32 crc, const void *data, size_t len);

extern void * SDL_memset( void *dst, int c, size_t len);






__attribute__((always_inline)) static __inline__ void SDL_memset4(void *dst, Uint32 val, size_t dwords)
{



    int u0, u1, u2;
    __asm__ __volatile__ (
        "cld \n\t"
        "rep ; stosl \n\t"
        : "=&D" (u0), "=&a" (u1), "=&c" (u2)
        : "0" (dst), "1" (val), "2" (((Uint32)(dwords)))
        : "memory"
    );
# 517 "src/./engine/SDL2/SDL_stdinc.h"
}

extern void * SDL_memcpy( void *dst, const void *src, size_t len);

extern void * SDL_memmove( void *dst, const void *src, size_t len);
extern int SDL_memcmp(const void *s1, const void *s2, size_t len);

extern size_t SDL_wcslen(const wchar_t *wstr);
extern size_t SDL_wcslcpy( wchar_t *dst, const wchar_t *src, size_t maxlen);
extern size_t SDL_wcslcat( wchar_t *dst, const wchar_t *src, size_t maxlen);
extern wchar_t * SDL_wcsdup(const wchar_t *wstr);
extern wchar_t * SDL_wcsstr(const wchar_t *haystack, const wchar_t *needle);

extern int SDL_wcscmp(const wchar_t *str1, const wchar_t *str2);
extern int SDL_wcsncmp(const wchar_t *str1, const wchar_t *str2, size_t maxlen);
extern int SDL_wcscasecmp(const wchar_t *str1, const wchar_t *str2);
extern int SDL_wcsncasecmp(const wchar_t *str1, const wchar_t *str2, size_t len);

extern size_t SDL_strlen(const char *str);
extern size_t SDL_strlcpy( char *dst, const char *src, size_t maxlen);
extern size_t SDL_utf8strlcpy( char *dst, const char *src, size_t dst_bytes);
extern size_t SDL_strlcat( char *dst, const char *src, size_t maxlen);
extern char * SDL_strdup(const char *str);
extern char * SDL_strrev(char *str);
extern char * SDL_strupr(char *str);
extern char * SDL_strlwr(char *str);
extern char * SDL_strchr(const char *str, int c);
extern char * SDL_strrchr(const char *str, int c);
extern char * SDL_strstr(const char *haystack, const char *needle);
extern char * SDL_strtokr(char *s1, const char *s2, char **saveptr);
extern size_t SDL_utf8strlen(const char *str);

extern char * SDL_itoa(int value, char *str, int radix);
extern char * SDL_uitoa(unsigned int value, char *str, int radix);
extern char * SDL_ltoa(long value, char *str, int radix);
extern char * SDL_ultoa(unsigned long value, char *str, int radix);
extern char * SDL_lltoa(Sint64 value, char *str, int radix);
extern char * SDL_ulltoa(Uint64 value, char *str, int radix);

extern int SDL_atoi(const char *str);
extern double SDL_atof(const char *str);
extern long SDL_strtol(const char *str, char **endp, int base);
extern unsigned long SDL_strtoul(const char *str, char **endp, int base);
extern Sint64 SDL_strtoll(const char *str, char **endp, int base);
extern Uint64 SDL_strtoull(const char *str, char **endp, int base);
extern double SDL_strtod(const char *str, char **endp);

extern int SDL_strcmp(const char *str1, const char *str2);
extern int SDL_strncmp(const char *str1, const char *str2, size_t maxlen);
extern int SDL_strcasecmp(const char *str1, const char *str2);
extern int SDL_strncasecmp(const char *str1, const char *str2, size_t len);

extern int SDL_sscanf(const char *text, const char *fmt, ...) __attribute__ (( format( __scanf__, 2, 2 +1 )));
extern int SDL_vsscanf(const char *text, const char *fmt, va_list ap);
extern int SDL_snprintf( char *text, size_t maxlen, const char *fmt, ... ) __attribute__ (( format( __printf__, 3, 3 +1 )));
extern int SDL_vsnprintf( char *text, size_t maxlen, const char *fmt, va_list ap);
extern int SDL_asprintf(char **strp, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));
extern int SDL_vasprintf(char **strp, const char *fmt, va_list ap);
# 596 "src/./engine/SDL2/SDL_stdinc.h"
extern double SDL_acos(double x);
extern float SDL_acosf(float x);
extern double SDL_asin(double x);
extern float SDL_asinf(float x);
extern double SDL_atan(double x);
extern float SDL_atanf(float x);
extern double SDL_atan2(double y, double x);
extern float SDL_atan2f(float y, float x);
extern double SDL_ceil(double x);
extern float SDL_ceilf(float x);
extern double SDL_copysign(double x, double y);
extern float SDL_copysignf(float x, float y);
extern double SDL_cos(double x);
extern float SDL_cosf(float x);
extern double SDL_exp(double x);
extern float SDL_expf(float x);
extern double SDL_fabs(double x);
extern float SDL_fabsf(float x);
extern double SDL_floor(double x);
extern float SDL_floorf(float x);
extern double SDL_trunc(double x);
extern float SDL_truncf(float x);
extern double SDL_fmod(double x, double y);
extern float SDL_fmodf(float x, float y);
extern double SDL_log(double x);
extern float SDL_logf(float x);
extern double SDL_log10(double x);
extern float SDL_log10f(float x);
extern double SDL_pow(double x, double y);
extern float SDL_powf(float x, float y);
extern double SDL_round(double x);
extern float SDL_roundf(float x);
extern long SDL_lround(double x);
extern long SDL_lroundf(float x);
extern double SDL_scalbn(double x, int n);
extern float SDL_scalbnf(float x, int n);
extern double SDL_sin(double x);
extern float SDL_sinf(float x);
extern double SDL_sqrt(double x);
extern float SDL_sqrtf(float x);
extern double SDL_tan(double x);
extern float SDL_tanf(float x);
# 646 "src/./engine/SDL2/SDL_stdinc.h"
typedef struct _SDL_iconv_t *SDL_iconv_t;
extern SDL_iconv_t SDL_iconv_open(const char *tocode,
                                                   const char *fromcode);
extern int SDL_iconv_close(SDL_iconv_t cd);
extern size_t SDL_iconv(SDL_iconv_t cd, const char **inbuf,
                                         size_t * inbytesleft, char **outbuf,
                                         size_t * outbytesleft);







extern char * SDL_iconv_string(const char *tocode,
                                               const char *fromcode,
                                               const char *inbuf,
                                               size_t inbytesleft);
# 716 "src/./engine/SDL2/SDL_stdinc.h"
__attribute__((always_inline)) static __inline__ void *SDL_memcpy4( void *dst, const void *src, size_t dwords)
{
    return SDL_memcpy(dst, src, dwords * 4);
}





# 1 "src/./engine/SDL2/close_code.h" 1
# 726 "src/./engine/SDL2/SDL_stdinc.h" 2
# 26 "src/./engine/SDL2/SDL_main.h" 2
# 121 "src/./engine/SDL2/SDL_main.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 122 "src/./engine/SDL2/SDL_main.h" 2







typedef int (*SDL_main_func)(int argc, char *argv[]);
extern int SDL_main(int argc, char *argv[]);
# 146 "src/./engine/SDL2/SDL_main.h"
extern void SDL_SetMainReady(void);
# 173 "src/./engine/SDL2/SDL_main.h"
extern int SDL_RegisterApp(const char *name, Uint32 style, void *hInst);
# 190 "src/./engine/SDL2/SDL_main.h"
extern void SDL_UnregisterApp(void);
# 231 "src/./engine/SDL2/SDL_main.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 232 "src/./engine/SDL2/SDL_main.h" 2
# 33 "src/./engine/SDL2/SDL.h" 2

# 1 "src/./engine/SDL2/SDL_assert.h" 1
# 27 "src/./engine/SDL2/SDL_assert.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 28 "src/./engine/SDL2/SDL_assert.h" 2
# 106 "src/./engine/SDL2/SDL_assert.h"
typedef enum
{
    SDL_ASSERTION_RETRY,
    SDL_ASSERTION_BREAK,
    SDL_ASSERTION_ABORT,
    SDL_ASSERTION_IGNORE,
    SDL_ASSERTION_ALWAYS_IGNORE
} SDL_AssertState;

typedef struct SDL_AssertData
{
    int always_ignore;
    unsigned int trigger_count;
    const char *condition;
    const char *filename;
    int linenum;
    const char *function;
    const struct SDL_AssertData *next;
} SDL_AssertData;




extern SDL_AssertState SDL_ReportAssertion(SDL_AssertData *,
                                                             const char *,
                                                             const char *, int)
# 140 "src/./engine/SDL2/SDL_assert.h"
;
# 200 "src/./engine/SDL2/SDL_assert.h"
typedef SDL_AssertState ( *SDL_AssertionHandler)(
                                 const SDL_AssertData* data, void* userdata);
# 224 "src/./engine/SDL2/SDL_assert.h"
extern void SDL_SetAssertionHandler(
                                            SDL_AssertionHandler handler,
                                            void *userdata);
# 243 "src/./engine/SDL2/SDL_assert.h"
extern SDL_AssertionHandler SDL_GetDefaultAssertionHandler(void);
# 266 "src/./engine/SDL2/SDL_assert.h"
extern SDL_AssertionHandler SDL_GetAssertionHandler(void **puserdata);
# 294 "src/./engine/SDL2/SDL_assert.h"
extern const SDL_AssertData * SDL_GetAssertionReport(void);
# 308 "src/./engine/SDL2/SDL_assert.h"
extern void SDL_ResetAssertionReport(void);
# 320 "src/./engine/SDL2/SDL_assert.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 321 "src/./engine/SDL2/SDL_assert.h" 2
# 35 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_atomic.h" 1
# 65 "src/./engine/SDL2/SDL_atomic.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 66 "src/./engine/SDL2/SDL_atomic.h" 2
# 89 "src/./engine/SDL2/SDL_atomic.h"
typedef int SDL_SpinLock;
# 106 "src/./engine/SDL2/SDL_atomic.h"
extern SDL_bool SDL_AtomicTryLock(SDL_SpinLock *lock);
# 121 "src/./engine/SDL2/SDL_atomic.h"
extern void SDL_AtomicLock(SDL_SpinLock *lock);
# 138 "src/./engine/SDL2/SDL_atomic.h"
extern void SDL_AtomicUnlock(SDL_SpinLock *lock);
# 183 "src/./engine/SDL2/SDL_atomic.h"
extern void SDL_MemoryBarrierReleaseFunction(void);
extern void SDL_MemoryBarrierAcquireFunction(void);
# 244 "src/./engine/SDL2/SDL_atomic.h"
typedef struct { int value; } SDL_atomic_t;
# 263 "src/./engine/SDL2/SDL_atomic.h"
extern SDL_bool SDL_AtomicCAS(SDL_atomic_t *a, int oldval, int newval);
# 281 "src/./engine/SDL2/SDL_atomic.h"
extern int SDL_AtomicSet(SDL_atomic_t *a, int v);
# 296 "src/./engine/SDL2/SDL_atomic.h"
extern int SDL_AtomicGet(SDL_atomic_t *a);
# 315 "src/./engine/SDL2/SDL_atomic.h"
extern int SDL_AtomicAdd(SDL_atomic_t *a, int v);
# 351 "src/./engine/SDL2/SDL_atomic.h"
extern SDL_bool SDL_AtomicCASPtr(void **a, void *oldval, void *newval);
# 368 "src/./engine/SDL2/SDL_atomic.h"
extern void* SDL_AtomicSetPtr(void **a, void* v);
# 384 "src/./engine/SDL2/SDL_atomic.h"
extern void* SDL_AtomicGetPtr(void **a);






# 1 "src/./engine/SDL2/close_code.h" 1
# 392 "src/./engine/SDL2/SDL_atomic.h" 2
# 36 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_audio.h" 1
# 34 "src/./engine/SDL2/SDL_audio.h"
# 1 "src/./engine/SDL2/SDL_error.h" 1
# 33 "src/./engine/SDL2/SDL_error.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 34 "src/./engine/SDL2/SDL_error.h" 2
# 66 "src/./engine/SDL2/SDL_error.h"
extern int SDL_SetError( const char *fmt, ...) __attribute__ (( format( __printf__, 1, 1 +1 )));
# 103 "src/./engine/SDL2/SDL_error.h"
extern const char * SDL_GetError(void);
# 120 "src/./engine/SDL2/SDL_error.h"
extern char * SDL_GetErrorMsg(char *errstr, int maxlen);
# 130 "src/./engine/SDL2/SDL_error.h"
extern void SDL_ClearError(void);
# 142 "src/./engine/SDL2/SDL_error.h"
typedef enum
{
    SDL_ENOMEM,
    SDL_EFREAD,
    SDL_EFWRITE,
    SDL_EFSEEK,
    SDL_UNSUPPORTED,
    SDL_LASTERROR
} SDL_errorcode;

extern int SDL_Error(SDL_errorcode code);






# 1 "src/./engine/SDL2/close_code.h" 1
# 160 "src/./engine/SDL2/SDL_error.h" 2
# 35 "src/./engine/SDL2/SDL_audio.h" 2
# 1 "src/./engine/SDL2/SDL_endian.h" 1
# 91 "src/./engine/SDL2/SDL_endian.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 92 "src/./engine/SDL2/SDL_endian.h" 2
# 274 "src/./engine/SDL2/SDL_endian.h"
__attribute__((always_inline)) static __inline__ float
SDL_SwapFloat(float x)
{
    union {
        float f;
        Uint32 ui32;
    } swapper;
    swapper.f = x;
    swapper.ui32 = __builtin_bswap32(swapper.ui32);
    return swapper.f;
}
# 322 "src/./engine/SDL2/SDL_endian.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 323 "src/./engine/SDL2/SDL_endian.h" 2
# 36 "src/./engine/SDL2/SDL_audio.h" 2
# 1 "src/./engine/SDL2/SDL_mutex.h" 1
# 34 "src/./engine/SDL2/SDL_mutex.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 35 "src/./engine/SDL2/SDL_mutex.h" 2
# 58 "src/./engine/SDL2/SDL_mutex.h"
struct SDL_mutex;
typedef struct SDL_mutex SDL_mutex;
# 81 "src/./engine/SDL2/SDL_mutex.h"
extern SDL_mutex * SDL_CreateMutex(void);
# 99 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_LockMutex(SDL_mutex * mutex);
# 122 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_TryLockMutex(SDL_mutex * mutex);
# 141 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_UnlockMutex(SDL_mutex * mutex);
# 162 "src/./engine/SDL2/SDL_mutex.h"
extern void SDL_DestroyMutex(SDL_mutex * mutex);
# 173 "src/./engine/SDL2/SDL_mutex.h"
struct SDL_semaphore;
typedef struct SDL_semaphore SDL_sem;
# 198 "src/./engine/SDL2/SDL_mutex.h"
extern SDL_sem * SDL_CreateSemaphore(Uint32 initial_value);
# 217 "src/./engine/SDL2/SDL_mutex.h"
extern void SDL_DestroySemaphore(SDL_sem * sem);
# 244 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_SemWait(SDL_sem * sem);
# 268 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_SemTryWait(SDL_sem * sem);
# 293 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_SemWaitTimeout(SDL_sem * sem, Uint32 ms);
# 311 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_SemPost(SDL_sem * sem);
# 323 "src/./engine/SDL2/SDL_mutex.h"
extern Uint32 SDL_SemValue(SDL_sem * sem);
# 334 "src/./engine/SDL2/SDL_mutex.h"
struct SDL_cond;
typedef struct SDL_cond SDL_cond;
# 351 "src/./engine/SDL2/SDL_mutex.h"
extern SDL_cond * SDL_CreateCond(void);
# 366 "src/./engine/SDL2/SDL_mutex.h"
extern void SDL_DestroyCond(SDL_cond * cond);
# 383 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_CondSignal(SDL_cond * cond);
# 400 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_CondBroadcast(SDL_cond * cond);
# 428 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_CondWait(SDL_cond * cond, SDL_mutex * mutex);
# 457 "src/./engine/SDL2/SDL_mutex.h"
extern int SDL_CondWaitTimeout(SDL_cond * cond,
                                                SDL_mutex * mutex, Uint32 ms);
# 467 "src/./engine/SDL2/SDL_mutex.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 468 "src/./engine/SDL2/SDL_mutex.h" 2
# 37 "src/./engine/SDL2/SDL_audio.h" 2
# 1 "src/./engine/SDL2/SDL_thread.h" 1
# 39 "src/./engine/SDL2/SDL_thread.h"
# 1 "c:\\mingw\\include\\process.h" 1 3
# 33 "c:\\mingw\\include\\process.h" 3
       
# 34 "c:\\mingw\\include\\process.h" 3
# 93 "c:\\mingw\\include\\process.h" 3



 __attribute__((__cdecl__)) 
# 96 "c:\\mingw\\include\\process.h" 3
               __attribute__((__nothrow__)) void _cexit (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _c_exit (void);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _cwait (int *, _pid_t, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) _pid_t _getpid (void);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _execl (const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _execle (const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _execlp (const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _execlpe (const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _execv (const char *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _execve (const char *, const char * const *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _execvp (const char *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _execvpe (const char *, const char * const *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _spawnl (int, const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _spawnle (int, const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _spawnlp (int, const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _spawnlpe (int, const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _spawnv (int, const char *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _spawnve (int, const char *, const char * const *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _spawnvp (int, const char *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _spawnvpe (int, const char *, const char * const *, const char * const *);
# 161 "c:\\mingw\\include\\process.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long _beginthread (void (*)(void *), unsigned, void *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _endthread (void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long _beginthreadex
(void *, unsigned, unsigned (__attribute__((__stdcall__)) *) (void *), void *, unsigned, unsigned *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _endthreadex (unsigned);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int cwait (int *, pid_t, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) pid_t getpid (void);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t execl (const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t execle (const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t execlp (const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t execlpe (const char *, const char *,...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t execv (const char *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t execve (const char *, const char * const *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t execvp (const char *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t execvpe (const char *, const char * const *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t spawnl (int, const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t spawnle (int, const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t spawnlp (int, const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t spawnlpe (int, const char *, const char *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t spawnv (int, const char *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t spawnve (int, const char *, const char * const *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t spawnvp (int, const char *, const char * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t spawnvpe (int, const char *, const char * const *, const char * const *);
# 290 "c:\\mingw\\include\\process.h" 3

# 40 "src/./engine/SDL2/SDL_thread.h" 2
# 49 "src/./engine/SDL2/SDL_thread.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 50 "src/./engine/SDL2/SDL_thread.h" 2







# 56 "src/./engine/SDL2/SDL_thread.h"
struct SDL_Thread;
typedef struct SDL_Thread SDL_Thread;


typedef unsigned long SDL_threadID;


typedef unsigned int SDL_TLSID;
# 75 "src/./engine/SDL2/SDL_thread.h"
typedef enum {
    SDL_THREAD_PRIORITY_LOW,
    SDL_THREAD_PRIORITY_NORMAL,
    SDL_THREAD_PRIORITY_HIGH,
    SDL_THREAD_PRIORITY_TIME_CRITICAL
} SDL_ThreadPriority;







typedef int ( * SDL_ThreadFunction) (void *data);
# 114 "src/./engine/SDL2/SDL_thread.h"
typedef uintptr_t (__attribute__((__cdecl__)) * pfnSDL_CurrentBeginThread)
                   (void *, unsigned, unsigned (__attribute__((__stdcall__)) *func)(void *),
                    void * , unsigned, unsigned * );
typedef void (__attribute__((__cdecl__)) * pfnSDL_CurrentEndThread) (unsigned code);
# 126 "src/./engine/SDL2/SDL_thread.h"
extern SDL_Thread *
SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data,
                 pfnSDL_CurrentBeginThread pfnBeginThread,
                 pfnSDL_CurrentEndThread pfnEndThread);

extern SDL_Thread *
SDL_CreateThreadWithStackSize(int ( * fn) (void *),
                 const char *name, const size_t stacksize, void *data,
                 pfnSDL_CurrentBeginThread pfnBeginThread,
                 pfnSDL_CurrentEndThread pfnEndThread);
# 272 "src/./engine/SDL2/SDL_thread.h"
extern const char * SDL_GetThreadName(SDL_Thread *thread);
# 290 "src/./engine/SDL2/SDL_thread.h"
extern SDL_threadID SDL_ThreadID(void);
# 307 "src/./engine/SDL2/SDL_thread.h"
extern SDL_threadID SDL_GetThreadID(SDL_Thread * thread);
# 322 "src/./engine/SDL2/SDL_thread.h"
extern int SDL_SetThreadPriority(SDL_ThreadPriority priority);
# 357 "src/./engine/SDL2/SDL_thread.h"
extern void SDL_WaitThread(SDL_Thread * thread, int *status);
# 393 "src/./engine/SDL2/SDL_thread.h"
extern void SDL_DetachThread(SDL_Thread * thread);
# 408 "src/./engine/SDL2/SDL_thread.h"
extern SDL_TLSID SDL_TLSCreate(void);
# 422 "src/./engine/SDL2/SDL_thread.h"
extern void * SDL_TLSGet(SDL_TLSID id);
# 447 "src/./engine/SDL2/SDL_thread.h"
extern int SDL_TLSSet(SDL_TLSID id, const void *value, void ( *destructor)(void*));






extern void SDL_TLSCleanup(void);





# 1 "src/./engine/SDL2/close_code.h" 1
# 461 "src/./engine/SDL2/SDL_thread.h" 2
# 38 "src/./engine/SDL2/SDL_audio.h" 2
# 1 "src/./engine/SDL2/SDL_rwops.h" 1
# 35 "src/./engine/SDL2/SDL_rwops.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 36 "src/./engine/SDL2/SDL_rwops.h" 2
# 55 "src/./engine/SDL2/SDL_rwops.h"
typedef struct SDL_RWops
{



    Sint64 ( * size) (struct SDL_RWops * context);







    Sint64 ( * seek) (struct SDL_RWops * context, Sint64 offset,
                             int whence);







    size_t ( * read) (struct SDL_RWops * context, void *ptr,
                             size_t size, size_t maxnum);







    size_t ( * write) (struct SDL_RWops * context, const void *ptr,
                              size_t size, size_t num);






    int ( * close) (struct SDL_RWops * context);

    Uint32 type;
    union
    {






        struct
        {
            SDL_bool append;
            void *h;
            struct
            {
                void *data;
                size_t size;
                size_t left;
            } buffer;
        } windowsio;
# 130 "src/./engine/SDL2/SDL_rwops.h"
        struct
        {
            SDL_bool autoclose;
            FILE *fp;
        } stdio;

        struct
        {
            Uint8 *base;
            Uint8 *here;
            Uint8 *stop;
        } mem;
        struct
        {
            void *data1;
            void *data2;
        } unknown;
    } hidden;

} SDL_RWops;
# 220 "src/./engine/SDL2/SDL_rwops.h"
extern SDL_RWops * SDL_RWFromFile(const char *file,
                                                  const char *mode);



extern SDL_RWops * SDL_RWFromFP(FILE * fp, SDL_bool autoclose);
# 294 "src/./engine/SDL2/SDL_rwops.h"
extern SDL_RWops * SDL_RWFromMem(void *mem, int size);
# 328 "src/./engine/SDL2/SDL_rwops.h"
extern SDL_RWops * SDL_RWFromConstMem(const void *mem,
                                                      int size);
# 357 "src/./engine/SDL2/SDL_rwops.h"
extern SDL_RWops * SDL_AllocRW(void);
# 381 "src/./engine/SDL2/SDL_rwops.h"
extern void SDL_FreeRW(SDL_RWops * area);
# 399 "src/./engine/SDL2/SDL_rwops.h"
extern Sint64 SDL_RWsize(SDL_RWops *context);
# 436 "src/./engine/SDL2/SDL_rwops.h"
extern Sint64 SDL_RWseek(SDL_RWops *context,
                                          Sint64 offset, int whence);
# 464 "src/./engine/SDL2/SDL_rwops.h"
extern Sint64 SDL_RWtell(SDL_RWops *context);
# 496 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_RWread(SDL_RWops *context,
                                          void *ptr, size_t size,
                                          size_t maxnum);
# 530 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_RWwrite(SDL_RWops *context,
                                           const void *ptr, size_t size,
                                           size_t num);
# 561 "src/./engine/SDL2/SDL_rwops.h"
extern int SDL_RWclose(SDL_RWops *context);
# 579 "src/./engine/SDL2/SDL_rwops.h"
extern void * SDL_LoadFile_RW(SDL_RWops *src,
                                              size_t *datasize,
                                              int freesrc);
# 601 "src/./engine/SDL2/SDL_rwops.h"
extern void * SDL_LoadFile(const char *file, size_t *datasize);
# 621 "src/./engine/SDL2/SDL_rwops.h"
extern Uint8 SDL_ReadU8(SDL_RWops * src);
# 637 "src/./engine/SDL2/SDL_rwops.h"
extern Uint16 SDL_ReadLE16(SDL_RWops * src);
# 653 "src/./engine/SDL2/SDL_rwops.h"
extern Uint16 SDL_ReadBE16(SDL_RWops * src);
# 669 "src/./engine/SDL2/SDL_rwops.h"
extern Uint32 SDL_ReadLE32(SDL_RWops * src);
# 685 "src/./engine/SDL2/SDL_rwops.h"
extern Uint32 SDL_ReadBE32(SDL_RWops * src);
# 701 "src/./engine/SDL2/SDL_rwops.h"
extern Uint64 SDL_ReadLE64(SDL_RWops * src);
# 717 "src/./engine/SDL2/SDL_rwops.h"
extern Uint64 SDL_ReadBE64(SDL_RWops * src);
# 739 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_WriteU8(SDL_RWops * dst, Uint8 value);
# 757 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_WriteLE16(SDL_RWops * dst, Uint16 value);
# 774 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_WriteBE16(SDL_RWops * dst, Uint16 value);
# 792 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_WriteLE32(SDL_RWops * dst, Uint32 value);
# 809 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_WriteBE32(SDL_RWops * dst, Uint32 value);
# 827 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_WriteLE64(SDL_RWops * dst, Uint64 value);
# 844 "src/./engine/SDL2/SDL_rwops.h"
extern size_t SDL_WriteBE64(SDL_RWops * dst, Uint64 value);






# 1 "src/./engine/SDL2/close_code.h" 1
# 852 "src/./engine/SDL2/SDL_rwops.h" 2
# 39 "src/./engine/SDL2/SDL_audio.h" 2

# 1 "src/./engine/SDL2/begin_code.h" 1
# 41 "src/./engine/SDL2/SDL_audio.h" 2
# 66 "src/./engine/SDL2/SDL_audio.h"
typedef Uint16 SDL_AudioFormat;
# 165 "src/./engine/SDL2/SDL_audio.h"
typedef void ( * SDL_AudioCallback) (void *userdata, Uint8 * stream,
                                            int len);
# 180 "src/./engine/SDL2/SDL_audio.h"
typedef struct SDL_AudioSpec
{
    int freq;
    SDL_AudioFormat format;
    Uint8 channels;
    Uint8 silence;
    Uint16 samples;
    Uint16 padding;
    Uint32 size;
    SDL_AudioCallback callback;
    void *userdata;
} SDL_AudioSpec;


struct SDL_AudioCVT;
typedef void ( * SDL_AudioFilter) (struct SDL_AudioCVT * cvt,
                                          SDL_AudioFormat format);
# 231 "src/./engine/SDL2/SDL_audio.h"
typedef struct SDL_AudioCVT
{
    int needed;
    SDL_AudioFormat src_format;
    SDL_AudioFormat dst_format;
    double rate_incr;
    Uint8 *buf;
    int len;
    int len_cvt;
    int len_mult;
    double len_ratio;
    SDL_AudioFilter filters[9 + 1];
    int filter_index;
} __attribute__((packed)) SDL_AudioCVT;
# 276 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_GetNumAudioDrivers(void);
# 298 "src/./engine/SDL2/SDL_audio.h"
extern const char * SDL_GetAudioDriver(int index);
# 325 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_AudioInit(const char *driver_name);
# 339 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_AudioQuit(void);
# 358 "src/./engine/SDL2/SDL_audio.h"
extern const char * SDL_GetCurrentAudioDriver(void);
# 407 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_OpenAudio(SDL_AudioSpec * desired,
                                          SDL_AudioSpec * obtained);
# 419 "src/./engine/SDL2/SDL_audio.h"
typedef Uint32 SDL_AudioDeviceID;
# 465 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_GetNumAudioDevices(int iscapture);
# 491 "src/./engine/SDL2/SDL_audio.h"
extern const char * SDL_GetAudioDeviceName(int index,
                                                           int iscapture);
# 516 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_GetAudioDeviceSpec(int index,
                                                   int iscapture,
                                                   SDL_AudioSpec *spec);
# 631 "src/./engine/SDL2/SDL_audio.h"
extern SDL_AudioDeviceID SDL_OpenAudioDevice(
                                                  const char *device,
                                                  int iscapture,
                                                  const SDL_AudioSpec *desired,
                                                  SDL_AudioSpec *obtained,
                                                  int allowed_changes);
# 646 "src/./engine/SDL2/SDL_audio.h"
typedef enum
{
    SDL_AUDIO_STOPPED = 0,
    SDL_AUDIO_PLAYING,
    SDL_AUDIO_PAUSED
} SDL_AudioStatus;
# 671 "src/./engine/SDL2/SDL_audio.h"
extern SDL_AudioStatus SDL_GetAudioStatus(void);
# 684 "src/./engine/SDL2/SDL_audio.h"
extern SDL_AudioStatus SDL_GetAudioDeviceStatus(SDL_AudioDeviceID dev);
# 717 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_PauseAudio(int pause_on);
# 747 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_PauseAudioDevice(SDL_AudioDeviceID dev,
                                                  int pause_on);
# 832 "src/./engine/SDL2/SDL_audio.h"
extern SDL_AudioSpec * SDL_LoadWAV_RW(SDL_RWops * src,
                                                      int freesrc,
                                                      SDL_AudioSpec * spec,
                                                      Uint8 ** audio_buf,
                                                      Uint32 * audio_len);
# 860 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_FreeWAV(Uint8 * audio_buf);
# 894 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_BuildAudioCVT(SDL_AudioCVT * cvt,
                                              SDL_AudioFormat src_format,
                                              Uint8 src_channels,
                                              int src_rate,
                                              SDL_AudioFormat dst_format,
                                              Uint8 dst_channels,
                                              int dst_rate);
# 940 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_ConvertAudio(SDL_AudioCVT * cvt);
# 950 "src/./engine/SDL2/SDL_audio.h"
struct _SDL_AudioStream;
typedef struct _SDL_AudioStream SDL_AudioStream;
# 973 "src/./engine/SDL2/SDL_audio.h"
extern SDL_AudioStream * SDL_NewAudioStream(const SDL_AudioFormat src_format,
                                           const Uint8 src_channels,
                                           const int src_rate,
                                           const SDL_AudioFormat dst_format,
                                           const Uint8 dst_channels,
                                           const int dst_rate);
# 997 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_AudioStreamPut(SDL_AudioStream *stream, const void *buf, int len);
# 1016 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_AudioStreamGet(SDL_AudioStream *stream, void *buf, int len);
# 1034 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_AudioStreamAvailable(SDL_AudioStream *stream);
# 1053 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_AudioStreamFlush(SDL_AudioStream *stream);
# 1067 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_AudioStreamClear(SDL_AudioStream *stream);
# 1081 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_FreeAudioStream(SDL_AudioStream *stream);
# 1107 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_MixAudio(Uint8 * dst, const Uint8 * src,
                                          Uint32 len, int volume);
# 1140 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_MixAudioFormat(Uint8 * dst,
                                                const Uint8 * src,
                                                SDL_AudioFormat format,
                                                Uint32 len, int volume);
# 1191 "src/./engine/SDL2/SDL_audio.h"
extern int SDL_QueueAudio(SDL_AudioDeviceID dev, const void *data, Uint32 len);
# 1239 "src/./engine/SDL2/SDL_audio.h"
extern Uint32 SDL_DequeueAudio(SDL_AudioDeviceID dev, void *data, Uint32 len);
# 1273 "src/./engine/SDL2/SDL_audio.h"
extern Uint32 SDL_GetQueuedAudioSize(SDL_AudioDeviceID dev);
# 1307 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_ClearQueuedAudio(SDL_AudioDeviceID dev);
# 1338 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_LockAudio(void);
# 1377 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_LockAudioDevice(SDL_AudioDeviceID dev);
# 1396 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_UnlockAudio(void);
# 1410 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_UnlockAudioDevice(SDL_AudioDeviceID dev);
# 1428 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_CloseAudio(void);
# 1452 "src/./engine/SDL2/SDL_audio.h"
extern void SDL_CloseAudioDevice(SDL_AudioDeviceID dev);





# 1 "src/./engine/SDL2/close_code.h" 1
# 1459 "src/./engine/SDL2/SDL_audio.h" 2
# 37 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_clipboard.h" 1
# 33 "src/./engine/SDL2/SDL_clipboard.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 34 "src/./engine/SDL2/SDL_clipboard.h" 2
# 53 "src/./engine/SDL2/SDL_clipboard.h"
extern int SDL_SetClipboardText(const char *text);
# 71 "src/./engine/SDL2/SDL_clipboard.h"
extern char * SDL_GetClipboardText(void);
# 83 "src/./engine/SDL2/SDL_clipboard.h"
extern SDL_bool SDL_HasClipboardText(void);






# 1 "src/./engine/SDL2/close_code.h" 1
# 91 "src/./engine/SDL2/SDL_clipboard.h" 2
# 38 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_cpuinfo.h" 1
# 118 "src/./engine/SDL2/SDL_cpuinfo.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 119 "src/./engine/SDL2/SDL_cpuinfo.h" 2
# 140 "src/./engine/SDL2/SDL_cpuinfo.h"
extern int SDL_GetCPUCount(void);
# 152 "src/./engine/SDL2/SDL_cpuinfo.h"
extern int SDL_GetCPUCacheLineSize(void);
# 174 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasRDTSC(void);
# 197 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasAltiVec(void);
# 219 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasMMX(void);
# 241 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_Has3DNow(void);
# 263 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasSSE(void);
# 285 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasSSE2(void);
# 307 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasSSE3(void);
# 329 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasSSE41(void);
# 351 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasSSE42(void);
# 373 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasAVX(void);
# 395 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasAVX2(void);
# 408 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasAVX512F(void);
# 423 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasARMSIMD(void);
# 434 "src/./engine/SDL2/SDL_cpuinfo.h"
extern SDL_bool SDL_HasNEON(void);
# 443 "src/./engine/SDL2/SDL_cpuinfo.h"
extern int SDL_GetSystemRAM(void);
# 462 "src/./engine/SDL2/SDL_cpuinfo.h"
extern size_t SDL_SIMDGetAlignment(void);
# 501 "src/./engine/SDL2/SDL_cpuinfo.h"
extern void * SDL_SIMDAlloc(const size_t len);
# 525 "src/./engine/SDL2/SDL_cpuinfo.h"
extern void * SDL_SIMDRealloc(void *mem, const size_t len);
# 549 "src/./engine/SDL2/SDL_cpuinfo.h"
extern void SDL_SIMDFree(void *ptr);





# 1 "src/./engine/SDL2/close_code.h" 1
# 556 "src/./engine/SDL2/SDL_cpuinfo.h" 2
# 39 "src/./engine/SDL2/SDL.h" 2


# 1 "src/./engine/SDL2/SDL_events.h" 1
# 33 "src/./engine/SDL2/SDL_events.h"
# 1 "src/./engine/SDL2/SDL_video.h" 1
# 32 "src/./engine/SDL2/SDL_video.h"
# 1 "src/./engine/SDL2/SDL_pixels.h" 1
# 34 "src/./engine/SDL2/SDL_pixels.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 35 "src/./engine/SDL2/SDL_pixels.h" 2
# 51 "src/./engine/SDL2/SDL_pixels.h"
typedef enum
{
    SDL_PIXELTYPE_UNKNOWN,
    SDL_PIXELTYPE_INDEX1,
    SDL_PIXELTYPE_INDEX4,
    SDL_PIXELTYPE_INDEX8,
    SDL_PIXELTYPE_PACKED8,
    SDL_PIXELTYPE_PACKED16,
    SDL_PIXELTYPE_PACKED32,
    SDL_PIXELTYPE_ARRAYU8,
    SDL_PIXELTYPE_ARRAYU16,
    SDL_PIXELTYPE_ARRAYU32,
    SDL_PIXELTYPE_ARRAYF16,
    SDL_PIXELTYPE_ARRAYF32
} SDL_PixelType;


typedef enum
{
    SDL_BITMAPORDER_NONE,
    SDL_BITMAPORDER_4321,
    SDL_BITMAPORDER_1234
} SDL_BitmapOrder;


typedef enum
{
    SDL_PACKEDORDER_NONE,
    SDL_PACKEDORDER_XRGB,
    SDL_PACKEDORDER_RGBX,
    SDL_PACKEDORDER_ARGB,
    SDL_PACKEDORDER_RGBA,
    SDL_PACKEDORDER_XBGR,
    SDL_PACKEDORDER_BGRX,
    SDL_PACKEDORDER_ABGR,
    SDL_PACKEDORDER_BGRA
} SDL_PackedOrder;




typedef enum
{
    SDL_ARRAYORDER_NONE,
    SDL_ARRAYORDER_RGB,
    SDL_ARRAYORDER_RGBA,
    SDL_ARRAYORDER_ARGB,
    SDL_ARRAYORDER_BGR,
    SDL_ARRAYORDER_BGRA,
    SDL_ARRAYORDER_ABGR
} SDL_ArrayOrder;


typedef enum
{
    SDL_PACKEDLAYOUT_NONE,
    SDL_PACKEDLAYOUT_332,
    SDL_PACKEDLAYOUT_4444,
    SDL_PACKEDLAYOUT_1555,
    SDL_PACKEDLAYOUT_5551,
    SDL_PACKEDLAYOUT_565,
    SDL_PACKEDLAYOUT_8888,
    SDL_PACKEDLAYOUT_2101010,
    SDL_PACKEDLAYOUT_1010102
} SDL_PackedLayout;
# 171 "src/./engine/SDL2/SDL_pixels.h"
typedef enum
{
    SDL_PIXELFORMAT_UNKNOWN,
    SDL_PIXELFORMAT_INDEX1LSB =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX1) << 24) | ((SDL_BITMAPORDER_4321) << 20) | ((0) << 16) | ((1) << 8) | ((0) << 0))
                                    ,
    SDL_PIXELFORMAT_INDEX1MSB =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX1) << 24) | ((SDL_BITMAPORDER_1234) << 20) | ((0) << 16) | ((1) << 8) | ((0) << 0))
                                    ,
    SDL_PIXELFORMAT_INDEX4LSB =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX4) << 24) | ((SDL_BITMAPORDER_4321) << 20) | ((0) << 16) | ((4) << 8) | ((0) << 0))
                                    ,
    SDL_PIXELFORMAT_INDEX4MSB =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX4) << 24) | ((SDL_BITMAPORDER_1234) << 20) | ((0) << 16) | ((4) << 8) | ((0) << 0))
                                    ,
    SDL_PIXELFORMAT_INDEX8 =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX8) << 24) | ((0) << 20) | ((0) << 16) | ((8) << 8) | ((1) << 0)),
    SDL_PIXELFORMAT_RGB332 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED8) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_332) << 16) | ((8) << 8) | ((1) << 0))
                                                          ,
    SDL_PIXELFORMAT_XRGB4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((12) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGB444 = SDL_PIXELFORMAT_XRGB4444,
    SDL_PIXELFORMAT_XBGR4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XBGR) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((12) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGR444 = SDL_PIXELFORMAT_XBGR4444,
    SDL_PIXELFORMAT_XRGB1555 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_1555) << 16) | ((15) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGB555 = SDL_PIXELFORMAT_XRGB1555,
    SDL_PIXELFORMAT_XBGR1555 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XBGR) << 20) | ((SDL_PACKEDLAYOUT_1555) << 16) | ((15) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGR555 = SDL_PIXELFORMAT_XBGR1555,
    SDL_PIXELFORMAT_ARGB4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_ARGB) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGBA4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_RGBA) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_ABGR4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_ABGR) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGRA4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_BGRA) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_ARGB1555 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_ARGB) << 20) | ((SDL_PACKEDLAYOUT_1555) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGBA5551 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_RGBA) << 20) | ((SDL_PACKEDLAYOUT_5551) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_ABGR1555 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_ABGR) << 20) | ((SDL_PACKEDLAYOUT_1555) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGRA5551 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_BGRA) << 20) | ((SDL_PACKEDLAYOUT_5551) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGB565 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_565) << 16) | ((16) << 8) | ((2) << 0))
                                                           ,
    SDL_PIXELFORMAT_BGR565 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XBGR) << 20) | ((SDL_PACKEDLAYOUT_565) << 16) | ((16) << 8) | ((2) << 0))
                                                           ,
    SDL_PIXELFORMAT_RGB24 =
        ((1 << 28) | ((SDL_PIXELTYPE_ARRAYU8) << 24) | ((SDL_ARRAYORDER_RGB) << 20) | ((0) << 16) | ((24) << 8) | ((3) << 0))
                                     ,
    SDL_PIXELFORMAT_BGR24 =
        ((1 << 28) | ((SDL_PIXELTYPE_ARRAYU8) << 24) | ((SDL_ARRAYORDER_BGR) << 20) | ((0) << 16) | ((24) << 8) | ((3) << 0))
                                     ,
    SDL_PIXELFORMAT_XRGB8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((24) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGB888 = SDL_PIXELFORMAT_XRGB8888,
    SDL_PIXELFORMAT_RGBX8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_RGBX) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((24) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_XBGR8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_XBGR) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((24) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGR888 = SDL_PIXELFORMAT_XBGR8888,
    SDL_PIXELFORMAT_BGRX8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_BGRX) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((24) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_ARGB8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_ARGB) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((32) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGBA8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_RGBA) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((32) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_ABGR8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_ABGR) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((32) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGRA8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_BGRA) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((32) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_ARGB2101010 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_ARGB) << 20) | ((SDL_PACKEDLAYOUT_2101010) << 16) | ((32) << 8) | ((4) << 0))
                                                               ,
# 280 "src/./engine/SDL2/SDL_pixels.h"
    SDL_PIXELFORMAT_RGBA32 = SDL_PIXELFORMAT_ABGR8888,
    SDL_PIXELFORMAT_ARGB32 = SDL_PIXELFORMAT_BGRA8888,
    SDL_PIXELFORMAT_BGRA32 = SDL_PIXELFORMAT_ARGB8888,
    SDL_PIXELFORMAT_ABGR32 = SDL_PIXELFORMAT_RGBA8888,


    SDL_PIXELFORMAT_YV12 =
        ((((Uint32)(((Uint8)(('Y'))))) << 0) | (((Uint32)(((Uint8)(('V'))))) << 8) | (((Uint32)(((Uint8)(('1'))))) << 16) | (((Uint32)(((Uint8)(('2'))))) << 24)),
    SDL_PIXELFORMAT_IYUV =
        ((((Uint32)(((Uint8)(('I'))))) << 0) | (((Uint32)(((Uint8)(('Y'))))) << 8) | (((Uint32)(((Uint8)(('U'))))) << 16) | (((Uint32)(((Uint8)(('V'))))) << 24)),
    SDL_PIXELFORMAT_YUY2 =
        ((((Uint32)(((Uint8)(('Y'))))) << 0) | (((Uint32)(((Uint8)(('U'))))) << 8) | (((Uint32)(((Uint8)(('Y'))))) << 16) | (((Uint32)(((Uint8)(('2'))))) << 24)),
    SDL_PIXELFORMAT_UYVY =
        ((((Uint32)(((Uint8)(('U'))))) << 0) | (((Uint32)(((Uint8)(('Y'))))) << 8) | (((Uint32)(((Uint8)(('V'))))) << 16) | (((Uint32)(((Uint8)(('Y'))))) << 24)),
    SDL_PIXELFORMAT_YVYU =
        ((((Uint32)(((Uint8)(('Y'))))) << 0) | (((Uint32)(((Uint8)(('V'))))) << 8) | (((Uint32)(((Uint8)(('Y'))))) << 16) | (((Uint32)(((Uint8)(('U'))))) << 24)),
    SDL_PIXELFORMAT_NV12 =
        ((((Uint32)(((Uint8)(('N'))))) << 0) | (((Uint32)(((Uint8)(('V'))))) << 8) | (((Uint32)(((Uint8)(('1'))))) << 16) | (((Uint32)(((Uint8)(('2'))))) << 24)),
    SDL_PIXELFORMAT_NV21 =
        ((((Uint32)(((Uint8)(('N'))))) << 0) | (((Uint32)(((Uint8)(('V'))))) << 8) | (((Uint32)(((Uint8)(('2'))))) << 16) | (((Uint32)(((Uint8)(('1'))))) << 24)),
    SDL_PIXELFORMAT_EXTERNAL_OES =
        ((((Uint32)(((Uint8)(('O'))))) << 0) | (((Uint32)(((Uint8)(('E'))))) << 8) | (((Uint32)(((Uint8)(('S'))))) << 16) | (((Uint32)(((Uint8)((' '))))) << 24))
} SDL_PixelFormatEnum;






typedef struct SDL_Color
{
    Uint8 r;
    Uint8 g;
    Uint8 b;
    Uint8 a;
} SDL_Color;


typedef struct SDL_Palette
{
    int ncolors;
    SDL_Color *colors;
    Uint32 version;
    int refcount;
} SDL_Palette;




typedef struct SDL_PixelFormat
{
    Uint32 format;
    SDL_Palette *palette;
    Uint8 BitsPerPixel;
    Uint8 BytesPerPixel;
    Uint8 padding[2];
    Uint32 Rmask;
    Uint32 Gmask;
    Uint32 Bmask;
    Uint32 Amask;
    Uint8 Rloss;
    Uint8 Gloss;
    Uint8 Bloss;
    Uint8 Aloss;
    Uint8 Rshift;
    Uint8 Gshift;
    Uint8 Bshift;
    Uint8 Ashift;
    int refcount;
    struct SDL_PixelFormat *next;
} SDL_PixelFormat;
# 361 "src/./engine/SDL2/SDL_pixels.h"
extern const char* SDL_GetPixelFormatName(Uint32 format);
# 379 "src/./engine/SDL2/SDL_pixels.h"
extern SDL_bool SDL_PixelFormatEnumToMasks(Uint32 format,
                                                            int *bpp,
                                                            Uint32 * Rmask,
                                                            Uint32 * Gmask,
                                                            Uint32 * Bmask,
                                                            Uint32 * Amask);
# 403 "src/./engine/SDL2/SDL_pixels.h"
extern Uint32 SDL_MasksToPixelFormatEnum(int bpp,
                                                          Uint32 Rmask,
                                                          Uint32 Gmask,
                                                          Uint32 Bmask,
                                                          Uint32 Amask);
# 424 "src/./engine/SDL2/SDL_pixels.h"
extern SDL_PixelFormat * SDL_AllocFormat(Uint32 pixel_format);
# 435 "src/./engine/SDL2/SDL_pixels.h"
extern void SDL_FreeFormat(SDL_PixelFormat *format);
# 451 "src/./engine/SDL2/SDL_pixels.h"
extern SDL_Palette * SDL_AllocPalette(int ncolors);
# 466 "src/./engine/SDL2/SDL_pixels.h"
extern int SDL_SetPixelFormatPalette(SDL_PixelFormat * format,
                                                      SDL_Palette *palette);
# 484 "src/./engine/SDL2/SDL_pixels.h"
extern int SDL_SetPaletteColors(SDL_Palette * palette,
                                                 const SDL_Color * colors,
                                                 int firstcolor, int ncolors);
# 497 "src/./engine/SDL2/SDL_pixels.h"
extern void SDL_FreePalette(SDL_Palette * palette);
# 529 "src/./engine/SDL2/SDL_pixels.h"
extern Uint32 SDL_MapRGB(const SDL_PixelFormat * format,
                                          Uint8 r, Uint8 g, Uint8 b);
# 564 "src/./engine/SDL2/SDL_pixels.h"
extern Uint32 SDL_MapRGBA(const SDL_PixelFormat * format,
                                           Uint8 r, Uint8 g, Uint8 b,
                                           Uint8 a);
# 589 "src/./engine/SDL2/SDL_pixels.h"
extern void SDL_GetRGB(Uint32 pixel,
                                        const SDL_PixelFormat * format,
                                        Uint8 * r, Uint8 * g, Uint8 * b);
# 618 "src/./engine/SDL2/SDL_pixels.h"
extern void SDL_GetRGBA(Uint32 pixel,
                                         const SDL_PixelFormat * format,
                                         Uint8 * r, Uint8 * g, Uint8 * b,
                                         Uint8 * a);
# 633 "src/./engine/SDL2/SDL_pixels.h"
extern void SDL_CalculateGammaRamp(float gamma, Uint16 * ramp);






# 1 "src/./engine/SDL2/close_code.h" 1
# 641 "src/./engine/SDL2/SDL_pixels.h" 2
# 33 "src/./engine/SDL2/SDL_video.h" 2
# 1 "src/./engine/SDL2/SDL_rect.h" 1
# 36 "src/./engine/SDL2/SDL_rect.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 37 "src/./engine/SDL2/SDL_rect.h" 2
# 48 "src/./engine/SDL2/SDL_rect.h"
typedef struct SDL_Point
{
    int x;
    int y;
} SDL_Point;
# 65 "src/./engine/SDL2/SDL_rect.h"
typedef struct SDL_FPoint
{
    float x;
    float y;
} SDL_FPoint;
# 82 "src/./engine/SDL2/SDL_rect.h"
typedef struct SDL_Rect
{
    int x, y;
    int w, h;
} SDL_Rect;





typedef struct SDL_FRect
{
    float x;
    float y;
    float w;
    float h;
} SDL_FRect;





__attribute__((always_inline)) static __inline__ SDL_bool SDL_PointInRect(const SDL_Point *p, const SDL_Rect *r)
{
    return ( (p->x >= r->x) && (p->x < (r->x + r->w)) &&
             (p->y >= r->y) && (p->y < (r->y + r->h)) ) ? SDL_TRUE : SDL_FALSE;
}




__attribute__((always_inline)) static __inline__ SDL_bool SDL_RectEmpty(const SDL_Rect *r)
{
    return ((!r) || (r->w <= 0) || (r->h <= 0)) ? SDL_TRUE : SDL_FALSE;
}




__attribute__((always_inline)) static __inline__ SDL_bool SDL_RectEquals(const SDL_Rect *a, const SDL_Rect *b)
{
    return (a && b && (a->x == b->x) && (a->y == b->y) &&
            (a->w == b->w) && (a->h == b->h)) ? SDL_TRUE : SDL_FALSE;
}
# 140 "src/./engine/SDL2/SDL_rect.h"
extern SDL_bool SDL_HasIntersection(const SDL_Rect * A,
                                                     const SDL_Rect * B);
# 158 "src/./engine/SDL2/SDL_rect.h"
extern SDL_bool SDL_IntersectRect(const SDL_Rect * A,
                                                   const SDL_Rect * B,
                                                   SDL_Rect * result);
# 172 "src/./engine/SDL2/SDL_rect.h"
extern void SDL_UnionRect(const SDL_Rect * A,
                                           const SDL_Rect * B,
                                           SDL_Rect * result);
# 193 "src/./engine/SDL2/SDL_rect.h"
extern SDL_bool SDL_EnclosePoints(const SDL_Point * points,
                                                   int count,
                                                   const SDL_Rect * clip,
                                                   SDL_Rect * result);
# 216 "src/./engine/SDL2/SDL_rect.h"
extern SDL_bool SDL_IntersectRectAndLine(const SDL_Rect *
                                                          rect, int *X1,
                                                          int *Y1, int *X2,
                                                          int *Y2);







__attribute__((always_inline)) static __inline__ SDL_bool SDL_PointInFRect(const SDL_FPoint *p, const SDL_FRect *r)
{
    return ( (p->x >= r->x) && (p->x < (r->x + r->w)) &&
             (p->y >= r->y) && (p->y < (r->y + r->h)) ) ? SDL_TRUE : SDL_FALSE;
}




__attribute__((always_inline)) static __inline__ SDL_bool SDL_FRectEmpty(const SDL_FRect *r)
{
    return ((!r) || (r->w <= 0.0f) || (r->h <= 0.0f)) ? SDL_TRUE : SDL_FALSE;
}




__attribute__((always_inline)) static __inline__ SDL_bool SDL_FRectEquals(const SDL_FRect *a, const SDL_FRect *b)
{
    return (a && b && (a->x == b->x) && (a->y == b->y) &&
            (a->w == b->w) && (a->h == b->h)) ? SDL_TRUE : SDL_FALSE;
}
# 263 "src/./engine/SDL2/SDL_rect.h"
extern SDL_bool SDL_HasIntersectionF(const SDL_FRect * A,
                                                      const SDL_FRect * B);
# 281 "src/./engine/SDL2/SDL_rect.h"
extern SDL_bool SDL_IntersectFRect(const SDL_FRect * A,
                                                    const SDL_FRect * B,
                                                    SDL_FRect * result);
# 295 "src/./engine/SDL2/SDL_rect.h"
extern void SDL_UnionFRect(const SDL_FRect * A,
                                            const SDL_FRect * B,
                                            SDL_FRect * result);
# 317 "src/./engine/SDL2/SDL_rect.h"
extern SDL_bool SDL_EncloseFPoints(const SDL_FPoint * points,
                                                    int count,
                                                    const SDL_FRect * clip,
                                                    SDL_FRect * result);
# 341 "src/./engine/SDL2/SDL_rect.h"
extern SDL_bool SDL_IntersectFRectAndLine(const SDL_FRect *
                                                           rect, float *X1,
                                                           float *Y1, float *X2,
                                                           float *Y2);





# 1 "src/./engine/SDL2/close_code.h" 1
# 351 "src/./engine/SDL2/SDL_rect.h" 2
# 34 "src/./engine/SDL2/SDL_video.h" 2
# 1 "src/./engine/SDL2/SDL_surface.h" 1
# 34 "src/./engine/SDL2/SDL_surface.h"
# 1 "src/./engine/SDL2/SDL_blendmode.h" 1
# 31 "src/./engine/SDL2/SDL_blendmode.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 32 "src/./engine/SDL2/SDL_blendmode.h" 2
# 40 "src/./engine/SDL2/SDL_blendmode.h"
typedef enum
{
    SDL_BLENDMODE_NONE = 0x00000000,

    SDL_BLENDMODE_BLEND = 0x00000001,


    SDL_BLENDMODE_ADD = 0x00000002,


    SDL_BLENDMODE_MOD = 0x00000004,


    SDL_BLENDMODE_MUL = 0x00000008,


    SDL_BLENDMODE_INVALID = 0x7FFFFFFF



} SDL_BlendMode;




typedef enum
{
    SDL_BLENDOPERATION_ADD = 0x1,
    SDL_BLENDOPERATION_SUBTRACT = 0x2,
    SDL_BLENDOPERATION_REV_SUBTRACT = 0x3,
    SDL_BLENDOPERATION_MINIMUM = 0x4,
    SDL_BLENDOPERATION_MAXIMUM = 0x5

} SDL_BlendOperation;




typedef enum
{
    SDL_BLENDFACTOR_ZERO = 0x1,
    SDL_BLENDFACTOR_ONE = 0x2,
    SDL_BLENDFACTOR_SRC_COLOR = 0x3,
    SDL_BLENDFACTOR_ONE_MINUS_SRC_COLOR = 0x4,
    SDL_BLENDFACTOR_SRC_ALPHA = 0x5,
    SDL_BLENDFACTOR_ONE_MINUS_SRC_ALPHA = 0x6,
    SDL_BLENDFACTOR_DST_COLOR = 0x7,
    SDL_BLENDFACTOR_ONE_MINUS_DST_COLOR = 0x8,
    SDL_BLENDFACTOR_DST_ALPHA = 0x9,
    SDL_BLENDFACTOR_ONE_MINUS_DST_ALPHA = 0xA

} SDL_BlendFactor;
# 185 "src/./engine/SDL2/SDL_blendmode.h"
extern SDL_BlendMode SDL_ComposeCustomBlendMode(SDL_BlendFactor srcColorFactor,
                                                                 SDL_BlendFactor dstColorFactor,
                                                                 SDL_BlendOperation colorOperation,
                                                                 SDL_BlendFactor srcAlphaFactor,
                                                                 SDL_BlendFactor dstAlphaFactor,
                                                                 SDL_BlendOperation alphaOperation);





# 1 "src/./engine/SDL2/close_code.h" 1
# 197 "src/./engine/SDL2/SDL_blendmode.h" 2
# 35 "src/./engine/SDL2/SDL_surface.h" 2


# 1 "src/./engine/SDL2/begin_code.h" 1
# 38 "src/./engine/SDL2/SDL_surface.h" 2
# 70 "src/./engine/SDL2/SDL_surface.h"
typedef struct SDL_Surface
{
    Uint32 flags;
    SDL_PixelFormat *format;
    int w, h;
    int pitch;
    void *pixels;


    void *userdata;


    int locked;


    void *list_blitmap;


    SDL_Rect clip_rect;


    struct SDL_BlitMap *map;


    int refcount;
} SDL_Surface;




typedef int ( *SDL_blit) (struct SDL_Surface * src, SDL_Rect * srcrect,
                                 struct SDL_Surface * dst, SDL_Rect * dstrect);




typedef enum
{
    SDL_YUV_CONVERSION_JPEG,
    SDL_YUV_CONVERSION_BT601,
    SDL_YUV_CONVERSION_BT709,
    SDL_YUV_CONVERSION_AUTOMATIC
} SDL_YUV_CONVERSION_MODE;
# 158 "src/./engine/SDL2/SDL_surface.h"
extern SDL_Surface * SDL_CreateRGBSurface
    (Uint32 flags, int width, int height, int depth,
     Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
# 186 "src/./engine/SDL2/SDL_surface.h"
extern SDL_Surface * SDL_CreateRGBSurfaceWithFormat
    (Uint32 flags, int width, int height, int depth, Uint32 format);
# 217 "src/./engine/SDL2/SDL_surface.h"
extern SDL_Surface * SDL_CreateRGBSurfaceFrom(void *pixels,
                                                              int width,
                                                              int height,
                                                              int depth,
                                                              int pitch,
                                                              Uint32 Rmask,
                                                              Uint32 Gmask,
                                                              Uint32 Bmask,
                                                              Uint32 Amask);
# 255 "src/./engine/SDL2/SDL_surface.h"
extern SDL_Surface * SDL_CreateRGBSurfaceWithFormatFrom
    (void *pixels, int width, int height, int depth, int pitch, Uint32 format);
# 272 "src/./engine/SDL2/SDL_surface.h"
extern void SDL_FreeSurface(SDL_Surface * surface);
# 286 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_SetSurfacePalette(SDL_Surface * surface,
                                                  SDL_Palette * palette);
# 310 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_LockSurface(SDL_Surface * surface);
# 321 "src/./engine/SDL2/SDL_surface.h"
extern void SDL_UnlockSurface(SDL_Surface * surface);
# 345 "src/./engine/SDL2/SDL_surface.h"
extern SDL_Surface * SDL_LoadBMP_RW(SDL_RWops * src,
                                                    int freesrc);
# 375 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_SaveBMP_RW
    (SDL_Surface * surface, SDL_RWops * dst, int freedst);
# 403 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_SetSurfaceRLE(SDL_Surface * surface,
                                              int flag);
# 418 "src/./engine/SDL2/SDL_surface.h"
extern SDL_bool SDL_HasSurfaceRLE(SDL_Surface * surface);
# 444 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_SetColorKey(SDL_Surface * surface,
                                            int flag, Uint32 key);
# 460 "src/./engine/SDL2/SDL_surface.h"
extern SDL_bool SDL_HasColorKey(SDL_Surface * surface);
# 480 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_GetColorKey(SDL_Surface * surface,
                                            Uint32 * key);
# 504 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_SetSurfaceColorMod(SDL_Surface * surface,
                                                   Uint8 r, Uint8 g, Uint8 b);
# 523 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_GetSurfaceColorMod(SDL_Surface * surface,
                                                   Uint8 * r, Uint8 * g,
                                                   Uint8 * b);
# 545 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_SetSurfaceAlphaMod(SDL_Surface * surface,
                                                   Uint8 alpha);
# 561 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_GetSurfaceAlphaMod(SDL_Surface * surface,
                                                   Uint8 * alpha);
# 580 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_SetSurfaceBlendMode(SDL_Surface * surface,
                                                    SDL_BlendMode blendMode);
# 595 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_GetSurfaceBlendMode(SDL_Surface * surface,
                                                    SDL_BlendMode *blendMode);
# 618 "src/./engine/SDL2/SDL_surface.h"
extern SDL_bool SDL_SetClipRect(SDL_Surface * surface,
                                                 const SDL_Rect * rect);
# 637 "src/./engine/SDL2/SDL_surface.h"
extern void SDL_GetClipRect(SDL_Surface * surface,
                                             SDL_Rect * rect);
# 649 "src/./engine/SDL2/SDL_surface.h"
extern SDL_Surface * SDL_DuplicateSurface(SDL_Surface * surface);
# 673 "src/./engine/SDL2/SDL_surface.h"
extern SDL_Surface * SDL_ConvertSurface
    (SDL_Surface * src, const SDL_PixelFormat * fmt, Uint32 flags);
# 698 "src/./engine/SDL2/SDL_surface.h"
extern SDL_Surface * SDL_ConvertSurfaceFormat
    (SDL_Surface * src, Uint32 pixel_format, Uint32 flags);
# 717 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_ConvertPixels(int width, int height,
                                              Uint32 src_format,
                                              const void * src, int src_pitch,
                                              Uint32 dst_format,
                                              void * dst, int dst_pitch);
# 743 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_PremultiplyAlpha(int width, int height,
                                                 Uint32 src_format,
                                                 const void * src, int src_pitch,
                                                 Uint32 dst_format,
                                                 void * dst, int dst_pitch);
# 772 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_FillRect
    (SDL_Surface * dst, const SDL_Rect * rect, Uint32 color);
# 798 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_FillRects
    (SDL_Surface * dst, const SDL_Rect * rects, int count, Uint32 color);
# 871 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_UpperBlit
    (SDL_Surface * src, const SDL_Rect * srcrect,
     SDL_Surface * dst, SDL_Rect * dstrect);
# 897 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_LowerBlit
    (SDL_Surface * src, SDL_Rect * srcrect,
     SDL_Surface * dst, SDL_Rect * dstrect);
# 910 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_SoftStretch(SDL_Surface * src,
                                            const SDL_Rect * srcrect,
                                            SDL_Surface * dst,
                                            const SDL_Rect * dstrect);






extern int SDL_SoftStretchLinear(SDL_Surface * src,
                                            const SDL_Rect * srcrect,
                                            SDL_Surface * dst,
                                            const SDL_Rect * dstrect);
# 938 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_UpperBlitScaled
    (SDL_Surface * src, const SDL_Rect * srcrect,
    SDL_Surface * dst, SDL_Rect * dstrect);
# 961 "src/./engine/SDL2/SDL_surface.h"
extern int SDL_LowerBlitScaled
    (SDL_Surface * src, SDL_Rect * srcrect,
    SDL_Surface * dst, SDL_Rect * dstrect);






extern void SDL_SetYUVConversionMode(SDL_YUV_CONVERSION_MODE mode);






extern SDL_YUV_CONVERSION_MODE SDL_GetYUVConversionMode(void);







extern SDL_YUV_CONVERSION_MODE SDL_GetYUVConversionModeForResolution(int width, int height);





# 1 "src/./engine/SDL2/close_code.h" 1
# 992 "src/./engine/SDL2/SDL_surface.h" 2
# 35 "src/./engine/SDL2/SDL_video.h" 2

# 1 "src/./engine/SDL2/begin_code.h" 1
# 37 "src/./engine/SDL2/SDL_video.h" 2
# 53 "src/./engine/SDL2/SDL_video.h"
typedef struct
{
    Uint32 format;
    int w;
    int h;
    int refresh_rate;
    void *driverdata;
} SDL_DisplayMode;
# 95 "src/./engine/SDL2/SDL_video.h"
typedef struct SDL_Window SDL_Window;






typedef enum
{
    SDL_WINDOW_FULLSCREEN = 0x00000001,
    SDL_WINDOW_OPENGL = 0x00000002,
    SDL_WINDOW_SHOWN = 0x00000004,
    SDL_WINDOW_HIDDEN = 0x00000008,
    SDL_WINDOW_BORDERLESS = 0x00000010,
    SDL_WINDOW_RESIZABLE = 0x00000020,
    SDL_WINDOW_MINIMIZED = 0x00000040,
    SDL_WINDOW_MAXIMIZED = 0x00000080,
    SDL_WINDOW_MOUSE_GRABBED = 0x00000100,
    SDL_WINDOW_INPUT_FOCUS = 0x00000200,
    SDL_WINDOW_MOUSE_FOCUS = 0x00000400,
    SDL_WINDOW_FULLSCREEN_DESKTOP = ( SDL_WINDOW_FULLSCREEN | 0x00001000 ),
    SDL_WINDOW_FOREIGN = 0x00000800,
    SDL_WINDOW_ALLOW_HIGHDPI = 0x00002000,


    SDL_WINDOW_MOUSE_CAPTURE = 0x00004000,
    SDL_WINDOW_ALWAYS_ON_TOP = 0x00008000,
    SDL_WINDOW_SKIP_TASKBAR = 0x00010000,
    SDL_WINDOW_UTILITY = 0x00020000,
    SDL_WINDOW_TOOLTIP = 0x00040000,
    SDL_WINDOW_POPUP_MENU = 0x00080000,
    SDL_WINDOW_KEYBOARD_GRABBED = 0x00100000,
    SDL_WINDOW_VULKAN = 0x10000000,
    SDL_WINDOW_METAL = 0x20000000,

    SDL_WINDOW_INPUT_GRABBED = SDL_WINDOW_MOUSE_GRABBED
} SDL_WindowFlags;
# 154 "src/./engine/SDL2/SDL_video.h"
typedef enum
{
    SDL_WINDOWEVENT_NONE,
    SDL_WINDOWEVENT_SHOWN,
    SDL_WINDOWEVENT_HIDDEN,
    SDL_WINDOWEVENT_EXPOSED,

    SDL_WINDOWEVENT_MOVED,

    SDL_WINDOWEVENT_RESIZED,
    SDL_WINDOWEVENT_SIZE_CHANGED,


    SDL_WINDOWEVENT_MINIMIZED,
    SDL_WINDOWEVENT_MAXIMIZED,
    SDL_WINDOWEVENT_RESTORED,

    SDL_WINDOWEVENT_ENTER,
    SDL_WINDOWEVENT_LEAVE,
    SDL_WINDOWEVENT_FOCUS_GAINED,
    SDL_WINDOWEVENT_FOCUS_LOST,
    SDL_WINDOWEVENT_CLOSE,
    SDL_WINDOWEVENT_TAKE_FOCUS,
    SDL_WINDOWEVENT_HIT_TEST,
    SDL_WINDOWEVENT_ICCPROF_CHANGED,
    SDL_WINDOWEVENT_DISPLAY_CHANGED
} SDL_WindowEventID;




typedef enum
{
    SDL_DISPLAYEVENT_NONE,
    SDL_DISPLAYEVENT_ORIENTATION,
    SDL_DISPLAYEVENT_CONNECTED,
    SDL_DISPLAYEVENT_DISCONNECTED
} SDL_DisplayEventID;




typedef enum
{
    SDL_ORIENTATION_UNKNOWN,
    SDL_ORIENTATION_LANDSCAPE,
    SDL_ORIENTATION_LANDSCAPE_FLIPPED,
    SDL_ORIENTATION_PORTRAIT,
    SDL_ORIENTATION_PORTRAIT_FLIPPED
} SDL_DisplayOrientation;




typedef enum
{
    SDL_FLASH_CANCEL,
    SDL_FLASH_BRIEFLY,
    SDL_FLASH_UNTIL_FOCUSED
} SDL_FlashOperation;




typedef void *SDL_GLContext;




typedef enum
{
    SDL_GL_RED_SIZE,
    SDL_GL_GREEN_SIZE,
    SDL_GL_BLUE_SIZE,
    SDL_GL_ALPHA_SIZE,
    SDL_GL_BUFFER_SIZE,
    SDL_GL_DOUBLEBUFFER,
    SDL_GL_DEPTH_SIZE,
    SDL_GL_STENCIL_SIZE,
    SDL_GL_ACCUM_RED_SIZE,
    SDL_GL_ACCUM_GREEN_SIZE,
    SDL_GL_ACCUM_BLUE_SIZE,
    SDL_GL_ACCUM_ALPHA_SIZE,
    SDL_GL_STEREO,
    SDL_GL_MULTISAMPLEBUFFERS,
    SDL_GL_MULTISAMPLESAMPLES,
    SDL_GL_ACCELERATED_VISUAL,
    SDL_GL_RETAINED_BACKING,
    SDL_GL_CONTEXT_MAJOR_VERSION,
    SDL_GL_CONTEXT_MINOR_VERSION,
    SDL_GL_CONTEXT_EGL,
    SDL_GL_CONTEXT_FLAGS,
    SDL_GL_CONTEXT_PROFILE_MASK,
    SDL_GL_SHARE_WITH_CURRENT_CONTEXT,
    SDL_GL_FRAMEBUFFER_SRGB_CAPABLE,
    SDL_GL_CONTEXT_RELEASE_BEHAVIOR,
    SDL_GL_CONTEXT_RESET_NOTIFICATION,
    SDL_GL_CONTEXT_NO_ERROR
} SDL_GLattr;

typedef enum
{
    SDL_GL_CONTEXT_PROFILE_CORE = 0x0001,
    SDL_GL_CONTEXT_PROFILE_COMPATIBILITY = 0x0002,
    SDL_GL_CONTEXT_PROFILE_ES = 0x0004
} SDL_GLprofile;

typedef enum
{
    SDL_GL_CONTEXT_DEBUG_FLAG = 0x0001,
    SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG = 0x0002,
    SDL_GL_CONTEXT_ROBUST_ACCESS_FLAG = 0x0004,
    SDL_GL_CONTEXT_RESET_ISOLATION_FLAG = 0x0008
} SDL_GLcontextFlag;

typedef enum
{
    SDL_GL_CONTEXT_RELEASE_BEHAVIOR_NONE = 0x0000,
    SDL_GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x0001
} SDL_GLcontextReleaseFlag;

typedef enum
{
    SDL_GL_CONTEXT_RESET_NO_NOTIFICATION = 0x0000,
    SDL_GL_CONTEXT_RESET_LOSE_CONTEXT = 0x0001
} SDL_GLContextResetNotification;
# 293 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetNumVideoDrivers(void);
# 308 "src/./engine/SDL2/SDL_video.h"
extern const char * SDL_GetVideoDriver(int index);
# 339 "src/./engine/SDL2/SDL_video.h"
extern int SDL_VideoInit(const char *driver_name);
# 350 "src/./engine/SDL2/SDL_video.h"
extern void SDL_VideoQuit(void);
# 363 "src/./engine/SDL2/SDL_video.h"
extern const char * SDL_GetCurrentVideoDriver(void);
# 375 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetNumVideoDisplays(void);
# 389 "src/./engine/SDL2/SDL_video.h"
extern const char * SDL_GetDisplayName(int displayIndex);
# 405 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetDisplayBounds(int displayIndex, SDL_Rect * rect);
# 436 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetDisplayUsableBounds(int displayIndex, SDL_Rect * rect);
# 462 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetDisplayDPI(int displayIndex, float * ddpi, float * hdpi, float * vdpi);
# 475 "src/./engine/SDL2/SDL_video.h"
extern SDL_DisplayOrientation SDL_GetDisplayOrientation(int displayIndex);
# 492 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetNumDisplayModes(int displayIndex);
# 516 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetDisplayMode(int displayIndex, int modeIndex,
                                               SDL_DisplayMode * mode);
# 539 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetDesktopDisplayMode(int displayIndex, SDL_DisplayMode * mode);
# 562 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetCurrentDisplayMode(int displayIndex, SDL_DisplayMode * mode);
# 588 "src/./engine/SDL2/SDL_video.h"
extern SDL_DisplayMode * SDL_GetClosestDisplayMode(int displayIndex, const SDL_DisplayMode * mode, SDL_DisplayMode * closest);
# 603 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetWindowDisplayIndex(SDL_Window * window);
# 624 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowDisplayMode(SDL_Window * window,
                                                     const SDL_DisplayMode * mode);
# 641 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetWindowDisplayMode(SDL_Window * window,
                                                     SDL_DisplayMode * mode);
# 656 "src/./engine/SDL2/SDL_video.h"
extern void* SDL_GetWindowICCProfile(SDL_Window * window, size_t* size);
# 668 "src/./engine/SDL2/SDL_video.h"
extern Uint32 SDL_GetWindowPixelFormat(SDL_Window * window);
# 738 "src/./engine/SDL2/SDL_video.h"
extern SDL_Window * SDL_CreateWindow(const char *title,
                                                      int x, int y, int w,
                                                      int h, Uint32 flags);
# 759 "src/./engine/SDL2/SDL_video.h"
extern SDL_Window * SDL_CreateWindowFrom(const void *data);
# 775 "src/./engine/SDL2/SDL_video.h"
extern Uint32 SDL_GetWindowID(SDL_Window * window);
# 791 "src/./engine/SDL2/SDL_video.h"
extern SDL_Window * SDL_GetWindowFromID(Uint32 id);
# 809 "src/./engine/SDL2/SDL_video.h"
extern Uint32 SDL_GetWindowFlags(SDL_Window * window);
# 823 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowTitle(SDL_Window * window,
                                                const char *title);
# 837 "src/./engine/SDL2/SDL_video.h"
extern const char * SDL_GetWindowTitle(SDL_Window * window);
# 847 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowIcon(SDL_Window * window,
                                               SDL_Surface * icon);
# 864 "src/./engine/SDL2/SDL_video.h"
extern void* SDL_SetWindowData(SDL_Window * window,
                                                const char *name,
                                                void *userdata);
# 879 "src/./engine/SDL2/SDL_video.h"
extern void * SDL_GetWindowData(SDL_Window * window,
                                                const char *name);
# 897 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowPosition(SDL_Window * window,
                                                   int x, int y);
# 916 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GetWindowPosition(SDL_Window * window,
                                                   int *x, int *y);
# 941 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowSize(SDL_Window * window, int w,
                                               int h);
# 968 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GetWindowSize(SDL_Window * window, int *w,
                                               int *h);
# 1003 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetWindowBordersSize(SDL_Window * window,
                                                     int *top, int *left,
                                                     int *bottom, int *right);
# 1019 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowMinimumSize(SDL_Window * window,
                                                      int min_w, int min_h);
# 1036 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GetWindowMinimumSize(SDL_Window * window,
                                                      int *w, int *h);
# 1051 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowMaximumSize(SDL_Window * window,
                                                      int max_w, int max_h);
# 1068 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GetWindowMaximumSize(SDL_Window * window,
                                                      int *w, int *h);
# 1087 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowBordered(SDL_Window * window,
                                                   SDL_bool bordered);
# 1106 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowResizable(SDL_Window * window,
                                                    SDL_bool resizable);
# 1123 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowAlwaysOnTop(SDL_Window * window,
                                                      SDL_bool on_top);
# 1136 "src/./engine/SDL2/SDL_video.h"
extern void SDL_ShowWindow(SDL_Window * window);
# 1147 "src/./engine/SDL2/SDL_video.h"
extern void SDL_HideWindow(SDL_Window * window);
# 1156 "src/./engine/SDL2/SDL_video.h"
extern void SDL_RaiseWindow(SDL_Window * window);
# 1168 "src/./engine/SDL2/SDL_video.h"
extern void SDL_MaximizeWindow(SDL_Window * window);
# 1180 "src/./engine/SDL2/SDL_video.h"
extern void SDL_MinimizeWindow(SDL_Window * window);
# 1192 "src/./engine/SDL2/SDL_video.h"
extern void SDL_RestoreWindow(SDL_Window * window);
# 1211 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowFullscreen(SDL_Window * window,
                                                    Uint32 flags);
# 1237 "src/./engine/SDL2/SDL_video.h"
extern SDL_Surface * SDL_GetWindowSurface(SDL_Window * window);
# 1256 "src/./engine/SDL2/SDL_video.h"
extern int SDL_UpdateWindowSurface(SDL_Window * window);
# 1278 "src/./engine/SDL2/SDL_video.h"
extern int SDL_UpdateWindowSurfaceRects(SDL_Window * window,
                                                         const SDL_Rect * rects,
                                                         int numrects);
# 1300 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowGrab(SDL_Window * window,
                                               SDL_bool grabbed);
# 1331 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowKeyboardGrab(SDL_Window * window,
                                                       SDL_bool grabbed);
# 1347 "src/./engine/SDL2/SDL_video.h"
extern void SDL_SetWindowMouseGrab(SDL_Window * window,
                                                    SDL_bool grabbed);
# 1360 "src/./engine/SDL2/SDL_video.h"
extern SDL_bool SDL_GetWindowGrab(SDL_Window * window);
# 1373 "src/./engine/SDL2/SDL_video.h"
extern SDL_bool SDL_GetWindowKeyboardGrab(SDL_Window * window);
# 1386 "src/./engine/SDL2/SDL_video.h"
extern SDL_bool SDL_GetWindowMouseGrab(SDL_Window * window);
# 1398 "src/./engine/SDL2/SDL_video.h"
extern SDL_Window * SDL_GetGrabbedWindow(void);
# 1417 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowMouseRect(SDL_Window * window, const SDL_Rect * rect);
# 1430 "src/./engine/SDL2/SDL_video.h"
extern const SDL_Rect * SDL_GetWindowMouseRect(SDL_Window * window);
# 1458 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowBrightness(SDL_Window * window, float brightness);
# 1477 "src/./engine/SDL2/SDL_video.h"
extern float SDL_GetWindowBrightness(SDL_Window * window);
# 1496 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowOpacity(SDL_Window * window, float opacity);
# 1517 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetWindowOpacity(SDL_Window * window, float * out_opacity);
# 1529 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowModalFor(SDL_Window * modal_window, SDL_Window * parent_window);
# 1546 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowInputFocus(SDL_Window * window);
# 1578 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowGammaRamp(SDL_Window * window,
                                                   const Uint16 * red,
                                                   const Uint16 * green,
                                                   const Uint16 * blue);
# 1606 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GetWindowGammaRamp(SDL_Window * window,
                                                   Uint16 * red,
                                                   Uint16 * green,
                                                   Uint16 * blue);






typedef enum
{
    SDL_HITTEST_NORMAL,
    SDL_HITTEST_DRAGGABLE,
    SDL_HITTEST_RESIZE_TOPLEFT,
    SDL_HITTEST_RESIZE_TOP,
    SDL_HITTEST_RESIZE_TOPRIGHT,
    SDL_HITTEST_RESIZE_RIGHT,
    SDL_HITTEST_RESIZE_BOTTOMRIGHT,
    SDL_HITTEST_RESIZE_BOTTOM,
    SDL_HITTEST_RESIZE_BOTTOMLEFT,
    SDL_HITTEST_RESIZE_LEFT
} SDL_HitTestResult;
# 1640 "src/./engine/SDL2/SDL_video.h"
typedef SDL_HitTestResult ( *SDL_HitTest)(SDL_Window *win,
                                                 const SDL_Point *area,
                                                 void *data);
# 1684 "src/./engine/SDL2/SDL_video.h"
extern int SDL_SetWindowHitTest(SDL_Window * window,
                                                 SDL_HitTest callback,
                                                 void *callback_data);
# 1698 "src/./engine/SDL2/SDL_video.h"
extern int SDL_FlashWindow(SDL_Window * window, SDL_FlashOperation operation);
# 1713 "src/./engine/SDL2/SDL_video.h"
extern void SDL_DestroyWindow(SDL_Window * window);
# 1732 "src/./engine/SDL2/SDL_video.h"
extern SDL_bool SDL_IsScreenSaverEnabled(void);
# 1742 "src/./engine/SDL2/SDL_video.h"
extern void SDL_EnableScreenSaver(void);
# 1755 "src/./engine/SDL2/SDL_video.h"
extern void SDL_DisableScreenSaver(void);
# 1783 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GL_LoadLibrary(const char *path);
# 1836 "src/./engine/SDL2/SDL_video.h"
extern void * SDL_GL_GetProcAddress(const char *proc);
# 1845 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GL_UnloadLibrary(void);
# 1866 "src/./engine/SDL2/SDL_video.h"
extern SDL_bool SDL_GL_ExtensionSupported(const char
                                                           *extension);
# 1877 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GL_ResetAttributes(void);
# 1897 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GL_SetAttribute(SDL_GLattr attr, int value);
# 1912 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GL_GetAttribute(SDL_GLattr attr, int *value);
# 1934 "src/./engine/SDL2/SDL_video.h"
extern SDL_GLContext SDL_GL_CreateContext(SDL_Window *
                                                           window);
# 1951 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GL_MakeCurrent(SDL_Window * window,
                                               SDL_GLContext context);
# 1962 "src/./engine/SDL2/SDL_video.h"
extern SDL_Window* SDL_GL_GetCurrentWindow(void);
# 1974 "src/./engine/SDL2/SDL_video.h"
extern SDL_GLContext SDL_GL_GetCurrentContext(void);
# 1996 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GL_GetDrawableSize(SDL_Window * window, int *w,
                                                    int *h);
# 2031 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GL_SetSwapInterval(int interval);
# 2048 "src/./engine/SDL2/SDL_video.h"
extern int SDL_GL_GetSwapInterval(void);
# 2064 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GL_SwapWindow(SDL_Window * window);
# 2075 "src/./engine/SDL2/SDL_video.h"
extern void SDL_GL_DeleteContext(SDL_GLContext context);
# 2084 "src/./engine/SDL2/SDL_video.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 2085 "src/./engine/SDL2/SDL_video.h" 2
# 34 "src/./engine/SDL2/SDL_events.h" 2
# 1 "src/./engine/SDL2/SDL_keyboard.h" 1
# 33 "src/./engine/SDL2/SDL_keyboard.h"
# 1 "src/./engine/SDL2/SDL_keycode.h" 1
# 32 "src/./engine/SDL2/SDL_keycode.h"
# 1 "src/./engine/SDL2/SDL_scancode.h" 1
# 43 "src/./engine/SDL2/SDL_scancode.h"
typedef enum
{
    SDL_SCANCODE_UNKNOWN = 0,
# 54 "src/./engine/SDL2/SDL_scancode.h"
    SDL_SCANCODE_A = 4,
    SDL_SCANCODE_B = 5,
    SDL_SCANCODE_C = 6,
    SDL_SCANCODE_D = 7,
    SDL_SCANCODE_E = 8,
    SDL_SCANCODE_F = 9,
    SDL_SCANCODE_G = 10,
    SDL_SCANCODE_H = 11,
    SDL_SCANCODE_I = 12,
    SDL_SCANCODE_J = 13,
    SDL_SCANCODE_K = 14,
    SDL_SCANCODE_L = 15,
    SDL_SCANCODE_M = 16,
    SDL_SCANCODE_N = 17,
    SDL_SCANCODE_O = 18,
    SDL_SCANCODE_P = 19,
    SDL_SCANCODE_Q = 20,
    SDL_SCANCODE_R = 21,
    SDL_SCANCODE_S = 22,
    SDL_SCANCODE_T = 23,
    SDL_SCANCODE_U = 24,
    SDL_SCANCODE_V = 25,
    SDL_SCANCODE_W = 26,
    SDL_SCANCODE_X = 27,
    SDL_SCANCODE_Y = 28,
    SDL_SCANCODE_Z = 29,

    SDL_SCANCODE_1 = 30,
    SDL_SCANCODE_2 = 31,
    SDL_SCANCODE_3 = 32,
    SDL_SCANCODE_4 = 33,
    SDL_SCANCODE_5 = 34,
    SDL_SCANCODE_6 = 35,
    SDL_SCANCODE_7 = 36,
    SDL_SCANCODE_8 = 37,
    SDL_SCANCODE_9 = 38,
    SDL_SCANCODE_0 = 39,

    SDL_SCANCODE_RETURN = 40,
    SDL_SCANCODE_ESCAPE = 41,
    SDL_SCANCODE_BACKSPACE = 42,
    SDL_SCANCODE_TAB = 43,
    SDL_SCANCODE_SPACE = 44,

    SDL_SCANCODE_MINUS = 45,
    SDL_SCANCODE_EQUALS = 46,
    SDL_SCANCODE_LEFTBRACKET = 47,
    SDL_SCANCODE_RIGHTBRACKET = 48,
    SDL_SCANCODE_BACKSLASH = 49,
# 116 "src/./engine/SDL2/SDL_scancode.h"
    SDL_SCANCODE_NONUSHASH = 50,
# 128 "src/./engine/SDL2/SDL_scancode.h"
    SDL_SCANCODE_SEMICOLON = 51,
    SDL_SCANCODE_APOSTROPHE = 52,
    SDL_SCANCODE_GRAVE = 53,
# 147 "src/./engine/SDL2/SDL_scancode.h"
    SDL_SCANCODE_COMMA = 54,
    SDL_SCANCODE_PERIOD = 55,
    SDL_SCANCODE_SLASH = 56,

    SDL_SCANCODE_CAPSLOCK = 57,

    SDL_SCANCODE_F1 = 58,
    SDL_SCANCODE_F2 = 59,
    SDL_SCANCODE_F3 = 60,
    SDL_SCANCODE_F4 = 61,
    SDL_SCANCODE_F5 = 62,
    SDL_SCANCODE_F6 = 63,
    SDL_SCANCODE_F7 = 64,
    SDL_SCANCODE_F8 = 65,
    SDL_SCANCODE_F9 = 66,
    SDL_SCANCODE_F10 = 67,
    SDL_SCANCODE_F11 = 68,
    SDL_SCANCODE_F12 = 69,

    SDL_SCANCODE_PRINTSCREEN = 70,
    SDL_SCANCODE_SCROLLLOCK = 71,
    SDL_SCANCODE_PAUSE = 72,
    SDL_SCANCODE_INSERT = 73,

    SDL_SCANCODE_HOME = 74,
    SDL_SCANCODE_PAGEUP = 75,
    SDL_SCANCODE_DELETE = 76,
    SDL_SCANCODE_END = 77,
    SDL_SCANCODE_PAGEDOWN = 78,
    SDL_SCANCODE_RIGHT = 79,
    SDL_SCANCODE_LEFT = 80,
    SDL_SCANCODE_DOWN = 81,
    SDL_SCANCODE_UP = 82,

    SDL_SCANCODE_NUMLOCKCLEAR = 83,

    SDL_SCANCODE_KP_DIVIDE = 84,
    SDL_SCANCODE_KP_MULTIPLY = 85,
    SDL_SCANCODE_KP_MINUS = 86,
    SDL_SCANCODE_KP_PLUS = 87,
    SDL_SCANCODE_KP_ENTER = 88,
    SDL_SCANCODE_KP_1 = 89,
    SDL_SCANCODE_KP_2 = 90,
    SDL_SCANCODE_KP_3 = 91,
    SDL_SCANCODE_KP_4 = 92,
    SDL_SCANCODE_KP_5 = 93,
    SDL_SCANCODE_KP_6 = 94,
    SDL_SCANCODE_KP_7 = 95,
    SDL_SCANCODE_KP_8 = 96,
    SDL_SCANCODE_KP_9 = 97,
    SDL_SCANCODE_KP_0 = 98,
    SDL_SCANCODE_KP_PERIOD = 99,

    SDL_SCANCODE_NONUSBACKSLASH = 100,
# 210 "src/./engine/SDL2/SDL_scancode.h"
    SDL_SCANCODE_APPLICATION = 101,
    SDL_SCANCODE_POWER = 102,


    SDL_SCANCODE_KP_EQUALS = 103,
    SDL_SCANCODE_F13 = 104,
    SDL_SCANCODE_F14 = 105,
    SDL_SCANCODE_F15 = 106,
    SDL_SCANCODE_F16 = 107,
    SDL_SCANCODE_F17 = 108,
    SDL_SCANCODE_F18 = 109,
    SDL_SCANCODE_F19 = 110,
    SDL_SCANCODE_F20 = 111,
    SDL_SCANCODE_F21 = 112,
    SDL_SCANCODE_F22 = 113,
    SDL_SCANCODE_F23 = 114,
    SDL_SCANCODE_F24 = 115,
    SDL_SCANCODE_EXECUTE = 116,
    SDL_SCANCODE_HELP = 117,
    SDL_SCANCODE_MENU = 118,
    SDL_SCANCODE_SELECT = 119,
    SDL_SCANCODE_STOP = 120,
    SDL_SCANCODE_AGAIN = 121,
    SDL_SCANCODE_UNDO = 122,
    SDL_SCANCODE_CUT = 123,
    SDL_SCANCODE_COPY = 124,
    SDL_SCANCODE_PASTE = 125,
    SDL_SCANCODE_FIND = 126,
    SDL_SCANCODE_MUTE = 127,
    SDL_SCANCODE_VOLUMEUP = 128,
    SDL_SCANCODE_VOLUMEDOWN = 129,




    SDL_SCANCODE_KP_COMMA = 133,
    SDL_SCANCODE_KP_EQUALSAS400 = 134,

    SDL_SCANCODE_INTERNATIONAL1 = 135,

    SDL_SCANCODE_INTERNATIONAL2 = 136,
    SDL_SCANCODE_INTERNATIONAL3 = 137,
    SDL_SCANCODE_INTERNATIONAL4 = 138,
    SDL_SCANCODE_INTERNATIONAL5 = 139,
    SDL_SCANCODE_INTERNATIONAL6 = 140,
    SDL_SCANCODE_INTERNATIONAL7 = 141,
    SDL_SCANCODE_INTERNATIONAL8 = 142,
    SDL_SCANCODE_INTERNATIONAL9 = 143,
    SDL_SCANCODE_LANG1 = 144,
    SDL_SCANCODE_LANG2 = 145,
    SDL_SCANCODE_LANG3 = 146,
    SDL_SCANCODE_LANG4 = 147,
    SDL_SCANCODE_LANG5 = 148,
    SDL_SCANCODE_LANG6 = 149,
    SDL_SCANCODE_LANG7 = 150,
    SDL_SCANCODE_LANG8 = 151,
    SDL_SCANCODE_LANG9 = 152,

    SDL_SCANCODE_ALTERASE = 153,
    SDL_SCANCODE_SYSREQ = 154,
    SDL_SCANCODE_CANCEL = 155,
    SDL_SCANCODE_CLEAR = 156,
    SDL_SCANCODE_PRIOR = 157,
    SDL_SCANCODE_RETURN2 = 158,
    SDL_SCANCODE_SEPARATOR = 159,
    SDL_SCANCODE_OUT = 160,
    SDL_SCANCODE_OPER = 161,
    SDL_SCANCODE_CLEARAGAIN = 162,
    SDL_SCANCODE_CRSEL = 163,
    SDL_SCANCODE_EXSEL = 164,

    SDL_SCANCODE_KP_00 = 176,
    SDL_SCANCODE_KP_000 = 177,
    SDL_SCANCODE_THOUSANDSSEPARATOR = 178,
    SDL_SCANCODE_DECIMALSEPARATOR = 179,
    SDL_SCANCODE_CURRENCYUNIT = 180,
    SDL_SCANCODE_CURRENCYSUBUNIT = 181,
    SDL_SCANCODE_KP_LEFTPAREN = 182,
    SDL_SCANCODE_KP_RIGHTPAREN = 183,
    SDL_SCANCODE_KP_LEFTBRACE = 184,
    SDL_SCANCODE_KP_RIGHTBRACE = 185,
    SDL_SCANCODE_KP_TAB = 186,
    SDL_SCANCODE_KP_BACKSPACE = 187,
    SDL_SCANCODE_KP_A = 188,
    SDL_SCANCODE_KP_B = 189,
    SDL_SCANCODE_KP_C = 190,
    SDL_SCANCODE_KP_D = 191,
    SDL_SCANCODE_KP_E = 192,
    SDL_SCANCODE_KP_F = 193,
    SDL_SCANCODE_KP_XOR = 194,
    SDL_SCANCODE_KP_POWER = 195,
    SDL_SCANCODE_KP_PERCENT = 196,
    SDL_SCANCODE_KP_LESS = 197,
    SDL_SCANCODE_KP_GREATER = 198,
    SDL_SCANCODE_KP_AMPERSAND = 199,
    SDL_SCANCODE_KP_DBLAMPERSAND = 200,
    SDL_SCANCODE_KP_VERTICALBAR = 201,
    SDL_SCANCODE_KP_DBLVERTICALBAR = 202,
    SDL_SCANCODE_KP_COLON = 203,
    SDL_SCANCODE_KP_HASH = 204,
    SDL_SCANCODE_KP_SPACE = 205,
    SDL_SCANCODE_KP_AT = 206,
    SDL_SCANCODE_KP_EXCLAM = 207,
    SDL_SCANCODE_KP_MEMSTORE = 208,
    SDL_SCANCODE_KP_MEMRECALL = 209,
    SDL_SCANCODE_KP_MEMCLEAR = 210,
    SDL_SCANCODE_KP_MEMADD = 211,
    SDL_SCANCODE_KP_MEMSUBTRACT = 212,
    SDL_SCANCODE_KP_MEMMULTIPLY = 213,
    SDL_SCANCODE_KP_MEMDIVIDE = 214,
    SDL_SCANCODE_KP_PLUSMINUS = 215,
    SDL_SCANCODE_KP_CLEAR = 216,
    SDL_SCANCODE_KP_CLEARENTRY = 217,
    SDL_SCANCODE_KP_BINARY = 218,
    SDL_SCANCODE_KP_OCTAL = 219,
    SDL_SCANCODE_KP_DECIMAL = 220,
    SDL_SCANCODE_KP_HEXADECIMAL = 221,

    SDL_SCANCODE_LCTRL = 224,
    SDL_SCANCODE_LSHIFT = 225,
    SDL_SCANCODE_LALT = 226,
    SDL_SCANCODE_LGUI = 227,
    SDL_SCANCODE_RCTRL = 228,
    SDL_SCANCODE_RSHIFT = 229,
    SDL_SCANCODE_RALT = 230,
    SDL_SCANCODE_RGUI = 231,

    SDL_SCANCODE_MODE = 257,
# 351 "src/./engine/SDL2/SDL_scancode.h"
    SDL_SCANCODE_AUDIONEXT = 258,
    SDL_SCANCODE_AUDIOPREV = 259,
    SDL_SCANCODE_AUDIOSTOP = 260,
    SDL_SCANCODE_AUDIOPLAY = 261,
    SDL_SCANCODE_AUDIOMUTE = 262,
    SDL_SCANCODE_MEDIASELECT = 263,
    SDL_SCANCODE_WWW = 264,
    SDL_SCANCODE_MAIL = 265,
    SDL_SCANCODE_CALCULATOR = 266,
    SDL_SCANCODE_COMPUTER = 267,
    SDL_SCANCODE_AC_SEARCH = 268,
    SDL_SCANCODE_AC_HOME = 269,
    SDL_SCANCODE_AC_BACK = 270,
    SDL_SCANCODE_AC_FORWARD = 271,
    SDL_SCANCODE_AC_STOP = 272,
    SDL_SCANCODE_AC_REFRESH = 273,
    SDL_SCANCODE_AC_BOOKMARKS = 274,
# 378 "src/./engine/SDL2/SDL_scancode.h"
    SDL_SCANCODE_BRIGHTNESSDOWN = 275,
    SDL_SCANCODE_BRIGHTNESSUP = 276,
    SDL_SCANCODE_DISPLAYSWITCH = 277,

    SDL_SCANCODE_KBDILLUMTOGGLE = 278,
    SDL_SCANCODE_KBDILLUMDOWN = 279,
    SDL_SCANCODE_KBDILLUMUP = 280,
    SDL_SCANCODE_EJECT = 281,
    SDL_SCANCODE_SLEEP = 282,

    SDL_SCANCODE_APP1 = 283,
    SDL_SCANCODE_APP2 = 284,
# 400 "src/./engine/SDL2/SDL_scancode.h"
    SDL_SCANCODE_AUDIOREWIND = 285,
    SDL_SCANCODE_AUDIOFASTFORWARD = 286,





    SDL_NUM_SCANCODES = 512

} SDL_Scancode;
# 33 "src/./engine/SDL2/SDL_keycode.h" 2
# 45 "src/./engine/SDL2/SDL_keycode.h"
typedef Sint32 SDL_Keycode;




typedef enum
{
    SDLK_UNKNOWN = 0,

    SDLK_RETURN = '\r',
    SDLK_ESCAPE = '\x1B',
    SDLK_BACKSPACE = '\b',
    SDLK_TAB = '\t',
    SDLK_SPACE = ' ',
    SDLK_EXCLAIM = '!',
    SDLK_QUOTEDBL = '"',
    SDLK_HASH = '#',
    SDLK_PERCENT = '%',
    SDLK_DOLLAR = '$',
    SDLK_AMPERSAND = '&',
    SDLK_QUOTE = '\'',
    SDLK_LEFTPAREN = '(',
    SDLK_RIGHTPAREN = ')',
    SDLK_ASTERISK = '*',
    SDLK_PLUS = '+',
    SDLK_COMMA = ',',
    SDLK_MINUS = '-',
    SDLK_PERIOD = '.',
    SDLK_SLASH = '/',
    SDLK_0 = '0',
    SDLK_1 = '1',
    SDLK_2 = '2',
    SDLK_3 = '3',
    SDLK_4 = '4',
    SDLK_5 = '5',
    SDLK_6 = '6',
    SDLK_7 = '7',
    SDLK_8 = '8',
    SDLK_9 = '9',
    SDLK_COLON = ':',
    SDLK_SEMICOLON = ';',
    SDLK_LESS = '<',
    SDLK_EQUALS = '=',
    SDLK_GREATER = '>',
    SDLK_QUESTION = '?',
    SDLK_AT = '@',





    SDLK_LEFTBRACKET = '[',
    SDLK_BACKSLASH = '\\',
    SDLK_RIGHTBRACKET = ']',
    SDLK_CARET = '^',
    SDLK_UNDERSCORE = '_',
    SDLK_BACKQUOTE = '`',
    SDLK_a = 'a',
    SDLK_b = 'b',
    SDLK_c = 'c',
    SDLK_d = 'd',
    SDLK_e = 'e',
    SDLK_f = 'f',
    SDLK_g = 'g',
    SDLK_h = 'h',
    SDLK_i = 'i',
    SDLK_j = 'j',
    SDLK_k = 'k',
    SDLK_l = 'l',
    SDLK_m = 'm',
    SDLK_n = 'n',
    SDLK_o = 'o',
    SDLK_p = 'p',
    SDLK_q = 'q',
    SDLK_r = 'r',
    SDLK_s = 's',
    SDLK_t = 't',
    SDLK_u = 'u',
    SDLK_v = 'v',
    SDLK_w = 'w',
    SDLK_x = 'x',
    SDLK_y = 'y',
    SDLK_z = 'z',

    SDLK_CAPSLOCK = (SDL_SCANCODE_CAPSLOCK | (1<<30)),

    SDLK_F1 = (SDL_SCANCODE_F1 | (1<<30)),
    SDLK_F2 = (SDL_SCANCODE_F2 | (1<<30)),
    SDLK_F3 = (SDL_SCANCODE_F3 | (1<<30)),
    SDLK_F4 = (SDL_SCANCODE_F4 | (1<<30)),
    SDLK_F5 = (SDL_SCANCODE_F5 | (1<<30)),
    SDLK_F6 = (SDL_SCANCODE_F6 | (1<<30)),
    SDLK_F7 = (SDL_SCANCODE_F7 | (1<<30)),
    SDLK_F8 = (SDL_SCANCODE_F8 | (1<<30)),
    SDLK_F9 = (SDL_SCANCODE_F9 | (1<<30)),
    SDLK_F10 = (SDL_SCANCODE_F10 | (1<<30)),
    SDLK_F11 = (SDL_SCANCODE_F11 | (1<<30)),
    SDLK_F12 = (SDL_SCANCODE_F12 | (1<<30)),

    SDLK_PRINTSCREEN = (SDL_SCANCODE_PRINTSCREEN | (1<<30)),
    SDLK_SCROLLLOCK = (SDL_SCANCODE_SCROLLLOCK | (1<<30)),
    SDLK_PAUSE = (SDL_SCANCODE_PAUSE | (1<<30)),
    SDLK_INSERT = (SDL_SCANCODE_INSERT | (1<<30)),
    SDLK_HOME = (SDL_SCANCODE_HOME | (1<<30)),
    SDLK_PAGEUP = (SDL_SCANCODE_PAGEUP | (1<<30)),
    SDLK_DELETE = '\x7F',
    SDLK_END = (SDL_SCANCODE_END | (1<<30)),
    SDLK_PAGEDOWN = (SDL_SCANCODE_PAGEDOWN | (1<<30)),
    SDLK_RIGHT = (SDL_SCANCODE_RIGHT | (1<<30)),
    SDLK_LEFT = (SDL_SCANCODE_LEFT | (1<<30)),
    SDLK_DOWN = (SDL_SCANCODE_DOWN | (1<<30)),
    SDLK_UP = (SDL_SCANCODE_UP | (1<<30)),

    SDLK_NUMLOCKCLEAR = (SDL_SCANCODE_NUMLOCKCLEAR | (1<<30)),
    SDLK_KP_DIVIDE = (SDL_SCANCODE_KP_DIVIDE | (1<<30)),
    SDLK_KP_MULTIPLY = (SDL_SCANCODE_KP_MULTIPLY | (1<<30)),
    SDLK_KP_MINUS = (SDL_SCANCODE_KP_MINUS | (1<<30)),
    SDLK_KP_PLUS = (SDL_SCANCODE_KP_PLUS | (1<<30)),
    SDLK_KP_ENTER = (SDL_SCANCODE_KP_ENTER | (1<<30)),
    SDLK_KP_1 = (SDL_SCANCODE_KP_1 | (1<<30)),
    SDLK_KP_2 = (SDL_SCANCODE_KP_2 | (1<<30)),
    SDLK_KP_3 = (SDL_SCANCODE_KP_3 | (1<<30)),
    SDLK_KP_4 = (SDL_SCANCODE_KP_4 | (1<<30)),
    SDLK_KP_5 = (SDL_SCANCODE_KP_5 | (1<<30)),
    SDLK_KP_6 = (SDL_SCANCODE_KP_6 | (1<<30)),
    SDLK_KP_7 = (SDL_SCANCODE_KP_7 | (1<<30)),
    SDLK_KP_8 = (SDL_SCANCODE_KP_8 | (1<<30)),
    SDLK_KP_9 = (SDL_SCANCODE_KP_9 | (1<<30)),
    SDLK_KP_0 = (SDL_SCANCODE_KP_0 | (1<<30)),
    SDLK_KP_PERIOD = (SDL_SCANCODE_KP_PERIOD | (1<<30)),

    SDLK_APPLICATION = (SDL_SCANCODE_APPLICATION | (1<<30)),
    SDLK_POWER = (SDL_SCANCODE_POWER | (1<<30)),
    SDLK_KP_EQUALS = (SDL_SCANCODE_KP_EQUALS | (1<<30)),
    SDLK_F13 = (SDL_SCANCODE_F13 | (1<<30)),
    SDLK_F14 = (SDL_SCANCODE_F14 | (1<<30)),
    SDLK_F15 = (SDL_SCANCODE_F15 | (1<<30)),
    SDLK_F16 = (SDL_SCANCODE_F16 | (1<<30)),
    SDLK_F17 = (SDL_SCANCODE_F17 | (1<<30)),
    SDLK_F18 = (SDL_SCANCODE_F18 | (1<<30)),
    SDLK_F19 = (SDL_SCANCODE_F19 | (1<<30)),
    SDLK_F20 = (SDL_SCANCODE_F20 | (1<<30)),
    SDLK_F21 = (SDL_SCANCODE_F21 | (1<<30)),
    SDLK_F22 = (SDL_SCANCODE_F22 | (1<<30)),
    SDLK_F23 = (SDL_SCANCODE_F23 | (1<<30)),
    SDLK_F24 = (SDL_SCANCODE_F24 | (1<<30)),
    SDLK_EXECUTE = (SDL_SCANCODE_EXECUTE | (1<<30)),
    SDLK_HELP = (SDL_SCANCODE_HELP | (1<<30)),
    SDLK_MENU = (SDL_SCANCODE_MENU | (1<<30)),
    SDLK_SELECT = (SDL_SCANCODE_SELECT | (1<<30)),
    SDLK_STOP = (SDL_SCANCODE_STOP | (1<<30)),
    SDLK_AGAIN = (SDL_SCANCODE_AGAIN | (1<<30)),
    SDLK_UNDO = (SDL_SCANCODE_UNDO | (1<<30)),
    SDLK_CUT = (SDL_SCANCODE_CUT | (1<<30)),
    SDLK_COPY = (SDL_SCANCODE_COPY | (1<<30)),
    SDLK_PASTE = (SDL_SCANCODE_PASTE | (1<<30)),
    SDLK_FIND = (SDL_SCANCODE_FIND | (1<<30)),
    SDLK_MUTE = (SDL_SCANCODE_MUTE | (1<<30)),
    SDLK_VOLUMEUP = (SDL_SCANCODE_VOLUMEUP | (1<<30)),
    SDLK_VOLUMEDOWN = (SDL_SCANCODE_VOLUMEDOWN | (1<<30)),
    SDLK_KP_COMMA = (SDL_SCANCODE_KP_COMMA | (1<<30)),
    SDLK_KP_EQUALSAS400 =
        (SDL_SCANCODE_KP_EQUALSAS400 | (1<<30)),

    SDLK_ALTERASE = (SDL_SCANCODE_ALTERASE | (1<<30)),
    SDLK_SYSREQ = (SDL_SCANCODE_SYSREQ | (1<<30)),
    SDLK_CANCEL = (SDL_SCANCODE_CANCEL | (1<<30)),
    SDLK_CLEAR = (SDL_SCANCODE_CLEAR | (1<<30)),
    SDLK_PRIOR = (SDL_SCANCODE_PRIOR | (1<<30)),
    SDLK_RETURN2 = (SDL_SCANCODE_RETURN2 | (1<<30)),
    SDLK_SEPARATOR = (SDL_SCANCODE_SEPARATOR | (1<<30)),
    SDLK_OUT = (SDL_SCANCODE_OUT | (1<<30)),
    SDLK_OPER = (SDL_SCANCODE_OPER | (1<<30)),
    SDLK_CLEARAGAIN = (SDL_SCANCODE_CLEARAGAIN | (1<<30)),
    SDLK_CRSEL = (SDL_SCANCODE_CRSEL | (1<<30)),
    SDLK_EXSEL = (SDL_SCANCODE_EXSEL | (1<<30)),

    SDLK_KP_00 = (SDL_SCANCODE_KP_00 | (1<<30)),
    SDLK_KP_000 = (SDL_SCANCODE_KP_000 | (1<<30)),
    SDLK_THOUSANDSSEPARATOR =
        (SDL_SCANCODE_THOUSANDSSEPARATOR | (1<<30)),
    SDLK_DECIMALSEPARATOR =
        (SDL_SCANCODE_DECIMALSEPARATOR | (1<<30)),
    SDLK_CURRENCYUNIT = (SDL_SCANCODE_CURRENCYUNIT | (1<<30)),
    SDLK_CURRENCYSUBUNIT =
        (SDL_SCANCODE_CURRENCYSUBUNIT | (1<<30)),
    SDLK_KP_LEFTPAREN = (SDL_SCANCODE_KP_LEFTPAREN | (1<<30)),
    SDLK_KP_RIGHTPAREN = (SDL_SCANCODE_KP_RIGHTPAREN | (1<<30)),
    SDLK_KP_LEFTBRACE = (SDL_SCANCODE_KP_LEFTBRACE | (1<<30)),
    SDLK_KP_RIGHTBRACE = (SDL_SCANCODE_KP_RIGHTBRACE | (1<<30)),
    SDLK_KP_TAB = (SDL_SCANCODE_KP_TAB | (1<<30)),
    SDLK_KP_BACKSPACE = (SDL_SCANCODE_KP_BACKSPACE | (1<<30)),
    SDLK_KP_A = (SDL_SCANCODE_KP_A | (1<<30)),
    SDLK_KP_B = (SDL_SCANCODE_KP_B | (1<<30)),
    SDLK_KP_C = (SDL_SCANCODE_KP_C | (1<<30)),
    SDLK_KP_D = (SDL_SCANCODE_KP_D | (1<<30)),
    SDLK_KP_E = (SDL_SCANCODE_KP_E | (1<<30)),
    SDLK_KP_F = (SDL_SCANCODE_KP_F | (1<<30)),
    SDLK_KP_XOR = (SDL_SCANCODE_KP_XOR | (1<<30)),
    SDLK_KP_POWER = (SDL_SCANCODE_KP_POWER | (1<<30)),
    SDLK_KP_PERCENT = (SDL_SCANCODE_KP_PERCENT | (1<<30)),
    SDLK_KP_LESS = (SDL_SCANCODE_KP_LESS | (1<<30)),
    SDLK_KP_GREATER = (SDL_SCANCODE_KP_GREATER | (1<<30)),
    SDLK_KP_AMPERSAND = (SDL_SCANCODE_KP_AMPERSAND | (1<<30)),
    SDLK_KP_DBLAMPERSAND =
        (SDL_SCANCODE_KP_DBLAMPERSAND | (1<<30)),
    SDLK_KP_VERTICALBAR =
        (SDL_SCANCODE_KP_VERTICALBAR | (1<<30)),
    SDLK_KP_DBLVERTICALBAR =
        (SDL_SCANCODE_KP_DBLVERTICALBAR | (1<<30)),
    SDLK_KP_COLON = (SDL_SCANCODE_KP_COLON | (1<<30)),
    SDLK_KP_HASH = (SDL_SCANCODE_KP_HASH | (1<<30)),
    SDLK_KP_SPACE = (SDL_SCANCODE_KP_SPACE | (1<<30)),
    SDLK_KP_AT = (SDL_SCANCODE_KP_AT | (1<<30)),
    SDLK_KP_EXCLAM = (SDL_SCANCODE_KP_EXCLAM | (1<<30)),
    SDLK_KP_MEMSTORE = (SDL_SCANCODE_KP_MEMSTORE | (1<<30)),
    SDLK_KP_MEMRECALL = (SDL_SCANCODE_KP_MEMRECALL | (1<<30)),
    SDLK_KP_MEMCLEAR = (SDL_SCANCODE_KP_MEMCLEAR | (1<<30)),
    SDLK_KP_MEMADD = (SDL_SCANCODE_KP_MEMADD | (1<<30)),
    SDLK_KP_MEMSUBTRACT =
        (SDL_SCANCODE_KP_MEMSUBTRACT | (1<<30)),
    SDLK_KP_MEMMULTIPLY =
        (SDL_SCANCODE_KP_MEMMULTIPLY | (1<<30)),
    SDLK_KP_MEMDIVIDE = (SDL_SCANCODE_KP_MEMDIVIDE | (1<<30)),
    SDLK_KP_PLUSMINUS = (SDL_SCANCODE_KP_PLUSMINUS | (1<<30)),
    SDLK_KP_CLEAR = (SDL_SCANCODE_KP_CLEAR | (1<<30)),
    SDLK_KP_CLEARENTRY = (SDL_SCANCODE_KP_CLEARENTRY | (1<<30)),
    SDLK_KP_BINARY = (SDL_SCANCODE_KP_BINARY | (1<<30)),
    SDLK_KP_OCTAL = (SDL_SCANCODE_KP_OCTAL | (1<<30)),
    SDLK_KP_DECIMAL = (SDL_SCANCODE_KP_DECIMAL | (1<<30)),
    SDLK_KP_HEXADECIMAL =
        (SDL_SCANCODE_KP_HEXADECIMAL | (1<<30)),

    SDLK_LCTRL = (SDL_SCANCODE_LCTRL | (1<<30)),
    SDLK_LSHIFT = (SDL_SCANCODE_LSHIFT | (1<<30)),
    SDLK_LALT = (SDL_SCANCODE_LALT | (1<<30)),
    SDLK_LGUI = (SDL_SCANCODE_LGUI | (1<<30)),
    SDLK_RCTRL = (SDL_SCANCODE_RCTRL | (1<<30)),
    SDLK_RSHIFT = (SDL_SCANCODE_RSHIFT | (1<<30)),
    SDLK_RALT = (SDL_SCANCODE_RALT | (1<<30)),
    SDLK_RGUI = (SDL_SCANCODE_RGUI | (1<<30)),

    SDLK_MODE = (SDL_SCANCODE_MODE | (1<<30)),

    SDLK_AUDIONEXT = (SDL_SCANCODE_AUDIONEXT | (1<<30)),
    SDLK_AUDIOPREV = (SDL_SCANCODE_AUDIOPREV | (1<<30)),
    SDLK_AUDIOSTOP = (SDL_SCANCODE_AUDIOSTOP | (1<<30)),
    SDLK_AUDIOPLAY = (SDL_SCANCODE_AUDIOPLAY | (1<<30)),
    SDLK_AUDIOMUTE = (SDL_SCANCODE_AUDIOMUTE | (1<<30)),
    SDLK_MEDIASELECT = (SDL_SCANCODE_MEDIASELECT | (1<<30)),
    SDLK_WWW = (SDL_SCANCODE_WWW | (1<<30)),
    SDLK_MAIL = (SDL_SCANCODE_MAIL | (1<<30)),
    SDLK_CALCULATOR = (SDL_SCANCODE_CALCULATOR | (1<<30)),
    SDLK_COMPUTER = (SDL_SCANCODE_COMPUTER | (1<<30)),
    SDLK_AC_SEARCH = (SDL_SCANCODE_AC_SEARCH | (1<<30)),
    SDLK_AC_HOME = (SDL_SCANCODE_AC_HOME | (1<<30)),
    SDLK_AC_BACK = (SDL_SCANCODE_AC_BACK | (1<<30)),
    SDLK_AC_FORWARD = (SDL_SCANCODE_AC_FORWARD | (1<<30)),
    SDLK_AC_STOP = (SDL_SCANCODE_AC_STOP | (1<<30)),
    SDLK_AC_REFRESH = (SDL_SCANCODE_AC_REFRESH | (1<<30)),
    SDLK_AC_BOOKMARKS = (SDL_SCANCODE_AC_BOOKMARKS | (1<<30)),

    SDLK_BRIGHTNESSDOWN =
        (SDL_SCANCODE_BRIGHTNESSDOWN | (1<<30)),
    SDLK_BRIGHTNESSUP = (SDL_SCANCODE_BRIGHTNESSUP | (1<<30)),
    SDLK_DISPLAYSWITCH = (SDL_SCANCODE_DISPLAYSWITCH | (1<<30)),
    SDLK_KBDILLUMTOGGLE =
        (SDL_SCANCODE_KBDILLUMTOGGLE | (1<<30)),
    SDLK_KBDILLUMDOWN = (SDL_SCANCODE_KBDILLUMDOWN | (1<<30)),
    SDLK_KBDILLUMUP = (SDL_SCANCODE_KBDILLUMUP | (1<<30)),
    SDLK_EJECT = (SDL_SCANCODE_EJECT | (1<<30)),
    SDLK_SLEEP = (SDL_SCANCODE_SLEEP | (1<<30)),
    SDLK_APP1 = (SDL_SCANCODE_APP1 | (1<<30)),
    SDLK_APP2 = (SDL_SCANCODE_APP2 | (1<<30)),

    SDLK_AUDIOREWIND = (SDL_SCANCODE_AUDIOREWIND | (1<<30)),
    SDLK_AUDIOFASTFORWARD = (SDL_SCANCODE_AUDIOFASTFORWARD | (1<<30))
} SDL_KeyCode;




typedef enum
{
    KMOD_NONE = 0x0000,
    KMOD_LSHIFT = 0x0001,
    KMOD_RSHIFT = 0x0002,
    KMOD_LCTRL = 0x0040,
    KMOD_RCTRL = 0x0080,
    KMOD_LALT = 0x0100,
    KMOD_RALT = 0x0200,
    KMOD_LGUI = 0x0400,
    KMOD_RGUI = 0x0800,
    KMOD_NUM = 0x1000,
    KMOD_CAPS = 0x2000,
    KMOD_MODE = 0x4000,
    KMOD_SCROLL = 0x8000,

    KMOD_CTRL = KMOD_LCTRL | KMOD_RCTRL,
    KMOD_SHIFT = KMOD_LSHIFT | KMOD_RSHIFT,
    KMOD_ALT = KMOD_LALT | KMOD_RALT,
    KMOD_GUI = KMOD_LGUI | KMOD_RGUI,

    KMOD_RESERVED = KMOD_SCROLL
} SDL_Keymod;
# 34 "src/./engine/SDL2/SDL_keyboard.h" 2


# 1 "src/./engine/SDL2/begin_code.h" 1
# 37 "src/./engine/SDL2/SDL_keyboard.h" 2
# 47 "src/./engine/SDL2/SDL_keyboard.h"
typedef struct SDL_Keysym
{
    SDL_Scancode scancode;
    SDL_Keycode sym;
    Uint16 mod;
    Uint32 unused;
} SDL_Keysym;
# 64 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_Window * SDL_GetKeyboardFocus(void);
# 94 "src/./engine/SDL2/SDL_keyboard.h"
extern const Uint8 * SDL_GetKeyboardState(int *numkeys);
# 107 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_Keymod SDL_GetModState(void);
# 126 "src/./engine/SDL2/SDL_keyboard.h"
extern void SDL_SetModState(SDL_Keymod modstate);
# 142 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_Keycode SDL_GetKeyFromScancode(SDL_Scancode scancode);
# 158 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_Scancode SDL_GetScancodeFromKey(SDL_Keycode key);
# 183 "src/./engine/SDL2/SDL_keyboard.h"
extern const char * SDL_GetScancodeName(SDL_Scancode scancode);
# 198 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_Scancode SDL_GetScancodeFromName(const char *name);
# 217 "src/./engine/SDL2/SDL_keyboard.h"
extern const char * SDL_GetKeyName(SDL_Keycode key);
# 232 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_Keycode SDL_GetKeyFromName(const char *name);
# 249 "src/./engine/SDL2/SDL_keyboard.h"
extern void SDL_StartTextInput(void);
# 260 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_bool SDL_IsTextInputActive(void);
# 269 "src/./engine/SDL2/SDL_keyboard.h"
extern void SDL_StopTextInput(void);
# 279 "src/./engine/SDL2/SDL_keyboard.h"
extern void SDL_ClearComposition(void);






extern SDL_bool SDL_IsTextInputShown(void);
# 302 "src/./engine/SDL2/SDL_keyboard.h"
extern void SDL_SetTextInputRect(SDL_Rect *rect);
# 315 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_bool SDL_HasScreenKeyboardSupport(void);
# 327 "src/./engine/SDL2/SDL_keyboard.h"
extern SDL_bool SDL_IsScreenKeyboardShown(SDL_Window *window);





# 1 "src/./engine/SDL2/close_code.h" 1
# 334 "src/./engine/SDL2/SDL_keyboard.h" 2
# 35 "src/./engine/SDL2/SDL_events.h" 2
# 1 "src/./engine/SDL2/SDL_mouse.h" 1
# 35 "src/./engine/SDL2/SDL_mouse.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 36 "src/./engine/SDL2/SDL_mouse.h" 2





typedef struct SDL_Cursor SDL_Cursor;




typedef enum
{
    SDL_SYSTEM_CURSOR_ARROW,
    SDL_SYSTEM_CURSOR_IBEAM,
    SDL_SYSTEM_CURSOR_WAIT,
    SDL_SYSTEM_CURSOR_CROSSHAIR,
    SDL_SYSTEM_CURSOR_WAITARROW,
    SDL_SYSTEM_CURSOR_SIZENWSE,
    SDL_SYSTEM_CURSOR_SIZENESW,
    SDL_SYSTEM_CURSOR_SIZEWE,
    SDL_SYSTEM_CURSOR_SIZENS,
    SDL_SYSTEM_CURSOR_SIZEALL,
    SDL_SYSTEM_CURSOR_NO,
    SDL_SYSTEM_CURSOR_HAND,
    SDL_NUM_SYSTEM_CURSORS
} SDL_SystemCursor;




typedef enum
{
    SDL_MOUSEWHEEL_NORMAL,
    SDL_MOUSEWHEEL_FLIPPED
} SDL_MouseWheelDirection;
# 81 "src/./engine/SDL2/SDL_mouse.h"
extern SDL_Window * SDL_GetMouseFocus(void);
# 104 "src/./engine/SDL2/SDL_mouse.h"
extern Uint32 SDL_GetMouseState(int *x, int *y);
# 133 "src/./engine/SDL2/SDL_mouse.h"
extern Uint32 SDL_GetGlobalMouseState(int *x, int *y);
# 152 "src/./engine/SDL2/SDL_mouse.h"
extern Uint32 SDL_GetRelativeMouseState(int *x, int *y);
# 171 "src/./engine/SDL2/SDL_mouse.h"
extern void SDL_WarpMouseInWindow(SDL_Window * window,
                                                   int x, int y);
# 194 "src/./engine/SDL2/SDL_mouse.h"
extern int SDL_WarpMouseGlobal(int x, int y);
# 219 "src/./engine/SDL2/SDL_mouse.h"
extern int SDL_SetRelativeMouseMode(SDL_bool enabled);
# 256 "src/./engine/SDL2/SDL_mouse.h"
extern int SDL_CaptureMouse(SDL_bool enabled);
# 267 "src/./engine/SDL2/SDL_mouse.h"
extern SDL_bool SDL_GetRelativeMouseMode(void);
# 310 "src/./engine/SDL2/SDL_mouse.h"
extern SDL_Cursor * SDL_CreateCursor(const Uint8 * data,
                                                     const Uint8 * mask,
                                                     int w, int h, int hot_x,
                                                     int hot_y);
# 329 "src/./engine/SDL2/SDL_mouse.h"
extern SDL_Cursor * SDL_CreateColorCursor(SDL_Surface *surface,
                                                          int hot_x,
                                                          int hot_y);
# 344 "src/./engine/SDL2/SDL_mouse.h"
extern SDL_Cursor * SDL_CreateSystemCursor(SDL_SystemCursor id);
# 362 "src/./engine/SDL2/SDL_mouse.h"
extern void SDL_SetCursor(SDL_Cursor * cursor);
# 376 "src/./engine/SDL2/SDL_mouse.h"
extern SDL_Cursor * SDL_GetCursor(void);
# 387 "src/./engine/SDL2/SDL_mouse.h"
extern SDL_Cursor * SDL_GetDefaultCursor(void);
# 403 "src/./engine/SDL2/SDL_mouse.h"
extern void SDL_FreeCursor(SDL_Cursor * cursor);
# 425 "src/./engine/SDL2/SDL_mouse.h"
extern int SDL_ShowCursor(int toggle);
# 450 "src/./engine/SDL2/SDL_mouse.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 451 "src/./engine/SDL2/SDL_mouse.h" 2
# 36 "src/./engine/SDL2/SDL_events.h" 2
# 1 "src/./engine/SDL2/SDL_joystick.h" 1
# 47 "src/./engine/SDL2/SDL_joystick.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 48 "src/./engine/SDL2/SDL_joystick.h" 2
# 68 "src/./engine/SDL2/SDL_joystick.h"
struct _SDL_Joystick;
typedef struct _SDL_Joystick SDL_Joystick;


typedef struct {
    Uint8 data[16];
} SDL_JoystickGUID;
# 83 "src/./engine/SDL2/SDL_joystick.h"
typedef Sint32 SDL_JoystickID;

typedef enum
{
    SDL_JOYSTICK_TYPE_UNKNOWN,
    SDL_JOYSTICK_TYPE_GAMECONTROLLER,
    SDL_JOYSTICK_TYPE_WHEEL,
    SDL_JOYSTICK_TYPE_ARCADE_STICK,
    SDL_JOYSTICK_TYPE_FLIGHT_STICK,
    SDL_JOYSTICK_TYPE_DANCE_PAD,
    SDL_JOYSTICK_TYPE_GUITAR,
    SDL_JOYSTICK_TYPE_DRUM_KIT,
    SDL_JOYSTICK_TYPE_ARCADE_PAD,
    SDL_JOYSTICK_TYPE_THROTTLE
} SDL_JoystickType;

typedef enum
{
    SDL_JOYSTICK_POWER_UNKNOWN = -1,
    SDL_JOYSTICK_POWER_EMPTY,
    SDL_JOYSTICK_POWER_LOW,
    SDL_JOYSTICK_POWER_MEDIUM,
    SDL_JOYSTICK_POWER_FULL,
    SDL_JOYSTICK_POWER_WIRED,
    SDL_JOYSTICK_POWER_MAX
} SDL_JoystickPowerLevel;
# 130 "src/./engine/SDL2/SDL_joystick.h"
extern void SDL_LockJoysticks(void);
# 145 "src/./engine/SDL2/SDL_joystick.h"
extern void SDL_UnlockJoysticks(void);
# 158 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_NumJoysticks(void);
# 175 "src/./engine/SDL2/SDL_joystick.h"
extern const char * SDL_JoystickNameForIndex(int device_index);







extern int SDL_JoystickGetDevicePlayerIndex(int device_index);
# 201 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_JoystickGUID SDL_JoystickGetDeviceGUID(int device_index);
# 216 "src/./engine/SDL2/SDL_joystick.h"
extern Uint16 SDL_JoystickGetDeviceVendor(int device_index);
# 231 "src/./engine/SDL2/SDL_joystick.h"
extern Uint16 SDL_JoystickGetDeviceProduct(int device_index);
# 246 "src/./engine/SDL2/SDL_joystick.h"
extern Uint16 SDL_JoystickGetDeviceProductVersion(int device_index);
# 260 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_JoystickType SDL_JoystickGetDeviceType(int device_index);
# 275 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_JoystickID SDL_JoystickGetDeviceInstanceID(int device_index);
# 297 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_Joystick * SDL_JoystickOpen(int device_index);
# 308 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_Joystick * SDL_JoystickFromInstanceID(SDL_JoystickID instance_id);
# 319 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_Joystick * SDL_JoystickFromPlayerIndex(int player_index);
# 328 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickAttachVirtual(SDL_JoystickType type,
                                                      int naxes,
                                                      int nbuttons,
                                                      int nhats);
# 342 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickDetachVirtual(int device_index);
# 352 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_bool SDL_JoystickIsVirtual(int device_index);
# 370 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickSetVirtualAxis(SDL_Joystick *joystick, int axis, Sint16 value);
# 388 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickSetVirtualButton(SDL_Joystick *joystick, int button, Uint8 value);
# 406 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickSetVirtualHat(SDL_Joystick *joystick, int hat, Uint8 value);
# 420 "src/./engine/SDL2/SDL_joystick.h"
extern const char * SDL_JoystickName(SDL_Joystick *joystick);
# 433 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickGetPlayerIndex(SDL_Joystick *joystick);
# 443 "src/./engine/SDL2/SDL_joystick.h"
extern void SDL_JoystickSetPlayerIndex(SDL_Joystick *joystick, int player_index);
# 460 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_JoystickGUID SDL_JoystickGetGUID(SDL_Joystick *joystick);
# 472 "src/./engine/SDL2/SDL_joystick.h"
extern Uint16 SDL_JoystickGetVendor(SDL_Joystick *joystick);
# 484 "src/./engine/SDL2/SDL_joystick.h"
extern Uint16 SDL_JoystickGetProduct(SDL_Joystick *joystick);
# 496 "src/./engine/SDL2/SDL_joystick.h"
extern Uint16 SDL_JoystickGetProductVersion(SDL_Joystick *joystick);
# 509 "src/./engine/SDL2/SDL_joystick.h"
extern const char * SDL_JoystickGetSerial(SDL_Joystick *joystick);
# 519 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_JoystickType SDL_JoystickGetType(SDL_Joystick *joystick);
# 536 "src/./engine/SDL2/SDL_joystick.h"
extern void SDL_JoystickGetGUIDString(SDL_JoystickGUID guid, char *pszGUID, int cbGUID);
# 552 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_JoystickGUID SDL_JoystickGetGUIDFromString(const char *pchGUID);
# 566 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_bool SDL_JoystickGetAttached(SDL_Joystick *joystick);
# 579 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_JoystickID SDL_JoystickInstanceID(SDL_Joystick *joystick);
# 598 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickNumAxes(SDL_Joystick *joystick);
# 616 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickNumBalls(SDL_Joystick *joystick);
# 630 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickNumHats(SDL_Joystick *joystick);
# 644 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickNumButtons(SDL_Joystick *joystick);
# 656 "src/./engine/SDL2/SDL_joystick.h"
extern void SDL_JoystickUpdate(void);
# 681 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickEventState(int state);
# 708 "src/./engine/SDL2/SDL_joystick.h"
extern Sint16 SDL_JoystickGetAxis(SDL_Joystick *joystick,
                                                   int axis);
# 725 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_bool SDL_JoystickGetAxisInitialState(SDL_Joystick *joystick,
                                                   int axis, Sint16 *state);
# 766 "src/./engine/SDL2/SDL_joystick.h"
extern Uint8 SDL_JoystickGetHat(SDL_Joystick *joystick,
                                                 int hat);
# 788 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickGetBall(SDL_Joystick *joystick,
                                                int ball, int *dx, int *dy);
# 803 "src/./engine/SDL2/SDL_joystick.h"
extern Uint8 SDL_JoystickGetButton(SDL_Joystick *joystick,
                                                    int button);
# 824 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickRumble(SDL_Joystick *joystick, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms);
# 849 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickRumbleTriggers(SDL_Joystick *joystick, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms);
# 862 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_bool SDL_JoystickHasLED(SDL_Joystick *joystick);
# 874 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_bool SDL_JoystickHasRumble(SDL_Joystick *joystick);
# 886 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_bool SDL_JoystickHasRumbleTriggers(SDL_Joystick *joystick);
# 902 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickSetLED(SDL_Joystick *joystick, Uint8 red, Uint8 green, Uint8 blue);
# 914 "src/./engine/SDL2/SDL_joystick.h"
extern int SDL_JoystickSendEffect(SDL_Joystick *joystick, const void *data, int size);
# 925 "src/./engine/SDL2/SDL_joystick.h"
extern void SDL_JoystickClose(SDL_Joystick *joystick);
# 936 "src/./engine/SDL2/SDL_joystick.h"
extern SDL_JoystickPowerLevel SDL_JoystickCurrentPowerLevel(SDL_Joystick *joystick);





# 1 "src/./engine/SDL2/close_code.h" 1
# 943 "src/./engine/SDL2/SDL_joystick.h" 2
# 37 "src/./engine/SDL2/SDL_events.h" 2
# 1 "src/./engine/SDL2/SDL_gamecontroller.h" 1
# 34 "src/./engine/SDL2/SDL_gamecontroller.h"
# 1 "src/./engine/SDL2/SDL_sensor.h" 1
# 35 "src/./engine/SDL2/SDL_sensor.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 36 "src/./engine/SDL2/SDL_sensor.h" 2
# 51 "src/./engine/SDL2/SDL_sensor.h"
struct _SDL_Sensor;
typedef struct _SDL_Sensor SDL_Sensor;







typedef Sint32 SDL_SensorID;
# 69 "src/./engine/SDL2/SDL_sensor.h"
typedef enum
{
    SDL_SENSOR_INVALID = -1,
    SDL_SENSOR_UNKNOWN,
    SDL_SENSOR_ACCEL,
    SDL_SENSOR_GYRO
} SDL_SensorType;
# 139 "src/./engine/SDL2/SDL_sensor.h"
extern void SDL_LockSensors(void);
extern void SDL_UnlockSensors(void);
# 149 "src/./engine/SDL2/SDL_sensor.h"
extern int SDL_NumSensors(void);
# 159 "src/./engine/SDL2/SDL_sensor.h"
extern const char * SDL_SensorGetDeviceName(int device_index);
# 170 "src/./engine/SDL2/SDL_sensor.h"
extern SDL_SensorType SDL_SensorGetDeviceType(int device_index);
# 181 "src/./engine/SDL2/SDL_sensor.h"
extern int SDL_SensorGetDeviceNonPortableType(int device_index);
# 191 "src/./engine/SDL2/SDL_sensor.h"
extern SDL_SensorID SDL_SensorGetDeviceInstanceID(int device_index);
# 201 "src/./engine/SDL2/SDL_sensor.h"
extern SDL_Sensor * SDL_SensorOpen(int device_index);
# 211 "src/./engine/SDL2/SDL_sensor.h"
extern SDL_Sensor * SDL_SensorFromInstanceID(SDL_SensorID instance_id);
# 221 "src/./engine/SDL2/SDL_sensor.h"
extern const char * SDL_SensorGetName(SDL_Sensor *sensor);
# 232 "src/./engine/SDL2/SDL_sensor.h"
extern SDL_SensorType SDL_SensorGetType(SDL_Sensor *sensor);
# 242 "src/./engine/SDL2/SDL_sensor.h"
extern int SDL_SensorGetNonPortableType(SDL_Sensor *sensor);
# 252 "src/./engine/SDL2/SDL_sensor.h"
extern SDL_SensorID SDL_SensorGetInstanceID(SDL_Sensor *sensor);
# 266 "src/./engine/SDL2/SDL_sensor.h"
extern int SDL_SensorGetData(SDL_Sensor * sensor, float *data, int num_values);
# 275 "src/./engine/SDL2/SDL_sensor.h"
extern void SDL_SensorClose(SDL_Sensor * sensor);
# 288 "src/./engine/SDL2/SDL_sensor.h"
extern void SDL_SensorUpdate(void);
# 297 "src/./engine/SDL2/SDL_sensor.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 298 "src/./engine/SDL2/SDL_sensor.h" 2
# 35 "src/./engine/SDL2/SDL_gamecontroller.h" 2


# 1 "src/./engine/SDL2/begin_code.h" 1
# 38 "src/./engine/SDL2/SDL_gamecontroller.h" 2
# 58 "src/./engine/SDL2/SDL_gamecontroller.h"
struct _SDL_GameController;
typedef struct _SDL_GameController SDL_GameController;

typedef enum
{
    SDL_CONTROLLER_TYPE_UNKNOWN = 0,
    SDL_CONTROLLER_TYPE_XBOX360,
    SDL_CONTROLLER_TYPE_XBOXONE,
    SDL_CONTROLLER_TYPE_PS3,
    SDL_CONTROLLER_TYPE_PS4,
    SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_PRO,
    SDL_CONTROLLER_TYPE_VIRTUAL,
    SDL_CONTROLLER_TYPE_PS5,
    SDL_CONTROLLER_TYPE_AMAZON_LUNA,
    SDL_CONTROLLER_TYPE_GOOGLE_STADIA
} SDL_GameControllerType;

typedef enum
{
    SDL_CONTROLLER_BINDTYPE_NONE = 0,
    SDL_CONTROLLER_BINDTYPE_BUTTON,
    SDL_CONTROLLER_BINDTYPE_AXIS,
    SDL_CONTROLLER_BINDTYPE_HAT
} SDL_GameControllerBindType;




typedef struct SDL_GameControllerButtonBind
{
    SDL_GameControllerBindType bindType;
    union
    {
        int button;
        int axis;
        struct {
            int hat;
            int hat_mask;
        } hat;
    } value;

} SDL_GameControllerButtonBind;
# 161 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerAddMappingsFromRW(SDL_RWops * rw, int freerw);
# 197 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerAddMapping(const char* mappingString);
# 206 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerNumMappings(void);
# 216 "src/./engine/SDL2/SDL_gamecontroller.h"
extern char * SDL_GameControllerMappingForIndex(int mapping_index);
# 232 "src/./engine/SDL2/SDL_gamecontroller.h"
extern char * SDL_GameControllerMappingForGUID(SDL_JoystickGUID guid);
# 251 "src/./engine/SDL2/SDL_gamecontroller.h"
extern char * SDL_GameControllerMapping(SDL_GameController *gamecontroller);
# 269 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool SDL_IsGameController(int joystick_index);
# 290 "src/./engine/SDL2/SDL_gamecontroller.h"
extern const char * SDL_GameControllerNameForIndex(int joystick_index);
# 303 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameControllerType SDL_GameControllerTypeForIndex(int joystick_index);
# 317 "src/./engine/SDL2/SDL_gamecontroller.h"
extern char * SDL_GameControllerMappingForDeviceIndex(int joystick_index);
# 341 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameController * SDL_GameControllerOpen(int joystick_index);
# 352 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameController * SDL_GameControllerFromInstanceID(SDL_JoystickID joyid);
# 369 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameController * SDL_GameControllerFromPlayerIndex(int player_index);
# 387 "src/./engine/SDL2/SDL_gamecontroller.h"
extern const char * SDL_GameControllerName(SDL_GameController *gamecontroller);
# 400 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameControllerType SDL_GameControllerGetType(SDL_GameController *gamecontroller);
# 412 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerGetPlayerIndex(SDL_GameController *gamecontroller);
# 422 "src/./engine/SDL2/SDL_gamecontroller.h"
extern void SDL_GameControllerSetPlayerIndex(SDL_GameController *gamecontroller, int player_index);
# 434 "src/./engine/SDL2/SDL_gamecontroller.h"
extern Uint16 SDL_GameControllerGetVendor(SDL_GameController *gamecontroller);
# 446 "src/./engine/SDL2/SDL_gamecontroller.h"
extern Uint16 SDL_GameControllerGetProduct(SDL_GameController *gamecontroller);
# 458 "src/./engine/SDL2/SDL_gamecontroller.h"
extern Uint16 SDL_GameControllerGetProductVersion(SDL_GameController *gamecontroller);
# 471 "src/./engine/SDL2/SDL_gamecontroller.h"
extern const char * SDL_GameControllerGetSerial(SDL_GameController *gamecontroller);
# 486 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool SDL_GameControllerGetAttached(SDL_GameController *gamecontroller);
# 507 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_Joystick * SDL_GameControllerGetJoystick(SDL_GameController *gamecontroller);
# 527 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerEventState(int state);
# 538 "src/./engine/SDL2/SDL_gamecontroller.h"
extern void SDL_GameControllerUpdate(void);
# 550 "src/./engine/SDL2/SDL_gamecontroller.h"
typedef enum
{
    SDL_CONTROLLER_AXIS_INVALID = -1,
    SDL_CONTROLLER_AXIS_LEFTX,
    SDL_CONTROLLER_AXIS_LEFTY,
    SDL_CONTROLLER_AXIS_RIGHTX,
    SDL_CONTROLLER_AXIS_RIGHTY,
    SDL_CONTROLLER_AXIS_TRIGGERLEFT,
    SDL_CONTROLLER_AXIS_TRIGGERRIGHT,
    SDL_CONTROLLER_AXIS_MAX
} SDL_GameControllerAxis;
# 582 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameControllerAxis SDL_GameControllerGetAxisFromString(const char *str);
# 598 "src/./engine/SDL2/SDL_gamecontroller.h"
extern const char* SDL_GameControllerGetStringForAxis(SDL_GameControllerAxis axis);
# 613 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameControllerButtonBind
SDL_GameControllerGetBindForAxis(SDL_GameController *gamecontroller,
                                 SDL_GameControllerAxis axis);
# 629 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool
SDL_GameControllerHasAxis(SDL_GameController *gamecontroller, SDL_GameControllerAxis axis);
# 649 "src/./engine/SDL2/SDL_gamecontroller.h"
extern Sint16
SDL_GameControllerGetAxis(SDL_GameController *gamecontroller, SDL_GameControllerAxis axis);




typedef enum
{
    SDL_CONTROLLER_BUTTON_INVALID = -1,
    SDL_CONTROLLER_BUTTON_A,
    SDL_CONTROLLER_BUTTON_B,
    SDL_CONTROLLER_BUTTON_X,
    SDL_CONTROLLER_BUTTON_Y,
    SDL_CONTROLLER_BUTTON_BACK,
    SDL_CONTROLLER_BUTTON_GUIDE,
    SDL_CONTROLLER_BUTTON_START,
    SDL_CONTROLLER_BUTTON_LEFTSTICK,
    SDL_CONTROLLER_BUTTON_RIGHTSTICK,
    SDL_CONTROLLER_BUTTON_LEFTSHOULDER,
    SDL_CONTROLLER_BUTTON_RIGHTSHOULDER,
    SDL_CONTROLLER_BUTTON_DPAD_UP,
    SDL_CONTROLLER_BUTTON_DPAD_DOWN,
    SDL_CONTROLLER_BUTTON_DPAD_LEFT,
    SDL_CONTROLLER_BUTTON_DPAD_RIGHT,
    SDL_CONTROLLER_BUTTON_MISC1,
    SDL_CONTROLLER_BUTTON_PADDLE1,
    SDL_CONTROLLER_BUTTON_PADDLE2,
    SDL_CONTROLLER_BUTTON_PADDLE3,
    SDL_CONTROLLER_BUTTON_PADDLE4,
    SDL_CONTROLLER_BUTTON_TOUCHPAD,
    SDL_CONTROLLER_BUTTON_MAX
} SDL_GameControllerButton;
# 696 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameControllerButton SDL_GameControllerGetButtonFromString(const char *str);
# 712 "src/./engine/SDL2/SDL_gamecontroller.h"
extern const char* SDL_GameControllerGetStringForButton(SDL_GameControllerButton button);
# 727 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_GameControllerButtonBind
SDL_GameControllerGetBindForButton(SDL_GameController *gamecontroller,
                                   SDL_GameControllerButton button);
# 743 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool SDL_GameControllerHasButton(SDL_GameController *gamecontroller,
                                                             SDL_GameControllerButton button);
# 758 "src/./engine/SDL2/SDL_gamecontroller.h"
extern Uint8 SDL_GameControllerGetButton(SDL_GameController *gamecontroller,
                                                          SDL_GameControllerButton button);






extern int SDL_GameControllerGetNumTouchpads(SDL_GameController *gamecontroller);







extern int SDL_GameControllerGetNumTouchpadFingers(SDL_GameController *gamecontroller, int touchpad);






extern int SDL_GameControllerGetTouchpadFinger(SDL_GameController *gamecontroller, int touchpad, int finger, Uint8 *state, float *x, float *y, float *pressure);
# 792 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool SDL_GameControllerHasSensor(SDL_GameController *gamecontroller, SDL_SensorType type);
# 804 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerSetSensorEnabled(SDL_GameController *gamecontroller, SDL_SensorType type, SDL_bool enabled);
# 815 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool SDL_GameControllerIsSensorEnabled(SDL_GameController *gamecontroller, SDL_SensorType type);
# 827 "src/./engine/SDL2/SDL_gamecontroller.h"
extern float SDL_GameControllerGetSensorDataRate(SDL_GameController *gamecontroller, SDL_SensorType type);
# 843 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerGetSensorData(SDL_GameController *gamecontroller, SDL_SensorType type, float *data, int num_values);
# 863 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerRumble(SDL_GameController *gamecontroller, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms);
# 888 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerRumbleTriggers(SDL_GameController *gamecontroller, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms);
# 899 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool SDL_GameControllerHasLED(SDL_GameController *gamecontroller);
# 912 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool SDL_GameControllerHasRumble(SDL_GameController *gamecontroller);
# 925 "src/./engine/SDL2/SDL_gamecontroller.h"
extern SDL_bool SDL_GameControllerHasRumbleTriggers(SDL_GameController *gamecontroller);
# 938 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerSetLED(SDL_GameController *gamecontroller, Uint8 red, Uint8 green, Uint8 blue);
# 951 "src/./engine/SDL2/SDL_gamecontroller.h"
extern int SDL_GameControllerSendEffect(SDL_GameController *gamecontroller, const void *data, int size);
# 963 "src/./engine/SDL2/SDL_gamecontroller.h"
extern void SDL_GameControllerClose(SDL_GameController *gamecontroller);
# 977 "src/./engine/SDL2/SDL_gamecontroller.h"
extern const char* SDL_GameControllerGetAppleSFSymbolsNameForButton(SDL_GameController *gamecontroller, SDL_GameControllerButton button);
# 991 "src/./engine/SDL2/SDL_gamecontroller.h"
extern const char* SDL_GameControllerGetAppleSFSymbolsNameForAxis(SDL_GameController *gamecontroller, SDL_GameControllerAxis axis);






# 1 "src/./engine/SDL2/close_code.h" 1
# 999 "src/./engine/SDL2/SDL_gamecontroller.h" 2
# 38 "src/./engine/SDL2/SDL_events.h" 2
# 1 "src/./engine/SDL2/SDL_quit.h" 1
# 39 "src/./engine/SDL2/SDL_events.h" 2
# 1 "src/./engine/SDL2/SDL_gesture.h" 1
# 35 "src/./engine/SDL2/SDL_gesture.h"
# 1 "src/./engine/SDL2/SDL_touch.h" 1
# 35 "src/./engine/SDL2/SDL_touch.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 36 "src/./engine/SDL2/SDL_touch.h" 2





typedef Sint64 SDL_TouchID;
typedef Sint64 SDL_FingerID;

typedef enum
{
    SDL_TOUCH_DEVICE_INVALID = -1,
    SDL_TOUCH_DEVICE_DIRECT,
    SDL_TOUCH_DEVICE_INDIRECT_ABSOLUTE,
    SDL_TOUCH_DEVICE_INDIRECT_RELATIVE
} SDL_TouchDeviceType;

typedef struct SDL_Finger
{
    SDL_FingerID id;
    float x;
    float y;
    float pressure;
} SDL_Finger;
# 83 "src/./engine/SDL2/SDL_touch.h"
extern int SDL_GetNumTouchDevices(void);
# 96 "src/./engine/SDL2/SDL_touch.h"
extern SDL_TouchID SDL_GetTouchDevice(int index);







extern const char* SDL_GetTouchName(int index);






extern SDL_TouchDeviceType SDL_GetTouchDeviceType(SDL_TouchID touchID);
# 124 "src/./engine/SDL2/SDL_touch.h"
extern int SDL_GetNumTouchFingers(SDL_TouchID touchID);
# 140 "src/./engine/SDL2/SDL_touch.h"
extern SDL_Finger * SDL_GetTouchFinger(SDL_TouchID touchID, int index);





# 1 "src/./engine/SDL2/close_code.h" 1
# 147 "src/./engine/SDL2/SDL_touch.h" 2
# 36 "src/./engine/SDL2/SDL_gesture.h" 2


# 1 "src/./engine/SDL2/begin_code.h" 1
# 39 "src/./engine/SDL2/SDL_gesture.h" 2





typedef Sint64 SDL_GestureID;
# 61 "src/./engine/SDL2/SDL_gesture.h"
extern int SDL_RecordGesture(SDL_TouchID touchId);
# 76 "src/./engine/SDL2/SDL_gesture.h"
extern int SDL_SaveAllDollarTemplates(SDL_RWops *dst);
# 91 "src/./engine/SDL2/SDL_gesture.h"
extern int SDL_SaveDollarTemplate(SDL_GestureID gestureId,SDL_RWops *dst);
# 107 "src/./engine/SDL2/SDL_gesture.h"
extern int SDL_LoadDollarTemplates(SDL_TouchID touchId, SDL_RWops *src);





# 1 "src/./engine/SDL2/close_code.h" 1
# 114 "src/./engine/SDL2/SDL_gesture.h" 2
# 40 "src/./engine/SDL2/SDL_events.h" 2


# 1 "src/./engine/SDL2/begin_code.h" 1
# 43 "src/./engine/SDL2/SDL_events.h" 2
# 55 "src/./engine/SDL2/SDL_events.h"
typedef enum
{
    SDL_FIRSTEVENT = 0,


    SDL_QUIT = 0x100,


    SDL_APP_TERMINATING,



    SDL_APP_LOWMEMORY,



    SDL_APP_WILLENTERBACKGROUND,



    SDL_APP_DIDENTERBACKGROUND,



    SDL_APP_WILLENTERFOREGROUND,



    SDL_APP_DIDENTERFOREGROUND,




    SDL_LOCALECHANGED,


    SDL_DISPLAYEVENT = 0x150,


    SDL_WINDOWEVENT = 0x200,
    SDL_SYSWMEVENT,


    SDL_KEYDOWN = 0x300,
    SDL_KEYUP,
    SDL_TEXTEDITING,
    SDL_TEXTINPUT,
    SDL_KEYMAPCHANGED,


    SDL_TEXTEDITING_EXT,


    SDL_MOUSEMOTION = 0x400,
    SDL_MOUSEBUTTONDOWN,
    SDL_MOUSEBUTTONUP,
    SDL_MOUSEWHEEL,


    SDL_JOYAXISMOTION = 0x600,
    SDL_JOYBALLMOTION,
    SDL_JOYHATMOTION,
    SDL_JOYBUTTONDOWN,
    SDL_JOYBUTTONUP,
    SDL_JOYDEVICEADDED,
    SDL_JOYDEVICEREMOVED,


    SDL_CONTROLLERAXISMOTION = 0x650,
    SDL_CONTROLLERBUTTONDOWN,
    SDL_CONTROLLERBUTTONUP,
    SDL_CONTROLLERDEVICEADDED,
    SDL_CONTROLLERDEVICEREMOVED,
    SDL_CONTROLLERDEVICEREMAPPED,
    SDL_CONTROLLERTOUCHPADDOWN,
    SDL_CONTROLLERTOUCHPADMOTION,
    SDL_CONTROLLERTOUCHPADUP,
    SDL_CONTROLLERSENSORUPDATE,


    SDL_FINGERDOWN = 0x700,
    SDL_FINGERUP,
    SDL_FINGERMOTION,


    SDL_DOLLARGESTURE = 0x800,
    SDL_DOLLARRECORD,
    SDL_MULTIGESTURE,


    SDL_CLIPBOARDUPDATE = 0x900,


    SDL_DROPFILE = 0x1000,
    SDL_DROPTEXT,
    SDL_DROPBEGIN,
    SDL_DROPCOMPLETE,


    SDL_AUDIODEVICEADDED = 0x1100,
    SDL_AUDIODEVICEREMOVED,


    SDL_SENSORUPDATE = 0x1200,


    SDL_RENDER_TARGETS_RESET = 0x2000,
    SDL_RENDER_DEVICE_RESET,


    SDL_POLLSENTINEL = 0x7F00,




    SDL_USEREVENT = 0x8000,




    SDL_LASTEVENT = 0xFFFF
} SDL_EventType;




typedef struct SDL_CommonEvent
{
    Uint32 type;
    Uint32 timestamp;
} SDL_CommonEvent;




typedef struct SDL_DisplayEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 display;
    Uint8 event;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint32 data1;
} SDL_DisplayEvent;




typedef struct SDL_WindowEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint8 event;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint32 data1;
    Sint32 data2;
} SDL_WindowEvent;




typedef struct SDL_KeyboardEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint8 state;
    Uint8 repeat;
    Uint8 padding2;
    Uint8 padding3;
    SDL_Keysym keysym;
} SDL_KeyboardEvent;





typedef struct SDL_TextEditingEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    char text[(32)];
    Sint32 start;
    Sint32 length;
} SDL_TextEditingEvent;





typedef struct SDL_TextEditingExtEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    char* text;
    Sint32 start;
    Sint32 length;
} SDL_TextEditingExtEvent;





typedef struct SDL_TextInputEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    char text[(32)];
} SDL_TextInputEvent;




typedef struct SDL_MouseMotionEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint32 which;
    Uint32 state;
    Sint32 x;
    Sint32 y;
    Sint32 xrel;
    Sint32 yrel;
} SDL_MouseMotionEvent;




typedef struct SDL_MouseButtonEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint32 which;
    Uint8 button;
    Uint8 state;
    Uint8 clicks;
    Uint8 padding1;
    Sint32 x;
    Sint32 y;
} SDL_MouseButtonEvent;




typedef struct SDL_MouseWheelEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint32 which;
    Sint32 x;
    Sint32 y;
    Uint32 direction;
    float preciseX;
    float preciseY;
} SDL_MouseWheelEvent;




typedef struct SDL_JoyAxisEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 axis;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 value;
    Uint16 padding4;
} SDL_JoyAxisEvent;




typedef struct SDL_JoyBallEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 ball;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 xrel;
    Sint16 yrel;
} SDL_JoyBallEvent;




typedef struct SDL_JoyHatEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 hat;
    Uint8 value;






    Uint8 padding1;
    Uint8 padding2;
} SDL_JoyHatEvent;




typedef struct SDL_JoyButtonEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 button;
    Uint8 state;
    Uint8 padding1;
    Uint8 padding2;
} SDL_JoyButtonEvent;




typedef struct SDL_JoyDeviceEvent
{
    Uint32 type;
    Uint32 timestamp;
    Sint32 which;
} SDL_JoyDeviceEvent;





typedef struct SDL_ControllerAxisEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 axis;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 value;
    Uint16 padding4;
} SDL_ControllerAxisEvent;





typedef struct SDL_ControllerButtonEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 button;
    Uint8 state;
    Uint8 padding1;
    Uint8 padding2;
} SDL_ControllerButtonEvent;





typedef struct SDL_ControllerDeviceEvent
{
    Uint32 type;
    Uint32 timestamp;
    Sint32 which;
} SDL_ControllerDeviceEvent;




typedef struct SDL_ControllerTouchpadEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Sint32 touchpad;
    Sint32 finger;
    float x;
    float y;
    float pressure;
} SDL_ControllerTouchpadEvent;




typedef struct SDL_ControllerSensorEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Sint32 sensor;
    float data[3];
} SDL_ControllerSensorEvent;




typedef struct SDL_AudioDeviceEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 which;
    Uint8 iscapture;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_AudioDeviceEvent;





typedef struct SDL_TouchFingerEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_TouchID touchId;
    SDL_FingerID fingerId;
    float x;
    float y;
    float dx;
    float dy;
    float pressure;
    Uint32 windowID;
} SDL_TouchFingerEvent;





typedef struct SDL_MultiGestureEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_TouchID touchId;
    float dTheta;
    float dDist;
    float x;
    float y;
    Uint16 numFingers;
    Uint16 padding;
} SDL_MultiGestureEvent;





typedef struct SDL_DollarGestureEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_TouchID touchId;
    SDL_GestureID gestureId;
    Uint32 numFingers;
    float error;
    float x;
    float y;
} SDL_DollarGestureEvent;







typedef struct SDL_DropEvent
{
    Uint32 type;
    Uint32 timestamp;
    char *file;
    Uint32 windowID;
} SDL_DropEvent;





typedef struct SDL_SensorEvent
{
    Uint32 type;
    Uint32 timestamp;
    Sint32 which;
    float data[6];
} SDL_SensorEvent;




typedef struct SDL_QuitEvent
{
    Uint32 type;
    Uint32 timestamp;
} SDL_QuitEvent;




typedef struct SDL_OSEvent
{
    Uint32 type;
    Uint32 timestamp;
} SDL_OSEvent;




typedef struct SDL_UserEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Sint32 code;
    void *data1;
    void *data2;
} SDL_UserEvent;


struct SDL_SysWMmsg;
typedef struct SDL_SysWMmsg SDL_SysWMmsg;







typedef struct SDL_SysWMEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_SysWMmsg *msg;
} SDL_SysWMEvent;




typedef union SDL_Event
{
    Uint32 type;
    SDL_CommonEvent common;
    SDL_DisplayEvent display;
    SDL_WindowEvent window;
    SDL_KeyboardEvent key;
    SDL_TextEditingEvent edit;
    SDL_TextEditingExtEvent editExt;
    SDL_TextInputEvent text;
    SDL_MouseMotionEvent motion;
    SDL_MouseButtonEvent button;
    SDL_MouseWheelEvent wheel;
    SDL_JoyAxisEvent jaxis;
    SDL_JoyBallEvent jball;
    SDL_JoyHatEvent jhat;
    SDL_JoyButtonEvent jbutton;
    SDL_JoyDeviceEvent jdevice;
    SDL_ControllerAxisEvent caxis;
    SDL_ControllerButtonEvent cbutton;
    SDL_ControllerDeviceEvent cdevice;
    SDL_ControllerTouchpadEvent ctouchpad;
    SDL_ControllerSensorEvent csensor;
    SDL_AudioDeviceEvent adevice;
    SDL_SensorEvent sensor;
    SDL_QuitEvent quit;
    SDL_UserEvent user;
    SDL_SysWMEvent syswm;
    SDL_TouchFingerEvent tfinger;
    SDL_MultiGestureEvent mgesture;
    SDL_DollarGestureEvent dgesture;
    SDL_DropEvent drop;
# 656 "src/./engine/SDL2/SDL_events.h"
    Uint8 padding[sizeof(void *) <= 8 ? 56 : sizeof(void *) == 16 ? 64 : 3 * sizeof(void *)];
} SDL_Event;


_Static_assert(sizeof(SDL_Event) == sizeof(((SDL_Event *)
# 660 "src/./engine/SDL2/SDL_events.h" 3 4
((void *)0)
# 660 "src/./engine/SDL2/SDL_events.h"
)->padding), "sizeof(SDL_Event) == sizeof(((SDL_Event *)NULL)->padding)");;
# 687 "src/./engine/SDL2/SDL_events.h"
extern void SDL_PumpEvents(void);


typedef enum
{
    SDL_ADDEVENT,
    SDL_PEEKEVENT,
    SDL_GETEVENT
} SDL_eventaction;
# 735 "src/./engine/SDL2/SDL_events.h"
extern int SDL_PeepEvents(SDL_Event * events, int numevents,
                                           SDL_eventaction action,
                                           Uint32 minType, Uint32 maxType);
# 754 "src/./engine/SDL2/SDL_events.h"
extern SDL_bool SDL_HasEvent(Uint32 type);
# 773 "src/./engine/SDL2/SDL_events.h"
extern SDL_bool SDL_HasEvents(Uint32 minType, Uint32 maxType);
# 795 "src/./engine/SDL2/SDL_events.h"
extern void SDL_FlushEvent(Uint32 type);
# 820 "src/./engine/SDL2/SDL_events.h"
extern void SDL_FlushEvents(Uint32 minType, Uint32 maxType);
# 867 "src/./engine/SDL2/SDL_events.h"
extern int SDL_PollEvent(SDL_Event * event);
# 889 "src/./engine/SDL2/SDL_events.h"
extern int SDL_WaitEvent(SDL_Event * event);
# 915 "src/./engine/SDL2/SDL_events.h"
extern int SDL_WaitEventTimeout(SDL_Event * event,
                                                 int timeout);
# 950 "src/./engine/SDL2/SDL_events.h"
extern int SDL_PushEvent(SDL_Event * event);
# 964 "src/./engine/SDL2/SDL_events.h"
typedef int ( * SDL_EventFilter) (void *userdata, SDL_Event * event);
# 1008 "src/./engine/SDL2/SDL_events.h"
extern void SDL_SetEventFilter(SDL_EventFilter filter,
                                                void *userdata);
# 1026 "src/./engine/SDL2/SDL_events.h"
extern SDL_bool SDL_GetEventFilter(SDL_EventFilter * filter,
                                                    void **userdata);
# 1055 "src/./engine/SDL2/SDL_events.h"
extern void SDL_AddEventWatch(SDL_EventFilter filter,
                                               void *userdata);
# 1071 "src/./engine/SDL2/SDL_events.h"
extern void SDL_DelEventWatch(SDL_EventFilter filter,
                                               void *userdata);
# 1090 "src/./engine/SDL2/SDL_events.h"
extern void SDL_FilterEvents(SDL_EventFilter filter,
                                              void *userdata);
# 1118 "src/./engine/SDL2/SDL_events.h"
extern Uint8 SDL_EventState(Uint32 type, int state);
# 1140 "src/./engine/SDL2/SDL_events.h"
extern Uint32 SDL_RegisterEvents(int numevents);





# 1 "src/./engine/SDL2/close_code.h" 1
# 1147 "src/./engine/SDL2/SDL_events.h" 2
# 42 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_filesystem.h" 1
# 33 "src/./engine/SDL2/SDL_filesystem.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 34 "src/./engine/SDL2/SDL_filesystem.h" 2
# 78 "src/./engine/SDL2/SDL_filesystem.h"
extern char * SDL_GetBasePath(void);
# 135 "src/./engine/SDL2/SDL_filesystem.h"
extern char * SDL_GetPrefPath(const char *org, const char *app);





# 1 "src/./engine/SDL2/close_code.h" 1
# 142 "src/./engine/SDL2/SDL_filesystem.h" 2
# 43 "src/./engine/SDL2/SDL.h" 2

# 1 "src/./engine/SDL2/SDL_haptic.h" 1
# 114 "src/./engine/SDL2/SDL_haptic.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 115 "src/./engine/SDL2/SDL_haptic.h" 2
# 140 "src/./engine/SDL2/SDL_haptic.h"
struct _SDL_Haptic;
typedef struct _SDL_Haptic SDL_Haptic;
# 459 "src/./engine/SDL2/SDL_haptic.h"
typedef struct SDL_HapticDirection
{
    Uint8 type;
    Sint32 dir[3];
} SDL_HapticDirection;
# 477 "src/./engine/SDL2/SDL_haptic.h"
typedef struct SDL_HapticConstant
{

    Uint16 type;
    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Sint16 level;


    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticConstant;
# 558 "src/./engine/SDL2/SDL_haptic.h"
typedef struct SDL_HapticPeriodic
{

    Uint16 type;


    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Uint16 period;
    Sint16 magnitude;
    Sint16 offset;
    Uint16 phase;


    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticPeriodic;
# 611 "src/./engine/SDL2/SDL_haptic.h"
typedef struct SDL_HapticCondition
{

    Uint16 type;

    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Uint16 right_sat[3];
    Uint16 left_sat[3];
    Sint16 right_coeff[3];
    Sint16 left_coeff[3];
    Uint16 deadband[3];
    Sint16 center[3];
} SDL_HapticCondition;
# 648 "src/./engine/SDL2/SDL_haptic.h"
typedef struct SDL_HapticRamp
{

    Uint16 type;
    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Sint16 start;
    Sint16 end;


    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticRamp;
# 685 "src/./engine/SDL2/SDL_haptic.h"
typedef struct SDL_HapticLeftRight
{

    Uint16 type;


    Uint32 length;


    Uint16 large_magnitude;
    Uint16 small_magnitude;
} SDL_HapticLeftRight;
# 713 "src/./engine/SDL2/SDL_haptic.h"
typedef struct SDL_HapticCustom
{

    Uint16 type;
    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Uint8 channels;
    Uint16 period;
    Uint16 samples;
    Uint16 *data;


    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticCustom;
# 809 "src/./engine/SDL2/SDL_haptic.h"
typedef union SDL_HapticEffect
{

    Uint16 type;
    SDL_HapticConstant constant;
    SDL_HapticPeriodic periodic;
    SDL_HapticCondition condition;
    SDL_HapticRamp ramp;
    SDL_HapticLeftRight leftright;
    SDL_HapticCustom custom;
} SDL_HapticEffect;
# 834 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_NumHaptics(void);
# 850 "src/./engine/SDL2/SDL_haptic.h"
extern const char * SDL_HapticName(int device_index);
# 877 "src/./engine/SDL2/SDL_haptic.h"
extern SDL_Haptic * SDL_HapticOpen(int device_index);
# 891 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticOpened(int device_index);
# 905 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticIndex(SDL_Haptic * haptic);
# 916 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_MouseIsHaptic(void);
# 929 "src/./engine/SDL2/SDL_haptic.h"
extern SDL_Haptic * SDL_HapticOpenFromMouse(void);
# 943 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_JoystickIsHaptic(SDL_Joystick * joystick);
# 966 "src/./engine/SDL2/SDL_haptic.h"
extern SDL_Haptic * SDL_HapticOpenFromJoystick(SDL_Joystick *
                                                               joystick);
# 978 "src/./engine/SDL2/SDL_haptic.h"
extern void SDL_HapticClose(SDL_Haptic * haptic);
# 996 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticNumEffects(SDL_Haptic * haptic);
# 1013 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticNumEffectsPlaying(SDL_Haptic * haptic);
# 1027 "src/./engine/SDL2/SDL_haptic.h"
extern unsigned int SDL_HapticQuery(SDL_Haptic * haptic);
# 1042 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticNumAxes(SDL_Haptic * haptic);
# 1058 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticEffectSupported(SDL_Haptic * haptic,
                                                      SDL_HapticEffect *
                                                      effect);
# 1077 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticNewEffect(SDL_Haptic * haptic,
                                                SDL_HapticEffect * effect);
# 1101 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticUpdateEffect(SDL_Haptic * haptic,
                                                   int effect,
                                                   SDL_HapticEffect * data);
# 1127 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticRunEffect(SDL_Haptic * haptic,
                                                int effect,
                                                Uint32 iterations);
# 1146 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticStopEffect(SDL_Haptic * haptic,
                                                 int effect);
# 1162 "src/./engine/SDL2/SDL_haptic.h"
extern void SDL_HapticDestroyEffect(SDL_Haptic * haptic,
                                                     int effect);
# 1180 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticGetEffectStatus(SDL_Haptic * haptic,
                                                      int effect);
# 1202 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticSetGain(SDL_Haptic * haptic, int gain);
# 1221 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticSetAutocenter(SDL_Haptic * haptic,
                                                    int autocenter);
# 1241 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticPause(SDL_Haptic * haptic);
# 1256 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticUnpause(SDL_Haptic * haptic);
# 1267 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticStopAll(SDL_Haptic * haptic);
# 1283 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticRumbleSupported(SDL_Haptic * haptic);
# 1299 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticRumbleInit(SDL_Haptic * haptic);
# 1316 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticRumblePlay(SDL_Haptic * haptic, float strength, Uint32 length );
# 1331 "src/./engine/SDL2/SDL_haptic.h"
extern int SDL_HapticRumbleStop(SDL_Haptic * haptic);





# 1 "src/./engine/SDL2/close_code.h" 1
# 1338 "src/./engine/SDL2/SDL_haptic.h" 2
# 45 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_hidapi.h" 1
# 67 "src/./engine/SDL2/SDL_hidapi.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 68 "src/./engine/SDL2/SDL_hidapi.h" 2
# 76 "src/./engine/SDL2/SDL_hidapi.h"
struct SDL_hid_device_;
typedef struct SDL_hid_device_ SDL_hid_device;





typedef struct SDL_hid_device_info
{

    char *path;

    unsigned short vendor_id;

    unsigned short product_id;

    wchar_t *serial_number;


    unsigned short release_number;

    wchar_t *manufacturer_string;

    wchar_t *product_string;


    unsigned short usage_page;


    unsigned short usage;






    int interface_number;



    int interface_class;
    int interface_subclass;
    int interface_protocol;


    struct SDL_hid_device_info *next;
} SDL_hid_device_info;
# 142 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_init(void);
# 156 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_exit(void);
# 177 "src/./engine/SDL2/SDL_hidapi.h"
extern Uint32 SDL_hid_device_change_count(void);
# 199 "src/./engine/SDL2/SDL_hidapi.h"
extern SDL_hid_device_info * SDL_hid_enumerate(unsigned short vendor_id, unsigned short product_id);
# 211 "src/./engine/SDL2/SDL_hidapi.h"
extern void SDL_hid_free_enumeration(SDL_hid_device_info *devs);
# 229 "src/./engine/SDL2/SDL_hidapi.h"
extern SDL_hid_device * SDL_hid_open(unsigned short vendor_id, unsigned short product_id, const wchar_t *serial_number);
# 243 "src/./engine/SDL2/SDL_hidapi.h"
extern SDL_hid_device * SDL_hid_open_path(const char *path, int bExclusive );
# 269 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_write(SDL_hid_device *dev, const unsigned char *data, size_t length);
# 290 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_read_timeout(SDL_hid_device *dev, unsigned char *data, size_t length, int milliseconds);
# 310 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_read(SDL_hid_device *dev, unsigned char *data, size_t length);
# 328 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_set_nonblocking(SDL_hid_device *dev, int nonblock);
# 352 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_send_feature_report(SDL_hid_device *dev, const unsigned char *data, size_t length);
# 374 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_get_feature_report(SDL_hid_device *dev, unsigned char *data, size_t length);
# 383 "src/./engine/SDL2/SDL_hidapi.h"
extern void SDL_hid_close(SDL_hid_device *dev);
# 395 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_get_manufacturer_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen);
# 407 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_get_product_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen);
# 419 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_get_serial_number_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen);
# 432 "src/./engine/SDL2/SDL_hidapi.h"
extern int SDL_hid_get_indexed_string(SDL_hid_device *dev, int string_index, wchar_t *string, size_t maxlen);
# 441 "src/./engine/SDL2/SDL_hidapi.h"
extern void SDL_hid_ble_scan(SDL_bool active);





# 1 "src/./engine/SDL2/close_code.h" 1
# 448 "src/./engine/SDL2/SDL_hidapi.h" 2
# 46 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_hints.h" 1
# 44 "src/./engine/SDL2/SDL_hints.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 45 "src/./engine/SDL2/SDL_hints.h" 2
# 1974 "src/./engine/SDL2/SDL_hints.h"
typedef enum
{
    SDL_HINT_DEFAULT,
    SDL_HINT_NORMAL,
    SDL_HINT_OVERRIDE
} SDL_HintPriority;
# 1999 "src/./engine/SDL2/SDL_hints.h"
extern SDL_bool SDL_SetHintWithPriority(const char *name,
                                                         const char *value,
                                                         SDL_HintPriority priority);
# 2019 "src/./engine/SDL2/SDL_hints.h"
extern SDL_bool SDL_SetHint(const char *name,
                                             const char *value);
# 2033 "src/./engine/SDL2/SDL_hints.h"
extern const char * SDL_GetHint(const char *name);
# 2048 "src/./engine/SDL2/SDL_hints.h"
extern SDL_bool SDL_GetHintBoolean(const char *name, SDL_bool default_value);
# 2058 "src/./engine/SDL2/SDL_hints.h"
typedef void ( *SDL_HintCallback)(void *userdata, const char *name, const char *oldValue, const char *newValue);
# 2072 "src/./engine/SDL2/SDL_hints.h"
extern void SDL_AddHintCallback(const char *name,
                                                 SDL_HintCallback callback,
                                                 void *userdata);
# 2088 "src/./engine/SDL2/SDL_hints.h"
extern void SDL_DelHintCallback(const char *name,
                                                 SDL_HintCallback callback,
                                                 void *userdata);
# 2099 "src/./engine/SDL2/SDL_hints.h"
extern void SDL_ClearHints(void);






# 1 "src/./engine/SDL2/close_code.h" 1
# 2107 "src/./engine/SDL2/SDL_hints.h" 2
# 47 "src/./engine/SDL2/SDL.h" 2

# 1 "src/./engine/SDL2/SDL_loadso.h" 1
# 47 "src/./engine/SDL2/SDL_loadso.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 48 "src/./engine/SDL2/SDL_loadso.h" 2
# 65 "src/./engine/SDL2/SDL_loadso.h"
extern void * SDL_LoadObject(const char *sofile);
# 92 "src/./engine/SDL2/SDL_loadso.h"
extern void * SDL_LoadFunction(void *handle,
                                               const char *name);
# 105 "src/./engine/SDL2/SDL_loadso.h"
extern void SDL_UnloadObject(void *handle);





# 1 "src/./engine/SDL2/close_code.h" 1
# 112 "src/./engine/SDL2/SDL_loadso.h" 2
# 49 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_log.h" 1
# 42 "src/./engine/SDL2/SDL_log.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 43 "src/./engine/SDL2/SDL_log.h" 2
# 64 "src/./engine/SDL2/SDL_log.h"
typedef enum
{
    SDL_LOG_CATEGORY_APPLICATION,
    SDL_LOG_CATEGORY_ERROR,
    SDL_LOG_CATEGORY_ASSERT,
    SDL_LOG_CATEGORY_SYSTEM,
    SDL_LOG_CATEGORY_AUDIO,
    SDL_LOG_CATEGORY_VIDEO,
    SDL_LOG_CATEGORY_RENDER,
    SDL_LOG_CATEGORY_INPUT,
    SDL_LOG_CATEGORY_TEST,


    SDL_LOG_CATEGORY_RESERVED1,
    SDL_LOG_CATEGORY_RESERVED2,
    SDL_LOG_CATEGORY_RESERVED3,
    SDL_LOG_CATEGORY_RESERVED4,
    SDL_LOG_CATEGORY_RESERVED5,
    SDL_LOG_CATEGORY_RESERVED6,
    SDL_LOG_CATEGORY_RESERVED7,
    SDL_LOG_CATEGORY_RESERVED8,
    SDL_LOG_CATEGORY_RESERVED9,
    SDL_LOG_CATEGORY_RESERVED10,
# 96 "src/./engine/SDL2/SDL_log.h"
    SDL_LOG_CATEGORY_CUSTOM
} SDL_LogCategory;




typedef enum
{
    SDL_LOG_PRIORITY_VERBOSE = 1,
    SDL_LOG_PRIORITY_DEBUG,
    SDL_LOG_PRIORITY_INFO,
    SDL_LOG_PRIORITY_WARN,
    SDL_LOG_PRIORITY_ERROR,
    SDL_LOG_PRIORITY_CRITICAL,
    SDL_NUM_LOG_PRIORITIES
} SDL_LogPriority;
# 123 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogSetAllPriority(SDL_LogPriority priority);
# 136 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogSetPriority(int category,
                                                SDL_LogPriority priority);
# 149 "src/./engine/SDL2/SDL_log.h"
extern SDL_LogPriority SDL_LogGetPriority(int category);
# 161 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogResetPriorities(void);
# 182 "src/./engine/SDL2/SDL_log.h"
extern void SDL_Log( const char *fmt, ...) __attribute__ (( format( __printf__, 1, 1 +1 )));
# 203 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogVerbose(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));
# 224 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogDebug(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));
# 245 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogInfo(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));
# 266 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogWarn(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));
# 287 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogError(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));
# 308 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogCritical(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));
# 330 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogMessage(int category,
                                            SDL_LogPriority priority,
                                            const char *fmt, ...) __attribute__ (( format( __printf__, 3, 3 +1 )));
# 353 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogMessageV(int category,
                                             SDL_LogPriority priority,
                                             const char *fmt, va_list ap);
# 367 "src/./engine/SDL2/SDL_log.h"
typedef void ( *SDL_LogOutputFunction)(void *userdata, int category, SDL_LogPriority priority, const char *message);
# 381 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogGetOutputFunction(SDL_LogOutputFunction *callback, void **userdata);
# 393 "src/./engine/SDL2/SDL_log.h"
extern void SDL_LogSetOutputFunction(SDL_LogOutputFunction callback, void *userdata);






# 1 "src/./engine/SDL2/close_code.h" 1
# 401 "src/./engine/SDL2/SDL_log.h" 2
# 50 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_messagebox.h" 1
# 28 "src/./engine/SDL2/SDL_messagebox.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 29 "src/./engine/SDL2/SDL_messagebox.h" 2
# 37 "src/./engine/SDL2/SDL_messagebox.h"
typedef enum
{
    SDL_MESSAGEBOX_ERROR = 0x00000010,
    SDL_MESSAGEBOX_WARNING = 0x00000020,
    SDL_MESSAGEBOX_INFORMATION = 0x00000040,
    SDL_MESSAGEBOX_BUTTONS_LEFT_TO_RIGHT = 0x00000080,
    SDL_MESSAGEBOX_BUTTONS_RIGHT_TO_LEFT = 0x00000100
} SDL_MessageBoxFlags;




typedef enum
{
    SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT = 0x00000001,
    SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT = 0x00000002
} SDL_MessageBoxButtonFlags;




typedef struct
{
    Uint32 flags;
    int buttonid;
    const char * text;
} SDL_MessageBoxButtonData;




typedef struct
{
    Uint8 r, g, b;
} SDL_MessageBoxColor;

typedef enum
{
    SDL_MESSAGEBOX_COLOR_BACKGROUND,
    SDL_MESSAGEBOX_COLOR_TEXT,
    SDL_MESSAGEBOX_COLOR_BUTTON_BORDER,
    SDL_MESSAGEBOX_COLOR_BUTTON_BACKGROUND,
    SDL_MESSAGEBOX_COLOR_BUTTON_SELECTED,
    SDL_MESSAGEBOX_COLOR_MAX
} SDL_MessageBoxColorType;




typedef struct
{
    SDL_MessageBoxColor colors[SDL_MESSAGEBOX_COLOR_MAX];
} SDL_MessageBoxColorScheme;




typedef struct
{
    Uint32 flags;
    SDL_Window *window;
    const char *title;
    const char *message;

    int numbuttons;
    const SDL_MessageBoxButtonData *buttons;

    const SDL_MessageBoxColorScheme *colorScheme;
} SDL_MessageBoxData;
# 140 "src/./engine/SDL2/SDL_messagebox.h"
extern int SDL_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid);
# 182 "src/./engine/SDL2/SDL_messagebox.h"
extern int SDL_ShowSimpleMessageBox(Uint32 flags, const char *title, const char *message, SDL_Window *window);






# 1 "src/./engine/SDL2/close_code.h" 1
# 190 "src/./engine/SDL2/SDL_messagebox.h" 2
# 51 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_metal.h" 1
# 33 "src/./engine/SDL2/SDL_metal.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 34 "src/./engine/SDL2/SDL_metal.h" 2
# 44 "src/./engine/SDL2/SDL_metal.h"
typedef void *SDL_MetalView;
# 66 "src/./engine/SDL2/SDL_metal.h"
extern SDL_MetalView SDL_Metal_CreateView(SDL_Window * window);
# 78 "src/./engine/SDL2/SDL_metal.h"
extern void SDL_Metal_DestroyView(SDL_MetalView view);
# 87 "src/./engine/SDL2/SDL_metal.h"
extern void * SDL_Metal_GetLayer(SDL_MetalView view);
# 101 "src/./engine/SDL2/SDL_metal.h"
extern void SDL_Metal_GetDrawableSize(SDL_Window* window, int *w,
                                                       int *h);







# 1 "src/./engine/SDL2/close_code.h" 1
# 111 "src/./engine/SDL2/SDL_metal.h" 2
# 52 "src/./engine/SDL2/SDL.h" 2

# 1 "src/./engine/SDL2/SDL_power.h" 1
# 33 "src/./engine/SDL2/SDL_power.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 34 "src/./engine/SDL2/SDL_power.h" 2
# 42 "src/./engine/SDL2/SDL_power.h"
typedef enum
{
    SDL_POWERSTATE_UNKNOWN,
    SDL_POWERSTATE_ON_BATTERY,
    SDL_POWERSTATE_NO_BATTERY,
    SDL_POWERSTATE_CHARGING,
    SDL_POWERSTATE_CHARGED
} SDL_PowerState;
# 78 "src/./engine/SDL2/SDL_power.h"
extern SDL_PowerState SDL_GetPowerInfo(int *secs, int *pct);





# 1 "src/./engine/SDL2/close_code.h" 1
# 85 "src/./engine/SDL2/SDL_power.h" 2
# 54 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_render.h" 1
# 55 "src/./engine/SDL2/SDL_render.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 56 "src/./engine/SDL2/SDL_render.h" 2
# 64 "src/./engine/SDL2/SDL_render.h"
typedef enum
{
    SDL_RENDERER_SOFTWARE = 0x00000001,
    SDL_RENDERER_ACCELERATED = 0x00000002,

    SDL_RENDERER_PRESENTVSYNC = 0x00000004,

    SDL_RENDERER_TARGETTEXTURE = 0x00000008

} SDL_RendererFlags;




typedef struct SDL_RendererInfo
{
    const char *name;
    Uint32 flags;
    Uint32 num_texture_formats;
    Uint32 texture_formats[16];
    int max_texture_width;
    int max_texture_height;
} SDL_RendererInfo;




typedef struct SDL_Vertex
{
    SDL_FPoint position;
    SDL_Color color;
    SDL_FPoint tex_coord;
} SDL_Vertex;




typedef enum
{
    SDL_ScaleModeNearest,
    SDL_ScaleModeLinear,
    SDL_ScaleModeBest
} SDL_ScaleMode;




typedef enum
{
    SDL_TEXTUREACCESS_STATIC,
    SDL_TEXTUREACCESS_STREAMING,
    SDL_TEXTUREACCESS_TARGET
} SDL_TextureAccess;




typedef enum
{
    SDL_TEXTUREMODULATE_NONE = 0x00000000,
    SDL_TEXTUREMODULATE_COLOR = 0x00000001,
    SDL_TEXTUREMODULATE_ALPHA = 0x00000002
} SDL_TextureModulate;




typedef enum
{
    SDL_FLIP_NONE = 0x00000000,
    SDL_FLIP_HORIZONTAL = 0x00000001,
    SDL_FLIP_VERTICAL = 0x00000002
} SDL_RendererFlip;




struct SDL_Renderer;
typedef struct SDL_Renderer SDL_Renderer;




struct SDL_Texture;
typedef struct SDL_Texture SDL_Texture;
# 169 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetNumRenderDrivers(void);
# 185 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetRenderDriverInfo(int index,
                                                    SDL_RendererInfo * info);
# 205 "src/./engine/SDL2/SDL_render.h"
extern int SDL_CreateWindowAndRenderer(
                                int width, int height, Uint32 window_flags,
                                SDL_Window **window, SDL_Renderer **renderer);
# 227 "src/./engine/SDL2/SDL_render.h"
extern SDL_Renderer * SDL_CreateRenderer(SDL_Window * window,
                                               int index, Uint32 flags);
# 249 "src/./engine/SDL2/SDL_render.h"
extern SDL_Renderer * SDL_CreateSoftwareRenderer(SDL_Surface * surface);
# 262 "src/./engine/SDL2/SDL_render.h"
extern SDL_Renderer * SDL_GetRenderer(SDL_Window * window);
# 273 "src/./engine/SDL2/SDL_render.h"
extern SDL_Window * SDL_RenderGetWindow(SDL_Renderer *renderer);
# 288 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetRendererInfo(SDL_Renderer * renderer,
                                                SDL_RendererInfo * info);
# 308 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetRendererOutputSize(SDL_Renderer * renderer,
                                                      int *w, int *h);
# 333 "src/./engine/SDL2/SDL_render.h"
extern SDL_Texture * SDL_CreateTexture(SDL_Renderer * renderer,
                                                        Uint32 format,
                                                        int access, int w,
                                                        int h);
# 362 "src/./engine/SDL2/SDL_render.h"
extern SDL_Texture * SDL_CreateTextureFromSurface(SDL_Renderer * renderer, SDL_Surface * surface);
# 386 "src/./engine/SDL2/SDL_render.h"
extern int SDL_QueryTexture(SDL_Texture * texture,
                                             Uint32 * format, int *access,
                                             int *w, int *h);
# 414 "src/./engine/SDL2/SDL_render.h"
extern int SDL_SetTextureColorMod(SDL_Texture * texture,
                                                   Uint8 r, Uint8 g, Uint8 b);
# 433 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetTextureColorMod(SDL_Texture * texture,
                                                   Uint8 * r, Uint8 * g,
                                                   Uint8 * b);
# 458 "src/./engine/SDL2/SDL_render.h"
extern int SDL_SetTextureAlphaMod(SDL_Texture * texture,
                                                   Uint8 alpha);
# 474 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetTextureAlphaMod(SDL_Texture * texture,
                                                   Uint8 * alpha);
# 493 "src/./engine/SDL2/SDL_render.h"
extern int SDL_SetTextureBlendMode(SDL_Texture * texture,
                                                    SDL_BlendMode blendMode);
# 508 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetTextureBlendMode(SDL_Texture * texture,
                                                    SDL_BlendMode *blendMode);
# 524 "src/./engine/SDL2/SDL_render.h"
extern int SDL_SetTextureScaleMode(SDL_Texture * texture,
                                                    SDL_ScaleMode scaleMode);
# 538 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetTextureScaleMode(SDL_Texture * texture,
                                                    SDL_ScaleMode *scaleMode);
# 552 "src/./engine/SDL2/SDL_render.h"
extern int SDL_SetTextureUserData(SDL_Texture * texture,
                                                   void *userdata);
# 566 "src/./engine/SDL2/SDL_render.h"
extern void * SDL_GetTextureUserData(SDL_Texture * texture);
# 597 "src/./engine/SDL2/SDL_render.h"
extern int SDL_UpdateTexture(SDL_Texture * texture,
                                              const SDL_Rect * rect,
                                              const void *pixels, int pitch);
# 628 "src/./engine/SDL2/SDL_render.h"
extern int SDL_UpdateYUVTexture(SDL_Texture * texture,
                                                 const SDL_Rect * rect,
                                                 const Uint8 *Yplane, int Ypitch,
                                                 const Uint8 *Uplane, int Upitch,
                                                 const Uint8 *Vplane, int Vpitch);
# 654 "src/./engine/SDL2/SDL_render.h"
extern int SDL_UpdateNVTexture(SDL_Texture * texture,
                                                 const SDL_Rect * rect,
                                                 const Uint8 *Yplane, int Ypitch,
                                                 const Uint8 *UVplane, int UVpitch);
# 686 "src/./engine/SDL2/SDL_render.h"
extern int SDL_LockTexture(SDL_Texture * texture,
                                            const SDL_Rect * rect,
                                            void **pixels, int *pitch);
# 722 "src/./engine/SDL2/SDL_render.h"
extern int SDL_LockTextureToSurface(SDL_Texture *texture,
                                            const SDL_Rect *rect,
                                            SDL_Surface **surface);
# 743 "src/./engine/SDL2/SDL_render.h"
extern void SDL_UnlockTexture(SDL_Texture * texture);
# 755 "src/./engine/SDL2/SDL_render.h"
extern SDL_bool SDL_RenderTargetSupported(SDL_Renderer *renderer);
# 779 "src/./engine/SDL2/SDL_render.h"
extern int SDL_SetRenderTarget(SDL_Renderer *renderer,
                                                SDL_Texture *texture);
# 795 "src/./engine/SDL2/SDL_render.h"
extern SDL_Texture * SDL_GetRenderTarget(SDL_Renderer *renderer);
# 823 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderSetLogicalSize(SDL_Renderer * renderer, int w, int h);
# 840 "src/./engine/SDL2/SDL_render.h"
extern void SDL_RenderGetLogicalSize(SDL_Renderer * renderer, int *w, int *h);
# 859 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderSetIntegerScale(SDL_Renderer * renderer,
                                                      SDL_bool enable);
# 873 "src/./engine/SDL2/SDL_render.h"
extern SDL_bool SDL_RenderGetIntegerScale(SDL_Renderer * renderer);
# 891 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderSetViewport(SDL_Renderer * renderer,
                                                  const SDL_Rect * rect);
# 904 "src/./engine/SDL2/SDL_render.h"
extern void SDL_RenderGetViewport(SDL_Renderer * renderer,
                                                   SDL_Rect * rect);
# 922 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderSetClipRect(SDL_Renderer * renderer,
                                                  const SDL_Rect * rect);
# 938 "src/./engine/SDL2/SDL_render.h"
extern void SDL_RenderGetClipRect(SDL_Renderer * renderer,
                                                   SDL_Rect * rect);
# 953 "src/./engine/SDL2/SDL_render.h"
extern SDL_bool SDL_RenderIsClipEnabled(SDL_Renderer * renderer);
# 978 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderSetScale(SDL_Renderer * renderer,
                                               float scaleX, float scaleY);
# 992 "src/./engine/SDL2/SDL_render.h"
extern void SDL_RenderGetScale(SDL_Renderer * renderer,
                                               float *scaleX, float *scaleY);
# 1016 "src/./engine/SDL2/SDL_render.h"
extern void SDL_RenderWindowToLogical(SDL_Renderer * renderer,
                                                            int windowX, int windowY,
                                                            float *logicalX, float *logicalY);
# 1038 "src/./engine/SDL2/SDL_render.h"
extern void SDL_RenderLogicalToWindow(SDL_Renderer * renderer,
                                                            float logicalX, float logicalY,
                                                            int *windowX, int *windowY);
# 1071 "src/./engine/SDL2/SDL_render.h"
extern int SDL_SetRenderDrawColor(SDL_Renderer * renderer,
                                           Uint8 r, Uint8 g, Uint8 b,
                                           Uint8 a);
# 1094 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetRenderDrawColor(SDL_Renderer * renderer,
                                           Uint8 * r, Uint8 * g, Uint8 * b,
                                           Uint8 * a);
# 1120 "src/./engine/SDL2/SDL_render.h"
extern int SDL_SetRenderDrawBlendMode(SDL_Renderer * renderer,
                                                       SDL_BlendMode blendMode);
# 1135 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GetRenderDrawBlendMode(SDL_Renderer * renderer,
                                                       SDL_BlendMode *blendMode);
# 1152 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderClear(SDL_Renderer * renderer);
# 1179 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawPoint(SDL_Renderer * renderer,
                                                int x, int y);
# 1205 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawPoints(SDL_Renderer * renderer,
                                                 const SDL_Point * points,
                                                 int count);
# 1236 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawLine(SDL_Renderer * renderer,
                                               int x1, int y1, int x2, int y2);
# 1262 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawLines(SDL_Renderer * renderer,
                                                const SDL_Point * points,
                                                int count);
# 1288 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawRect(SDL_Renderer * renderer,
                                               const SDL_Rect * rect);
# 1314 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawRects(SDL_Renderer * renderer,
                                                const SDL_Rect * rects,
                                                int count);
# 1344 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderFillRect(SDL_Renderer * renderer,
                                               const SDL_Rect * rect);
# 1369 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderFillRects(SDL_Renderer * renderer,
                                                const SDL_Rect * rects,
                                                int count);
# 1401 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderCopy(SDL_Renderer * renderer,
                                           SDL_Texture * texture,
                                           const SDL_Rect * srcrect,
                                           const SDL_Rect * dstrect);
# 1445 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderCopyEx(SDL_Renderer * renderer,
                                           SDL_Texture * texture,
                                           const SDL_Rect * srcrect,
                                           const SDL_Rect * dstrect,
                                           const double angle,
                                           const SDL_Point *center,
                                           const SDL_RendererFlip flip);
# 1464 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawPointF(SDL_Renderer * renderer,
                                                 float x, float y);
# 1477 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawPointsF(SDL_Renderer * renderer,
                                                  const SDL_FPoint * points,
                                                  int count);
# 1493 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawLineF(SDL_Renderer * renderer,
                                                float x1, float y1, float x2, float y2);
# 1507 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawLinesF(SDL_Renderer * renderer,
                                                 const SDL_FPoint * points,
                                                 int count);
# 1521 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawRectF(SDL_Renderer * renderer,
                                                const SDL_FRect * rect);
# 1535 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderDrawRectsF(SDL_Renderer * renderer,
                                                 const SDL_FRect * rects,
                                                 int count);
# 1550 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderFillRectF(SDL_Renderer * renderer,
                                                const SDL_FRect * rect);
# 1564 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderFillRectsF(SDL_Renderer * renderer,
                                                 const SDL_FRect * rects,
                                                 int count);
# 1582 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderCopyF(SDL_Renderer * renderer,
                                            SDL_Texture * texture,
                                            const SDL_Rect * srcrect,
                                            const SDL_FRect * dstrect);
# 1608 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderCopyExF(SDL_Renderer * renderer,
                                            SDL_Texture * texture,
                                            const SDL_Rect * srcrect,
                                            const SDL_FRect * dstrect,
                                            const double angle,
                                            const SDL_FPoint *center,
                                            const SDL_RendererFlip flip);
# 1635 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderGeometry(SDL_Renderer *renderer,
                                               SDL_Texture *texture,
                                               const SDL_Vertex *vertices, int num_vertices,
                                               const int *indices, int num_indices);
# 1664 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderGeometryRaw(SDL_Renderer *renderer,
                                               SDL_Texture *texture,
                                               const float *xy, int xy_stride,
                                               const SDL_Color *color, int color_stride,
                                               const float *uv, int uv_stride,
                                               int num_vertices,
                                               const void *indices, int num_indices, int size_indices);
# 1698 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderReadPixels(SDL_Renderer * renderer,
                                                 const SDL_Rect * rect,
                                                 Uint32 format,
                                                 void *pixels, int pitch);
# 1738 "src/./engine/SDL2/SDL_render.h"
extern void SDL_RenderPresent(SDL_Renderer * renderer);
# 1753 "src/./engine/SDL2/SDL_render.h"
extern void SDL_DestroyTexture(SDL_Texture * texture);
# 1764 "src/./engine/SDL2/SDL_render.h"
extern void SDL_DestroyRenderer(SDL_Renderer * renderer);
# 1795 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderFlush(SDL_Renderer * renderer);
# 1833 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GL_BindTexture(SDL_Texture *texture, float *texw, float *texh);
# 1848 "src/./engine/SDL2/SDL_render.h"
extern int SDL_GL_UnbindTexture(SDL_Texture *texture);
# 1864 "src/./engine/SDL2/SDL_render.h"
extern void * SDL_RenderGetMetalLayer(SDL_Renderer * renderer);
# 1885 "src/./engine/SDL2/SDL_render.h"
extern void * SDL_RenderGetMetalCommandEncoder(SDL_Renderer * renderer);
# 1896 "src/./engine/SDL2/SDL_render.h"
extern int SDL_RenderSetVSync(SDL_Renderer* renderer, int vsync);





# 1 "src/./engine/SDL2/close_code.h" 1
# 1903 "src/./engine/SDL2/SDL_render.h" 2
# 55 "src/./engine/SDL2/SDL.h" 2


# 1 "src/./engine/SDL2/SDL_shape.h" 1
# 31 "src/./engine/SDL2/SDL_shape.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 32 "src/./engine/SDL2/SDL_shape.h" 2
# 69 "src/./engine/SDL2/SDL_shape.h"
extern SDL_Window * SDL_CreateShapedWindow(const char *title,unsigned int x,unsigned int y,unsigned int w,unsigned int h,Uint32 flags);
# 82 "src/./engine/SDL2/SDL_shape.h"
extern SDL_bool SDL_IsShapedWindow(const SDL_Window *window);


typedef enum {

    ShapeModeDefault,

    ShapeModeBinarizeAlpha,

    ShapeModeReverseBinarizeAlpha,

    ShapeModeColorKey
} WindowShapeMode;




typedef union {

    Uint8 binarizationCutoff;
    SDL_Color colorKey;
} SDL_WindowShapeParams;


typedef struct SDL_WindowShapeMode {

    WindowShapeMode mode;

    SDL_WindowShapeParams parameters;
} SDL_WindowShapeMode;
# 128 "src/./engine/SDL2/SDL_shape.h"
extern int SDL_SetWindowShape(SDL_Window *window,SDL_Surface *shape,SDL_WindowShapeMode *shape_mode);
# 147 "src/./engine/SDL2/SDL_shape.h"
extern int SDL_GetShapedWindowMode(SDL_Window *window,SDL_WindowShapeMode *shape_mode);





# 1 "src/./engine/SDL2/close_code.h" 1
# 154 "src/./engine/SDL2/SDL_shape.h" 2
# 58 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_system.h" 1
# 36 "src/./engine/SDL2/SDL_system.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 37 "src/./engine/SDL2/SDL_system.h" 2
# 46 "src/./engine/SDL2/SDL_system.h"
typedef void ( * SDL_WindowsMessageHook)(void *userdata, void *hWnd, unsigned int message, Uint64 wParam, Sint64 lParam);
# 56 "src/./engine/SDL2/SDL_system.h"
extern void SDL_SetWindowsMessageHook(SDL_WindowsMessageHook callback, void *userdata);
# 71 "src/./engine/SDL2/SDL_system.h"
extern int SDL_Direct3D9GetAdapterIndex( int displayIndex );

typedef struct IDirect3DDevice9 IDirect3DDevice9;
# 87 "src/./engine/SDL2/SDL_system.h"
extern IDirect3DDevice9* SDL_RenderGetD3D9Device(SDL_Renderer * renderer);

typedef struct ID3D11Device ID3D11Device;
# 103 "src/./engine/SDL2/SDL_system.h"
extern ID3D11Device* SDL_RenderGetD3D11Device(SDL_Renderer * renderer);
# 123 "src/./engine/SDL2/SDL_system.h"
extern SDL_bool SDL_DXGIGetOutputInfo( int displayIndex, int *adapterIndex, int *outputIndex );
# 554 "src/./engine/SDL2/SDL_system.h"
extern SDL_bool SDL_IsTablet(void);


extern void SDL_OnApplicationWillTerminate(void);
extern void SDL_OnApplicationDidReceiveMemoryWarning(void);
extern void SDL_OnApplicationWillResignActive(void);
extern void SDL_OnApplicationDidEnterBackground(void);
extern void SDL_OnApplicationWillEnterForeground(void);
extern void SDL_OnApplicationDidBecomeActive(void);
# 571 "src/./engine/SDL2/SDL_system.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 572 "src/./engine/SDL2/SDL_system.h" 2
# 59 "src/./engine/SDL2/SDL.h" 2

# 1 "src/./engine/SDL2/SDL_timer.h" 1
# 34 "src/./engine/SDL2/SDL_timer.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 35 "src/./engine/SDL2/SDL_timer.h" 2
# 58 "src/./engine/SDL2/SDL_timer.h"
extern Uint32 SDL_GetTicks(void);
# 82 "src/./engine/SDL2/SDL_timer.h"
extern Uint64 SDL_GetTicks64(void);
# 123 "src/./engine/SDL2/SDL_timer.h"
extern Uint64 SDL_GetPerformanceCounter(void);
# 134 "src/./engine/SDL2/SDL_timer.h"
extern Uint64 SDL_GetPerformanceFrequency(void);
# 147 "src/./engine/SDL2/SDL_timer.h"
extern void SDL_Delay(Uint32 ms);
# 157 "src/./engine/SDL2/SDL_timer.h"
typedef Uint32 ( * SDL_TimerCallback) (Uint32 interval, void *param);




typedef int SDL_TimerID;
# 196 "src/./engine/SDL2/SDL_timer.h"
extern SDL_TimerID SDL_AddTimer(Uint32 interval,
                                                 SDL_TimerCallback callback,
                                                 void *param);
# 211 "src/./engine/SDL2/SDL_timer.h"
extern SDL_bool SDL_RemoveTimer(SDL_TimerID id);






# 1 "src/./engine/SDL2/close_code.h" 1
# 219 "src/./engine/SDL2/SDL_timer.h" 2
# 61 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_version.h" 1
# 33 "src/./engine/SDL2/SDL_version.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 34 "src/./engine/SDL2/SDL_version.h" 2
# 51 "src/./engine/SDL2/SDL_version.h"
typedef struct SDL_version
{
    Uint8 major;
    Uint8 minor;
    Uint8 patch;
} SDL_version;
# 125 "src/./engine/SDL2/SDL_version.h"
extern void SDL_GetVersion(SDL_version * ver);
# 154 "src/./engine/SDL2/SDL_version.h"
extern const char * SDL_GetRevision(void);
# 177 "src/./engine/SDL2/SDL_version.h"
extern __attribute__((deprecated)) int SDL_GetRevisionNumber(void);






# 1 "src/./engine/SDL2/close_code.h" 1
# 185 "src/./engine/SDL2/SDL_version.h" 2
# 62 "src/./engine/SDL2/SDL.h" 2

# 1 "src/./engine/SDL2/SDL_locale.h" 1
# 34 "src/./engine/SDL2/SDL_locale.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 35 "src/./engine/SDL2/SDL_locale.h" 2
# 43 "src/./engine/SDL2/SDL_locale.h"
typedef struct SDL_Locale
{
    const char *language;
    const char *country;
} SDL_Locale;
# 91 "src/./engine/SDL2/SDL_locale.h"
extern SDL_Locale * SDL_GetPreferredLocales(void);







# 1 "src/./engine/SDL2/close_code.h" 1
# 100 "src/./engine/SDL2/SDL_locale.h" 2
# 64 "src/./engine/SDL2/SDL.h" 2
# 1 "src/./engine/SDL2/SDL_misc.h" 1
# 33 "src/./engine/SDL2/SDL_misc.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 34 "src/./engine/SDL2/SDL_misc.h" 2
# 69 "src/./engine/SDL2/SDL_misc.h"
extern int SDL_OpenURL(const char *url);





# 1 "src/./engine/SDL2/close_code.h" 1
# 76 "src/./engine/SDL2/SDL_misc.h" 2
# 65 "src/./engine/SDL2/SDL.h" 2

# 1 "src/./engine/SDL2/begin_code.h" 1
# 67 "src/./engine/SDL2/SDL.h" 2
# 143 "src/./engine/SDL2/SDL.h"
extern int SDL_Init(Uint32 flags);
# 160 "src/./engine/SDL2/SDL.h"
extern int SDL_InitSubSystem(Uint32 flags);
# 182 "src/./engine/SDL2/SDL.h"
extern void SDL_QuitSubSystem(Uint32 flags);
# 198 "src/./engine/SDL2/SDL.h"
extern Uint32 SDL_WasInit(Uint32 flags);
# 222 "src/./engine/SDL2/SDL.h"
extern void SDL_Quit(void);





# 1 "src/./engine/SDL2/close_code.h" 1
# 229 "src/./engine/SDL2/SDL.h" 2
# 5 "src/engine.h" 2
# 1 "src/./engine/SDL2/SDL_image.h" 1
# 27 "src/./engine/SDL2/SDL_image.h"
# 1 "src/./engine/SDL2/SDL.h" 1
# 28 "src/./engine/SDL2/SDL_image.h" 2

# 1 "src/./engine/SDL2/begin_code.h" 1
# 30 "src/./engine/SDL2/SDL_image.h" 2
# 68 "src/./engine/SDL2/SDL_image.h"
extern const SDL_version * IMG_Linked_Version(void);

typedef enum
{
    IMG_INIT_JPG = 0x00000001,
    IMG_INIT_PNG = 0x00000002,
    IMG_INIT_TIF = 0x00000004,
    IMG_INIT_WEBP = 0x00000008
} IMG_InitFlags;





extern int IMG_Init(int flags);


extern void IMG_Quit(void);
# 95 "src/./engine/SDL2/SDL_image.h"
extern SDL_Surface * IMG_LoadTyped_RW(SDL_RWops *src, int freesrc, const char *type);

extern SDL_Surface * IMG_Load(const char *file);
extern SDL_Surface * IMG_Load_RW(SDL_RWops *src, int freesrc);




extern SDL_Texture * IMG_LoadTexture(SDL_Renderer *renderer, const char *file);
extern SDL_Texture * IMG_LoadTexture_RW(SDL_Renderer *renderer, SDL_RWops *src, int freesrc);
extern SDL_Texture * IMG_LoadTextureTyped_RW(SDL_Renderer *renderer, SDL_RWops *src, int freesrc, const char *type);



extern int IMG_isICO(SDL_RWops *src);
extern int IMG_isCUR(SDL_RWops *src);
extern int IMG_isBMP(SDL_RWops *src);
extern int IMG_isGIF(SDL_RWops *src);
extern int IMG_isJPG(SDL_RWops *src);
extern int IMG_isLBM(SDL_RWops *src);
extern int IMG_isPCX(SDL_RWops *src);
extern int IMG_isPNG(SDL_RWops *src);
extern int IMG_isPNM(SDL_RWops *src);
extern int IMG_isSVG(SDL_RWops *src);
extern int IMG_isTIF(SDL_RWops *src);
extern int IMG_isXCF(SDL_RWops *src);
extern int IMG_isXPM(SDL_RWops *src);
extern int IMG_isXV(SDL_RWops *src);
extern int IMG_isWEBP(SDL_RWops *src);


extern SDL_Surface * IMG_LoadICO_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadCUR_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadBMP_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadGIF_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadJPG_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadLBM_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadPCX_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadPNG_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadPNM_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadSVG_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadTGA_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadTIF_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadXCF_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadXPM_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadXV_RW(SDL_RWops *src);
extern SDL_Surface * IMG_LoadWEBP_RW(SDL_RWops *src);

extern SDL_Surface * IMG_ReadXPMFromArray(char **xpm);


extern int IMG_SavePNG(SDL_Surface *surface, const char *file);
extern int IMG_SavePNG_RW(SDL_Surface *surface, SDL_RWops *dst, int freedst);
extern int IMG_SaveJPG(SDL_Surface *surface, const char *file, int quality);
extern int IMG_SaveJPG_RW(SDL_Surface *surface, SDL_RWops *dst, int freedst, int quality);
# 159 "src/./engine/SDL2/SDL_image.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 160 "src/./engine/SDL2/SDL_image.h" 2
# 6 "src/engine.h" 2
# 1 "src/./engine/SDL2/SDL_mixer.h" 1
# 30 "src/./engine/SDL2/SDL_mixer.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 31 "src/./engine/SDL2/SDL_mixer.h" 2
# 75 "src/./engine/SDL2/SDL_mixer.h"
extern const SDL_version * Mix_Linked_Version(void);

typedef enum
{
    MIX_INIT_FLAC = 0x00000001,
    MIX_INIT_MOD = 0x00000002,
    MIX_INIT_MP3 = 0x00000008,
    MIX_INIT_OGG = 0x00000010,
    MIX_INIT_MID = 0x00000020,
    MIX_INIT_OPUS = 0x00000040
} MIX_InitFlags;





extern int Mix_Init(int flags);


extern void Mix_Quit(void);
# 113 "src/./engine/SDL2/SDL_mixer.h"
typedef struct Mix_Chunk {
    int allocated;
    Uint8 *abuf;
    Uint32 alen;
    Uint8 volume;
} Mix_Chunk;


typedef enum {
    MIX_NO_FADING,
    MIX_FADING_OUT,
    MIX_FADING_IN
} Mix_Fading;


typedef enum {
    MUS_NONE,
    MUS_CMD,
    MUS_WAV,
    MUS_MOD,
    MUS_MID,
    MUS_OGG,
    MUS_MP3,
    MUS_MP3_MAD_UNUSED,
    MUS_FLAC,
    MUS_MODPLUG_UNUSED,
    MUS_OPUS
} Mix_MusicType;


typedef struct _Mix_Music Mix_Music;


extern int Mix_OpenAudio(int frequency, Uint16 format, int channels, int chunksize);


extern int Mix_OpenAudioDevice(int frequency, Uint16 format, int channels, int chunksize, const char* device, int allowed_changes);






extern int Mix_AllocateChannels(int numchans);




extern int Mix_QuerySpec(int *frequency,Uint16 *format,int *channels);


extern Mix_Chunk * Mix_LoadWAV_RW(SDL_RWops *src, int freesrc);

extern Mix_Music * Mix_LoadMUS(const char *file);



extern Mix_Music * Mix_LoadMUS_RW(SDL_RWops *src, int freesrc);


extern Mix_Music * Mix_LoadMUSType_RW(SDL_RWops *src, Mix_MusicType type, int freesrc);


extern Mix_Chunk * Mix_QuickLoad_WAV(Uint8 *mem);


extern Mix_Chunk * Mix_QuickLoad_RAW(Uint8 *mem, Uint32 len);


extern void Mix_FreeChunk(Mix_Chunk *chunk);
extern void Mix_FreeMusic(Mix_Music *music);
# 204 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_GetNumChunkDecoders(void);
extern const char * Mix_GetChunkDecoder(int index);
extern SDL_bool Mix_HasChunkDecoder(const char *name);
extern int Mix_GetNumMusicDecoders(void);
extern const char * Mix_GetMusicDecoder(int index);
extern SDL_bool Mix_HasMusicDecoder(const char *name);




extern Mix_MusicType Mix_GetMusicType(const Mix_Music *music);





extern void Mix_SetPostMix(void ( *mix_func)(void *udata, Uint8 *stream, int len), void *arg);




extern void Mix_HookMusic(void ( *mix_func)(void *udata, Uint8 *stream, int len), void *arg);




extern void Mix_HookMusicFinished(void ( *music_finished)(void));


extern void * Mix_GetMusicHookData(void);
# 243 "src/./engine/SDL2/SDL_mixer.h"
extern void Mix_ChannelFinished(void ( *channel_finished)(int channel));
# 267 "src/./engine/SDL2/SDL_mixer.h"
typedef void ( *Mix_EffectFunc_t)(int chan, void *stream, int len, void *udata);
# 278 "src/./engine/SDL2/SDL_mixer.h"
typedef void ( *Mix_EffectDone_t)(int chan, void *udata);
# 327 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_RegisterEffect(int chan, Mix_EffectFunc_t f, Mix_EffectDone_t d, void *arg);
# 338 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_UnregisterEffect(int channel, Mix_EffectFunc_t f);
# 352 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_UnregisterAllEffects(int channel);
# 392 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_SetPanning(int channel, Uint8 left, Uint8 right);
# 432 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_SetPosition(int channel, Sint16 angle, Uint8 distance);
# 462 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_SetDistance(int channel, Uint8 distance);
# 509 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_SetReverseStereo(int channel, int flip);
# 518 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_ReserveChannels(int num);
# 528 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_GroupChannel(int which, int tag);

extern int Mix_GroupChannels(int from, int to, int tag);



extern int Mix_GroupAvailable(int tag);



extern int Mix_GroupCount(int tag);

extern int Mix_GroupOldest(int tag);

extern int Mix_GroupNewer(int tag);
# 552 "src/./engine/SDL2/SDL_mixer.h"
extern int Mix_PlayChannelTimed(int channel, Mix_Chunk *chunk, int loops, int ticks);
extern int Mix_PlayMusic(Mix_Music *music, int loops);


extern int Mix_FadeInMusic(Mix_Music *music, int loops, int ms);
extern int Mix_FadeInMusicPos(Mix_Music *music, int loops, int ms, double position);

extern int Mix_FadeInChannelTimed(int channel, Mix_Chunk *chunk, int loops, int ms, int ticks);






extern int Mix_Volume(int channel, int volume);
extern int Mix_VolumeChunk(Mix_Chunk *chunk, int volume);
extern int Mix_VolumeMusic(int volume);


extern int Mix_HaltChannel(int channel);
extern int Mix_HaltGroup(int tag);
extern int Mix_HaltMusic(void);





extern int Mix_ExpireChannel(int channel, int ticks);





extern int Mix_FadeOutChannel(int which, int ms);
extern int Mix_FadeOutGroup(int tag, int ms);
extern int Mix_FadeOutMusic(int ms);


extern Mix_Fading Mix_FadingMusic(void);
extern Mix_Fading Mix_FadingChannel(int which);


extern void Mix_Pause(int channel);
extern void Mix_Resume(int channel);
extern int Mix_Paused(int channel);


extern void Mix_PauseMusic(void);
extern void Mix_ResumeMusic(void);
extern void Mix_RewindMusic(void);
extern int Mix_PausedMusic(void);







extern int Mix_SetMusicPosition(double position);




extern int Mix_Playing(int channel);
extern int Mix_PlayingMusic(void);


extern int Mix_SetMusicCMD(const char *command);


extern int Mix_SetSynchroValue(int value);
extern int Mix_GetSynchroValue(void);


extern int Mix_SetSoundFonts(const char *paths);
extern const char* Mix_GetSoundFonts(void);
extern int Mix_EachSoundFont(int ( *function)(const char*, void*), void *data);




extern Mix_Chunk * Mix_GetChunk(int channel);


extern void Mix_CloseAudio(void);
# 647 "src/./engine/SDL2/SDL_mixer.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 648 "src/./engine/SDL2/SDL_mixer.h" 2
# 7 "src/engine.h" 2
# 1 "src/./engine/SDL2/SDL_ttf.h" 1
# 35 "src/./engine/SDL2/SDL_ttf.h"
# 1 "src/./engine/SDL2/begin_code.h" 1
# 36 "src/./engine/SDL2/SDL_ttf.h" 2
# 85 "src/./engine/SDL2/SDL_ttf.h"
extern const SDL_version * TTF_Linked_Version(void);
# 95 "src/./engine/SDL2/SDL_ttf.h"
extern void TTF_ByteSwappedUNICODE(int swapped);


typedef struct _TTF_Font TTF_Font;


extern int TTF_Init(void);





extern TTF_Font * TTF_OpenFont(const char *file, int ptsize);
extern TTF_Font * TTF_OpenFontIndex(const char *file, int ptsize, long index);
extern TTF_Font * TTF_OpenFontRW(SDL_RWops *src, int freesrc, int ptsize);
extern TTF_Font * TTF_OpenFontIndexRW(SDL_RWops *src, int freesrc, int ptsize, long index);







extern int TTF_GetFontStyle(const TTF_Font *font);
extern void TTF_SetFontStyle(TTF_Font *font, int style);
extern int TTF_GetFontOutline(const TTF_Font *font);
extern void TTF_SetFontOutline(TTF_Font *font, int outline);






extern int TTF_GetFontHinting(const TTF_Font *font);
extern void TTF_SetFontHinting(TTF_Font *font, int hinting);


extern int TTF_FontHeight(const TTF_Font *font);




extern int TTF_FontAscent(const TTF_Font *font);




extern int TTF_FontDescent(const TTF_Font *font);


extern int TTF_FontLineSkip(const TTF_Font *font);


extern int TTF_GetFontKerning(const TTF_Font *font);
extern void TTF_SetFontKerning(TTF_Font *font, int allowed);


extern long TTF_FontFaces(const TTF_Font *font);


extern int TTF_FontFaceIsFixedWidth(const TTF_Font *font);
extern char * TTF_FontFaceFamilyName(const TTF_Font *font);
extern char * TTF_FontFaceStyleName(const TTF_Font *font);


extern int TTF_GlyphIsProvided(const TTF_Font *font, Uint16 ch);





extern int TTF_GlyphMetrics(TTF_Font *font, Uint16 ch,
                     int *minx, int *maxx,
                                     int *miny, int *maxy, int *advance);


extern int TTF_SizeText(TTF_Font *font, const char *text, int *w, int *h);
extern int TTF_SizeUTF8(TTF_Font *font, const char *text, int *w, int *h);
extern int TTF_SizeUNICODE(TTF_Font *font, const Uint16 *text, int *w, int *h);







extern SDL_Surface * TTF_RenderText_Solid(TTF_Font *font,
                const char *text, SDL_Color fg);
extern SDL_Surface * TTF_RenderUTF8_Solid(TTF_Font *font,
                const char *text, SDL_Color fg);
extern SDL_Surface * TTF_RenderUNICODE_Solid(TTF_Font *font,
                const Uint16 *text, SDL_Color fg);
# 195 "src/./engine/SDL2/SDL_ttf.h"
extern SDL_Surface * TTF_RenderGlyph_Solid(TTF_Font *font,
                    Uint16 ch, SDL_Color fg);






extern SDL_Surface * TTF_RenderText_Shaded(TTF_Font *font,
                const char *text, SDL_Color fg, SDL_Color bg);
extern SDL_Surface * TTF_RenderUTF8_Shaded(TTF_Font *font,
                const char *text, SDL_Color fg, SDL_Color bg);
extern SDL_Surface * TTF_RenderUNICODE_Shaded(TTF_Font *font,
                const Uint16 *text, SDL_Color fg, SDL_Color bg);
# 217 "src/./engine/SDL2/SDL_ttf.h"
extern SDL_Surface * TTF_RenderGlyph_Shaded(TTF_Font *font,
                Uint16 ch, SDL_Color fg, SDL_Color bg);





extern SDL_Surface * TTF_RenderText_Blended(TTF_Font *font,
                const char *text, SDL_Color fg);
extern SDL_Surface * TTF_RenderUTF8_Blended(TTF_Font *font,
                const char *text, SDL_Color fg);
extern SDL_Surface * TTF_RenderUNICODE_Blended(TTF_Font *font,
                const Uint16 *text, SDL_Color fg);
# 238 "src/./engine/SDL2/SDL_ttf.h"
extern SDL_Surface * TTF_RenderText_Blended_Wrapped(TTF_Font *font,
                const char *text, SDL_Color fg, Uint32 wrapLength);
extern SDL_Surface * TTF_RenderUTF8_Blended_Wrapped(TTF_Font *font,
                const char *text, SDL_Color fg, Uint32 wrapLength);
extern SDL_Surface * TTF_RenderUNICODE_Blended_Wrapped(TTF_Font *font,
                const Uint16 *text, SDL_Color fg, Uint32 wrapLength);







extern SDL_Surface * TTF_RenderGlyph_Blended(TTF_Font *font,
                        Uint16 ch, SDL_Color fg);
# 263 "src/./engine/SDL2/SDL_ttf.h"
extern void TTF_CloseFont(TTF_Font *font);


extern void TTF_Quit(void);


extern int TTF_WasInit(void);







extern int TTF_GetFontKerningSize(TTF_Font *font, int prev_index, int index) __attribute__((deprecated));


extern int TTF_GetFontKerningSizeGlyphs(TTF_Font *font, Uint16 previous_ch, Uint16 ch);
# 290 "src/./engine/SDL2/SDL_ttf.h"
# 1 "src/./engine/SDL2/close_code.h" 1
# 291 "src/./engine/SDL2/SDL_ttf.h" 2
# 8 "src/engine.h" 2
# 1 "src/./engine/sdl_gfx/SDL2_framerate.h" 1
