#include "main.h"

/**
* print_last_digit - returns value of last digit
* @n: digit parameter
* Return: last digit of number returned
*/

int print_last_digit(int n)
{

	n = n % 10;

	if (n < 0)
	{
		n = (-1 * n);

	}
	_putchar(n + '0');
	return (n);
}
