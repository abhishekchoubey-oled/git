#include <stdio.h>

struct abc {
	int a;
int b;
int c;
char d;
};

int main(void)
{
	struct abc a1, *p1;

	a1.a = a1.b = a1.c = 2;
	a1.d = 'A';
	p1 = &a1;
	printf("%d\n", a1);
	printf("%ld\n", p1+1);
	return 0;
}

