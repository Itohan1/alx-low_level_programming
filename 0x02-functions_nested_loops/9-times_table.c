#include "main.h"

/**
 * times_table - times table
 *
 * Return - 0
 *
 */

void times_table(void)
{
	int i, j, q;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			q = i * j;
			if (j == 0)
			{
				_putchar(q + '0');
			}
			if (q < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(q + '0');
			}
			else if (q >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((q / 10) + '0');
				_putchar((q % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
