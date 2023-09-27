#include "lists.h"

/**
* reverse_listint - Reverses a linked list in place.
* @head: Pointer to the first node of the list.
*
* Return: Pointer to the new head of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next = NULL;

while (current)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
return (*head);
}
