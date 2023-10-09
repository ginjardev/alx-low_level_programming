#include "main.h"

/**
 * _pow_recursion - power of numbers
 * @x: number to be raise to power
 * @y: power parameter
 * Return: power of number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (y);

	return (x * _pow_recursion(x, y - 1));
}
