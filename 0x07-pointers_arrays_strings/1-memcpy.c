#include "main.h"

/**
 * _memcpy - copies memory area,
 *
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 *
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
