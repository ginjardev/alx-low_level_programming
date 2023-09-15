#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: int representing depth of diagonal
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
