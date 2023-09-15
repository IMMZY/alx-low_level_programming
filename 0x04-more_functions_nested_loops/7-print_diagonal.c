#include "main.h"

/**
 * print_line - prints the diagonal line n times.
 * @n: times straight line is printed.
 * Return: void
 */

void print_line(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
