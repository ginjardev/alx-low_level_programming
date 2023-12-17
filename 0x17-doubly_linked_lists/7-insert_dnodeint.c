#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: linked list head
 * @idx: given index
 * @n: value to insert
 *
 * Return: address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *move, *new_node;
	unsigned int counter = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node != NULL)
		return (NULL);

	new_node->n = n;
	if (*h != NULL)
		move = (*h);

	while (move)
	{
		if (counter == idx)
			break;

		move = move->next;
		counter++;
	}

	new_node->next = move;
	new_node->prev = move->prev;
	move->prev = new_node;

	return (new_node);
}