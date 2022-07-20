#include "main.h"

/**
 * _pow_recursion - pow of number
 *
 * @x: number
 * @y: degree
 *
 * Description: returns the value of x raised to the power of y
 *
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
