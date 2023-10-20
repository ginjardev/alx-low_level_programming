/**
* _strlen - returns length of a string
* @s: string parameter
* Return: lenth of string
*/
int _strlen(const char *s)
{
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - add a new node at the beginning of a linked list
 * @head: address of beginning of string
 * @str: string to add to new node
 * Return: number of nodes in linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = s;
	new_node->len = _strlen(s);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
