#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to ue
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int m;

	if (n >= 0)
	{
		_putchar(48 + n % 10);
		return (n % 10);
	}
	else
	{
		m = -n;
		_putchar(48 + m % 10);
		return (m % 10);
	}
}
