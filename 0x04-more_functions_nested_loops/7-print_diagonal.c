#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: int representing depth of diagonal
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
