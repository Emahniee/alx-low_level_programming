#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Head of the list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
struct const list_t* current = h;
int count = 0;

while (current != NULL)
{
	count++;
	current = current -> next;
}

return (count);
}
