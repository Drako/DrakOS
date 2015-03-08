/*
 *  Copyright (C) 2015, Felix Bytow <felix.bytow@googlemail.com>
 *
 *  This file is part of DrakOS.
 *
 *  DrakOS is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  DrakOS is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with DrakOS.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <drivers/com.h>

#include <kernel/bda.h>
#include <kernel/io.h>

#define IER 1
#define IIR 2
#define FCR 2
#define LCR 3
#define MCR 4
#define LSR 5
#define MSR 6

uint8_t com_num_ports(void)
{
    return bios_data_area->equipment_word.num_com_ports;
}

uint16_t com_base_port(com_port_t com_port)
{
    return 0x03F8;
    //return bios_data_area->com_base_port[com_port];
}

void com_init(com_port_t com_port, uint32_t baud, uint8_t parity, uint8_t bits)
{
    uint16_t base = com_base_port(com_port);

    union
    {
        uint8_t b[2];
        uint16_t w;
    } divisor;
    divisor.w = 115200 / baud;

    outb(base + IER, 0x00);
    outb(base + LCR, 0x80);
    outb(base + 0, divisor.b[0]);
    outb(base + 1, divisor.b[1]);
    outb(base + LCR, ((parity & 0x7) << 3) | ((bits - 5) & 0x3));
    outb(base + FCR, 0xC7);
    outb(base + MCR, 0x0B);
}

bool com_can_read(com_port_t com_port)
{
    return (inb(com_base_port(com_port) + LSR) & 1 ? true : false);
}

bool com_can_write(com_port_t com_port)
{
    return (inb(com_base_port(com_port) + LSR) & 0x20 ? true : false);
}

void com_write(com_port_t com_port, uint8_t value)
{
    while (!com_can_write(com_port));
    outb(com_base_port(com_port), value);
}

uint8_t com_read(com_port_t com_port)
{
    while (!com_can_read(com_port));
    return inb(com_base_port(com_port));
}
