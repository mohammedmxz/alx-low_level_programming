#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: The head node
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		free(head);
		return;
	}

	free_dlistint(head->next);
	free(head);
}
