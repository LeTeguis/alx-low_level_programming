#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	const int size_ = 30;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[size_];

	srand(time(NULL));
	while (i < size_)
	{
		p[i] = c[rand() % 62];
		i++;
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
