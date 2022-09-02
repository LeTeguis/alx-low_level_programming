#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t _getline(char **linestr, size_t *n, FILE *file);

/**
 * main - entry point
 *
 * Description: bsaic sheel
 *
 * Return: 0
 */

int main(void)
{
	char *lineptr = 0;
	size_t n = 0;
	size_t i = 0;

	printf("$ ");
	_getline(&lineptr, &n, stdin);
	if (lineptr != 0)
	{
		i = n;
		while (i > 0)
		{
			if (lineptr[i - 1] == '\n')
			{
				lineptr[i - 1] = '\0';
				n--;
				break;
			}
			else if (lineptr[i - 1] != '\0')
				break;
			i--;
		}
	}
	else
		printf("nulle\n");
	printf(" %s\n", lineptr);
	return (0);
}
