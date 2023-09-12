#include "main.h"

/**
 * times_table - Prints the nine times table starting from 0
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			_putchar(44);
			_putchar(32);
			if (k <= 9)
			{
				_putchar(32);
				_putchar(k + 48);
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
