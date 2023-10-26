#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: linked list parameter
 * @idx: index of linked list node to insert
 * @n: int value
 * Return: new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int index = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node != NULL && index < idx - 1)
	{
		current_node = current_node->next;
		index++;
	}

	if (index != idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);

}
