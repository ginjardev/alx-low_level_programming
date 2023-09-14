#include "main.h"

/**
* _abs - return absolute numbers
* @n: number to be converted to absolute
* Return: absolute number
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
