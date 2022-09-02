#include <stdlib.h>
#include <stdio.h>

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}

char *_strcp(char *str, int all, unsigned int start, unsigned int end)
{
	unsigned int leng = (end < start) ? (start - end + 1) : (end - start + 1);
	char *result = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len_str = _strlen(str);

	if (str == 0 || start >= len_str || end >= len_str)
		return (0);
	if (all < 0)
	{
		end = len_str - 1;
		start = 0;
		if (end < start)
		{
			end = 0;
			start = len_str - 1;
		}
		leng = len_str;
	}
	result = (char *)malloc(sizeof(char) * (leng + 1));
	if (!result)
		return (0);
	if (end < start)
	{
		for (i = start; i >= end; i--)
			result[j++] = str[i];
	}
	else if (end > start)
	{
		for (i = start; i <= end; i++)
			result[j++] = str[i];
	}
	else
		result[0] = str[start];
	result[leng] = '\0';
	return (result);
}

void *_free(char **str)
{
	unsigned int i = 0;
	
	if (str == 0)
		return (0);
	while (str[i])
	{
		free(str[i++]);
		str[i - 1] = 0;
	}
	if (str == 0)
		return (0);
	free(str);
	str = 0;
	return (0);
}
/** split - split the str
 *
 * @str: string with split
 * @del: delimiteur
 *
 * Description: split str with delimiter del
 *
 * Return: list of string split or NULL
 */

char **split(char *str, char *del)
{
	char **result = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int nbr = 0;
	unsigned int len_del = _strlen(del);
	unsigned int len_str = _strlen(str);

	if (str == 0)
		return (0);
	if (del == 0 || len_del == 0 || len_str < len_del)
	{
		char *r = _strcp(str, 0, 0, 0);

		return ((r == 0) ? 0 : &r);
	}
	while (str[i])
	{
		int add = 0;

		while (del[j] && str[i + j])
		{
			if (del[j] != str[i + j])
			{
				if (!str[i + j])
					add = 1;
				break;
			}
			j++;
			if (!del[j])
			{
				if (k != i)
					add = 1;
				else
				{
					k = i + j;
					i = k - 1;
				}
				break;
			}
		}
		if (add == 1)
		{
			add = 0;
			if (k != i + j)
			{
				if (nbr == 0)
					result = (char **)malloc(sizeof(char *));
				else
					result = (char **)realloc(result, sizeof(char *) * (nbr + 1));
				if (!result)
					return (_free(result));
				result[nbr] = _strcp(str, 0, k, i - 1);
				if (result[nbr] == 0)
					return (_free(result));
				nbr++;
				k = i + j;
				i = k - 1;
			}
		}
		i++;
		j = 0;
		if (!str[i] && k <= len_str - 1)
		{
			if (nbr == 0)
				result = (char **)malloc(sizeof(char *) * 2);
			else
				result = (char **)realloc(result, sizeof(char *) * (nbr + 2));
			if (!result)
				return (_free(result));
			result[nbr] = _strcp(str, 0, k, len_str - 1);
			if (result[nbr] == 0)
				return (_free(result));
			result[nbr + 1] = 0;
			break;
		}
	}
	return (result);
}
