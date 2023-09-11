#include <stdio.h>

/**
 * main - Print combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dgt_a;
	int dgt_b;

	for (dgt_a = 0; dgt_a <= 9; dgt_a++)
	{
		for (dgt_b = dgt_a + 1; dgt_b <= 9; dgt_b++)
		{
			putchar(dgt_a + '0');
			putchar(dgt_b + '0');
			if (dgt_a < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
