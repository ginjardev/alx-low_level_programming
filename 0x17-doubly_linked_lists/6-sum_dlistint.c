#include "lists.h"

/**
 * sum_dlistint - sums values of linked list
 * @head: head of linked list
 *
 * Return: (int) sum of linked list values
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *move = head;
	int sum = 0;

	while (move)
	{
		sum = sum + move->n;
		move = move->next;
	}

	return (sum);
}
