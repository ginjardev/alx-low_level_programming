#include "lists.h"

/**
 * list_len - finds number of elements in linked list
 * @h: pointer to linked list
 * Return: number of linked list elements
 */
size_t list_len(const list_t *h)
{
	const list_t *current_node;
	size_t counter = 0;

	current_node = h;
	while (current_node != NULL)
	{
		counter++;
		current_node = current_node->next;
	}

	return (counter);
}
