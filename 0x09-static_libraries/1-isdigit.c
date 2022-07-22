#include "main.h"

/**
 * _isdigit - is digit caracter
 * @c: character
 * Description: check if @c is digit or not
 * Return: 1 if @c is digit 0 if not
 */

int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
