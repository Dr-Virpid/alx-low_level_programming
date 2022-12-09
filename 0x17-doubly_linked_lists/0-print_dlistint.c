#include "lists.h"

/**
 * print_dlistint - prints all element of a double linked list
 * @h: head of linked list
 *
 * Return: number of elements in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count;

	for (count = 0; ptr; count++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
