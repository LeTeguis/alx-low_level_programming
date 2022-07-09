/*
 * File: 5-more_numbers.c
 * Auth: TEUGUIA TADJUIDJE Rodolf Séderis
 */

#include "main.h"

/**
 * more_numbers - more numbers
 * Description: prints 10 times the numbers, from 0 to 14, followed by a new line
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
