#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int i, a, b, sum;

	sum = 0;
	a = 0;
	b = 1;
	i = 0;
	do {
		sum = a + b;
		printf("%ld", sum);
		a = b;
		b = sum;
		if (i < 49)
		{
			printf(", ");
		}
		i++;
	} while (i < 50);
	printf("\n");
	return (0);
}



