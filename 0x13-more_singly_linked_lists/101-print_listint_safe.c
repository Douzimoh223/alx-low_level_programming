#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *tmp, *prev = NULL;
if (head == NULL)
return (0);
while (head != NULL)
{
count++;
tmp = head;
printf("[%p] %d\n", (void *)tmp, tmp->n);
head = head->next;
if (tmp < prev)
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
prev = tmp;
}
if (head != NULL && tmp < head)
count--;
return (count);
}
