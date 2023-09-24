#include "main.h"

/**
 * _strncpy - concat two strings
 * @dest: destination string array
 * @src: source string array
 * @n: n string bytes
 * Return: destination string array
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return(dest);
}
