#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints string & newline
 * @s: string parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}


