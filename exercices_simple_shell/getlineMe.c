#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>

#if !(defined SSIZE_MAX)
#define SSIZE_MAX (SIZE_MAX >> 1)
#endif
/**
 * _getline - get
 *
 * @linestr: string
 * @n: number of char
 * @file: file to read
 *
 * Description: read the current line in file
 *
 * Return: number of char read
 */

size_t _getline(char **linestr, size_t *n, FILE *file)
{
	size_t size_read = 0;
	const size_t INITALLOC = 16;
	const size_t ALLOCSTEP = 16;

	if ((0 == linestr) || (0 == n) || (0 == file))
	{
		errno = EINVAL;
		return (-1);
	}
	if (0 == *linestr)
	{
		*linestr = malloc(INITALLOC);
		if (0 == *linestr)
			return (-1);
		else
			*n = INITALLOC;
	}
	{
		int c;

		while (EOF != (c = getc(file)))
		{
			size_read++;
			if (size_read >= *n)
			{
				size_t n_realloc = *n + ALLOCSTEP;
				char * tmp = realloc(*linestr, n_realloc + 1);

				if (tmp == 0)
				{
					*linestr = tmp;
					*n = n_realloc;
				}
				else
					return (-1);
				if (SSIZE_MAX < *n)
				{
					errno = ERANGE;
					return (-1);
				}
			}
			(*linestr)[size_read - 1] = (char) c;
			if (c == '\n')
				break;
		}
		if (EOF == c)
		{
			errno = 0;
			return (-1);
		}
	}
	(*linestr)[size_read] = '\0';
	return (size_read);
}
