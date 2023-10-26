#include "lists.h"

/**
 * sum_listint - sums linked list data
 * @head: linked list parameter
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sum = 0;

	if (head == NULL)
		return (0);

	current_node = head;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
