#include "lists.h"
/**
 * print_listint - print elements in list
 * @h: pointer to head of linked list
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;

		num++;
	}
	return (num);
}
