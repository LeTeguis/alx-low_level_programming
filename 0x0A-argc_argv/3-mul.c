#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of argument
 * @argv: all argument
 *
 * Description: multiplies two numbers is passe in command line
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
		printf("Error\n");
	return (0);
}
