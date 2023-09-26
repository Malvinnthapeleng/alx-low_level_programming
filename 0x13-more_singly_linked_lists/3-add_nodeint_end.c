#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a linked list.
* @head: Pointer to a pointer to the first element in the list.
* @n: Data to insert in the new element.
*
* Return: Pointer to the new node, or NULL if it fails.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL); /* Memory allocation failed */

/* Initialize the new node's data and next pointer */
new_node->n = n;
new_node->next = NULL;

/* If the list is empty, set the new node as the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse the list to find the last node */
temp = *head;
while (temp->next)
temp = temp->next;

/* Attach the new node to the last node's next pointer */
temp->next = new_node;

return (new_node);
}
