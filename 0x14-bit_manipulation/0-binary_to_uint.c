#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: parameter
 * Return: dec
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;
	unsigned int base = 2;

	if (!b)
		return (0);

	for (i = 0 ; b[i] ; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = base * dec + (b[i] - '0');
	}
	return (dec);
}
