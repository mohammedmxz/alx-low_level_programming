#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototypes */

/* Prints all the elements in a list_t list */
size_t print_list(const list_t *h);

/* Returns the number of elements in a list_t list */
size_t list_len(const list_t *h);

/* Adds a new node at the beginning of a list_t list */
list_t *add_node(list_t **head, const char *str);

/* Adds a new node at the end of a list_t list */
list_t *add_node_end(list_t **head, const char *str);

/* Frees a list_t list */
void free_list(list_t *head);

#endif /* _LISTS_ */

