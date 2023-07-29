#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the singly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
    size_t nelem; // Variable to store the number of elements
    nelem = 0; // Initialize the number of elements to 0

    // Traverse the list and print each element
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[%d] %s\n", 0, "(nil)"); // Print the element as (nil) if it's NULL
        else
            printf("[%d] %s\n", h->len, h->str); // Print the element's length and value

        h = h->next; // Move to the next element
        nelem++; // Increment the number of elements
    }

    return (nelem); // Return the total number of elements in the list
}

