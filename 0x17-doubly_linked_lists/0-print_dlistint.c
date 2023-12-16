#include "lists.h"

/**
 * print_dlistint - prints all elements in dll
 * @h: doubly linked list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_number = 0;

	const dlistint_t *move = h;

	while (move->next != NULL)
	{
		printf("%d\n", move->n);
		move = move->next;
		nodes_number++;
	}
	printf("%d\n", move->n);
	nodes_number++;

	return (nodes_number);
}
