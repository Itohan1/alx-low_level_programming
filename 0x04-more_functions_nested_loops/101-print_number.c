#include "main.h"

/**
 * print_number - prints number
 * @n: number parameter
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_putchar(n % 10 + '0');
}
