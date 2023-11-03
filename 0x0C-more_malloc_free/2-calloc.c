#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: first parameter
 * @size: second parameter
 * Return: *p
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = calloc(nmemb, size);
	if (p == NULL)
		return (NULL);
	else
		return (p);
}
