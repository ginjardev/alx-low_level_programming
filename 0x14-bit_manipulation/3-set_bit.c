#include "lists.h"

/**
 * set_bit - sets bit to 1 at index
 * @n: pointer to number
 * @index: index to set bit
 * Return: 1 on success -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
