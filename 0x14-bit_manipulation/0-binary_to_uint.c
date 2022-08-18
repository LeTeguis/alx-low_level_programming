#include "main.h"

/**
 * binary_to_uint - convert
 *
 * @b: binary
 *
 * Description: convert binary to usigned int
 *
 * Return: usigned int value or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int leng = 0;
	unsigned int puissance = 1;

	if (b == 0)
		return (0);
	while (b[leng])
	{
		if (b[leng] != '1' && b[leng] != '0')
			return (0);
		leng++;
	}
	while (leng > 0)
	{
		value += (b[leng - 1] - '0') * puissance;
		puissance *= 2;
		leng--;
	}
	return (value);
}
