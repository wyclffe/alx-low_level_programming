#include "lists.h"
/**
 *reverse_listint - reverse a linked list
 *@head: pointe to pointer to linkedlist
 *
 *Return: pointer to reversed linkedlist
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;

	listint_t *current = *head;

	while (*head != NULL && (*head)->next != NULL)
	{
		temp = (*head)->next;

	(*head)->next = (*head)->next->next;

	temp->next = current;

	current = temp;
	}

	*head = current;

	return (*head);

}
