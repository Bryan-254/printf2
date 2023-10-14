#include "main.h"

/**
 * printf_sec_string - Function prints the unique string
 * @vals: The value
 * Return: The number of characters printed
 */

int printf_sec_string(va_list vals)
{
	char *s;
	int a, len = 0;
	int value;

	s = va_arg(vals, char *);

	if (s == NULL)
		s = "(null)";
	for (a = 0 ; s[a] != '\0' ; a++)
	{
		if (s[a] < 32 || s[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[a];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[a]);
			len++;
		}
	}
	return (len);
}
