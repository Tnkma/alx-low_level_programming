#include "main.h"

/**
 * error_file - the function checks for files that can be opend
 * @fil1: file_from
 * @file2: file_to
 * @argv: command line arguments
 * Return: void since were void
 */
void error_file(int fil1, int fil2, char *argv[])
{
	if (fil1 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (fil2 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
}

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: command line argument
 *
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
	int fil1, fil2, err_close;
	ssize_t n, nw;
	char buf[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
	}

	fil1 = open(argv[1], O_RDONLY);
	fil2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fil1, fil2, argv);
	n = 1024;
	while (n == 1024)
	{
	n = read(fil1, buf, 1024);
	if (n == -1)
	{
	error_file(-1, 0, argv);
	}
	nw = write(fil2, buf, n);
	if (nw == -1)
	error_file(0, -1, argv);
	}

	err_close = close(fil1);
	if (err_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil1);
	exit(100);
	}

	err_close = close(fil2);
	if (err_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil1);
	exit(100);
	}
	return (0);
}
