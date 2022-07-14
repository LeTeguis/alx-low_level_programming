#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print the buffer string
 *
 * @b: buffer
 * @size: size of buffer
 *
 * Description: prints a buffer
 *
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 0;
	int tour = 0;

	if (size <= 0)
		printf("\n");

	tour = ((size) / 10) + (((size) % 10 != 0) ? 1 : 0);

	for (i = 0; i < tour; i++)
	{
		printf("%08x: ", i*10);

		for (j = 0; j < 10; j++)
		{
			if (i * 10 + j < size)
			{
				printf("%02x", b[i * 10 + j]);
				if (j % 2 == 1)
					printf(" ");
			}
			else
			{
				printf("  ");
				if (j % 2 == 1)
					printf(" ");
			}
		}

		for (j = 0; j < 10; j++)
                {
                        if (i * 10 + j < size)
			{
				if (b[i * 10 + j] >= 32)
					printf("%c", b[i * 10 + j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
