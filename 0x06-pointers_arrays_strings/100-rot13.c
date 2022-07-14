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
	int i = 0;
	char upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char lower[] = "nopqrstuvwxyzabcdefghijklm";

	while (data[i] != '\0')
	{
		if ('a' <= data[i] && data[i] <= 'z')
			data[i] = lower[data[i] - 'a'];
		else if ('A' <= data[i] && data[i] <= 'Z')
			data[i] = upper[data[i] - 'A'];
		i++;
	}
	
	return (data);
}
