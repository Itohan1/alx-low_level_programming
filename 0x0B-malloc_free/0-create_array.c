#include "main.h"

/**
 * create_array - creates an array
 * @size: first parameter
 * @c: second parameter
 * Return: 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int y;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (y = 0; y < size ; y++)
		p[y] = c;
	return (p);
}
