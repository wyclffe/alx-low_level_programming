#include "lists.h"
/**
 *reverse_listint - reverse a linked list
 *@head: pointe to pointer to linkedlist
 *
 *Return: pointer to reversed linkedlist
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;

	listint_t *prev = NULL;

	while (current != NULL)
	{

		listint_t *temp = current->next;

		current->next = prev;

		prev = current;

		current = temp;
	}
	*head = prev;

	return (*head);
}
