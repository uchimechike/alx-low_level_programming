#include "main.h"

/**
 * print_diagonal - function that prints a diagonal line
 *
 * @n:  parameter passed into the print_diagonal function
 *
 * Return: no return value as return type of the funtion is void
 */

void print_diagonal(int n)
{
	int a = 1;
	int b = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			b = 0;
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	} else
	{
		_putchar('\n');
	}
}
