#include "main.h"

/**
 * get_bit - get
 *
 * @n: decimal number
 * @index: index of bit
 *
 * Description: get the value at index
 *
 * Return: value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 || n == 1)
	{
		if (index == 0)
			return (n);
		return (-1);
	}
	if (index == 0)
		return (n & 1);
	return (get_bit((n >> 1), (index - 1)));
}
