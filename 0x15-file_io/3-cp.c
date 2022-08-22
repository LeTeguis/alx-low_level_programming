#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * exit_error - error
 *
 * @erreur: data error inform
 * @code: code to exit
 * @file_name: file name to print if it is possible
 * @fclose1: file tha close
 * @fclose2: file that close
 *
 * Description: detect the error and close
 *
 * Return: nothing
 */

void exit_error(int erreur, int code, char *file_name,
		int fclose1, int fclose2)
{
	if (erreur == -1 && (code == 97 || code == 98 || code == 99 || code == 100))
	{
		int fd = 1;

		if (code == 97)
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		else if (code == 98)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		else if (code == 99)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		else if (code == 100)
		{
			fd = -1;
			if (fclose1 != -1)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fclose1);
			else if (fclose2 != -1)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fclose2);
		}

		if (fd == 1 && fclose1 != -1)
			close(fclose1);
		if (fd == 1 && fclose2 != -1)
			close(fclose2);
		exit(code);
	}
}
/**
 * main - entry point
 *
 * @argc: arguments number + 1
 * @argv: all arguments plus file name
 *
 * Description: copie the file one in the file two
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from = 0;
	int file_to = 0;
	char content_read[1024];
	int len_read = 1024;
	int len_write = 0;
	int close_read = 0;
	int close_write = 0;

	exit_error((argc != 3) ? -1 : 1, 97, 0, -1, -1);
	file_from = open(argv[1], O_RDONLY);
	exit_error(file_from, 98, argv[1], -1, -1);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	exit_error(file_to, 98, argv[2], file_from, -1);
	while (len_read > 0)
	{
		len_read = read(file_from, content_read, len_read);
		exit_error(len_read, 98, argv[1], file_from, file_to);
		len_write = write(file_to, content_read, len_read);
		if (len_write != len_read)
			len_write = -1;
		exit_error(len_write, 99, argv[2], file_from, file_to);
	}
	close_read = close(file_from);
	exit_error(close_read, 100, 0, file_from, -1);
	close_write = close(file_to);
	exit_error(close_write, 100, 0, -1, file_to);
	return (0);
}
