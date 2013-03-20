/*
 * mapper_Kasing.h
 *
 *  Created on: 28/set/2011
 *      Author: fhorse
 */

#ifndef MAPPER_KASING_H_
#define MAPPER_KASING_H_

#include "common.h"

struct _kasing {
	BYTE prg_mode;
	BYTE prg_high;
	WORD prg_rom_bank[4];
	BYTE chr_high;
	WORD chr_rom_bank[8];
} kasing;

void map_init_Kasing(void);
void extcl_cpu_wr_mem_Kasing(WORD address, BYTE value);
BYTE extcl_save_mapper_Kasing(BYTE mode, BYTE slot, FILE *fp);

#endif /* MAPPER_KASING_H_ */