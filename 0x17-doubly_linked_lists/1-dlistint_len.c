#include "lists.h"
/**
 * dlistint_len - returns the number of elements of a list
 * @h: parameter
 * Return: n
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
