#include "main.h"
#include <stdio.h>

/**
 * prime_checker - determine if n is a prime
 * @n: test case
 * @i: recurring factors
 * Description: determines if n is a prime using 2 parameters
 * Return: 1 if n is a prime, 0 if not
 **/

int prime_checker(int n, int i)
{
	if (n % i == 0)
		return (0);

	else if (n >= (i + 1) * (i * 1))
		return (prime_checker(n, i + 1));

	return (1);
}

/**
 * is_prime_number - checks for prime numbers
 * @n: int parameter to check if prime
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_checker(n, 2));

}
