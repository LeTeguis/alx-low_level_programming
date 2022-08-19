#include <stdio.h>

void __attribute__((constructor)) first(void);

/**
 * first - print first
 *
 * Description: print information
 *
 * Return: Nothing
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
