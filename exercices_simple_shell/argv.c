#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of argument +1
 * @argv: all argument plus program name
 *
 * Description: print all arguments , without using argc
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	unsigned int i = 0;

	while (argv[i])
		printf("%s\n", argv[i++]);
	return (0);
}
