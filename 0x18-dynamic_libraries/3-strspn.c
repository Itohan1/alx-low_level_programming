#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int y;

	while (*s)
	{
		for (y = 0 ; accept[y] != '\0' ; y++)
		{
			if (*s == accept[y])
			{
				j++;
				break;
			}
		else if (accept[y + 1] == '\0')
			return (j);
		}
		s++;
	}
	return (j);
}
