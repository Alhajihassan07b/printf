#include "main.h"
/**
 * x_putchar - print a character
 * @ch: input
 * Return: 1
 */
int x_putchar(char ch)
{
	return (write(1, &ch, 1));
}
