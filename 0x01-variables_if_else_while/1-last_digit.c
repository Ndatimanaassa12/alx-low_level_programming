#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - Last digit
 *
 *Return: always return 0.
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int temp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	temp = n % 10;
	if (temp > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, temp);
	else if (temp < 6 && temp != 0)
		printf("Last digit of %d is %d and is less than 6 and not \n0", n, temp);
	else
		printf("Last digit of %d is %d and is 0\n", n, temp);
	return (0);
}
