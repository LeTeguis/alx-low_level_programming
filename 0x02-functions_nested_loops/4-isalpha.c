#include "main.h"

/**
 * _isalpha:
 * @c : caracter wi define if is alpha or not
 * Description: define if the caracter is a alpha or not
 * Return: 1 i @ is alpha 0 or not
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A'  <= c && c <= 'Z'))
		return (1);
	return (0);
}
