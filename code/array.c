#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int *arr;

	arr = calloc(10, sizeof(int));
	if (!arr)
		return 1;
	printf("%lu\n", sizeof(arr));
	memset(arr, 1, 10);
	printf("%d\n", arr[0]);
	return 0;
}
