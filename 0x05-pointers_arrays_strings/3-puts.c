#include "main.h"

/**
 * _puts - function that prints a string to the standard output
 *
 * @str: pointer to the memory address of the first character in the string
 * literal
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
