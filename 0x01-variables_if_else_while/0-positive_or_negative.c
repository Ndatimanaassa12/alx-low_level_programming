#include <stdlib.h>
#include <time.h>
/**
 *main - print whether the number stored in the variable n is positive or negative.
 *
 *Return - Always Return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
	
		printf("%d is positive/n",n);

	else if (n < 0)
	
		printf("%d is negative/n",n);
	
	else
	
		printf("is zero/n");
	
	return (0);
}
