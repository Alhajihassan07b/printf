#include "main.h"
/**
 * print_binary - Prints an unsigned number
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of char printed.
 */
int print_binary(va_list types, char buffer[], int flags,
		int width, int precision, int size)
{
	unsigned int a, b, i, sum;
	unsigned int c[32];
	int count;

	NOT_USED(buffer);
	NOT_USED(flags);
	NOT_USED(width);
	NOT_USED(precision);
	NOT_USED(size);

	b = va_arg(types, unsigned int);
	a = 2147483648;
	c[0] = b / a;
	for (i = 1; i < 32; i++)
	{
		a /= 2;
		c[i] = (b >> (31 - i)) & 1;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += c[i];
		if (sum || i == 31)
		{
			char z = '0' + c[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
