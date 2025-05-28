#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')           /* Base case: if not end of string */
	{
		_print_rev_recursion(s + 1);  /* Go deeper first */
		_putchar(*s);                /* Print on the way back */
	}
}

