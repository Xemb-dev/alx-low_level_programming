#include<stdio.h>
#include<stdlib.h>
/**
 *main-Entry point
 *@: putchar to print
 *Return: 0
 **/
int main(void)
{
	char a[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;

	while (a[i])
	{
		putchar(a[i]);
		i++;
	}
	return (0);
}
