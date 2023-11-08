#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: first parameter
 * @size: second parameter
 * @cmp: third parameter
 * Return: i, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (j = 0 ; j < size ; j++)
	{
		if (cmp(array[j]) == 1)
			return (j);
	}
	return (-1);
}
