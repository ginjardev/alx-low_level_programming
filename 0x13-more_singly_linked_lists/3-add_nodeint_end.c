#include "lists.h"

/**
 * add_nodeint_end - add node to end
 * @head: linked list
 * @n: int parameter
 * Return: new node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new_node, next_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	next_node = *head;

	if (next_node == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (next_node != NULL)
	{
		next_node = next_node->next;
	}

	next_node->next = new_node;

	return (new_node);
}
