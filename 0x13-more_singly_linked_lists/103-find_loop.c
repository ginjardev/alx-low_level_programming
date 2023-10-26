#include "lists.h"

/**
 * find_listint_loop - finds node where loop starts
 * @head: linked list parameter
 * Return: address of node loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			break;
		}
	}
	if (!slow || !fast || !fast->next)
		return (NULL);
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (fast);
}
