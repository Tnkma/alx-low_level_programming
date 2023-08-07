#include "main.h"

/**
 * append_text_to_file - creates a new file
 * @filename: the filename
 * @text_content: the content of the text
 *
 * Return: 1 on sucess
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[len] != '\0')
	{
		;
	w = write(fd, text_content, len);
	if (w < 1)
	{
		return (-1);
	}
	}
	close(fd);
	return (1);
}

