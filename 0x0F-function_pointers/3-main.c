#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of argment plus one
 * @argv: all argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int (*operator)(int, int) = get_op_func(argv[2]);

		if (operator != 0)
			printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
		else
			printf("Error\n");
	}
	else
		printf("Error\n");
	return (0);
}
