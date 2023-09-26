#include "lists.h"

/**
* free_listint - Frees a linked list of integers.
* @head: Pointer to the first element of the list.
*/
void free_listint(listint_t *head)
{
listint_t *current;

while (head)
{
current = head;
head = head->next;
free(current);
}
}
