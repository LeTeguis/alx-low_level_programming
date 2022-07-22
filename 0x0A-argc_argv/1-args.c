#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of argument to command line
 * @argv: all value of argument
 *
 * Description: prints the number of arguments passed into the programme
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argv)
	{
	}
	printf("%d\n", (argc - 1));
	return (0);
}
