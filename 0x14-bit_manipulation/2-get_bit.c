#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: first parameter
 * @index: second parameter
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index == 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
