#include "main.h"
#include <limits.h>

/**
 * print_last_digit - digit
 * @n : the integer value
 * Description: determine the last digit of number
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (n < 0)
		d = -d;

	_putchar(d + '0');
	return (d);
}
