#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@r: computes
 * Return: -r or r
 *
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else if (r >= 0)
	{
		return (r);
	}
	return (0);
}
