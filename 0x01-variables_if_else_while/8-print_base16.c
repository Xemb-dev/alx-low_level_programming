#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-Engry point
*Inserts the data into n
*and prints the operator value of n
*and the last digit of n
*@: used for holding randum number
*Return:0
**/
int main(void)
{
	int n = 0;

	while (n <= 15)
	{
		printf("%x", n);
		n++;
	}
	putchar('\n');
	return (0);
}
