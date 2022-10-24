#include "lists.h"


/**
 * print_listint - prints out all numbers inside a linked list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
size_t count;

if (h == NULL)
return(0);

for (count = 0; h != NULL; count++, h = h->next)
printf("%d\n", h->n);

return (count);

}
