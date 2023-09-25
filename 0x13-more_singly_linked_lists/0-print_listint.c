#include "lists.h"

/**
* print_listint - Prints all the elements of a linked list
* @h: Pointer to the linked list of type listint_t
*
* Return: Number of nodes (elements) in the list
*/
size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
num_nodes++;
}

return (num_nodes);
}
