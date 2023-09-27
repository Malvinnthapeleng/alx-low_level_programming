#include "lists.h"

/**
* free_listint_safe - Frees a linked list of integers safely.
* @h: Pointer to the pointer to the first node of the linked list.
*
* Return: Number of elements freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
listint_t *current, *next;

if (h == NULL || *h == NULL)
return (0);

current = *h;

while (current != NULL)
{
next = current->next;

/* Check for a potential loop */
if (next >= current)
{
free(current);
len++;
current = next;
}
else
{
/* Break the loop */
current->next = NULL;
free(current);
len++;
break;
}
}

*h = NULL; /* Set the input pointer to NULL to avoid dangling references */
return (len);
}
