#include "main.h"

/**
 * print_numbers - print the number
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Nothing
 */

void print_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		_putchar(d);
	_putchar('\n');
}
