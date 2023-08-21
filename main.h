#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int x_putchar(char ch);
int x_putint(int y);
int x_putstr(char *str);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);

#define NOT_USED(x) (void)(x)
#define BUFF_SIZE 1024

#endif
