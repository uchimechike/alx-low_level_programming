#include "main.h"
#include <string.h>

/**
 * print_rev - function tha prints a string in reverse order
 *
 * @s: string pointer to address of first character in te string literal
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
