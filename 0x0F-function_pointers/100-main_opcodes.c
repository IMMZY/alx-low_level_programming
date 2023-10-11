#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function that prints opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (m = 0; m < n; m++)
	{
		printf("%02hhx", *((char *)main + m));

		if (m < n - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
