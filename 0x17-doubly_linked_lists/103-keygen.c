#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: param len
 * @argv: all param
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *c;
	int i, j;
	int k = 0;

	if (argc != 2)
		return (0);
	k = strlen(argv[1]);
	i = k - 1;
	j = 0;
	c = (char *)malloc(sizeof(char) * (k + 1));
	if (c == 0)
		return (0);
	while (i >= 0)
	{
		c[j] = argv[1][i] + i;
		i--;
		j++;
	}
	c[j] = 0;
	printf("%s", c);
	free(c);
	return (0);
}
