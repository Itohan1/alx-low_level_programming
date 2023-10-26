#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: variable
 * Return: n!
 *
 */

int factorial(int n)
{
	while (n == 1 || n == 0)
		return (1);
	 if (n < 0)
                return (-1);
	return (n * factorial(n - 1));
}
