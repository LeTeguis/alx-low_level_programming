#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print_c
 *
 * @ap: ap
 *
 * Description:
 *
 * Return: Nothing
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - print_i
 *
 * @ap: ap
 *
 * Description:
 *
 * Return: Nothing
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_f - print_f
 *
 * @ap: ap
 *
 * Description:
 *
 * Return: Nothing
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - print_s
 *
 * @ap: ap
 *
 * Description: description
 *
 * Return: Nothing
 */
void print_s(va_list ap)
{
	char *chaine = va_arg(ap, char *);
	(chaine == 0) ? printf("(nil)") : printf("%s", chaine);
}
/**
 * print_all - print all
 *
 * @format: separator
 * @...: print string
 *
 * Description: print all with separator
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	va_list ap;
	char format_[] = "cifs";
	void (*callback[])(va_list) = {print_c, print_i, print_f, print_s};

	va_start(ap, format);
	while (format[i])
	{
		while (format_[j])
		{
			if (format[i] == format_[j])
			{
				if (i > 0)
					printf(", ");
				(*callback[j])(ap);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(ap);
}
