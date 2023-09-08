#include <stdio.h>

/**
* main - prints number 0 - 9
* Return: zero returned
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
