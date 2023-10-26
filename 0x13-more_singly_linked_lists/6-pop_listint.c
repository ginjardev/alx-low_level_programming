#include "lists.h"

/**
 * pop_listint - deletes head node returns data
 * @head: linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *current_node;

	if (*head == NULL)
		return (0);

	current_node = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(current_node);

	return (data);
}
