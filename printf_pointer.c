#include "main.h"

/**
 * print_pointer - This function prints a pointer
 * @vals: The value
 * Return: An integer
 */

int print_pointer(va_list vals)
{
	void *p;
	char *s = "(nil)";
	long int y;
	int j, c;

	p = va_arg(vals, void *);
	if (p == NULL)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
			_putchar(s[j]);
		return (j);
	}
	y = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	c = print_hex_extra(y);
	return (c + 2);
}
