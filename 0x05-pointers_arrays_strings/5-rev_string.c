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
	int k = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		c = s[j];
		s[k] = c;
		k++;
	}
}
