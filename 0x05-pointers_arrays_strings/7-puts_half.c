#include "main.h"

/**
 * puts_half - puts half
 * @str: string
 * Return: void
 *
 */

void puts_half(char *str)
{
	int y, l, count = 0;

	for (y = 0 ; str[y] != '\0' ; y++)
		count++;
	l = (count - 1) / 2 ;
	for (y = l + 1 ; str[y] != '\0' ; y++)
		_putchar(str[y]);
	_putchar('\n');
}
