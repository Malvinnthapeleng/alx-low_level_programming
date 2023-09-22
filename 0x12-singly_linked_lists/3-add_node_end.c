#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a linked list
* @head: Double pointer to the list_t list
* @str: String to store in the new node
* Return: Address of the new element, or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp = *head;
unsigned int len = 0;

/* Calculate the length of the input string */
while (str[len])
len++;

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

/* Allocate memory for the string and copy the input string */
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node); /* Free the new node if string allocation fails */
return (NULL);
}

/* Set the length and next fields of the new node */
new_node->len = len;
new_node->next = NULL;

/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse the list to find the last node */
while (temp->next)
temp = temp->next;

/* Add the new node after the last node */
temp->next = new_node;

return (new_node); /* Return a pointer to the new node */
}

