#include <stdio.h>

/**
* main - print alphabets in lowercase
* Return: zero is returned
*/

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
