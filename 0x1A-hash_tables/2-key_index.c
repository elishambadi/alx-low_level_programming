#include "hash_tables.h"

/**
 * key_index - find index of a key
 * @key: key to be indexed
 * @size: size of hash table
 *
 * Return: index found
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
