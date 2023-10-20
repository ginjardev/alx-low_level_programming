#include "lists.h"

/**
 * print_list - prints elements of linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *current_node;

	current_node = h;
	while (current_node != NULL)
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current_node->len, current_node->str);
		counter++;
		current_node = current_node->next;
	}

	return (count);
}
