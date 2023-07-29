#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list node
 * @str: Pointer to a dynamically allocated string
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: A singly linked list node structure for Holberton project.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h);

/**
 * list_len - Calculates the number of elements in a linked list.
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the head of the linked list
 * @str: Pointer to the string to be stored in the new node
 *
 * Return: Pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the head of the linked list
 * @str: Pointer to the string to be stored in the new node
 *
 * Return: Pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees the memory allocated for a linked list.
 * @head: Pointer to the head of the linked list
 */
void free_list(list_t *head);

#endif /* LISTS_H */

