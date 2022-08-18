#include "main.h"

/**
 * set_bit - set
 *
 * @n: decimal number
 * @index: index to set
 *
 * Description: set the index value at 1
 *
 * Return: 1 if it working or -1 or not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned int) * 8) || n == 0)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
