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
		if (i == 9)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('0' + i);
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
