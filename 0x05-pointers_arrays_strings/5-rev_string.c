#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 *
 * @s: array of char our reverse
 *
 * Description: reverse a string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	if (s != NULL)
	{
		int leng = 0;
		int i;

		while (s[leng] != '\0')
			leng++;

		if (leng > 1)
		{
			i = 0;

			while (i < leng / 2)
			{
				char p = s[i];

				s[i] = s[leng - i - 1];
				s[leng - i - 1] = p;
				i++;
			}
		}
	}
}
