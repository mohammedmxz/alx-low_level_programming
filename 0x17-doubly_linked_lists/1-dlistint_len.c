#include "lists.h"

/**
 * dlistint_len - Gets the elements number in a linked dlistint_t list.
 * @h: The head node
 * Return: Number of elements in @h
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (dlistint_len(h->next) + 1);
}
