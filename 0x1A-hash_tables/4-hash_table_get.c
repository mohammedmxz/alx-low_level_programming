#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: The hash table you want to look into
 * @key: The key you are looking for
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (key == NULL || key[0] == '\0' || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)(key), ht->size);

	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}
	return (NULL);
}
