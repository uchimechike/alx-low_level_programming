#include "main.h"
/**
 * print_most_numbers - function to print most numbers except 2 and 4
 *
 * Return: no return value as prototype is void
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch == 50 || ch == 52)
			continue;
		else
			_putchar(ch);
	}
	_putchar('\n');
}
