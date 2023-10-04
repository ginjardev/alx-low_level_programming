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

	i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	arr = malloc(sizeof(*s1 + *s2));

	if (arr == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		arr[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		arr[k] = s2[j];
		j++;
		k++;
	}

	return (arr);
	free(arr);
}
