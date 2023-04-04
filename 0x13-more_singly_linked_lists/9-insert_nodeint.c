#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: variable input
 * @idx: variable input
 * @n: variable input
 *
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

	i = 0;
	current = *head;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (i == idx - 1 && current != NULL)
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = current->next;

		current->next = new;

		return (new);
	}
	else
	return (NULL);
}
