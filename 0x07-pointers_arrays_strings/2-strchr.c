#include "main.h"

/**
 * _strchar - finds character in a string
 * @s: pointer parameter
 * @c: char parameter
 * Return: pointer returned
 */

char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ( s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (NULL)
		}
	}
}
