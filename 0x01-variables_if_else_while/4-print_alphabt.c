#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int a = 97;
while (a <= 122)
{
if (a == 113 || a == 101)
{
	a++;
	continue;
}
putchar(a);
putchar('\n');
a = a + 1;
}
return (0);
}
