#include "lists.h"

/**
 * dlistint_len - returns length of linked list
 * @h: linked list parameter
 *
 * Return: length of linkeed list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *move = h;

	while (move)
	{
		move = move->next;
		counter++;
	}
	return (counter);
}
