#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: given array
 * @n: number of array items
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int count = 0;

	for (i = n; i >= 0; i--)
	{
		a[count] = a[i];
		count++;
	}
}
