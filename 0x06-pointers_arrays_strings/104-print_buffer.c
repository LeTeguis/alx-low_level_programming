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

	tour = (size / 10) + ((size % 10 != 0) ? 1 : 0);

	for (i = 0; i < tour; i++)
	{
		printf("%08x: ", i*10);
		for (j = 0; j < 20; j++)
		{
			int index = (i * 10) + (j % 10);

			if (index >= size)
			{
				printf("\n");
				return;
			}

			if (j < 10)
			{
				printf("%02x", b[index]);
				if (j % 2 == 1)
					printf(" ");
			}
			
			if (j >= 10)
			{
				if (b[index] >= 32 && b[index] != 127)
					printf("%c", b[index]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}