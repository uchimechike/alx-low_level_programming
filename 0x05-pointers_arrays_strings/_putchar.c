#include <unistd.h>
/**
 * _putchar - function that writes characters to the standard output
 *
 * @character: character to be printed to the standard output
 *
 * Return: returns an integer value on success
 */

int _putchar(char character)
{
	write(1, &character, 1);

	return (0);
}
