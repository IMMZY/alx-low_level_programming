#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to print.
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		n *= -1;
		m = n;
		_putchar('-');
	}

	m /= 10;

	if (m != 0)
		print_number(m);

	_putchar((unsigned int) n % 10 + '0');
}
