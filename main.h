#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stadarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_c(va_list vals);
int printf_s(va_list vals);
int _strlen(char *str);
int _strlencon(const char *str);
int print_perc(void);
int printf_int(va_list args);
int printf_deci(va_list args);
int print_b(va_list val);
int printf_unsigned(va_list args);
int printf_oct(va_list vals);
int print_hex(va_list vals);
int print_HEX(va_list vals);
int print_HEX_extra(unsigned int num);
int printf_sec_string(va_list vals);

#endif
