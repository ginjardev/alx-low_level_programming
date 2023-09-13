#include <unistd.h>
#include "main.h"

/**
* _putchar - implement char printing
* Return: write output to stdout
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
