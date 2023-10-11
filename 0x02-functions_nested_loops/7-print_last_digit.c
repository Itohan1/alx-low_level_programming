#include "main.h"

/**
 * print_last_digit - prints last digit
 * @q: printed character
 * Return: t
 *
 */

int print_last_digit(int q)
{
	int t;

	t = q % 10;
	if (q < 0)
		t = -t;
	_putchar(t + '0');
	return (t);
}
