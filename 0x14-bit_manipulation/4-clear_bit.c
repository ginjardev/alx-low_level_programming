#include "main.h"

/**
 * clear_bit - sets bit value to 0
 * @n: number parameter
 * @index: index to clear bit
 * Return: 1 or -1
 */
int int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
