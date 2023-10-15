#include "main.h"

/**
 * printf_int - This function prints integer
 * @args: The argument to be printed
 * Return: The count of characters to be printed
 */

int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, final = n % 10, digit, exp = 1;
	int x = 1;

	n = n / 10;
	num = n;

	if (final < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		final = -final;
		x++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(final + '0');

	return (x);
}

#include "main.h"

/**
 * printf_deci - This function prints the decimal
 * @args: The argument to print
 * Return: The count of numbers printed
 */

int printf_deci(va_list args)
{
	int n = va_arg(args, int);
	int num, final = n % 10, digit, exp = 1;
	int x = 1;

	n = n / 10;
	num = n;

	if (final < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		final = -final;
		x++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(final + '0');

	return (x);
}
