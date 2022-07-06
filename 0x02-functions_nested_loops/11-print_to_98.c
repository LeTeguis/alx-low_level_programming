#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function
 * @n: the integer value
 * Description: determine the last digit of number
 * Return: last digit of @n
 */

void print_to_98(int n)
{
	int i;
	
	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		
		}
	else
		for (i = n; i >= 98; i--)
                {
                        printf("%d", i);
                        if (i != 98)
                                printf(", ");
                }

	printf("\n");
}	
