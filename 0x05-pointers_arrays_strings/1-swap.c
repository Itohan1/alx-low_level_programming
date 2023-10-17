#include "main.h"

/**
 * swap_int - swap integer
 * @a: first integer
 * @b: second integer
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int u;

	u = *a;
	*a = *b;
	*b = u;
}
