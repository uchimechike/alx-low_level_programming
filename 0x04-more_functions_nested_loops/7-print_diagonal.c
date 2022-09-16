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
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
