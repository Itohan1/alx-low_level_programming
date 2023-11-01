#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: first number
 * Return: 0
 *
 */

void print_to_98(int n)
{
	int i = n;

	if (i >= n && i <= 98)
	{
		for (i = n ; i >= n && i <= 98 ; i++)
		{
			if (i == n)
			{
				printf("%d,", i);
			}
			else if (i > n && i < 98)
			{
				printf(" %d,", i);
			}
			else
			{
				printf(" %d", i);
			}
		}
		printf("\n");
	}
	else if (i <= n && i >= 98)
	{
		for (i = n ; i <= n && i >= 98 ; i--)
		{
			if (i == n)
			{
				printf("%d,", i);
			}
			else if (i > 98 && i < n)
			{
				printf(" %d,", i);
			}
			else
			{
				printf(" %d", i);
			}
		}
		printf("\n");
	}
}
