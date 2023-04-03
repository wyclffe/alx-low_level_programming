#include "lists.h"
/**
 *add_node_end - add a node at the end
 *@head: ponter to end of linkedlist
 *@str: string to be added
 *Return: return a new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *stdup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	stdup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = stdup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
