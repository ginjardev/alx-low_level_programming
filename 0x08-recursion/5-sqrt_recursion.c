#include "main.h"

/**
 * _sqrt_recursion - finds squareroot of numbers
 * @n: square parameter
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}


/**
 * find_sqrt - confirm square
 * @n: n parameter
 * @i: i parameter
 * Return: squareroot or -1
 */

int find_sqrt(int n, int i);

int find_sqrt(int n, int i)
{
	if (n == i * i)
		return (i);
	if (n < i * i)
		return (-1);
	return (find_sqrt(n, i + 1));
}
