#include "lists.h"
/**
 * list_len - find the number of elements in linked list
 * @h: pointer to linkedlist
 * Return: returns number of elements
*/


size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
