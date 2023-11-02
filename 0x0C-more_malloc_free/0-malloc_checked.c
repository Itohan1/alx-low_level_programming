#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter
 * Return: *p
 *
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
