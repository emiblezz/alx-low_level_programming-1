#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: The key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
