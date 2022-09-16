#include "main.h"

/**
 * print_square - function that prints # in a square pattern as directed by the
 * argument parameter
 *
 * @size: argument passed into the print_square function
 *
 * Return: no return value as function prototype is void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
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
