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
	list_t *ptr;

	if (h == NULL)
		return (0);

	for (ptr = &h; ptr->next == NULL; ptr = ptr->next, count++)
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);

	return (count);
}

