#include "main.h"

/**
 * leet - encodes a string
 * @rest: string parameter
 * Return: rest
 *
 */

char *leet(char *rest)
{
	int b, j;
	char str[] = "aAeEoOtTlL";
	char src[] = "4433007711";

	for (b = 0 ; rest[b] != '\0' ; b++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (rest[b] == str[j])
			{
				rest[b] = src[j];
			}
		}
	}
	return (rest);
}
