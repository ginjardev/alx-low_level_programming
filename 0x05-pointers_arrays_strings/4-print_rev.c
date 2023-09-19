#include <stdio.h>

/**
 * print_rev - prints reverse string
 * @s: string input parameter
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
