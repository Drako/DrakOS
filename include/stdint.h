/*
    Copyright (C) 2015, Felix Bytow <felix.bytow@googlemail.com>

    This file is part of DrakOS.

    DrakOS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    DrakOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DrakOS.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DRAKOS_STDINT_H
#define DRAKOS_STDINT_H

/*********************
 * Fixed width types *
 *********************/

typedef signed char   int8_t;
typedef short int     int16_t;
typedef int           int32_t;
typedef long long int int64_t;

typedef unsigned char          uint8_t;
typedef unsigned short int     uint16_t;
typedef unsigned int           uint32_t;
typedef unsigned long long int uint64_t;

/***********************
 * Minimum width types *
 ***********************/

typedef signed char   int_least8_t;
typedef short int     int_least16_t;
typedef int           int_least32_t;
typedef long long int int_least64_t;

typedef unsigned char          uint_least8_t;
typedef unsigned short int     uint_least16_t;
typedef unsigned int           uint_least32_t;
typedef unsigned long long int uint_least64_t;

/**************
 * Fast types *
 **************/

typedef signed char   int_fast8_t;
typedef int           int_fast16_t;
typedef int           int_fast32_t;
typedef long long int int_fast64_t;

typedef unsigned char          uint_fast8_t;
typedef unsigned int           uint_fast16_t;
typedef unsigned int           uint_fast32_t;
typedef unsigned long long int uint_fast64_t;

/*****************
 * Pointer types *
 *****************/

typedef int          intptr_t;
typedef unsigned int uintptr_t;

/*****************
 * Largest types *
 *****************/

typedef long long int          intmax_t;
typedef unsigned long long int uintmax_t;

/*************
 * Constants *
 *************/

#define INT8_MIN   (-128)
#define INT16_MIN  (-32767-1)
#define INT32_MIN  (-2147483647-1)
#define INT64_MIN  (-__INT64_C(9223372036854775807)-1)

#define INT8_MAX   (127)
#define INT16_MAX  (32767)
#define INT32_MAX  (2147483647)
#define INT64_MAX  (__INT64_C(9223372036854775807))

#define UINT8_MAX  (255)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295U)
#define UINT64_MAX (__UINT64_C(18446744073709551615))

#define INT_LEAST8_MIN   (-128)
#define INT_LEAST16_MIN  (-32767-1)
#define INT_LEAST32_MIN  (-2147483647-1)
#define INT_LEAST64_MIN  (-__INT64_C(9223372036854775807)-1)

#define INT_LEAST8_MAX   (127)
#define INT_LEAST16_MAX  (32767)
#define INT_LEAST32_MAX  (2147483647)
#define INT_LEAST64_MAX  (__INT64_C(9223372036854775807))

#define UINT_LEAST8_MAX  (255)
#define UINT_LEAST16_MAX (65535)
#define UINT_LEAST32_MAX (4294967295U)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))

#define INT_FAST8_MIN   (-128)
#define INT_FAST16_MIN  (-2147483647-1)
#define INT_FAST32_MIN  (-2147483647-1)
#define INT_FAST64_MIN  (-__INT64_C(9223372036854775807)-1)

#define INT_FAST8_MAX   (127)
#define INT_FAST16_MAX  (2147483647)
#define INT_FAST32_MAX  (2147483647)
#define INT_FAST64_MAX  (__INT64_C(9223372036854775807))

#define UINT_FAST8_MAX  (255)
#define UINT_FAST16_MAX (4294967295U)
#define UINT_FAST32_MAX (4294967295U)
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))

#define INTPTR_MIN  (-2147483647-1)
#define INTPTR_MAX  (2147483647)
#define UINTPTR_MAX (4294967295U)

#define INTMAX_MIN  (-__INT64_C(9223372036854775807)-1)
#define INTMAX_MAX  (__INT64_C(9223372036854775807))
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))

#define PTRDIFF_MIN (-2147483647-1)
#define PTRDIFF_MAX (2147483647)

#define SIZE_MAX (4294967295U)

/***********************
 * Macros for literals *
 ***********************/

#define INT8_C(c)  c
#define INT16_C(c) c
#define INT32_C(c) c
#define INT64_C(c) c##LL

#define UINT8_C(c)  c
#define UINT16_C(c) c
#define UINT32_C(c) c##U
#define UINT64_C(c) c##ULL

#define INTMAX_C(c)  c##LL
#define UINTMAX_C(c) c##ULL

#endif // DRAKOS_STDINT_H

