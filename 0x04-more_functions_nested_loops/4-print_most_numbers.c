#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 excl. 2 & 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
