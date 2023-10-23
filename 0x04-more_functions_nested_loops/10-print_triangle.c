#include "main.h"

/**
 * print_triangle - printing a triangle
 * @size: size of the value
 * Return: void
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 1 ; i <= size ; i++)
		{

			for (j = (size - i) ; j > 0 ; j--)
			{
				_putchar(' ');
			}
			for (k = size ; k > (size - i) ; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
