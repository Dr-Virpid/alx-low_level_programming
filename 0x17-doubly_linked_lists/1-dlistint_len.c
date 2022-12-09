#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: head of linked list
 *
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t len;

	for (len = 0; ptr; ptr = ptr->next, len++)
		;

	return (len);
}
