#include "main.h"

/**
 * powr - calculates power of number
 * @c: char  parameter
 * @y: power parameter
 * Return: power of number (x ^ y)
 */
unsigned int powr(char c, unsigned int y)
{
	if (c == '0')
		return (0);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (2);
	return (2 * powr(c, y - 1));
}


/**
 * _binary - converts a string binary number into a unsigned int
 * @b: binary string
 * @number: pointer to number where value is stored
 * Return: decimal as unsigned int
 */
unsigned int _binary(const char *b, unsigned int *number)
{
	int index;

	if (b[1] == '\0')
	{
		*number = b[0] - '0';
		return (1);
	}
	index = _binary(b + 1, number);
	*number +=  powr(b[0], index);
	return (index + 1);
}

/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: binary string
 * Return: decimal as unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, i;

	number = 0;

	if (b == NULL || b[0] == '\0')
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	_binary(b, &number);
	return (number);
}
