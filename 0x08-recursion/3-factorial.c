#include "main.h"

/**
 * factorial - n * factorial(n - 1)
 *
 * @n: value
 *
 * Description: returns the factorial of a given number
 *
 * Return: the factorial value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return n * factorial(n - 1);
}
