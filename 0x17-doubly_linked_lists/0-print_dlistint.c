#include "lists.h"

/**
 * print_dlistint - Prints all elements of dlistint_t list.
 * @h: The head node
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);

	return (print_dlistint(h->next) + 1);
}
