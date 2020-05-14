#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 100;
	int *ptr = &a;
	const int *cptr = &a;
	int * const ccptr = &b;
	printf("ptr = %d\n", *ptr);
	printf("cptr = %d\n", *cptr);
	printf("ccptr = %d\n", *ccptr);
	*ptr = 20;
	printf("ptr = %d\n", *ptr);
return 0;
}
