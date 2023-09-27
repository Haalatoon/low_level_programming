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
		S += sum;
	} while (sum < 4000000);
	printf("%ld\n", S);
	return (0);
}
