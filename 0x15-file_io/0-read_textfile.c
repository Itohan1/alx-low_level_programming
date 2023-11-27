#include "main.h"

/*
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: first parameter
 * @letters: second parameter
 * Return: NULL, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	ssize_t file;
	ssize_t wr;
	ssize_t text;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	text = read(file, s, letters);
	wr = write(STDOUT_FILENO, s, text);

	free(s);
	close(file);
	return (wr);
}
