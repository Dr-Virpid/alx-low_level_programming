#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a particular index
 * @head: double pointer to head of the linked list
 * @idx: position in linked list to initialize the new node
 * @n: value to initialize the new node with
 * Return: return the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr, *nnode;
unsigned int i;

nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
return (NULL);
nnode->n = n;

ptr = *head;
for (i = 0; ptr != NULL && i < idx - 1; i++, ptr = ptr->next)
;

if (ptr == NULL && idx != 0)
return (NULL);

if (idx == 0)
{
nnode->next = ptr;
*head = nnode;
}
else
{
nnode->next = ptr->next;
ptr->next = nnode;
}

return (nnode);

}
