#include <stdio.h>
/**
 *  * main - Entry point
 *  *
 *  * Return: Always 0 (Success)
 */
int main(void)
{
	int var;

	for (var = 48; var < 58; var++)
	{
		putchar(var);
	}
	for (var = 'a'; var <= 'f'; var++)
	{
		putchar(var);
	}
	putchar('\n');

	return (0);
}
