#include "main.h"

/**
 * more_numbers - function that prints 0 to 14 ten times
 *
 * Return: return type is void
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j < 50; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (j == 48)
				{
					_putchar(k);
				} else
				{
					if (!(k >= 53))
					{
						_putchar(j);
						_putchar(k);
					} else
					{
						break;
					}
				}
			}
		}
		_putchar('\n');
	}
}
