#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints Fizz, Buzz, FizzBuzz & integers
 * Return: 0
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%s", "Fizz") ;
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("%s", "FizzBuzz");
		else
			printf("%d", i);
	}

	_putchar('\n');
}
