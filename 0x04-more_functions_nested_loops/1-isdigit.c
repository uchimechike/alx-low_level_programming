/**
 * _isdigit - function that checks whether an argument is a digit or not
 *
 * @ch: argument passed into the _isdigit functio to be checked
 *
 * Return: always returns an integer based on the conditions
 */

int _isdigit(int ch)
{
	int val;

	if (ch >= 48 && ch <= 57)
	{
		val = 1;
	} else
	{
		val = 0;
	}

	return (val);
}

