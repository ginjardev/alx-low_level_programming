#include "lists.h"

/**
 * print_listint_safe - prints linked list
 * @head: linked list parameter
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *visited_node[1024];
	size_t number = 0, a;

	while (head != NULL && number  < 1024)
	{
		for (a = 0; a < number; a++)
		{
			if (head == visited_node[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (number);
			}
		}

		visited[number++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (num);
}
