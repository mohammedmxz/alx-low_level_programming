#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>


/**
* struct listint_s - This is a singly linked list node structure
* @n: The integer data stored in the node
* @next: A pointer to the next node in the linked list
*
* Description: This structure is used for singly linked lists in the ALX project
*
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
