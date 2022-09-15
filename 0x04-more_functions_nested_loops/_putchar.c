#include <unistd.h>

/**
 * _putchar - function to write a specified character to the standard output
 *
 * @ch: character to be written to standard output
 *
 * Return: always (0) for success
 */

int _putchar(int ch)
{
	write(1, &ch, 1);
	
	return (0);
}
