#include "lists.h"
/**
 *free_listint - frees a linked list
 *@head: pointer to the linkedlist
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;

		free(curr);

		curr = next;
	}
}
