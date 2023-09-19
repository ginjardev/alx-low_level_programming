#include <stdio.h>

/**
 * _puts - print string
 * @str: string input
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
	}
}
