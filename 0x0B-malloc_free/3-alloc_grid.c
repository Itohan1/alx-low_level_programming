#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: first parameter
 * @height: second parameter
 * Return: 0
 *
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);
		if (p == NULL)
			return (NULL);

	for (i = 0 ; i < height ; ++i)
	{
		p[i] =  malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			free(p);
			for (y = 0; y <= height; y++)
				free(p[y]);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			p[i][y] = 0;
	}
	return (p);
}
