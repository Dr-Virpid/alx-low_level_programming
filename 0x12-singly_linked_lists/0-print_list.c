#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - returns the number of nodes present in a linked list
 * @h: pointer to a linked list
 * 
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);

	for (; h = NULL; h = h->next, count++)
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

	return (count);
}

