#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - set
 *
 * @filename: the string file name
 * @text_content: content of file
 *
 * Description: write data in the file
 *
 * Return: actual number of letters it could read and print
 */

int create_file(const char *filename, char *text_content)
{
	int fl = 0;
	int len = 0;
	int fw = 0;
	int fc = 0;

	if (filename == 0)
		return (-1);
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
		return (-1);
	if (text_content == 0)
	{
		close(fl);
		return (1);
	}
	while (text_content[len])
		len++;
	fw = write(fl, text_content, len);
	if (fw == -1 || fw != len)
	{
		close(fl);
		return (-1);
	}
	fc = close(fl);
	if (fc == -1)
		return (-1);
	return (1);
}
