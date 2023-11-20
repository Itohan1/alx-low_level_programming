#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: parameter
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tem = head;

	while (tem)
	{
		sum += tem->n;
		tem = tem->next;
	}
	return (sum);
}
