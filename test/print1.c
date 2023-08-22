#include "main.h"
#include <stdio.h>

/**
 * _printf - simplified printf function
 * @format: format string
 * @num: integer to print
 * Return: number of characters printed
 */
int _printf(const char *format, int num)
{
    int count = 0;

    if (format == NULL)
        return -1;

    while (*format) {
        if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i')) {
            count += print_number(num);
            format += 2;
        } else {
            x_putchar(*format);
            count++;
            format++;
        }
    }

    return count;
}

int main()
{
    int num = 12345;
    int printedCount = _printf("Number: %d\n", num);
    printf("Printed characters: %d\n", printedCount);
    return 0;
}
