#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - Singly linked list node
 * @str: Pointer to a dynamically allocated string
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: Singly linked list node structure for Holberton project.
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */

