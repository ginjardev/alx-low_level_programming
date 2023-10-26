#include "lists.h"

/**
 * add_nodeint_end - add node to end
 * @head: linked list
 * @n: int parameter
 * Return: new node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *next_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	next_node = *head;
	while (next_node->next != NULL)
		next_node = next_node->next;

	next_node->next = new_node;

	return (new_node);
}
