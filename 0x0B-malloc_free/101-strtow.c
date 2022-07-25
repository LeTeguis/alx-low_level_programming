#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * numberOfWord - number word
 *
 * @str: string
 * @regex: element to identifier two word
 *
 * Description: return the number of word
 * it identifie to regex
 *
 * Return: number of word is determine
 */

int numberOfWord(char *str, char regex)
{
	int i = 0;
	int word = 0;

	if (!str || !str[0])
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == regex)
			i++;
		if (str[i])
		{
			word++;
			while (str[i] && str[i] != regex)
				i++;
		}
	}
	return (word);
}

/**
 * getWord - get a word
 *
 * @str: string
 * @pos: begin position to identifie word
 * @regex: chaaracter is separe two word
 *
 * Description: determine the word
 *
 * Return: the word or null is not contain the word
 */

char *getWord(char *str, int *pos, char regex)
{
	int i = 0;
	char *word = 0;
	int j = 0;

	if (!str || *pos < 0 || !str[*pos])
		return (0);

	while (str[*pos + i] && str[*pos + i] == regex)
		i++;

	*pos += i;
	i = 0;

	while (str[*pos + i] && str[*pos + i] != regex)
		i++;

	if (i <= 0)
		return (0);

	word  = (char *)malloc(sizeof(char) * (i + 1));

	if (!word)
		return (0);

	for (j = 0; j < i; j++)
		word[j] = str[*pos + j];
	word[j] = '\0';

	*pos += i;
	return (word);
}
/**
 * strtow - function
 *
 * @str: string
 *
 * Description:  splits a string into words
 *
 * Return: array of string spleet
 */

char **strtow(char *str)
{
	int wordCount = 0;
	char **split = 0;
	int i = 0;
	int pos = 0;

	if (!str || !str[0])
		return (0);

	wordCount = numberOfWord(str, ' ');

	if (wordCount <= 0)
		return (0);

	split = (char **)malloc(sizeof(char *) * (wordCount + 1));

	if (split)
	{
		for (i = 0; i < wordCount; i++)
		{
			split[i] = getWord(str, &pos, ' ');
			if (!split)
			{
				for (wordCount = 0; wordCount < i; i++)
					free(split[wordCount]);
				free(split);
				return (0);
			}
		}
	}
	split[wordCount] = 0;
	return (split);
}
