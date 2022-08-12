#include "function_pointers.h"

/**
 * print_name - pointer of function
 *
 * @name: name to print
 * @f: function print
 *
 * Description: print the name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		(*f)(name);
}
