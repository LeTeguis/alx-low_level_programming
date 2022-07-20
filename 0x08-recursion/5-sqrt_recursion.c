#include "main.h"

/**
 * real_sqrt - the sending work
 *
 * @A: A == a ^ a
 * @a: sqrt
 *
 * Description: calculate the real sqrt
 *
 * Return: sqrt
 */

int real_sqrt(int A, int a)
{
	if (a * a > A)
		return (-1);
	if (a * a == A)
		return (a);
	return (real_sqrt(A, a + 1));
}

/**
 * _sqrt_recursion - sqrt
 *
 * @n: number
 *
 * Description: determine natural square root of a number
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (real_sqrt(n, 1));
}
