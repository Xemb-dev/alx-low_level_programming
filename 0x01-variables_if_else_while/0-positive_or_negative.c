#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-Engry point
*Inserts the data into n
*and prints the operator value of n
*@: used for holding randum number
*Return:0
**/
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit= n % 10;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	printf("Character: %d \n", digit);
	return (0);
}
