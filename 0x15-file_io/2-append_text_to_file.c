#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: the name of the file to append
 * @text_content: the string to add to the end of the file
 *
 * Return: 1 for success and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, wrt;
	int c = 0;

	if (!filename)
	{
		return (-1);
	}
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
	{
		/*close(file);*/
		return (-1);
	}
	if (!text_content)
	{
		close(file);
		return (1);
	}
	while (text_content[c] != '\0')
	{
		c++;
	}
	wrt = write(file, text_content, c);
	if (wrt == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
