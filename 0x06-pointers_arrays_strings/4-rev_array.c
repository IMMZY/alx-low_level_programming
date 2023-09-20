#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 *
 * @a: array.
 * @n: number of elements of the array.
 *
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int m;
	int p;
	for (m = 0; m < n / 2; m++)
	{
		p = a[m];
		a[m] = a[n - 1 - m];
		a[n - 1 - m] = p;
	}
}
