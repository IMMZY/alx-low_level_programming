#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separators betwwen strings
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		char *z = va_arg(arg, char *);

		if (z == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", z);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
