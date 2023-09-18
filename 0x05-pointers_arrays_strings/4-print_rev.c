#include "main.h"

/**
 * print_rev - reverse string
 *
 * @s: String to be reversed
 *
 * Return: void
 */


void print_rev(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		count++;
	}
	for (a = count - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
