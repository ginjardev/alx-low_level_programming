#include "lists.h"

/**
 * print_listint - prints elements in linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++a;
	}
	return (a);
}
