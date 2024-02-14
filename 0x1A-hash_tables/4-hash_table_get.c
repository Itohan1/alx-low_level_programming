#include "hash_table.h"

/**
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

