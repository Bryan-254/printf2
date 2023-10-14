#include "main.h"

/**
 * print_b - This function converts to binary
 * @vals: The argument
 * Return: An integer
 */

int print_b(va_list vals)
{
	int flag = 0;
	int count = 0;
	int x, a = 1, b;
	unsigned int num = va_arg(vals, unsigned int);
	unsigned int y;

	for (x = 0 ; x < 32 ; x++)
	{
		y = ((a << (32 - x)) & num);
		if (y >> (31 - x))
			flag = 1;
		if (flag)
		{
			a = y >> (31 - x);
			_putchar(a + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
