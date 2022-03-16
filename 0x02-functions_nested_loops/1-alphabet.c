#include "main.h"

/**
  * print_alphabet -prints the letters of the alphabet
  * @: a holds the alphabet
  * Return: void
  **/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
