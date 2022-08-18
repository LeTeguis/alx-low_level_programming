#include "main.h"

/**
 * get_endianness - get
 *
 * Description: get endianess of architecture
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	return (0);
}
