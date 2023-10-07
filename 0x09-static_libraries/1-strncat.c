#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int _length = strlen(dest);
	int a;

	for (a = 0; a < n && *src != '\0'; a++)
	{
		dest[_length + a] = *src;
		src++;
	}
	dest[_length + a] = '\0';
	return (dest);
}
