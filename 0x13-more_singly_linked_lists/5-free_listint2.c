#include "lists.h"


/**
 * free_listint2 - frees all nodes in a linked list
 * and set the value of *head to NULL
 * @head: double pointer to head of linked list
 */
void free_listint2(listint_t **head)
{
listint_t *ptr, temp;

temp = head;
while (*head != NULL)
{
ptr = *head->next;
free(head);
*head = ptr;
}

*temp = NULL;

}