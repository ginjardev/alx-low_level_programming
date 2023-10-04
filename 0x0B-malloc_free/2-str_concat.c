#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: NULL or pinter
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *arr;

	j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;
	for (i = 0; s2[i]; i++)
		k++;

	arr = malloc(sizeof(char) * (j + k + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		arr[i] = s1[i];

	for (i = 0; s2[i]; i++)
		str[j + i] = s2[i];

	arr[j + k] = '\0';

	return (arr);
}
