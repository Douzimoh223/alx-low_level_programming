#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to a pointer to the head node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *tmp, *prev = NULL;
if (h == NULL || *h == NULL)
return (0);
while (*h != NULL)
{
size++;
tmp = *h;
*h = (*h)->next;
if (tmp < prev)
break;
prev = tmp;
free(tmp);
}
*h = NULL;
return (size);
}
