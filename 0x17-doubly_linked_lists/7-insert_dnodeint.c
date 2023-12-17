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

	/*add node at beginning if necessary*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	move = *h;
	while (move && counter < idx - 1)
	{
		move = move->next;
		counter++;
	}

	/*check idx is not bigger than linked list size*/
	if (counter != idx - 1)
		return (NULL);

	/*check if insertation is at list end*/
	if (move->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node != NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = move->next;
	new_node->prev = move->prev;
	move->next->prev = new_node;
	move->next = new_node;

	return (new_node);
}
