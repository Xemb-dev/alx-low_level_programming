#include<stdio.h>
/**
  *main-entry point
  *@: Prints the alphabets 10 times
  *Return: void
  **/
int main(void)
{
	int number = 0;
	char a = 'a';

	while (number < 10)
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		number++;
		a='a';
	}
	return (0);
}
