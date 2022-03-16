#include <stdio.h>

void print_alphabet(void);
void _putchar(void);
void print_alphabet_x10(void);

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
void _putchar(void)
{
	char a[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;

	while (a[i])
	{
		putchar(a[i]);
		i++;
	}
}
void print_alphabet_x10(void)
{
	char a = 'a';
	int number= 0;
	
	while (number < 10)
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		a='a';
		number++;
	}
}
