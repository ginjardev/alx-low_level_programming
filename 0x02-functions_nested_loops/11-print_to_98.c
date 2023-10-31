#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers up to 98
 * @n: number parameter
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n = n + 1;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d,", n);
			n = n - 1;
		}
	}

	printf("%d\n", n);

}
