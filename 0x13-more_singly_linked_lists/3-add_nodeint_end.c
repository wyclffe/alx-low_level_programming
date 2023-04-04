#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: A pointer to a pointer to the head of the listint_t list
 * @n: The integer to store in the new node
 * Return: If the function fails - NULL
 *         Otherwise - a pointer to the new node at the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *prev_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	*head = new_node;
	else
	{
		prev_node = *head;
		while (prev_node->next != NULL)
			prev_node = prev_node->next;
		prev_node->next = new_node;
	}
	return (new_node);
}

