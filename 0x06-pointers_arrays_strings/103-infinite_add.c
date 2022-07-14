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
	int leng_n1 = 0;
	int leng_n2 = 0;
	int max_leng;
	int i = 0;
	char retenu = '0';

	while(n1[leng_n1++] != '\0');
	leng_n1--;
	while(n2[leng_n2++] != '\0');
	leng_n2--;

	max_leng = (leng_n1 < leng_n2) ? leng_n2 : leng_n1;

	if (size_r <= max_leng)
		return (0);

	for (i = 0; i < size_r; i++)
	{
		if (i <= max_leng)
			r[i] = 0;
		else
			r[i] = '\0';
	}

	for (i = 0; i < max_leng; i++)
	{
		int calcul = retenu - '0';

		if (i < leng_n1)
			calcul += n1[leng_n1 - i - 1] - '0';

		if (i < leng_n2)
			calcul += n2[leng_n2 - i - 1] - '0';

		r[max_leng - i] = (calcul % 10) + '0';
		retenu = (calcul / 10) + '0';
	}

	if (retenu == '0')
	{
		/*
		 * for (i = 0; i < max_leng; i++)
		 *	r[i] = r[i + 1];
		 * r[max_leng] = '\0';
		*/
		return (r);
	}

	if (size_r <= max_leng + 1)
	{
		for (i = 0; i <= max_leng; i++)
			r[i] = '\0';
		return (0);
	}

	r[0] = retenu;

	return (r);
}
