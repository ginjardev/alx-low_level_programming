#include <stdio.h>

/**
 * puts - prints every other number
 * @str: string of numbers
 * Return: void
 */

void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			c = str[i];
			putchar(c);
		}

	}
	putchar('\n');
}
