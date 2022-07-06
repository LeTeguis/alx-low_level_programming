#include "main.h"

/**
 * print_last_digit - digit
 * @n : the integer value
 * Description: determine the last digit of number
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
        int d = n;

        if (d < 0)
        	d = -d;

	d = d % 10;

        _putchar(d + '0');

        return (d);
}
