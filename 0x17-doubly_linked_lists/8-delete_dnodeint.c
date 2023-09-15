#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * index of the dlistint_t linked list.
 * @head: A pointer to the head node
 * @index: The index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			if (index == 0)
				*head = temp->next;

			free(temp);

			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
