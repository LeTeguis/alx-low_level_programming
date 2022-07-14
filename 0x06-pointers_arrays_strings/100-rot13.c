#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoding for rot13 code
 *
 * @data: data o encoding
 *
 * Description: encodes a string using rot13
 *
 * Return: result of code
 */

char *rot13(char *data)
{
	int i = 0, j = 0;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char coding[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (data[i] != '\0')
	{
		while (j < 52)
		{
			if (data[i] == letter[j])
			{
				data[i] = coding[j];
				j = 52;
			}
			j++;
		}
		i++;
		j = 0;
	}
	
	return (data);
}
