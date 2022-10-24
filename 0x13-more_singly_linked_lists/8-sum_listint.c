#include "lists.h"


/**
 * sum_listint - adds all the values in a linked list and return it
 * @head: first node of the linked list
 * Return: sum of all values in the list
 */
int sum_listint(listint_t *head)
{
int sum = 0;

for (; head != NULL; head = head->next)
sum += head->n;

return (sum);

}
