#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: first parameter
 * @index: second parameter
 * Return: -1, 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *node = NULL;
	unsigned int q = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (q < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		q++;
	}

	node = tem->next;
	tem->next = node->next;
	free(node);
	return (1);
}
