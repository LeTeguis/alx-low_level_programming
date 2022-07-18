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

	if (haystack == 0 || needle == 0 || needle[0] == '\0')
		return (0);

	while (haystack[i] != '\0')
	{
		_putchar(i+'0');
		if (haystack[i] == needle[0])
		{
			j = 0;
			_putchar('\n');
			while (haystack[i + j] == needle[j])
			{
				_putchar(' ');
				if (needle[j + 1] == '\0')
					return (haystack + i);
				j++;
				_putchar('1');
				if (haystack[i + j] == '\0')
					break;
			}
			_putchar('S');
		}
		_putchar('\n');
		i++;
	}

	return (0);
}
