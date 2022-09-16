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
	int i, j;

	i = n;

	while (n > 0)
	{
		if (n < 0 || n == 0)
		{
			break;
		}
		j = i - (n - 1);

		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
