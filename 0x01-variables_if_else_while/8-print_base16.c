#include <stdio.h>

/**
* main - prints hexadecimal numbers
* Return: zero returned
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		if (i == 9)
		{
			for (j = 0; j < 6; j++)
			{
				putchar(97 + j);
			}
		}
	}
	putchar('\n');
}
