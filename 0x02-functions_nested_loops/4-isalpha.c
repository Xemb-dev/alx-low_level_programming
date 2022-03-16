/**
  *_isalpha - returns 1 if the input is an uppercase/lowercase letter
  *@c: user input in integer
  *Return: 1 for uppercase or lowercase
  **/
int _isalpha(int c)
{
	char a = 'A', b = 'a';

	while (b <= 'z')
	{
		if (b == c)
			return (1);
		b++;
	}
	while (a <= 'Z')
	{
		if (c == a)
			return (1);
		a++;
	}
	return (0);
}
