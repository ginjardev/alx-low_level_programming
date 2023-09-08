#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabets
 * Return: zero is returned
 */

int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
