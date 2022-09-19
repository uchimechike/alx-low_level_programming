/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter passed to the _strlen function
 *
 * Return: an integer value
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
