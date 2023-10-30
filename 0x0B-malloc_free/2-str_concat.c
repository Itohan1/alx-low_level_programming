#include "main.h"

/**
 * str_concat -  concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: Null, p
 *
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	char *rvalue;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		len2++;
	rvalue = malloc(sizeof(char) * (len1 + len2) + 1);
	if (rvalue == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		rvalue[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		rvalue[len1 + i] = s2[i];
	return (rvalue);
}
