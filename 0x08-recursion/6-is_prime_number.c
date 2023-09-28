#include "main.h"

/**
 * prime_check - Checks to see if number is prime
 *
 * @f: Factor check
 *
 * @m: Possible prime number
 *
 * Return: 1 if prime, 0 if not
 *
 */

int prime_check(int f, int m)
{
	if (m < 2 || m % f == 0)
		return (0);
	else if (f > m / 2)
		return (1);
	else
		return (prime_check(f + 1, m));
}

/**
 * is_prime_number - States if number is prime
 *
 * @n: Number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
