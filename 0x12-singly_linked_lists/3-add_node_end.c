#include "lists.h"


/**
 * add_node_end - add a new node to the end of the linked list
 * @head double pointer to the first node in the list
 * @str: string to add to the new node
 * Return: pointer to the first node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n_node, *temp;

n_node = malloc(sizeof(list_t));
if (n_node == NULL)
return (NULL);

n_node->str = strdup(str);
n_node->len = strlen(str);
n_node->next = NULL;

for (temp = *head; temp->next != NULL; temp = temp->next)
;
temp->next = n_node;

return (*head);
}
