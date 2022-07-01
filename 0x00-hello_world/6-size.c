#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;
	double f;
	unsigned g;

	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long in : %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int : %lu byte(s)^n", (unsigned long)sizeof(c));
	printf("Size of char : %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of float : %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of double : %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of unsigned : %lu byte(s)\n", (unsigned long)sizeof(g));

	return (0);
}
