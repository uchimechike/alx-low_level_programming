/**
 * _isupper - checks whether a character is uppercase or lowercase
 *
 * @ch: the character that is to be checked
 *
 * Return: an integer value. 0 or 1
 */

int _isupper(int ch)
{
	int val;

	if (ch >= 65 && ch <= 90)
	{
		val = 1;
	} else
	{
		val = 0;
	}

	return (val);
}
