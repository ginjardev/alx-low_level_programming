#include "main.h"

/**
 * strcmp - compares two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: integer result
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		result = _putchar(s1[i]) - _putchar(s2[i]);
		return result;
	}
}
