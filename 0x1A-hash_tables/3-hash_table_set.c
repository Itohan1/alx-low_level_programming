#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: first parameter
 * @key: parameter for key
 * @value: parameter for value
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *dup;
	unsigned long int id, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup = strdup(value);
	if (dup == NULL)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);
	for (i = id; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = dup;
	new->next = ht->array[id];
	ht->array[id] = new;

	return (1);
}
