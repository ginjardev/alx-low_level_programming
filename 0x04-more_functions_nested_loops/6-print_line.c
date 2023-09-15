#include "main.h"

/**
 * print_line - prints lines based on number
 * @n: number of lines to sprints
 * Return: 0
 */

void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
