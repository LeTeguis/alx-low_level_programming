#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */

int main(void)
{

	/*
	 *  why my code does not give the right result please? I get wrong code instead
	 *  please can you help me tanks
	 */

	int i = 0;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (i < 58)
	{
		p[i] = c[rand() % 62];
		i++;
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
