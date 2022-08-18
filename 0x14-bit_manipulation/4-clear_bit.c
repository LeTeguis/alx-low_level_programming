#include "main.h"

/**
 * clear_bit - set
 *
 * @n: decimal number
 * @index: index to set
 *
 * Description: set the index value at 0
 *
 * Return: 1 if it working or -1 or not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || (index >= sizeof(unsigned int) * 8))
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
