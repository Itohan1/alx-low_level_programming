#include "main.h"

char *buf(char *f);
void file(int d);
int main(int argc, char *argv[]);

/**
 * buf - creates buffer
 * @f: parameter
 * Return: b
 */

char *buf(char *f)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
		return (b);
}

/**
 * file: closes file
 * @d: parameter
 */

void file(int d)
{
	int cl;

	cl = close(d);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close d %d\n", d);
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
	int frm, to, r, wr;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp to f_frm f_to\n");
			exit(97);
	}
	{
		dprintf(STDERR_FILENO, "Usage: cp to f_frm f_to\n");
			exit(97);
	}
	b = buf(argv[2]);
	b = buf(argv[2]);
	frm = open(argv[1], O_RDONLY);
	r = read(frm, b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from f %s\n", argv[1]);
			free(b);
			exit(98);
		}

		wr = write(to, b, r);
		
		if (to == -1 || wr == -1)
		{
			 dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[2]);
			 free(b);
			 exit(99);
		}
		r = read(frm, b, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
		free(b);
		file(frm);
		file(to);

		return (0);
}
