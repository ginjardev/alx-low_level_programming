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

	while (s[i] != '\0')
	{
		for (j = i; j >= 0; j++)
		{
			s[i] = s[j];
		}
		prinf("%c", s[i]);

		i++;
	}
}
