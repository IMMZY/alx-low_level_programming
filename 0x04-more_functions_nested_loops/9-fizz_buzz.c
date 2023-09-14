#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int b;

	b = 1;
	printf("%d", b);
	for (b = 2; b <= 100; b++)
	{
		if ((b % 3 == 0) && (b % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (b % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (b % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", b);
		}
	}
	printf("\n");
	return (0);
}
