#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a linked list
* @head: Double pointer to the list_t list
* @str: String to be added as the content of the new node
* Return: Address of the new element (new node), or NULL on failure
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = NULL;

if (!head || !str)
return (NULL);

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (!(new_node->str))
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
