#include "lists.h"
/**
 * sum_listint - sum all data in list
 * @head: pointer to head of linkedlist
 * Return: sum of integers in linkedlist
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;

		head = head->next;
	}
	return (sum);
}
