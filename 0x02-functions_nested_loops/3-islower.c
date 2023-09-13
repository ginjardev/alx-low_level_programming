#include "main.h"

/**
* _islower - checks for lowercase characters
* @c: character to be checked
* Return: an integer 1 or 0 is returned if lowercase or not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
