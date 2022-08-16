#include <stdio.h>

int main()
{
	int a = 5;
	int *b = &a;

	printf("a = %d; &a = %p\n", a, &a);
	printf("b = %p; &b = %p; *b = %d\n", b, &b, *b);
	return (0);
}
