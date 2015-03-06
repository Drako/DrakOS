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

#ifndef DRAKOS_LIMITS_H
#define DRAKOS_LIMITS_H
// this is actually a joke. Drako has no limits!

#define CHAR_BIT   8
// maximum multibyte character length
// 4 should suffice for UTF-8
#define MB_LEN_MAX 4

#define CHAR_MIN  (-128)
#define CHAR_MAX  (127)
#define SCHAR_MIN (-128)
#define SCHAR_MAX (127)
#define UCHAR_MAX (255)

#define SHRT_MIN  (-32768)
#define SHRT_MAX  (32767)
#define USHRT_MAX (65535)

#define INT_MIN  (-2147483648)
#define INT_MAX  (2147483647)
#define UINT_MAX (4294967295U)

#define LONG_MIN  (-2147483648L)
#define LONG_MAX  (2147483647L)
#define ULONG_MAX (4294967295UL)

#define LLONG_MIN  (-9223372036854775808LL)
#define LLONG_MAX  (9223372036854775807LL)
#define ULLONG_MAX (18446744073709551615ULL)

#endif // DRAKOS_LIMITS_H
