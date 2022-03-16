#include"main.h"
/**
  *main-Entry point
  *@: putchar to print
  *Return: 0
  **/
void print_alphabet(void)
{
	char a[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;

	while (a[i])
	{
		_putchar(a[i]);
		i++;
	}
}
