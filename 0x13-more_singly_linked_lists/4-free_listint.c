#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: linked list parameter
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
