#include <stdio.h>

/**
 * main -  entry point
 *
 * @argc: number of argument
 * @argv: all argument
 *
 * Description: prints all arguments it receives
 * 
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
