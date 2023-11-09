#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int i, j, k, q;

	for (i = 0 ; i <= 9 ; i++)
	for (j = 0 ; j <= 9 ; j++)
	for (k = 0 ; k <= 9 ; k++)
	for (q = 1 ; q <= 9 ; q++)
	{
		if (((i + j) < (k + q)) && (i >= j))
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(q + '0');
			if ((i + j) != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
