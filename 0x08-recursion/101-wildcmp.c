#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if identical, 0 otherwise
 * @s1: First string
 * @s2: Second string (can contain wildcard '*')
 *
 * Return: 1 if considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are at end, they match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If second string is '*' */
	if (*s2 == '*')
	{
		/* Move past '*' and try to match with or without advancing s1 */
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
	}

	/* If characters match, continue checking */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* Characters didn't match and no '*' to save it */
	return (0);
}

