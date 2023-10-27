#include "main.h"

/**
 * powr - calculates power of number
 * @x: number parameter
 * @y: power parameter
 * Return: power of number (x ^ y)
 */
unsigned int powr(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	return (x * powr(x, y - 1));
}

/**
 * binary_to_uint - converstst binary to uint
 * @b: pointer to binary string
 * Return: returned unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int counter, length = 0, number = 0;

	if (b == NULL)
		return (0);
	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}


	for (counter = 0; b[counter]; counter++)
		number += (b[length] - '0') * powr(2, length - counter - 1);

	return (number);
}
