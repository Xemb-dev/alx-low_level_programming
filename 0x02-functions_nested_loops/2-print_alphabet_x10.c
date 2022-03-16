#include "main.h"
/**
  *print_alphabet_x10 function
  *@: prints the alphabets 10 times
  *Return: void
  */
void print_alphabet_x10(void)
{
	int number = 0;
	char a = 'a';
	
	while (number < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a='a';
		number ++;
		_putchar('\n');
	}
}
