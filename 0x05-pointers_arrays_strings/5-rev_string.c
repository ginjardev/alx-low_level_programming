#include <stdio.h>

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char c[1000];

	while (s[i] != '\0')
	{
		i++;
	}

	for (; i > 0; i--)
	{
		c[j] = s[i - 1];
		j++;
	}

	while (i < j)
	{
		s[i] = c[i];
		i++;
	}
}
