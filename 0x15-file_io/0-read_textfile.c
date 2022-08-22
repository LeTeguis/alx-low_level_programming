#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - get
 *
 * @filename: the string file name
 * @letters: number of letters it should read and print
 *
 * Description: reads a text file and prints it to the POSIX standard output
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl = 0;
	int fr = 0;
	int fw = 0;
	int fc = 0;
	char *string_read = 0;

	if (filename == 0)
		return (0);
	string_read = (char *)malloc(sizeof(char) * (letters + 1));
	if (string_read == 0)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		free(string_read);
		return (0);
	}
	fr = read(fl, string_read, letters);
	if (fr == -1)
	{
		free(string_read);
		close(fl);
		return (0);
	}
	fw = write(STDOUT_FILENO, string_read, fr);
	free(string_read);
	if (fw == -1 || fw != fr)
	{
		close(fl);
		return (0);
	}
	fc = close(fl);
	if (fc == -1)
		return (0);
	return (fr);
}
