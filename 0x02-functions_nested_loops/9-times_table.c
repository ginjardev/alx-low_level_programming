#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, div, mod, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (product > 0 && product < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (product > 9)
				_putchar(' ');
			else if (j > 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (product < 10)
			{
				_putchar(product + '0');
			}
			else
			{
				div = product / 10;
				_putchar(div + '0');
				mod = product % 10;
				_putchar(mod + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
