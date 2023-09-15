#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * charac - character
 * Return: numbers 0 to 9.
 */

void print_numbers(void)
{
	char charac;

	for (charac = 48; charac < 58; charac++)
	{
		_putchar(charac);
	}
	_putchar('\n');
}
