#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints the second half of the string
 *
 * @str: pointer to the memory address of the string to be printed
 *
 * Return: There is no return type
 */

void puts_half(char *str)
{
	int length;
	int i;

	length = strlen(str);

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	} else
	{
		for (i = (length / 2) + 1; i < length; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
}
