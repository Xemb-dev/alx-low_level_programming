#include "main.h"

/**
  *print_sign - returns and print +,- or 0 based on the input
  *@n: takes in an integer input
  *Return: 0,1 or -1 based on input
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
