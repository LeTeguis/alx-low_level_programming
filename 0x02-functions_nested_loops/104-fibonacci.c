#include <stdio.h>

/**
 * main - long term
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int fi_2 = 0;
	unsigned long int fi_1 = 1;
	unsigned long int fi = 0;

	int i = 0;

	while (i < 98)
	{
		fi = fi_1 + fi_2;
		fi_2 = fi_1;
		fi_1 = fi;

		printf("%lu", fi);

		if (i != 97)
			printf(", ");
		i++;
	}

	printf("\n");
	return (0);
}
