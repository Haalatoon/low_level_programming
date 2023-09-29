#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int n, s, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (s = 1; s <= size - n; s++)
			{
				_putchar(' ');
			}
			for (c = 1; c <= n; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
