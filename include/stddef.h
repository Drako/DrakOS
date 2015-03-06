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

#ifndef DRAKOS_STDDEF_H
#define DRAKOS_STDDEF_H

typedef unsigned int size_t;
typedef unsigned int ptrdiff_t;

#ifndef __cplusplus
#define NULL ((void*)0)
#else
#define NULL 0
#endif

#define offsetof(TYPE,MEMBER) __builtin_offsetof(TYPE, MEMBER)

#endif // DRAKOS_STDDEF_H

