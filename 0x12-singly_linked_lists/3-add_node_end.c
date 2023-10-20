#include "lists.h"

/**
 * _strlen - find length of a string
 * @str: String passed to the function
 * Return: length of string
 */
int _strlen(char *str)
{
	int length;

	for (length = 0; str[length]; length++)
		;

	return (length);
}

/**
 * add_node_end - add new node to last node
 * @head: list_t object
 * @str: str parameter
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	char *string;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = string;
	new_node->len = _strlen(string);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}


