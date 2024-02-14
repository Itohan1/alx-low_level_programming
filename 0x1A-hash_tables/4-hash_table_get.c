#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value
 * @ht: first parameter
 * @key: second parameter
 * Return: 0
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nod;
	unsigned long int id;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	id = key_index((const unsigned char *)key, ht->size);
	if (id >= ht->size)
		return (NULL);

	nod = ht->array[id];
	while (nod && strcmp(nod->key, key) != 0)
		nod = nod->next;

	return ((nod == NULL) ? NULL : nod->value);
}
