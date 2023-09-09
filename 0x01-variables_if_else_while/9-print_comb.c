#include <stdio.h>

/**
* main - print comma seperated numbers
* Return: zero is returned
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
