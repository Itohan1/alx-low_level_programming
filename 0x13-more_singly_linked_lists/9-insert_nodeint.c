#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first parameter
 * @idx: second parameter
 * @n: third parameter
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int q;
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (q = 0 ; temp && q < idx ; q++)
	{
		if (q == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
