#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: sep. parameter
 * @n: number of arguments parameter
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", args == NULL ? "(nil)" : args);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
