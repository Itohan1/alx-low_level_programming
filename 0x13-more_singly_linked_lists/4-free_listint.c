#include "lists.h"

/**
 * free_listint - frees list
 * @head: parameter
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
