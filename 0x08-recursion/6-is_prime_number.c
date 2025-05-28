#include "main.h"

/**
 * check_prime - Helper function to check divisibility
 * @n: The number to check
 * @i: The current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n)      // No factor found up to sqrt(n), so n is prime
		return (1);
	if (n % i == 0)     // Divisible by i, so not prime
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if n is a prime number
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

