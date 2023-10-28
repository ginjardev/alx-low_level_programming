#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i = 1;

	return (i & 1);
}
