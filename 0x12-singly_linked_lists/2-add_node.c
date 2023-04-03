#include "lists.h"

/**
*add_node - add node
*@head:pointer to the beggining node
*@str: string to be added
*Return: returns a node
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dup_str;
	int len;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(new_node);

		return (NULL);

	}
	for (len = 0; str[len];)
		len++;

	if (head != NULL)
	{

		new_node->str = dup_str;

		new_node->next = (*head);

		new_node->len = len;

		(*head) = new_node;

	}
	else
		return (NULL);

	return (new_node);
}
