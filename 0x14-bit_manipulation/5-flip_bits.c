#include "main.h"

/**
 * flip_bits - flit
 *
 * @n: decimal number
 * @m: decimal number
 *
 * Description: get number of bits you would need to flip
 * to get from one number to another
 *
 * Return: number of bites
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number_of_bits = 0;
	unsigned long int copy_n = n;
	unsigned long int copy_m = m;

	if (n == m)
		return (0);
	while (copy_n > 0 || copy_m > 0)
	{
		if ((copy_n & 1) != (copy_m & 1))
			number_of_bits++;
		if (copy_n != 0)
			copy_n = copy_n >> 1;
		if (copy_m != 0)
			copy_m = copy_m >> 1;
	}
	return (number_of_bits);
}
