#include "main.h"

/**
 * print_line - function that prints a line the number of times specified in
 * the argument.
 *
 *@n: paramter passed intp the print_line function that determines how many
 *times the line should be printed.
 *
 * Return: no return value as return type is void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
