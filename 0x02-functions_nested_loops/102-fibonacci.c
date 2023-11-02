#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	fibonacci_50();
	return (0);
}

/**
 * fibonacci_50 - prints first 50 Fibonaci
 * Return: void
 */
void fibonacci_50(void)
{
	int counter;
	long first = 0, second = 1, next;

	next = first + second;

	for (counter = 0; counter < 49; counter++)
	{
		printf("%ld, ", next);
		first = second;
		second = next;
		next = first + second;
	}

	printf("%ld\n", next);
}
