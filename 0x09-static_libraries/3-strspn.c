#include "main.h"

/**
 * _strspn - leng of prefix
 *
 * @s: string
 * @accept: data to find
 *
 * Description: gets the length of a prefix substring
 *
 * Return: leng
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}

		if (!accept[j])
			return (i);

		i++;
		j = 0;
	}

	return (i);
}
