#include "lists.h"

/**
 *  delete_dnodeint_at_index - deletes the node
 *  @head: first parameter
 *  @index: second parameter
 *  Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *b;
	unsigned int j;

	h = *head;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	j = 0;

	while (h != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = h->next;
				if (*head != NULL)
				(*head)->prev = NULL;
			}
			else
			{
				b->next = h->next;
				if (h->next != NULL)
					h->next->prev = b;
			}
			free(h);
			return (1);
		}
		b = h;
		h = h->next;
		j++;
	}
	return (-1);
}
