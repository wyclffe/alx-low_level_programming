#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index of a linked list
 * @head: pointer to pointer to the first node
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;

		*head = (*head)->next;

		free(curr);
		return (1);
	}

	prev = NULL;

	curr = *head;

	for (i = 0; i < index && curr != NULL; i++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);

	prev->next = curr->next;

	free(curr);

	return (1);
}
