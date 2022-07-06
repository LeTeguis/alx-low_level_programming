#include <stdio.h>

/**
 * main - long term
 *
 * Return: 0
 */

int main(void)
{
	double fi_2 = 0;
	double fi_1 = 1;
	double fi = 0;

	int i = 0;

	while (i < 98)
	{
		fi = fi_1 + fi_2;
		fi_2 = fi_1;
		fi_1 = fi;

		printf("%lld", (long long int)fi);

		if (i != 97)
			printf(", ");
		i++;
	}

	printf("\n");
	return (0);
}
