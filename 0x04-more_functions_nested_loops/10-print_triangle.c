#include "main.h"

/**
 * print_triangle - prints triangle determined by size
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < (size - 1); j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
