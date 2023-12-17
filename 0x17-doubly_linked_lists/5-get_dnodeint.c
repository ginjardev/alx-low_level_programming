#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: head of linked list
 * @index: index of linked list node
 *
 * Return: node at given index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *move = head;
	unsigned int count = 0;

	while (move)
	{
		if (count == index)
		{
			return (move);
		}
		move = move->next;
		count++;
	}

	return (NULL);
}
