#include "main.h"

/**
 * _strlen - function to return length of a string
 *
 * @s: The character containing the string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i;
	int length_of_string = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length_of_string++;
	}
	return (length_of_string);
}
