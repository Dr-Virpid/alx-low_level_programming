#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of linked list
 * @n: value of new node
 *
 * Return: address of new element or NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *dnode, *current;

	dnode = malloc(sizeof(dlistint_t));
	if (!dnode)
		return (NULL);

	dnode->n = n;
	dnode->prev = NULL;

	current = *head;
	while (current && current->prev)
		current = current->prev;

	dnode->next = current;
	if (current)
		current->prev = dnode;

	*head = dnode;
	return (dnode);
}
