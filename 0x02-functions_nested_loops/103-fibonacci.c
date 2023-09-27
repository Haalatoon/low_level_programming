#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int a, b, sum, S;

	a = 0;
	b = 1;
	sum = 0;
	S = 0;
	do {
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
		{
			S += sum;
		}
	} while (S < 4000000);
	printf("%ld\n", S);
	return (0);
}
