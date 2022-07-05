#include "main.h"

/**
 * times_table:
 * Description: table of multiplation
 * Return: Nothing
 */

void times_table(void)
{
	int j, k, d;

		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				d = k * j;
				if (d < 100 && k != 0)
					_putchar(' ');
				else if (k != 0)
					_putchar((d / 100) + '0');

				if (d > 9)
					_putchar(((d / 10) % 10) + '0');
				else if (k != 0)
					_putchar(' ');

				_putchar((d % 10) + '0');

				if (k == 9)
					_putchar('\n');
				else
				{
					_putchar(',');
				}
			}
		}
	
}
