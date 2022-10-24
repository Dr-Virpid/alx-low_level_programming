#include "lists.h"


/**
 * pop_listint - deletes the head node of the linked list
 * and return its value
 * @head: double pointer to the head node
 * Return: value in the head node
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
return (0);

temp = *head;
*head = temp->next;
n = temp->n;
free(temp);

return (n);

}
