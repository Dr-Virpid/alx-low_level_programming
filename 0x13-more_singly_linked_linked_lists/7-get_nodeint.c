#include "lists.h"


/**
 * get_nodeint_at_index - finds the index + 1 member
 * of the linked list
 * @head: first node of the linked list
 * @index: position of the node to find assuming first
 * node is node 0
 *
 * Return: address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr;

for (ptr = head; ptr != NULL && index; ptr = ptr->next, index--)
;

return (ptr);
}
