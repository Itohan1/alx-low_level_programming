#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n ; j++)
		*s = b;
	return (s);
}
