#include "main.h"

/**
 * read_textfile - reads a text file and prints it out
 * @filename: the file to actaully read
 * @letters: the count of character read and printed
 *
 * Return: the counting varaible
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wrt;
	char *buff;

	if (!filename || letters < 1)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(file);
		return (0);
	}
	rd = read(file, buff, letters);
	if (rd <= 0)
	{
		free(buff);
		close(file);
		return (0);
	}
	wrt = write(STDOUT_FILENO, buff, rd);
	if (wrt < rd)
	{
		free(buff);
		close(file);
		return (0);
	}

	free(buff);
	close(file);

	return (wrt);
}
