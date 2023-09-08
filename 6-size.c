#include <stdio.h>
/**
 *  main - print size of types
 *
 *  Return: zero from entry point
 */

int main(void)
{
	char chr;
	int itr;
	long lng;
	long long llng;
	float flt;

	printf("Size of a char: %c byte(s)\n", sizeof(chr));
	printf("Size of an int: %d byte(s)\n", sizeof(itr));
	printf("Size of a long int: %d byte(s)\n", sizeof(lng));
	printf("Size of a long long int: %d byte(s)\n", sizeof(llng));
	printf("Size of a float: %d byte(s)\n", sizeof(flt));

	return (0);
}
