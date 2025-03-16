#include<stdio.h>
/**
 *main - Print lower characters using putchar
 *
 *Return - Always return 0.
 */
int main(void)
{
int a = 97;
while (a <= 122)
{
	putchar(a);
	putchar('\n');
	a = a + 1;
}
return (0);
}
