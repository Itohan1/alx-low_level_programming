#include "lists.h"

/**
 * print_list - prints list
 * @h: singly linked list
 * Return: elements
 *
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elements++;
	}
	return (elements);
}
