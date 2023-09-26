#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position in a list.
* @head: Pointer to a pointer to the first node of the list.
* @idx: The index where the new node should be added.
* @n: The integer to store in the new node.
*
* Return: If the function fails - NULL.
*         Otherwise - a pointer to the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
if (!head)
return (NULL);

listint_t *new_node;
listint_t *current;
unsigned int i;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;

for (i = 0; current && i < idx - 1; i++)
current = current->next;

if (!current)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}
