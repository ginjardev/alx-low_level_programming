#include "lists.h"

/**
 * print_list - prints elements of linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current_node;
	size_t number;

	current_node = h;
	for (number = 0; current_node != NULL; number++)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current_node->len, current_node->str);
		}
		current_node = current_node->next;
	}

	return (number);
}
