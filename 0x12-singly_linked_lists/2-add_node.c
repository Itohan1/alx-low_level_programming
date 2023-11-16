#include "lists.h"

/**
 * add_node - adds node
 * @head: first parameter
 * @str: second parameter
 * Return: Node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Node;
	unsigned int j, count = 0;

	Node = malloc(sizeof(list_t));
	if (Node == NULL)
	{
		return (NULL);
	}
	Node->str = strdup(str);
	for (j = 0 ; str[j] != '\0' ; j++)
		count++;
	Node->len = count;
	Node->next = *head;
	*head = Node;

	return (*head);
}
