#include "main.h"
/**
 * x_putstr - print string
 *
 * @str: string input
 * Return: no bytes
 */
int x_putstr(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		x_putchar(str[x]);
	}
	return (x);
}
