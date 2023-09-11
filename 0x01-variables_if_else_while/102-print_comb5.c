#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int m;
	int n;

	for (m = 0; m < 100; m++)
	{
		for (n = 0; n < 100; n++)
		{
			if (n > m)
			{
				putchar(m / 10 + '0');
				putchar(m % 10 + '0');
				putchar(' ');
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');

				if (m * 100 + n != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
