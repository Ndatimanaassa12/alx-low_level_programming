#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if n > 0{
		printf("is positive");
	}
		elseif n == 0 {
		printf("is zero");
		}
		else
			("negative");
	return (0);
}
