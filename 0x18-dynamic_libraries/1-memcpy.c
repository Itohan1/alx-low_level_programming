#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n ; k++)
		dest[k] = src[k];

	return (dest);
}
