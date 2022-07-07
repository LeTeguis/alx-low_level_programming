#include <stdio.h>

/**
 * main - Entry Point
 * Description: finds and prints the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long prime_number = 1;
	unsigned long i = 2;

	while (i <= number)
	{
		if (number % i == 0)
		{
			if (i > prime_number)
				prime_number = i;
			number = number / i;
		}
		else
			i++;
	}

	if (prime_number >= 2)
		printf("%lu\n", prime_number);

	return (0);
}
