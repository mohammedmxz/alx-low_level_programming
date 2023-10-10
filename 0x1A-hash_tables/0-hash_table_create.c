#include "hash_tables.h"

/**
 * hash_table_create - Function that creates hash table.
 * @size: Size of the hash table
 * Return: The created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **array;

	if (size == 0)
		return (NULL);

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = array;

	return (new_hash_table);
}
