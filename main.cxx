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

#include <kernel/multiboot.h>
#include <drivers/com.h>

int main(unsigned int multiboot_magic, multiboot_info * multiboot_info)
{
    char const msg[] = "Helloworld";
    char const * p = msg;

    //com_init(COM1, 115200, 1, 8);
    while (*p)
        com_write(COM1, *p++);

    return 0;
}

