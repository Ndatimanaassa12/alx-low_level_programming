#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to modify
 *
 * Return: The modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize first character if it's a lowercase letter */
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}

	while (s[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
		i++;
	}

	return (s);
}

