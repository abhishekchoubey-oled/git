#include <stdio.h>

int main(void)
{
	int a = 100, b = 20;

	printf("a = %d, b = %d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;

	printf("a = %d, b = %d\n", a, b);
	return 0;
}
