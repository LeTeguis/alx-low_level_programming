#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - args sto and str
 *
 * @ac: number of argument
 * @av: all argument
 *
 * Description: concatenates all the arguments of your program
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char *argv = 0;
	int leng = 0;

	if (ac <= 0 || !av)
		return (0);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j++])
			leng++;
		j = 0;
		leng++;
	}

	argv = (char *)malloc(sizeof(char) * (leng + 1));
	if (argv)
	{
		printf("%d\n", (leng + 1));
		for (i = 0; i <= leng; i++)
			*(argv + i) = '\0';
		leng  = 0;
		for (i = 0; i < ac; i++)
		{
			while (av[i][j])
			{
				argv[leng + j] = av[i][j];
				j++;
			}
			leng += j;
			argv[leng] = '\n';
			leng++;
			j = 0;
		}
	}
	return (argv);
}
