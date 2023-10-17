#include "main.h"

/**
 * *_strcpy - character function
 * @dest: first value
 * @src: third value
 * Return: char
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest = '\0';
	return (dest);
}
