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
	unsigned int index_number = 0;
	unsigned long int copy = n;
	unsigned long int data = 0;

	if (copy == 0)
		index_number = 1;
	else
	{
		while (copy > 0)
		{
			index_number++;
			copy = copy >> 1;
		}
	}
	if (index_number <= index)
		return (-1);
	data = n >> index;
	return (1 & data);
}
