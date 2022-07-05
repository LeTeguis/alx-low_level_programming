#include "main.h"

/**
 * print_times_table: Done
 * @n: the integer value
 * Description: determine times table
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j;
	int d;

	if (0 <= n && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				d = i * j;
				
				if (100 > d && 0 != j)
					_putchar(' ');
				else if (0 != j)
					_putchar((d / 100) + '0');

				if (10 > d && 0 != j)
					_putchar(' ');
				else if (0 != j)
					_putchar(((d / 10) % 10) + '0');
				
				_putchar((d % 10) + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}	
