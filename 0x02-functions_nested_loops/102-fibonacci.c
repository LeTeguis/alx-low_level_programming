#include <stdio.h>

/**
 * main - fybonacy
 *
 * Return: 0
 */

int main(void)
{
	int fi_1 = 1;
	int fi_2 = 0;
	int fi;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i < 0)
			printf("%d, ", fi_1);
		else
		{
			fi = fi_1 + fi_2;
			printf("%d", fi);

			if (i != 49)
				printf(", ");

			fi_2 = fi_1;
			fi_1 = fi;
		}
	}

	printf("\n");

	return (0);
}
