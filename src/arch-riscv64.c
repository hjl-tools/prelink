/* Copyright (C) 2019 David Abdurachmanov
   Written by David Abdurachmanov <david.abdurachmanov@gmail.com>, 2019.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

#include <config.h>
#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <error.h>
#include <argp.h>
#include <stdlib.h>

#include "prelink.h"

PL_ARCH = {
  .name = "RISCV64",
  .class = ELFCLASS64,
  .machine = EM_RISCV,
  .alternate_machine = { EM_NONE },
  .max_page_size = 0x1000,
  .page_size = 0x1000
};