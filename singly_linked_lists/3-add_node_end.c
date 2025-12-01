#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the pointer of the first node
 * @str: string to store in the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current;
unsigned int i;
if (head == NULL || str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
for (i = 0; str[i]; i++)
;
new_node->len = i;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new_node;
return (new_node);
}
