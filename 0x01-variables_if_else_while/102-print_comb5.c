#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f, s;

	for (f = 0; f <= 98; f++)
	{
		for (s = f + 1; s <= 99; s++)
		{
			putchar('0' + (f / 10));
			putchar('0' + (f % 10));
			putchar(' ');
			putchar('0' + (s / 10));
			putchar('0' + (s % 10));

			if(!(f == 98 && s == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
