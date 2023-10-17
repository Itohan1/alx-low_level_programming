#include "main.h"

/**
 * print_rev - print reverse function
 * @s: print reverse value
 * Return - void
 *
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; 1 >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
