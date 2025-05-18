#include"main.h"
/**
 * _strncat - concunate two Strings
 * @dest : destination
 * @src :source
 * @n : number to return
 *
 * Description: Appends the src string to the dest string
 *
 * Return : A pointer to the resulting string dest with n
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the length of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append up to n bytes from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate dest */
	dest[i] = '\0';

	return (dest);
}
