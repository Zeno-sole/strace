/*
 * This file is part of xetpgid strace test.
 *
 * Copyright (c) 2016 Dmitry V. Levin <ldv@altlinux.org>
 * Copyright (c) 2016-2020 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include "scno.h"
#include "pidns.h"

#if defined __NR_getpgid && defined __NR_setpgid

# include <stdio.h>
# include <unistd.h>

int
main(void)
{
	PIDNS_TEST_INIT;

	const int pid = getpid();
	long pgid = syscall(__NR_getpgid, F8ILL_KULONG_MASK | pid);
	pidns_print_leader();
	printf("getpgid(%d%s) = %ld%s\n", pid, pidns_pid2str(PT_TGID),
		pgid, pidns_pid2str(PT_PGID));

	long rc = syscall(__NR_setpgid, F8ILL_KULONG_MASK,
		F8ILL_KULONG_MASK | pgid);
	pidns_print_leader();
	printf("setpgid(0, %ld%s) = %s\n", pgid, pidns_pid2str(PT_PGID),
		sprintrc(rc));

	pidns_print_leader();
	puts("+++ exited with 0 +++");
	return 0;
}

#else

SKIP_MAIN_UNDEFINED("__NR_getpgid && __NR_setpgid")

#endif
