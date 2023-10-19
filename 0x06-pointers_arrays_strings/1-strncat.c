#include "main.h"

/**
 * _strncat - string concantenation
 * @dest: first sting
 * @src: second string
 * @n: concantenated bytes
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int son = strlen(dest);
	int j;

	for (j = 0 ; j < n && *src != '\0' ; j++)
	{
		dest[son + j] = *src;
			src++;
	}
	dest(son + j) = '\0';
	return (dest);
}
