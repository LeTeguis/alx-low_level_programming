#include <stdio.h>

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
	int number_one = 0;
	int number_two = 0;
	int negate = 1;
	int i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if ('0' <= argv[1][i] && argv[1][i] <= '9')
				number_one = (number_one) * 10 + (argv[1][i] - '0');
			if (argv[1][i] == '-')
				negate = -1;
			i++;
		}
		number_one *= negate;
		i = 0;
		while (argv[2][i])
		{
			if ('0' <= argv[2][i] && argv[2][i] <= '9')
				number_two = (number_two) * 10 + (argv[2][i] - '0');
			if (argv[2][i] == '-')
				negate = -1;
			i++;
		}
		number_two *= negate;
		printf("%d\n", (number_one * number_two));
	}
	else
		printf("Error\n");
	return (0);
}
