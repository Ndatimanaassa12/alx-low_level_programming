#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Description: Compares s1 and s2 character by character.
 * Returns a negative value if s1 < s2, 0 if equal, positive if s1 > s2.
 *
 * Return: an integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

