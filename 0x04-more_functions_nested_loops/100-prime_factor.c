#include "main.h"

/**
 * main - finds the prime numbers
 * Return: 0
 *
 */

int main(void)
{
	long n = 612852475143;
	long j;

	while (j != n)
	{
		if (n % j == 0)
			n = n / j;
		else
			j++;
	}
	printf("%ld\n", n);
	return (0);
}
