#include "lists.h"
/**
 *get_nodeint_at_index - get node at index
 *@head: pointer to the linked list
 *@index: index of node
 *Return: pointer to the node at the index of linkedlist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;

	i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;

		i++;
	}
	if (i == index && current != NULL)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
