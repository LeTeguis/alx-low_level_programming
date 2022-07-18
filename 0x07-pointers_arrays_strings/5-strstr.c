#include "main.h"

/**
 * _strstr: locates
 *
 * @haystack: first
 * @needle: second
 *
 * Description: locates a substring
 *
 * Return: pointer to the beginning of the located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j] && needle[j] == haystack[i + j])
		{
			j++;
		}

		if (!needle[j])
			return (haystack + i);
		
		j = 0;
		i++;
	}

	return (0);
}
