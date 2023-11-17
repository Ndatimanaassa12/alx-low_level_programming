#include "main.h"
/**
 * _isdigit - check digits
 * @c:arg num
 * Return: 1 if is digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}

