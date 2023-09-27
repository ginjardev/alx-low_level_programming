#include "main.h"

/**
 * _memset - function fills the first n bytes of memory area pointed to by s with the constant byte
 * @s: given array
 * @n: bytes of memory area
 * @b: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for ( i = 0; i < n; i++)
	{
		if (*s != '\0')
		{
			*s = b;
		}
	}
	return (s);
}
