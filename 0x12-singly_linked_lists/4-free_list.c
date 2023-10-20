#include "lists.h"

/**
 * free_list - free single node
 * @head: pointer to first node of linked list
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
