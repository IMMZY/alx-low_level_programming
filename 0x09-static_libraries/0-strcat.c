#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;
	int a;

	for (a = 0; dest[a] != '\0'; a++)
	{
		dest_length++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		src_length++;
	}
	for (a = 0; a <= src_length; a++)
	{
		dest[dest_length + a] = src[a];
	}
	return (dest);
}
