#include "main.h"
/**
 * _isupper- check if it is upper
 *@c:character to check
 *
 * Return: 1 if is upper otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
