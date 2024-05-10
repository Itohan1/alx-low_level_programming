#include "main.h"
#include "math.h"

/**
 * main - finds the prime numbers
 * Return: 0
 *
 */

void prime_number(long int n)
{
	/*long int largestprime;*/
	long int j = 2;
	long int k = sqrt(j);

	while ((j <= n) && (j % k != 0))
	{
		while (n % j == 0)
		{
			n /= j;
			printf("%ld %ld\n", j, n);
		}
		j++;
	}
}

int main(void)
{
	prime_number(612852475143);
	return (0);
}
