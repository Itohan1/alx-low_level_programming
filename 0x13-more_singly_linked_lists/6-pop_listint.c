#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: parameter
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int value;

	if (!head || !*head)
		return (0);

	value = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (value);
}
