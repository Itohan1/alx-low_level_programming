#include "main.h"

char *buf(char *file);
void close_file(int fd);

/**
 * buf - creates buffer
 * @file: parameter
 * Return: b
 */

char *buf(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
		return (b);
}

/**
 * close_file - closes file
 * @fd: parameter
 */

void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main function
 * @argc: arguement
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, r, wr;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
	b = buf(argv[2]);
	b = buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}
		wr = write(to, b, r);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}
		r = read(from, b, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
		free(b);
		close_file(from);
		close_file(to);

		return (0);
}
