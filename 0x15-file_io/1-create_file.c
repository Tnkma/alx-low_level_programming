#include "main.h"

/**
 * create_file - creates the file with user permissions
 * @filename: create the filenmane if it does not exists
 * @text_content: the text content to write to filename
 *
 * Return: 1 for success and - for failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file, wrt;
	int c = 0;

	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[c])
		{
			c++;
		}
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(file, text_content, c);

	if (!file || wrt == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
