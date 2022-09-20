/**
 * _strcopy - function that copies the value of one string to another
 * @dest: pointer where string is to be copied
 *
 * @src: pointer from which string is to be copied
 *
 * Return: Return value is a pointer
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = *(src + i);

	return (dest);
}
