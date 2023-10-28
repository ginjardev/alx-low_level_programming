#include "main.h"

/**
 * get_bit - finds value of bit at index
 * @n: number parameter
 * @index: index
 * Return: int (index of bit)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n = n >> index;
	n = n & 1;
	return (n);
}
