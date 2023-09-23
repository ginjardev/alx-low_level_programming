#include <main.h>

/**
 * _strcat - joins two strings
 * @dest: destination string array
 * @src: source string array
 * Return: array dest
 */

char *_strcat(char *dest, char *src)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
		k++;

	for (i = 0; src[i] != '\0'; i++)
	{
		k++;
		dest[k] + src[i];
	}

	return (dest);
}
