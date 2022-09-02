#include <stdio.h>
#include <stdlib.h>

char **split(char *str, char *del);
int _free(char **str);

/**
 * main - entry point
 *
 * @argc: number of parameter
 * @argv: parameter
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char __attribute__((__unused__)) **argv)
{
	char str[] = "bonjour touout le monde comment vous allez aujourdhuit?";
	char **result_split = 0;
	unsigned int i = 0;

	result_split = split(str, " ");

	if (result_split == 0)
		printf("pas de decoupe\n");
	else
	{
		while (result_split[i])
		{
			printf("%s\n", result_split[i]);
			printf("***************************\n");
			i++;
		}
		printf("---------------------------------\n");
		_free(result_split);
	}
	return (0);
}
