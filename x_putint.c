#include "main.h"
/**
 * x_putint - print integer
 * @y: input
 * Return: int
 */
int x_putint(int y)
{
	int x;

	if (y < 0)
	{
		x += x_putchar('-');
		y = -y;
	}
	if (y / 10 != 0)
	{
		x += x_putint(y / 10);
	}
	x += x_putchar('0' + (y % 10));
	return (x);
}
