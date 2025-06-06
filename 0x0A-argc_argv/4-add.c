#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if string is all digits, 0 otherwise
 */
int is_number(char *s)
{
    int i = 0;

    if (s[0] == '\0') /* Empty string is not a number */
        return 0;

    while (s[i])
    {
        if (!isdigit(s[i]))
            return 0;
        i++;
    }
    return 1;
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error (non-digit input)
 */
int main(int argc, char *argv[])
{
    int sum = 0, i;

    if (argc == 1) /* No numbers passed */
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (!is_number(argv[i]))
        {
            printf("Error\n");
            return 1;
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return 0;
}

