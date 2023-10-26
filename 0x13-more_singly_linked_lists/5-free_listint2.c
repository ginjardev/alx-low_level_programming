#include "lists.h"

/**
 * free_listint2 - frees a linked list sets head to null
 * @head: linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}
	*head = NULL;
}
