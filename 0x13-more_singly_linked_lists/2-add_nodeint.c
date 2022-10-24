#include "lists.h"


/**
 * add_nodeint - adds a new node to the beginning of a linked list
 * @head: double pointer to the linked list
 * @n: value to initialize in the new node
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;

ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

ptr->n = n;
ptr->next = *head;
*head = ptr;

return (*head);

}
