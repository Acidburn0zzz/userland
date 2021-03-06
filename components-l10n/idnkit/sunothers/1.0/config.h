/* include/config.h.  Generated automatically by configure.  */
/* include/config.h.in.  Generated automatically from configure.in by autoheader.  */
/* $Id: config.h.in,v 1.45 2003/02/13 06:55:54 m-kasahr Exp $ */
/*
 * Copyright (c) 2000 Japan Network Information Center.  All rights reserved.
 *  
 * By using this file, you agree to the terms and conditions set forth bellow.
 * 
 * 			LICENSE TERMS AND CONDITIONS 
 * 
 * The following License Terms and Conditions apply, unless a different
 * license is obtained from Japan Network Information Center ("JPNIC"),
 * a Japanese association, Kokusai-Kougyou-Kanda Bldg 6F, 2-3-4 Uchi-Kanda,
 * Chiyoda-ku, Tokyo 101-0047, Japan.
 * 
 * 1. Use, Modification and Redistribution (including distribution of any
 *    modified or derived work) in source and/or binary forms is permitted
 *    under this License Terms and Conditions.
 * 
 * 2. Redistribution of source code must retain the copyright notices as they
 *    appear in each source code file, this License Terms and Conditions.
 * 
 * 3. Redistribution in binary form must reproduce the Copyright Notice,
 *    this License Terms and Conditions, in the documentation and/or other
 *    materials provided with the distribution.  For the purposes of binary
 *    distribution the "Copyright Notice" refers to the following language:
 *    "Copyright (c) 2000-2002 Japan Network Information Center.  All rights reserved."
 * 
 * 4. The name of JPNIC may not be used to endorse or promote products
 *    derived from this Software without specific prior written approval of
 *    JPNIC.
 * 
 * 5. Disclaimer/Limitation of Liability: THIS SOFTWARE IS PROVIDED BY JPNIC
 *    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 *    PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL JPNIC BE LIABLE
 *    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *    CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *    SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 *    BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *    OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 *    ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef gid_t */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef uid_t */

/* Define as an appropriate type (ex. int) if your system doesn't have. */
#define BOOL int

/* Define if you have the bcopy function.  */
#define HAVE_BCOPY 1

/* Define if you have the dlopen function.  */
/* #undef HAVE_DLOPEN */

/* Define if you have the dlsym function.  */
/* #undef HAVE_DLSYM */

/* Define if you have the freeaddrinfo function.  */
/* #undef HAVE_FREEADDRINFO */

/* Define if you have the freehostent function.  */
/* #undef HAVE_FREEHOSTENT */

/* Define if you have the getaddrinfo function.  */
/* #undef HAVE_GETADDRINFO */

/* Define if you have the gethostbyaddr function.  */
/* #undef HAVE_GETHOSTBYADDR */

/* Define if you have the gethostbyaddr_r function.  */
/* #undef HAVE_GETHOSTBYADDR_R */

/* Define if you have the gethostbyname function.  */
/* #undef HAVE_GETHOSTBYNAME */

/* Define if you have the gethostbyname2 function.  */
/* #undef HAVE_GETHOSTBYNAME2 */

/* Define if you have the gethostbyname2_r function.  */
/* #undef HAVE_GETHOSTBYNAME2_R */

/* Define if you have the gethostbyname_r function.  */
/* #undef HAVE_GETHOSTBYNAME_R */

/* Define if you have the getipnodebyaddr function.  */
/* #undef HAVE_GETIPNODEBYADDR */

/* Define if you have the getipnodebyname function.  */
/* #undef HAVE_GETIPNODEBYNAME */

/* Define if you have the getnameinfo function.  */
/* #undef HAVE_GETNAMEINFO */

/* Define if you have the memmove function.  */
#define HAVE_MEMMOVE 1

/* Define if you have the nl_langinfo function.  */
#define HAVE_NL_LANGINFO 1

/* Define if you have the setenv function.  */
/* #undef HAVE_SETENV */

/* Define if you have the setlocale function.  */
#define HAVE_SETLOCALE 1

/* Define if you have the setvbuf function.  */
#define HAVE_SETVBUF 1

/* Define if you have the unsetenv function.  */
/* #undef HAVE_UNSETENV */

/* Define if you have the vsnprintf function.  */
#define HAVE_VSNPRINTF 1

/* Define if you have the <dlfcn.h> header file.  */
/* #undef HAVE_DLFCN_H */

/* Define if you have the <langinfo.h> header file.  */
#define HAVE_LANGINFO_H 1

/* Define if you have the <locale.h> header file.  */
#define HAVE_LOCALE_H 1

/* Define if you have the <pwd.h> header file.  */
#define HAVE_PWD_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the nsl library (-lnsl).  */
/* #undef HAVE_LIBNSL */

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */

/* Define if --enable-mdnkit-compat is specified */
/* #undef ENABLE_MDNKIT_COMPAT */

/* Define if you want additional ACE converters compiled in. */
/* #undef IDN_EXTRA_ACE */

/* Define if your iconv() does not accept UTF-8 as the codeset name for utf-8. */
/* #undef IDN_UTF8_ENCODING_NAME */

/* Define if you have the dl library (-ldl). */
/* #undef HAVE_LIBDL */

/* Define as the type of the 1st argument of gethostbyaddr. */
/* #undef GHBA_ADDR_T */

/* Define as the type of the 2nd argument of gethostbyaddr. */
/* #undef GHBA_ADDRLEN_T */

/* Define as the type of the 2nd argument of getnameinfo. */
/* #undef GNI_SALEN_T */

/* Define as the type of the 4th argument of getnameinfo. */
/* #undef GNI_HOSTLEN_T */

/* Define as the type of the 6th argument of getnameinfo. */
/* #undef GNI_SERVLEN_T */

/* Define as the type of the 7th argument of getnameinfo. */
/* #undef GNI_FLAGS_T */

/* Define if the prototype of gethost*_r is glibc flavor. */
/* #undef GETHOST_R_GLIBC_FLAVOR */

/* Define as the pathname of the shared libc object if your system has one. */
#define SOPATH_LIBC "/lib/libc.so"

/* Define as the pathname of the shared libnsl object if your system has one. */
/* #undef SOPATH_LIBNSL */
