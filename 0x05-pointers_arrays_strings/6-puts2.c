#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character in a string starting from
 * the first character
 *
 * @str: string from which every character is to be printed, Passed as an
 * argument to the function
 *
 * Return: No return value as return value is null
 */

void puts2(char *str)
{
	int length;
	int i;

	length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

