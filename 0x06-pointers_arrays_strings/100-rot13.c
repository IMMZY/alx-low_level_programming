#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int m, n;
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; alphabet[n] != '\0'; n++)
		{
			if (s[m] == alphabet[n])
			{
				s[m] = rot13[n];
				break;
			}
		}
	}
	return (s);
}
