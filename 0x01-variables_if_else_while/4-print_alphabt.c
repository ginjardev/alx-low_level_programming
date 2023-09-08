#include <stdio.h>
/**
* main - prints alphabets except e and q
* Return: zero is returned
*/

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

