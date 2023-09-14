#include "main.h"

/**
* print_last_digit - returns value of last digit
* @n: digit parameter
* Return: last digit of number returned
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * n) % 10;
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		return (last_digit);
	}
}
