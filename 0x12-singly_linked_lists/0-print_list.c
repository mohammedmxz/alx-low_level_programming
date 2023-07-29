#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0; // Initialize node_count to 0

    while (h != NULL) // Loop through the linked list until the end
    {
        // If str is NULL, print [0] (nil)
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next; // Move to the next node
        node_count++; // Increment the node_count
    }

    return (node_count); // Return the total number of nodes
}

