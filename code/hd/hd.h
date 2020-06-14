#ifndef _HD_
#define _HD_
#include <stdio.h>
#include <stdlib.h>

enum ret_type {
	NONE,
	INTEGER,
	CHARACTER,
	STRING,
	MAx
};

void parse_cmdline(const int argc, char **argv, const int exp_no_args,
        enum ret_type rtype, const int ret_arr_size);

#endif

