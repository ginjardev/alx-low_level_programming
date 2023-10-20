#include "lists.h"

/**
 * add_node_end - add new node to last node
 * @head: list_t object
 * @str: str parameter
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *next;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strnlen(str);
	new->next = NULL;

	next = *head;

	if (next == NULL)
	{
		*head = new;
		return (new);
	}

	while (next->next != NULL)
		next = next->next;

	next->next = new;
	return (new);
}
