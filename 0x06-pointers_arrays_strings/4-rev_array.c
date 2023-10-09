#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: string to reverse
 * @n: number of  elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, var;

	while (i < n - 1 - i)
	{
		var = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = var;
		i++;
	}
}
