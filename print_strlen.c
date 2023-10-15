#include "main.h"

/**
 * _strlen - This function returns length of a string
 * @str: The string pointer
 * Return: x
 */

int _strlen(char *str)
{
	int x;
	int count;

	for (x = 0 ; str[x] != 0 ; x++)
		count++;
	return (x);
}

/**
 * _strlencon - Strlen function for constant char pointer
 * @str: The char pointer
 * Return: x
 */

int _strlencon(const char *str)
{
	int x;
	int count;

	for (x = 0 ; str[x] != 0 ; x++)
		count++;
	return (x);
}
