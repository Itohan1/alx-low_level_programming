#include "search_algos.h"

/**
 */

int jump_search(int *array, size_t size, int value)
{
	int jumps = sqrt(size);
	int j = size - 1;
	int low = 0;
	int pres;
	int i;

	if (array == NULL)
		return (-1);

	while (low <= jumps && jumps <= j)
	{
		pres = low;
		printf("Value checked array [%d] = [%d]\n", pres, pres);
		if (array[pres] == value)
			return (pres);
		if (array[pres] < value && array[jumps] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n", pres, jumps);
			for (i = pres; i <= jumps; i++)
			{
				printf("Value checked array [%d] = [%d]\n", i, i);
				if (array[i] == value)
				{
					return (value);
				}
			}

		}
		printf("\n");
		low = jumps;
		jumps += sqrt(size);
	}
	return (-1);
}
