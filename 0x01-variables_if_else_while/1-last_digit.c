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
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	printf("Last digit of %d is ", n);
	if (digit > 5)
		printf("%d and is greater than 5\n", digit);
	else if (digit == 0)
	{
		printf("%d and is 0\n", digit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", digit);
	}
	return (0);
}
