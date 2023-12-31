#include "main.h"

/**
 * print_HEX_extra - This function converts to HEX
 * @num: The value to be converted
 * Return: The counter
 */

int print_HEX_extra(unsigned int num)
{
	int x;
	int counter = 0;
	int *array;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		array[x] = temp % 16;
		temp = temp / 16;
	}

	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 7;
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
