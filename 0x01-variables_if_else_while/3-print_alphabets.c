#include<stdio.h>
/**
 *main - Print lower characters using putchar.
 *
 *Return: - Always return 0.
 */
int main(void)
{
int a = 97;
while (a <= 122)
{
	putchar(a);
	a = a + 1;
}
int l = 65;
while (l <= 90)
{
	putchar(l);
	l = l + 1;
}
putchar('\n');
return (0);
}
