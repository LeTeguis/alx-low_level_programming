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

        int i = 0;

        while (i < 98)
        {
                fi = fi_1 + fi_2;
                fi_2 = fi_1;
                fi_1 = fi;

		printf("%ld", fi);

		if (i != 97)
			printf(", ");
                i++;
        }

        printf("\n");

        return (0);
}
