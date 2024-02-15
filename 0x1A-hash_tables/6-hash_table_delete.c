#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: variable
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *node, *temp;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] == NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}

		}
	}
	free(h->array);
	free(h);
}
