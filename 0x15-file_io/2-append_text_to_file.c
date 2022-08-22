#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - add
 *
 * @filename: the string file name
 * @text_content: content to add in file
 *
 * Description: add text_content int file
 *
 * Return: 1 if success -1 if close
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl = 0;
	int fw = 0;
	int fc = 0;
	int len = 0;

	if (filename == 0)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
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
