#include "main.h"

/**
 * factorial - factorials of numbers
 * @n: number parameter
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
