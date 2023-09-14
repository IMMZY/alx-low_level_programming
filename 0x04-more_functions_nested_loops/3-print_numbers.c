#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */

void print_numbers(void)
{
	char charac;

	for (charac = '0'; charac <= '9'; charac++)
	{
		_putchar(charac + '0');
	}
	_putchar('\n');
}
