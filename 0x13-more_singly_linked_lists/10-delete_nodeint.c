#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to pointer to the head node of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
node = *head;
for (i = 0; i < index - 1; i++)
{
if (node->next == NULL)
return (-1);
node = node->next;
}
temp = node->next;
if (temp == NULL)
return (-1);
node->next = temp->next;
free(temp);
return (1);
}
