#include "search_algos.h"

/**
 * binary_search - binary search algorithmn
 * @array: array parameter
 * @size: size parameter
 * @value: value parameter
 * Return: -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (mid = low; mid <= high; mid++)
		{
			printf("%d", array[mid]);
			if (mid < high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

	}
	return (-1);
}
