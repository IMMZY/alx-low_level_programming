#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: input number as an integer
 *
 * Return: Last digit of n
 */

int print_last_digit(int n)
{
	int last_dgt;

	last_dgt = n % 10;
	if (last_dgt < 0)
	{
		_putchar(-last_dgt + 48);
		return (-last_dgt);
	}
	else
	{
		_putchar(last_dgt + 48);
		return (last_dgt);
	}
}
