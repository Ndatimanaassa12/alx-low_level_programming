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
		printf("Last digit of %d is and is greater than 5", n);
	else if (temp < 6 && temp != 0)
		printf("Last digit of %d is  and is less than 6 and not 0", n);
	else
		printf("Last digit of %d is  and is 0", n);
	return (0);
}
