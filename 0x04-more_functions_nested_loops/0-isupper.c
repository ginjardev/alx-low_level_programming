#include "main.h"

/**
 * _isupper - checks for uppercase alphabet
 * @c: character to check if uppercase
 * Return: 1 or 0 returned 
 */

int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
