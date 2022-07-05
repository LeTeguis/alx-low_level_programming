#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int u, d, c;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (u = d + 1; u <= '9'; u++)
			{
				if(u != d && u != c && d != u)
				{
					putchar(c);
					putchar(d);
					putchar(u);

					if (!(c == '7' && d == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
