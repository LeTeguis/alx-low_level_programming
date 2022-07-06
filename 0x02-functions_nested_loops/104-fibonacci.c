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

	for (i = 0; i < 98; i++)
	{
		fi = fi_1 + fi_2;
		fi_2 = fi_1;
		fi_1 = fi;

		printf("%lu", fi);

		if (i != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
