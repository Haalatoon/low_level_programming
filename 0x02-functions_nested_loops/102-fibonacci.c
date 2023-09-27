#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum;

	sum = 1;
	i = 0;
	do {
		sum += sum;
		printf("%d", sum);
		if (i < 49)
		{
			printf(",");
		}
		i++;
	} while (i < 50);
	printf("\n");
	return (0);
}



