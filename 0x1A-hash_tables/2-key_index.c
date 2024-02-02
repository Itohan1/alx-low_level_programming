#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: first parameter
 * @size: second parameter
 * Return: key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int index = hash_value % size;

	return (index);
}
