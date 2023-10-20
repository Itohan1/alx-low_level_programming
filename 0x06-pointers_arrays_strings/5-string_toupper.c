#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string parameter
 * Return: str
 *
 */

char *string_toupper(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = str[j] - 32;
		j++;
	}
	return (str);
}
