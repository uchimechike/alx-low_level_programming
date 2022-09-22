/**
 * _strcat - function that concatenates two strings
 *
 * @dest: string to which anothe string is to be appended
 *
 * @src: string to be appended to another string
 *
 * Return: a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}
	/* now gotten the length of the string above */

	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[length] = src[j];
		++length;
	}

	dest[length] = '\0';

	return (dest);
}
