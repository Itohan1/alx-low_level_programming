#include "main.h"

/**
 *_islower - function checks for lowercase character
 *@c: checks
 * Return: 1 or 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

