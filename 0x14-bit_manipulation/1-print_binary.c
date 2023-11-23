#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: parameter
 * Return: bin
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int bin;

	for (i = 63 ; i >= 0 ; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
