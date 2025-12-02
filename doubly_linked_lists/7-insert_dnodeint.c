#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: index where the new node should be added (starts at 0)
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *current;
unsigned int i;
if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
current = *h;
for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;
if (current == NULL)
return (NULL);
if (current->next == NULL)
return (add_dnodeint_end(h, n));
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = current->next;
new->prev = current;
current->next->prev = new;
current->next = new;
return (new);
}

