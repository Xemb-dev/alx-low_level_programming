#include"main.h"

/**
  *_islower- prints an ouput based on the text input
  *
  *@c: function parameter
  *Return: 0
  */
int _islower(int c)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (c == a)
		{
			return (1);
		}
		a++;
	}
	return (0);
}
