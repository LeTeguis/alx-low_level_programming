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
	if (index >= (sizeof(unsigned int) * 8))
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
