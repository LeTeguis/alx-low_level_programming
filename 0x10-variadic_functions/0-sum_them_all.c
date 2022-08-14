#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all them
 *
 * @n: number of variable
 * @...: variadics
 *
 * Description: sum all the parameter
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
