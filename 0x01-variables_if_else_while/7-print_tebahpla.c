#include<stdio.h>
/**
 *main - Print lower characters using putchar
 *
 *Return - Always return 0.
 */
int main(void)
{
int a = 122;
while (a >= 97)
{
	putchar(a);
	putchar('\n');
	a--;
}
return (0);
}
