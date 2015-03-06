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

#include <string.h>

void * memcpy(void * dest, void const * src, size_t cnt)
{
    char * d = dest, * e = d + cnt;
    char const * s = src;
    while (d != e)
        *d++ = *s++;
    return dest;
}

char * strcpy(char * dest, char const * src)
{
    char * cpy = dest;
    while ((*cpy++ = *src++));
    return dest;
}

char * strncpy(char * dest, char const * src, size_t cnt)
{
    char * cpy = dest;
    while ((*cpy++ = *src++) && (cpy < dest + cnt));
    return dest;
}
