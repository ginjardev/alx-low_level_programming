#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i / 2;

	if (i % 2 == 1)
	{
		j++;
	}

	whilw (j < i)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
