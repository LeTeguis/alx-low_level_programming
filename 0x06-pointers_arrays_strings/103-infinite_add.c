#include "main.h"
#include <stdio.h>

/**
 * infinite_add - string add
 *
 * @n1: first char array number
 * @n2: second char array number
 * @r: result
 * @size_r: buffer size
 *
 * Description: adds two numbers
 *
 * Return: result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0;
	int leng1 = 0;
	int leng2 = 0;
	int max_leng = 0;
	char retenu = '0';

	while (n1[leng1] != '\0')
		leng1++;

	while (n2[leng2] != '\0')
		leng2++;

	for (i = 0; i < size_r - 1; i++)
		r[i] = '0';

	if (size_r - 1 < leng1 || size_r - 1 < leng2)
	{
		return (0);
	}

	max_leng = leng1;
	if (leng1 < leng2)
		max_leng = leng2;

	for (i = 0; i < max_leng; i++)
	{
		int tmp = retenu - '0';

		if (i < leng1)
			tmp += n1[leng1 - i - 1] - '0';
		if (i < leng2)
			tmp += n2[leng2 - i - 1] - '0';

		r[size_r - i - 2] = '0' + (tmp % 10);
		retenu = '0' + (tmp / 10);
	}

	if (retenu > '0' && size_r < max_leng + 2)
		return (0);

	if (retenu == '0' && size_r == max_leng + 1)
		return (r);

	if (retenu > '0')
	{
		r[0] = retenu;
		j = 1;

		if (size_r == max_leng + 2)
			return (r);
	}

	for (i = 0; i < size_r - 1; i++)
	{
		if (i >= max_leng)
			r[j + i] = '\0';
		else
			r[j + i] = r[i + size_r - max_leng - j];
	}

	return (r);
}
