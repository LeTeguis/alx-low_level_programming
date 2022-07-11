#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: generates random valid passwords for the program 101-crackme
 *
 * Return: Always by 0
 */

int main(void)
{
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
