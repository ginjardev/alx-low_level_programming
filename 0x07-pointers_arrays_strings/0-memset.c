#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed to by s with the constant byte b
 * @s: given array parameter
 * @n: n bytes of memory
 * @b: constant byte b
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
