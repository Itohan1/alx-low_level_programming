#include "search_algos.h"

/**
 * jump_search - jump algorithmn
 * @array: array parameter
 * @size: size parameter
 * @value: value parameter
 * Return: -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int low = 0;
	int j = size - 1;
	int twice;

	if (array == NULL)
		return (-1);
	while (jump <= j && low <= jump)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		twice = jump + sqrt(size);
		if (array[low] == value)
		{
			return (low);
		}
		if ((array[low] <= value) && (array[jump] >= value))
		{
			int i = low;

			printf("Value found between indexes [%d] and %d]\n", low, jump);
			while (i <= jump)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
				i++;
			}
		}
		if ((array[jump] == j) && (array[twice] <= value || array[twice] > value))
		{
			printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
			printf("Value found between indexes [%d] and [%d]\n", jump, twice);
			printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		}
		low += sqrt(size);
		jump += sqrt(size);
	}
	return (-1);
}
