#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: first parameter
 * @size: second parameter
 * Return : void
 *
 */

void print_diagsums(int *a, int size)
{
	int j, k, sumj = 0, sumk = 0;

	for (j = 0; j <= (size * size) ; j = j + size + 1)
		sumj = sumj + a[j];

	for (k = size - 1 ; k <= (size * size) - size ; k = k + size - 1)
		sumk = sumk + a[k];
	printf("%d, %d\n", sumj, sumk);
}
