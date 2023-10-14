#include "main.h"

/**
 * print_hex - This function converts to hex
 * @vals: The value to be converted
 * Return: The counter
 */

int print_hex(va_list vals)
{
	int x;
	int counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < counter; x++)
	{
		array[x] = temp % 16;
		temp = tem / 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
