#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: first parameter
 * @index: second parameter
 * Return: bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
