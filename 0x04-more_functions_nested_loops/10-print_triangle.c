#include "main.h"

/**
 * print_triangle - function that prints an left handed triangle
 *
 * @size: argument passed into the print_triangle function
 *
 * Return: There is no return value because function return type is void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			/*This loop prints the whitespace*/
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
