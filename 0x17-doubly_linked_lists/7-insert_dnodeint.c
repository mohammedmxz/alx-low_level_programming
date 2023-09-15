#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the head node
 * @idx: The index of the list where the new node to be added
 * @n: The element to be added
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;

			return (new_node);
		}

		i++;
		temp = temp->next;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
