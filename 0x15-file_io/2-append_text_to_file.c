#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: parameter for filename
 * @text_content: second parameter
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, strlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strlen = 0 ; text_content[strlen] ; )
			strlen++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	wr = write(file, text_content, strlen);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);
}
