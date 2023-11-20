#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list
 * @head: first parameter
 * @index: second parameter
 * Return: n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q = 0;
	listint_t *temp = head;

	while (temp && q < index)
	{
		temp = temp->next;
		q++;
	}
	return (temp ? temp : NULL);
}
