#include<stdio.h>
#include"main.h"

/**
  *_islower- prints an ouput based on the text input
  *
  *@c: function parameter
  *Return: 0
  */
int  _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
