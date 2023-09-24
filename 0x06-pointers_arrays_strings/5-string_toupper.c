#include "main.h"

/**
 * *string_toupper - convert string to uppercase
 * @*: string to be converted to uppercase
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
