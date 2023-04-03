#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head node of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *node;
unsigned int i;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
node = *head;

for (i = 0; i < idx - 1; i++)
{
if (node == NULL)
{
free(new);
return (NULL);
}
node = node->next;
}
if (node == NULL)
{
free(new);
return (NULL);
}

new->next = node->next;
node->next = new;
return (new);
}
