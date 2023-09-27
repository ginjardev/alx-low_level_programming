#include "main.h"

/**
 * _memset - fills n bytes of memory area with the constant byte b
 * @s: given array parameter
 * @n: n bytes of memory
 * @b: constant byte b
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
