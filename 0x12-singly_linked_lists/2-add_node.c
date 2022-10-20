#include "lists.h"


/**
 * add_node - adds a new node to the linked list
 * @head: double pointer to a linked list
 * @str: string to set the nodes str to
 * Return: linked list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;

ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);

ptr->str = strdup(str);
ptr->len = strlen(str);
ptr->next = *head;

*head = ptr;

return (*head);

}
