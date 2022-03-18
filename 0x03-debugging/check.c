#include "main.h"

/**
  *positive_or_negative - returns an output based on the input operator
  *
  *@c: reels in the user input
  *
  *Return: returns 0, 1 or -1
  */

void positive_or_negative(int c)
{
	if (c > 0)
	{
		printf("%d is positive", c);
	}
	else if (c == 0)
	{
		printf("%d is zero", c);
	}
	else
	{
		printf("%d is negative", c);
	}
}
