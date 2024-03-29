#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string
 *
 * @separator: separator
 * @n: number of string
 * @...: print string
 *
 * Description: print string with separator
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *chaine = va_arg(ap, char *);

		if (chaine == 0)
			printf("(nil)");
		else
			printf("%s", chaine);
		if (separator != 0 && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
