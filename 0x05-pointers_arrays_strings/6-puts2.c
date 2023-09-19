#include <stdio.h>

/**
 * puts - prints every other number
 * @s: string of numbers
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", i);
		}

	}
	putchar('\n');
}
