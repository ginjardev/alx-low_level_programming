#include "lists.h"

/**
 * listint_len - prints number of nodes in linked list
 * @h: linked list parameter
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		++a;
	}

	return (a);
}

