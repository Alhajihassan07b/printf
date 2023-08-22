#include "main.h"
#include <stdio.h>

/**
 * print_number - print number of integers
 * @num: number of integers
 * Return: count of digits
 */
int print_number(int num)
{
    int count = 0;
    int temp;
    int divisor;

    if (num == 0) 
    {
        x_putchar('0');
	return (1);
    }

    if (num < 0) 
    {
        x_putchar('-');
        count++;
        num = -num;
    }

    temp = num;
    while (temp > 0) 
    {
        temp /= 10;
        count++;
    }

    temp = num;
    divisor = 1;
    while (temp >= 10) 
    {
        divisor *= 10;
        temp /= 10;
    }

    while (divisor > 0) 
    {
        x_putchar(num / divisor + '0');
        num %= divisor;
        divisor /= 10;
    }

    return count;
}
