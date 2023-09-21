#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @c: String of variable pointer
 * Return: String that is encoded
 */

char *leet(char *s)
{
	int m, n;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for  (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (s[m] == a[n])
				s[m] = b[n];
		}
	}
	return (s);
}
