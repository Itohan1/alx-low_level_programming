#include "main.h"

/**
 * _strncpy - copy function
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
		dest[j] = src[j];
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
