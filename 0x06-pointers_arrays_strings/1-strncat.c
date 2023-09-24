#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: destination string array
 * @src: source string array
 * @n: n bytes of src string
 * Return: concatenated array
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[count] = src[j];
		count++;
	}
}
