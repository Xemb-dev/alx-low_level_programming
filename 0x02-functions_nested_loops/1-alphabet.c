#include<stdio.h>
/**
 *main-entry point
 *prints the alphabets
 *@: used for storing the values
 *Return:0
 **/
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
