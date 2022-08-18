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
	unsigned long int data = 0;

	if (n == 0)
		return (-1);
	data = 1 << index;
	*n = *n | data;
	return (1);
}
