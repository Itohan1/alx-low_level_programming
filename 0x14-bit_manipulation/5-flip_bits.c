#include "main.h"

/**
 * flip_bits -returns bits needed for flipping numbers
 * @n: first parameter
 * @m: second parameter
 * Return: bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int number;
	unsigned long int xor = n  ^ m;

	for (i = 63 ; i >= 0 ; i--)
	{
		number = xor >> i;
		if (number & 1)
			j++;
	}
	return (j);
}
