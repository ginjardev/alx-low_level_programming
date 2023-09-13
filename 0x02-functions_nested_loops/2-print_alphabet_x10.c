#include "main.h"

/**
* print_alphabet_x10 - prints 10 rows of the alphabets
* Return: void
*/

void print_alphabet_x10()
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
