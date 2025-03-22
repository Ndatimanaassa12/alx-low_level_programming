#include<stdio.h>
/**
 *main - print base 10 numbers.
 *
 *Return: always return 0.
 */
int main(void)
{
int i = 0;
while (i < 16)
{
	if (i < 16)
		putchar(i + '0');
	else
		putchar(i - 10 + 'a');
	i++;
}
putchar('\n');
return (0);
}
