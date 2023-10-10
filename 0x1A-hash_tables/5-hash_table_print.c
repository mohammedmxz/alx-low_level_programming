#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints the hash table.
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int array_counter = 0;
	hash_node_t *temp;
	int print_comma = 0;

	if (ht == NULL)
		return;

	putchar('{');
	while (array_counter < ht->size)
	{
		for (temp = ht->array[array_counter]; temp != NULL; temp = temp->next)
		{
			if (print_comma)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			print_comma = 1;
		}
		array_counter++;
	}
	printf("}\n");
}
