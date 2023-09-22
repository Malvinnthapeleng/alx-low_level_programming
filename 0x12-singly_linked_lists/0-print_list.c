#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a linked list.
* @h: Pointer to the list_t list to print.
* Return: The number of nodes printed.
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");

h = h->next;
count++;
}

return (count);
}
