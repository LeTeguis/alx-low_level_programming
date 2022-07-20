#include "main.h"

/**
 * _puts_recursion - puts
 *
 * @s: array of char
 *
 * Description: prints a string, followed by a new line
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s == 0 || s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion((s + 1));
	}
}
