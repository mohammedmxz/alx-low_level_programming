#include "lists.h"

/**
 * sum_dlistint - Gets the sum of all data (n) of a dlistint_t linked list.
 * @head: The head node
 * Return: The sum of elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (sum_dlistint(head->next) + head->n);
}
