#include "hash_tables.h"

/**
 * hash_table_print - print hash tables
 * @ht: variable
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int j;
	unsigned char f = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (f == 1)
				printf(", ");

			node = ht->array[j];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			f = 1;
		}
	}
	printf("}\n");
}
