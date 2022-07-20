#include "main.h"

/**
 * is_divide_successor - divide by successor of p
 *
 * @p: actual successor
 * @n: number
 *
 * Description: difine if n is divide by natural number
 * is greater or equal to p and less than n
 *
 * Return: 1 if is divide or 0 if is not
 */

int is_divide_successor(int p, int n)
{
	if (p > n / 2 && n % p != 0)
		return (1);
	if (n <= 1 || n % p == 0)
		return (0);
	return (is_divide_successor(p + 1, n));
}

/**
 * is_prime_number - prime number
 *
 * @n: the number
 *
 * Description: determine if n is prime number or not
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_divide_successor(2, n));
}
