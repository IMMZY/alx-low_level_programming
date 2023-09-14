#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: Alway 0 (Success)
 */

int main(void)
{
	long int num, pf;

	num = 612852475143;
	for (pf = 2; pf <= num; pf++)
	{
		if (num % pf == 0)
		{
			num /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
