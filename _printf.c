#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: character string, composed of zero or more directives.
 *
 * Return: Number of characters printed, excluding '\0'.
 */
int _printf(const char *format, ...)
{
	unsigned int x, p = 0, y = 0, count;

	va_list xy;
	va_start(xy, format);

	if (!format)
		return (-1);
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
		x_putchar(format[x]);
		p++;
		}
		else if (format[x + 1] == 'c')
		{
			x_putchar(va_arg(xy, int));
			x++;
			p++;
		}
		else if (format[x + 1] == 's')
		{
			char *str = va_arg(xy, char *);
			if (str == NULL)
				str = "(null)";
			count = x_putchar(str[x]);
			p += count;
			x++;
		}
		else if(format[x + 1] == '%')
		{
			x_putchar('%');
			x++;
			p++;
		}
		else if (format[x + 1] == 'd' || format[x + 1] == 'i')
		{
			y += x_putchar(va_arg(xy, int));
			x++;
			p += y;
		}
		else
		{
		x_putchar('%');
		p++;
		} p += 1;
	} va_end(xy);
	return (p);
}
