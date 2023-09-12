#include <stdio.h>

/**
* main - prints diffrent combinations of two digits
* Return: 0
*/

int main(void)
{
	unsigned int counter = 1;

	for (unsigned int i = 0; i < 10; i++)
	{
		for (unsigned int j = 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (counter < 90)
			{
				putchar(44);
				putchar(32);
			}

			counter++;
		}
	}

	putchar('\n');
	return (0);
}
