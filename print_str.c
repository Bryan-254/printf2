#include "main.h"

/**
 * printf_s - This function prints a string
 * @vals: This is the argument
 * Return: String length
 */

int printf_s(va_list vals)
{
	char *str;
	int x;
	int len;

	str = va_arg(vals, char *);
	if (str == NULL)
	{
		str = "(null)";

		len = _strlen(str);

		for (x = 0 ; x < len ; x++)
			_putchar(str[x]);

		return (len);
	}
	else
	{
		len = _strlen(str);

		for (x = 0 ; x < len ; x++)
			_putchar(str[x]);

		return (len);
	}
}
