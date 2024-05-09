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

	if (array == NULL)
		return (-1);
	while (low <= j)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
		{
			return (low);
		}
		if (((array[low] <= value) && (array[jump] >= value)) || (((low == j) && (array[jump] <= value || array[jump] >= value))))
		{
			int i = low;

			printf("Value found between indexes [%d] and [%d]\n", low, jump);

			while (i <= jump && i <= j)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);

				if (array[i] == value)
				{
					return (i);
				}
				i++;
			}
		}
		low = jump;
		jump += sqrt(size);
	}
	if (array[jump] > value && jump > j)
	{
		int i = j + 1;

		while (i < jump)
		{
			if (array[i] == value)
                         {
				 return (i);
			 }
                        i++;
		}
	}
	return (-1);
}
