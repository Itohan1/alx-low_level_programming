#include "main.h"

/**
 * create_file - creates a file
 * @filename: first parameter
 * @text_content: second parameter
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, wr, strlen = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (strlen = 0 ; text_content[strlen] ;)
			strlen++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, strlen);

	if (file == -1 || wr == -1)
		return (-1);
	close(file);
	return (1);
}
