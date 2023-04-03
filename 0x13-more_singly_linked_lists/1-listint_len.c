#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *  @h:pointer number linked listint_t list.
 i* Return: number of elements in h
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;
while (h)
{n++;
h = h->next;
} 
return (n);
}
