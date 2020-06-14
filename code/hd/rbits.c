#include "hd.h"

void usage(void)
{
	printf("This is usage\n");
}

int main(int argc, char **argv)
{
	parse_cmdline(argc, argv, 1, INTEGER, 1 * sizeof(int));
	return 0;
}
