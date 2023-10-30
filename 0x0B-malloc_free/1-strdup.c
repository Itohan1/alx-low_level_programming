#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: parameter
 * Return: 0
 *
 */

char *_strdup(char *str)
{
	char *c;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0' ; i++)
		len++;
	c = malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' ; i++)
		c[i] = str[i];
	return (c);
}
