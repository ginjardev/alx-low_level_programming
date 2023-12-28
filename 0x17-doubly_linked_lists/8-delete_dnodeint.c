#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: head of linked list
 * @index: given index
 *
 * Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	if (current == *head)
		*head = current->next;

	free(current);

	return (1);
}
