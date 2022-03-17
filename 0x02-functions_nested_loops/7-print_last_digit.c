#include "main.h"

/**
  *print_last_digit - prints the last digit of any number
  *
  *@c: the input parameter
  *@l: holds the value for the last digit
  *
  *Return: returns the last digit of the input integer
  **/
int print_last_digit(int c)
{
	int l;

	if (c >= 0)
		l = c;
	else
		l = c * -1;
	l = l % 10;
	return (l);
}
