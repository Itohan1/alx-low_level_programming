#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: first parameter
 * @index: second parameter
 * Return: index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *temp;

	len = 0;
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (index == len)
			return (temp);
		len++;
		temp = temp->next;
	}
	return (NULL);
}
