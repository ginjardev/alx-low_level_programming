#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints reverse string
 * @s: string input parameter
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length; i > 0; i--)
	{
		printf("%c", s[length]);
	}
	putchar('\n');
}
