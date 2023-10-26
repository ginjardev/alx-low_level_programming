#include "lists.h"

/**
 * free_listint_safe - free linked list
 * @h: linked list
 * Return: size of freed node
 */

size_t free_listint_safe(listint_t **h)
{
	size_t number = 0, a, b;
	listint_t *visited[1024];
	listint_t *current_node = *h;

	while (current_node != NULL && number < 1024)
	{
		for (a = 0; a < number; a++)
		{
			if (current_node == visited[a])
			{
				for (b = a; b < number; b++)
					visited[b]->next = NULL;

				*h = NULL;
				return (number);
			}
		}

		visited[number++] = current_node;
		current_node = current_node->next;
		free(visited[number - 1]);
	}

	*h = NULL;

	return (number);
}
