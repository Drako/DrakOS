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

#ifndef DRAKOS_KERNEL_BDA_H
#define DRAKOS_KERNEL_BDA_H

typedef unsigned short int bda_uint16_t;

struct bda_equipment_word
{
    bda_uint16_t has_boot_floppy    : 1;
    bda_uint16_t has_math_processor : 1;
    bda_uint16_t has_ps2_mouse      : 1;
    bda_uint16_t reserved           : 1;
    bda_uint16_t graphics_adapter   : 2;
    bda_uint16_t num_floppies       : 2;
    bda_uint16_t has_dma_controller : 1;
    bda_uint16_t num_com_ports      : 3;
    bda_uint16_t has_joystick       : 1;
    bda_uint16_t has_internal_modem : 1;
    bda_uint16_t num_lpt_ports      : 2;
};

struct bios_data_area
{
    bda_uint16_t com_base_port[4];
    bda_uint16_t lpt_base_port[4];
    struct bda_equipment_word equipment_word;
};
static struct bios_data_area const * const bios_data_area = (struct bios_data_area *)0x00000400;

#endif // DRAKOS_KERNEL_BDA_H
