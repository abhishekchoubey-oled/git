#include "hd.h"

void parse_cmdline(const int argc, char **argv, const int exp_no_args,
	enum ret_type rtype, const int ret_arr_size)
{
	void *ret_arr;

	if ((argc - 1) != exp_no_args) {
		printf("Invalid # of arguments !\n");
		usage();
	}
}
