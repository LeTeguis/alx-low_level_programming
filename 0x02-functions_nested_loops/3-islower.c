#include "main.h"

/**
 * _islower - function
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);

	return (0);
}
