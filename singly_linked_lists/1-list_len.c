#include <stddef.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
size_t len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
