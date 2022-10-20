#ifndef _LUST_H_
#define _LUST_H_

#include <stdlib.h>


/**
 * struct linked_list - linked list
 * @str: pointer to string
 * @len: length of string
 * @next: pointer to next node in the linked list
 */
typedef struct linked_list
{
	char *str;
	unsigned int len;
	struct linked_list *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* _LUST_H_ */
