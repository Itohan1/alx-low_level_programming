#include "main.h"

/**
 * more_numbers - main numbers
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int t;
	int j;

	for (t = 0; t < 10; t++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
