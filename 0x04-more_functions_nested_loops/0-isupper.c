int _isupper(int ch)
{
	int val;

	if(ch >= 65 && ch <= 90)
	{
		val = 1;
	} else
	{
		val = 0;
	}

	return (val);
}
