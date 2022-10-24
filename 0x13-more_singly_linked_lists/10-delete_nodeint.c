#include "lists.h"


/**
 * delete_nodeint_at_index - delete a node at a particular index
 * @head: double pointer to head of the list
 * @index: index at which the node is located
 * Return: 1 if successful or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr, *temp;
unsigned int i;

if (*head == NULL)
return (-1);

ptr = *head;

for (i = 0; ptr != NULL && i < index - 1; i++)
ptr = ptr->next;

if (!(ptr) || (ptr->next == NULL && index != 0)
return (-1);

if (index == 0 && ptr->next == NULL)
free(ptr);
else
{
temp = ptr->next;
ptr->next = temp->next;
free(temp);
}

return (1);
}
