#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: number parameter
 * @m: number parameter
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a;

	a = 0;
	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
			a++;
		n = n >> 1;
	}

	return (a);
}
