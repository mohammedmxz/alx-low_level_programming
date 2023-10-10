#include "hash_tables.h"

/**
 * key_index - The function that gives you the index of a key.
 * @key: The key
 * @size: The size of the array of hash table
 * Return: The index where the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
