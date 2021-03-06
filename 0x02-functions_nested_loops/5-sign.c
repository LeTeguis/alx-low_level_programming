#include "main.h"

/**
 * print_sign - signe
 * @n: the negative integer
 * Description: define if the number is negative positive or null
 * Return: 1 if @n is positive 0 is it null, -1 if is negative
 */

int print_sign(int n)
{
	int d = 0;

	if (n < 0)
	{
		d = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		d = 1;
		_putchar('+');
	}
	else
	{
		_putchar('0');
	}
	return (d);
}
