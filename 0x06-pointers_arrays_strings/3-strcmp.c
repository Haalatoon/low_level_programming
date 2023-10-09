#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if they're equal, 15 if the 1st greater than 2nd and -15 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, m = 0;

	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;
	if (n < m)
		return (-15);
	else if (n == m)
		return (0);
	else
		return (15);
}
