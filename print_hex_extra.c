#include "main.h"

/**
 * print_hex - This function converts to hex
 * @vals: The value to be converted
 * Return: The counter
 */

int print_hex_extra(unsigned long int num)
{
	long int x;
	long int counter = 0;
	long int *array;
	unsigned long int tem = num;
	
	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));
	
	if (array == NULL)
	{
		return (NULL);
	}
	
	for (x = 0; x < counter; x++)
	{
		array[x] = tem % 16;
		tem = tem / 16;
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
