#include "main.h"
/**
 * _puts -  prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	int i;

	i = 0;
	if (str == "")
	{
		_putchar('\n');
	}
	else
	{
		do {
			_putchar(str[i]);
			i++;
		} while (str[i] != '\0');
		_putchar('\n');
	}
}
