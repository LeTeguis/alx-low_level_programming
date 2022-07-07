#include "main.h"

/**
 * _isupper - upper
 * @c: the caracter input
 * Description: check if the caracter is upper or lower
 * Return: 1 if @c is uppercase 0 if not
 */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
