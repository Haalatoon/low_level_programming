#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to print its sign
 *
 * Return: 1 if n greater than zero, -1 if it's less and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
