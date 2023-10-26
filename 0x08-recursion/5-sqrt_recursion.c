#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: first variable
 * Return: -1
 *
 */

int _sqrt_recursion(int n)
{
	int y = n / y;
	int _sqrt = y * y;

	if (_sqrt < n)
		return (-1);
	if (_sqrt == n)
		return (y);
	return (_sqrt(n, y + 1));
}
