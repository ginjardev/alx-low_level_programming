#include "main.h"
#include <stdlib.h>



/**
 * _strlen -  Calculate length of string
 *
 * @str: String pointer
 *
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}


/**
 * string_nconcat - Concat two strings
 * @s1: First string parameter
 * @s2: Secend string parameter
 * @n: Number of characters to concat
 * Return: Pointer, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	n = n > len2 ? len2 : n;

	str = malloc(sizeof(*str) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];
	str[len1 + n] = '\0';

	return (str);
}
