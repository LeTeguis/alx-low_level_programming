#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print int
 *
 * @separator: separator
 * @n: number of string
 * @...: print number
 *
 * Description: print int with separator
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		int chaine = va_arg(ap, int);

		printf("%d", chaine);
		if (separator != 0 && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
