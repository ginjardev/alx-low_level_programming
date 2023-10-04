#include <stdlib.h>

/**
 * _strdup - pointer to new mem allocation
 * @str: string parameter
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	i = j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		j++;
	}

	s = (char *)malloc((j + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
