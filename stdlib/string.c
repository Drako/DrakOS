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

/***********
 * Copying *
 ***********/

void * memcpy(void * dest, void const * src, size_t cnt)
{
    return __builtin_memcpy(dest, src, cnt);
}

void * memmove(void * dest, void const * src, size_t cnt)
{
    return __builtin_memmove(dest, src, cnt);
}

char * strcpy(char * dest, char const * src)
{
    return __builtin_strcpy(dest, src);
}

char * strncpy(char * dest, char const * src, size_t cnt)
{
    return __builtin_strncpy(dest, src, cnt);
}

/*****************
 * Concatenation *
 *****************/

char * strcat(char * dest, char const * src)
{
    return __builtin_strcat(dest, src);
}

char * strncat(char * dest, const char * src, size_t cnt)
{
    return __builtin_strncat(dest, src, cnt);
}

/**************
 * Comparison *
 **************/

int memcmp(void const * lhs, void const * rhs, size_t cnt)
{
    return __builtin_memcmp(lhs, rhs, cnt);
}

int strcmp(char const * lhs, char const * rhs)
{
    return __builtin_strcmp(lhs, rhs);
}

int strncmp(char const * lhs, char const * rhs, size_t cnt)
{
    return __builtin_strncmp(lhs, rhs, cnt);
}

/*********
 * Other *
 *********/

void * memset(void * ptr, unsigned char val, size_t cnt)
{
    return __builtin_memset(ptr, val, cnt);
}

size_t strlen(char const * str)
{
    return __builtin_strlen(str);
}
