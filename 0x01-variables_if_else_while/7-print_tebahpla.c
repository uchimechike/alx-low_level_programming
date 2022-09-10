#include <stdio.h>
/**
 *  * main - Entry point
 *  *
 *  * Return: Always 0 (Success)
 */
int main(void)
{
	int var;

	for (var = 'z'; var >= 'a'; var--)
	{
		putchar(var);
	}
	putchar('\n');

	return (0);
}
