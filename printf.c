#include "main.h"

/**
 * _printf - This function mimics the printf
 * @format: The identifier to be checked
 * Return: An integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_c}, {"%s", printf_s}, {"%i", printf_int},
		{"%d", printf_int}, {"%b", print_b}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", printf_sec_string}, {"%p", print_pointer}, {"%d", printf_deci},
		{"%%", print_perc},
		{NULL, NULL},
	};

	va_list args;
	int x = 0, len = 0;
	int z;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		z = 13;
		while (z >= 0)
		{
			if (m[z].ph[0] == format[x] && m[z].ph[1] == format[x + 1])
			{
				len = len + m[z].f(args);
				x = x + 2;
				goto Here;
			}
			z--;
		}
		_putchar(format[x]);
		x++;
		len++;
	}
	va_end(args);
	return (len);
}
