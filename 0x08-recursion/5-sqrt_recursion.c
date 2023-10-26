#include "main.h"


/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: first variable
 * Return: -1
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot(n, 0));
}

/**
 * squareroot - squareroo of an integer
 * @n: first variable
 * @y: second variable
 * Return: -1, 0
 *
 */

int squareroot(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (squareroot(n, y + 1));
}
