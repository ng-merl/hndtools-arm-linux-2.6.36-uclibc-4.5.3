#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (TARGET_CPU_generic)
#ifndef UCLIBC_DEFAULT
# define UCLIBC_DEFAULT 1
#endif
#ifdef IN_GCC
# include "options.h"
# include "config/dbxelf.h"
# include "config/elfos.h"
# include "config/linux.h"
# include "config/glibc-stdint.h"
# include "config/arm/elf.h"
# include "config/arm/linux-gas.h"
# include "config/arm/linux-elf.h"
# include "config/arm/bpabi.h"
# include "config/arm/linux-eabi.h"
# include "config/arm/aout.h"
# include "config/arm/arm.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */
