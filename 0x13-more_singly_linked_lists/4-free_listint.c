#include "lists.h"


/**
 * free_listint - frees all elements in the linked list
 * @head: pointer to head of the linked list
 */
void free_listint(listint_t *head)
{
listint_t *ptr;

while (head != NULL)
{
ptr = head->next;
free(head);
head = ptr;
}

}
