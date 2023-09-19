#include <stdio.h>

/**
 * *_strcpy - copies string from source
 * @dest: destination array
 * @src: source array
 * Return: array with copied content
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			return (dest);
		}

		i++;
	}
	return (dest);
}
