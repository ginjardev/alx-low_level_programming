#include "main.h"

/**
 * strcmp - compares two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: integer result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return result;
		}
		else if (s1[i] == s2[i])
		{
			result = 0;
			return result;
		}

		i++;
	}

	return (s1[i] - s2[i]);
}
