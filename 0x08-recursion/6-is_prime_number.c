#include "main.h"

/**
 * is_prime_number - prime number
 * @n: parameter
 * Return: 0, -1
 *
 */

;
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number_integer(n, n - 1));
}

/**
 * prime_number_integer - prime number integer
 * @n: first value
 * @y: second variable
 * Return: 0, -1
 *
 */

int prime_number_integer(int n, int y)
{
	if (y == 1)
		return (1);
	if ((n % y) == 0 && y > 0)
		return (0);
	return (prime_number_integer(n, y - 1));
}
