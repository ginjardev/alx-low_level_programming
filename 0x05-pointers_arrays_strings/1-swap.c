#include <stdio.h>

/**
 * swap_int - swap values of integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *n;

	*n = &a;
	*a = &b;
	*b = &n;
}
