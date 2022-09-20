#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 *
 * @s: pointer to the string passed to the function
 *
 * Return: return type is void
 */

void rev_string(char *s)
{
	int length;
	int i;

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		char temp = *(s + i);
		*(s + i) = *(s + ((length - 1) - i));
		*(s + ((length - 1) - i)) = temp;
	}
}

