#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints largest prime factor 612852475143
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long number = 612852475143;


	/* incomplete */
	while (i < number)
	{
		if (number % i == 0)
		{
			printf("%d\n", i);
		}
	}

	return (0);
}
