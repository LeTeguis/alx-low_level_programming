#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: leng of argv argument
 * @argv: all command line argument
 *
 * Description: prints name of programme, followed by a new line
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
