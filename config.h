/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Using a.out ABI */
/* #undef AOUTABI */

/* Define path to alternate assembler */
/* #undef ASSEMBLER */

/* Define path to alternate cc2 */
/* #undef CC2 */

/* Using Classic 68k ABI */
/* #undef CLASSIC68K */

/* Using COFF ABI */
/* #undef COFFABI */

/* Define path to alternate compiler */
/* #undef COMPILER */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Cross-compiling. */
/* #undef CROSS_COMPILING */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Enable DWARF debugging output */
/* #undef DWARF */

/* Using ECOFF ABI */
/* #undef ECOFFABI */

/* Using ELF ABI */
#define ELFABI 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if printf supports C99 size specifiers */
#define HAVE_C99_FORMAT 1

/* Define to 1 if you have the `ffs' function. */
#define HAVE_FFS 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strtold' function. */
#define HAVE_STRTOLD 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define if host is BIG endian */
/* #undef HOST_BIG_ENDIAN */

/* Define if host is LITTLE endian */
#define HOST_LITTLE_ENDIAN 1

/* Define alternate standard lib directory */
/* #undef LIBDIR */

/* Use libvmf. */
/* #undef LIBVMF */

/* Define path to alternate linker */
/* #undef LINKER */

/* Using Mach-O ABI */
/* #undef MACHOABI */

/* Define target Multi-Arch path */
/* #undef MULTIARCH_PATH */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "pcc@lists.ludd.ltu.se"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Portable C Compiler"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Portable C Compiler 1.2.0.DEVEL"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "pcc"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://pcc.ludd.ltu.se/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.2.0.DEVEL"

/* Major version no */
#define PCC_MAJOR 1

/* Minor version no */
#define PCC_MINOR 2

/* Minor minor version no */
#define PCC_MINORMINOR 0

/* Using PE/COFF ABI */
/* #undef PECOFFABI */

/* Define path to alternate preprocessor */
/* #undef PREPROCESSOR */

/* The size of `int *', as computed by sizeof. */
#define SIZEOF_INT_P 8

/* Enable STABS debugging output */
#define STABS 1

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define alternate standard include directory */
/* #undef STDINC */

/* Define if target defaults to BIG endian */
/* #undef TARGET_BIG_ENDIAN */

/* Define if target defaults to LITTLE endian */
#define TARGET_LITTLE_ENDIAN 1

/* Target string */
#define TARGSTR "x86_64-pc-linux-gnu"

/* Enable thread-local storage (TLS). */
/* #undef TLS */

/* Version string */
#define VERSSTR "Portable C Compiler 1.2.0.DEVEL 20230724 for x86_64-pc-linux-gnu"

/* Size of wide-character type in chars */
#define WCHAR_SIZE 4

/* Type to use for wide characters */
#define WCHAR_TYPE INT

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
