#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Head of the list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int count = 0;

temp = h;
while (temp)
{
count++;
temp = temp->next;
}
return (count);
}
