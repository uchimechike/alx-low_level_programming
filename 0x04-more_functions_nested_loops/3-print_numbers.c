#include "main.h"
/**
 * print_numbers - function that prints numbers from 0 - 9
 *
 * Return: its a void prototype so no return value
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
