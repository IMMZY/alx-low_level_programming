#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, n;

		for (m = 0; m <= size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
