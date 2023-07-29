#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to the head of the first node
 *
 * Return: Number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0; // Initialize the node_count to 0

    /* If the list is empty, return 0 nodes */
    if (h == NULL)
        return (0);

    while (h != NULL)
    {
        /* If str is NULL, print len as 0 and str as "(nil)" */
        if (h->str == NULL)
            printf("[%d] %s\n", 0, "(nil)");
        else
            printf("[%d] %s\n", h->len, h->str);

        h = h->next; // Move to the next node
        node_count++; // Increment the node_count for each node traversed
    }

    return (node_count); // Return the total number of nodes in the linked list
}

