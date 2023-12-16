#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of linked list
 * @head: linked list head
 * @n: linked list value
 *
 * Return: address of new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *move;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		move = *head;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (move->next != NULL)
	{
		move = move->next;
	}

	new_node->prev = move;
	move->next = new_node;

	return (new_node);
}
