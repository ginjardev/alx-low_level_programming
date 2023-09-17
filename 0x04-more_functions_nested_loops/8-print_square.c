#include "main.h"

/**
 * print_square - function prints square shape
 * @n: integer for square size
 * Return: 0
 */

void print_square(int n)
{
	int i, j;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}

}
