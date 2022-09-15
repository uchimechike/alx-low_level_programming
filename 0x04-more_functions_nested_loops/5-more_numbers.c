#include "main.h"

/**
 * more_numbers - function that prints 0 to 14 ten times
 *
 * Return: return type is void
 */

void more_numbers(void)
{
	int i, j, remainder;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			remainder = j;

			if (j > 9)
			{
				_putchar(49);
				remainder = j % 10;
			}
			_putchar(remainder + 48);
		}
		_putchar('\n');
	}
}
