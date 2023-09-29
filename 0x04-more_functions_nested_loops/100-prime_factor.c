#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int i, j, p;
	int k;


	k = 0;
	for (i = 2; i < 612852475143; i++)
	{
		if (612852475143 % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					k += 1;
				}
			}
			if (k == 0)
			{
				p = i;
			}
		}
	}
	printf("%ld\n", p);
	return (0);
}
