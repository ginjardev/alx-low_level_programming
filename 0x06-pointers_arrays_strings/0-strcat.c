#include <main.h>

/**
 * _strcat - joins two strings
 * @dest: destination string array
 * @src: source string array
 * Return: array dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[count] = src[j];
		count++;
	}

	return (dest);
}
