#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int a, b, sum, i;

	a = 0;
	b = 1;
	sum = 0;
	i = 1;
	do {
		sum = a + b;
		printf("%ld", sum);
		if (i < 98)
		{
			printf(", ");
		}
		i++;
		a = b;
		b = sum;
	} while (i <= 98);
	printf("\n");
	return (0);
}
