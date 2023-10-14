#include "main.h"

/**
 * prinf_c - This function prints a character
 * @vals: The argument to be checked
 * Return: 1
 */

int printf_c(va_list vals)
{
	char c;

	c = va_arg(vals, int);
	_putchar(c);

	return (1);
}
