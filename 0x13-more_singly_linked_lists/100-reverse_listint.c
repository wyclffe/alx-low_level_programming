#include "lists.h"
/**
 *reverse_listint - reverse a linked list
 *@head: pointe to pointer to linkedlist
 *
 *Return: pointer to reversed linkedlist
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL;

	while ((*head) != NULL && (*head)->next != NULL)
	{

		listint_t *temp = (*head)->next;

		(*head)->next = prev;

		prev = (*head);

		(*head) = temp;
	}
	*head = prev;

	return (*head);
}
