#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 *
 * @h: Pointer to the head of the first node
 *
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[%u] %s\n", 0, "(nil)");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next;
        node_count++;
    }

    return (node_count);
}
