#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a  list.
 * @head: A pointer to a pointer to the head of the  list.
 * @n: The int to store in the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise- a pointer to the new head of list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	new_n->next = *head;

	*head = new_n;

	return (*head);
}

