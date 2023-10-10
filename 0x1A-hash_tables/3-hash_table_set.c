#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - The function that adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node, *temp;
	unsigned long int index;
	char *new_value, *new_key;

	if (ht == NULL || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)(key), ht->size);
	if (ht->array[index] != NULL)
	{
		for (temp = ht->array[index]; temp != NULL; temp = temp->next)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
		}
	}
	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		return (0);
	new_key = strdup(key);
	new_value = strdup(value);
	new_hash_node->key = new_key;
	new_hash_node->value = new_value;
	if (ht->array[index] == NULL)
	{
		new_hash_node->next = NULL;
		ht->array[index] = new_hash_node;
	}
	else
	{
		new_hash_node->next = ht->array[index];
		ht->array[index] = new_hash_node;
	}

	return (1);
}
