#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
	
while (h != 0)
{
h = h->next;
count++;
}
return (count);
}
