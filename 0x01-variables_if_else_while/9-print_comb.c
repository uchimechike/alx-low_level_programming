#include <stdio.h>
/**
 *  * main - Entry point
 *  *
 *  * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
			putchar(j);
		}
	}

	return (0);
}
