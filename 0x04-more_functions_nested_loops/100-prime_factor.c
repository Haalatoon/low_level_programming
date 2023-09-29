#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int prime(int p);

int main(void)
{
	long int i, n;

	for (i = 3; i < 612852475143; i++)
	{
		if ((612852475143 % i) == 0 && prime(i) == 0)
		{
			n = i;
		}
	}
	printf("%ld\n", n);
	return (0);
}

/**
 * prime - determines if a number is primary or not
 * @p: number to enter
 *
 * Return: 1 if primary, 0 otherwise
 */
int prime(int p)
{
	int i, count;

	count = 0;
	for (i = 2; i < p - 1; i++)
	{
		if (p % i == 0)
		{
			count += 1;
		}
	}
	if (count == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
