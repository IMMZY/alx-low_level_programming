#include "main.h"

/**
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
 **/

void print_number(int n)
{
unsigned int b;

b = n;

if (n < 0)
{
_putchar('-');
b = -n;
}

if (b / 10 != 0)
{
print_number(b / 10);
}
_putchar((b % 10) + '0');
}
