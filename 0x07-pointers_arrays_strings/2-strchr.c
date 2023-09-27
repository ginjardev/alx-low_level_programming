#include "main.h"
#include <stddef.h>

/**
 * _strchar - finds character in a string
 * @s: pointer parameter
 * @c: char parameter
 * Return: pointer returned
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == '\0' && c == '\0')
		return (s);
	return (NULL);
}
