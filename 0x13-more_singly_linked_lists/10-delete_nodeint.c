#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: linked list parameter
 * @index: index to delete node
 * Return: 1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *swap;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && a < index - 1)
	{
		current_node = current_node->next;
		a++;
	}

	if (a != index - 1)
		return (-1);

	swap = current_node->next;
	current_node->next = current_node->next->next;
	free(swap);

	return (1);
}
