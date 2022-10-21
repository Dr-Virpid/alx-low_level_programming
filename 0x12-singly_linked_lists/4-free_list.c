#include "lists.h"

/**
 * free_list - frees all allocated memory of a linked list
 * @head: pointer to first node in the list
 */
void free_list(list_t *head)
{
list_t *temp;

for (; head != NULL; head = temp)
{
temp = head->next;
free(head->str);
free(head);
}

}
