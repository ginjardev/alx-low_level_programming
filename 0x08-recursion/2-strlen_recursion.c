#include "main.h"

/**
 * _strlen_recursion - finds length of string
 * @s: string pointer parameter
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (i);

	_strlen_recursion(s);
	s++;
	i++;

}
