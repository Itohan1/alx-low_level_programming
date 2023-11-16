#include "lists.h"

/**
 * list_len - list number of nodes
 * @h: parameter
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != 0)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
