#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the list_t linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
    size_t elements_count = 0; /* Initialize the count of elements to 0 */

    while (h != NULL) /* Loop through the linked list until the end */
    {
        elements_count++; /* Increment the count for each element */
        h = h->next; /* Move to the next node */
    }

    return (elements_count); /* Return the total number of elements */
}

