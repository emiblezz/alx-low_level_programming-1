#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key
 * Return: the value associated with the key, other wise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = key_index((const unsigned char*)key, ht->size);
	hash_node_t *node;

	if (!ht->array[index])
		return (NULL);

	node = ht->array[index];

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;
	if (!node)
		return (NULL);
	else
		return node->value;
}
