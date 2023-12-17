#include "lists.h"

/**
 * free_dlistint - frees linked list nodes
 * @head: linked list head
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next, *move = head;

	while (move)
	{
		next = move->next;
		free(move);
		move = next;
	}
}
