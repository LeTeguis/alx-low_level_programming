#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of argument
 * @argv: all argument
 *
 * Description: adds positive numbers
 *
 * Return: 0 if not error 1 if error
 */

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	int summe = 0;
	int number = 0;

	while (i < argc)
	{
		while (argv[i][j])
		{
			if ('0' <= argv[i][j] && argv[i][j] <= '9')
				number = (number * 10) + (argv[i][j] - '0');
			else
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		summe += number;
		number = 0;
		j = 0;
		i++;
	}
	printf("%d\n", summe);
	return (0);
}
