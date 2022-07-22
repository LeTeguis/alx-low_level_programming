#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of argument
 * @argv: all argument
 *
 * Description: prints the minimum number of coins to
 * make change for an amount of money
 *
 * Return: 1 if error 0 if not
 */

int main(int argc, char **argv)
{
	int coins = 0;
	int number_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins <= 0)
		printf("0\n");
	else
	{
		number_coins += coins / 25;
		coins = coins % 25;
		number_coins += coins / 10;
		coins = coins % 10;
		number_coins += coins / 5;
		coins = coins % 5;
		number_coins += coins / 2;
		number_coins += coins % 2;

		printf("%d\n", number_coins);
	}
	return (0);
}
