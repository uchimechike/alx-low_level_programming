#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = k + 1; l <= 58; i++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == 58 && j == 57 && k == 58 && l == 58))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
