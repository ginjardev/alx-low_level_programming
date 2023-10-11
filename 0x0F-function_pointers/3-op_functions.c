#include "3-calc.h"

/**
 * op_adds - add two integers a and b
 * @a: first int parameter
 * @b: second int parameter
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - difference of a and b
 * @a: first int parameter
 * @b: second int parameter
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - product of a and b
 * @a: first int parameter
 * @b: second int parameter
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a by b
 * @a: first int parameter
 * @b: second int parameter
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division of a by b
 * @a: first int parameter
 * @b: second int parameter
 * Return: modulus of a divided by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
