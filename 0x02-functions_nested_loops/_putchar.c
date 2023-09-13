#include <unistd.h>
#include "main.h"

/**
* _pchar - implement char printing
* Return: write output to stdout
*/

int _pchar(char ch)
{
	return (write(1, &ch, 1));
}
