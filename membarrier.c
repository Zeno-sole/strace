/*
 * Copyright (c) 2015 Dmitry V. Levin <ldv@altlinux.org>
 * Copyright (c) 2015-2020 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#include "defs.h"

#include "xlat/membarrier_cmds.h"
#include "xlat/membarrier_flags.h"

SYS_FUNC(membarrier)
{
	if (entering(tcp)) {
		int cmd = tcp->u_arg[0];
		unsigned flags = tcp->u_arg[1];
		int cpu_id = tcp->u_arg[2];

		printxval(membarrier_cmds, cmd, "MEMBARRIER_CMD_???");
		tprints(", ");
		printflags(membarrier_flags, flags, "MEMBARRIER_CMD_FLAG_???");

		if (flags & MEMBARRIER_CMD_FLAG_CPU) {
			tprintf(", %d", cpu_id);
		}

		return cmd ? RVAL_DECODED : 0;
	}

	if (syserror(tcp) || !tcp->u_rval)
		return 0;

	tcp->auxstr = sprintflags("", membarrier_cmds,
				  (kernel_ulong_t) tcp->u_rval);
	return RVAL_HEX | RVAL_STR;
}
