#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: first variable
 * @f: second variable
 * Return: name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
