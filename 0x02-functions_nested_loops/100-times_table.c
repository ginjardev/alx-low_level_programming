#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table
 * @n: times table up to n
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (j == 0)
					printf("%d", product);
				else if (product < 10)
					printf(",   %d", product);
				else if (product < 100)
					printf(",  %d", product);
				else if (product < 1000)
					printf(", %d", product);
			}

			putchar('\n');
		}
	}
}
