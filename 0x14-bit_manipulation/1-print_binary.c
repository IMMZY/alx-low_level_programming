#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: parameter
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
        int i, _count = 0;
        unsigned long int previous_value;

        for (i = 63; i >= 0; i--)
        {
                previous_value = n >> i;

                if (previous_value & 1)
                {
                        _putchar('1');
                        _count ++;
                }
                else if (_count)
                        _putchar('0');
        }
        if (!_count)
                _putchar('0');
}
