#include "main.h"

/**
 * main - finds the prime numbers
 * Return: 0
 *
 */

int main(void)
{
	long int n = 612852475143;
	long int j;

	while (j != n)
	{
		if (n % j == 0)
			n = n / j;
		else
			j++;
	}
	printf("%ld\n", j);
	return (0);
}
