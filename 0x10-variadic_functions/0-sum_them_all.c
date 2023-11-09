#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter
 * Return: sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list arg;

	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(arg, const unsigned int);
		}
	}
	va_end(arg);
	return (sum);
}
