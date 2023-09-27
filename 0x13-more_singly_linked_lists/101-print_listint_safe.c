#include "lists.h"
#include <stdio.h>

/**
* looped_listint_len - Counts the number of unique nodes
* in a looped listint_t linked list.
* @head: A pointer to the head of the listint_t to check.
*
* Return: If the list is not looped - 0.
* Otherwise - the number of unique nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *x, *y;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (98);

x = head->next;
y = (head->next)->next;

while (y)
{
if (x == y)
{
x = head;
nodes = 0;
while (x != y)
{
nodes++;
x = x->next;
y = y->next;
}
return (nodes);
}

x = x->next;
y = (y->next)->next;
}

return (0);
}

/**
* print_listint_safe - Prints a listint_t list safely.
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

for (; head != NULL; nodes++, index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
if (index == nodes)
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
}

return (nodes);
}
