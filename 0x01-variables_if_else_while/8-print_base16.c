#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char d;
	char low;

	for (d = '0'; char <= '9'; d++)
		putchar(d);

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);

	putchar('\n');

	return (0);
}
