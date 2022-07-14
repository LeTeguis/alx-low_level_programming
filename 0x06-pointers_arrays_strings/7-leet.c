#include "main.h"
#include <stdio.h>

/**
 * leet - encode
 *
 * @code: the array of char
 *
 * Description: encodes a string into 1337
 *
 * Return: Encoding string
 */

char *leet(char *code)
{
	char letter[] = "aeotl";
	char encoder[] = "43071";
	int i = 0, j = 0;

	while (code[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (code[i] == letter[j] || 'a' + (code[i] - 'A') == letter[j])
				code[i] = encoder[j];
		}
		i++;
	}

	return (code);
}
