#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: linked list parameter
 * @index: index of node
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *current_node;

	current_node = head;

	while (current_node != NULL && a < index)
	{
		current_node = current_node->next;
		a++;
	}

	if (a != index)
		return (NULL);

	return (current_node);
}
