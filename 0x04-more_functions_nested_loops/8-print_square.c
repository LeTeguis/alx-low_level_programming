#include "main.h"

/**
 * print_square - print the square
 * @size: the size of the square
 * Description: prints a square, followed by a new line
 * Return: Nothing
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
