#include <stdio.h>

/**
 * main - sum of term
 *
 * Return: 0
 */

int main(void)
{
	long int fi_2 = 0;
	long int fi_1 = 1;
	long int fi = 0;

	long int d = 0;

	while (fi < 4000000)
	{
		fi = fi_1 + fi_2;
		fi_2 = fi_1;
		fi_1 = fi;

		if (fi % 2 == 0)
			d = d + fi;
	}

	printf("%d\n", d);

	return (0);
}
