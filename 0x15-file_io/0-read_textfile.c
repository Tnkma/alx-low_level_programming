#include "main.h"

/**
 * read_textfile - reads and prints out the txt file
 * @filename: the name of the file
 * @letters: returns the count of the txt
 *
 * Return: the counts of the txt
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t count;
	size_t	now_return;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}

	count = fread(buf, sizeof(char), letters, fp);
	if (ferror(fp))
	{
		free(buf);
		fclose(fp);
		return (0);
	}
	buf[count] = '\0';
	now_return = fwrite(buf, sizeof(char), count, stderr);
	if (now_return < count)
	{
		free(buf);
		fclose(fp);
		return (0); }

	free(buf);
	fclose(fp);

	return (now_return);
}
