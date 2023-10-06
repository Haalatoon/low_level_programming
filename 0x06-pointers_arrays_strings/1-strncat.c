#include "main.h"
/**
 * _strncat - concatenates two strings with some conditions
 * @dest: first string
 * @src: second string
 * @n: num of bytes to use at most from src
 *
 * Return: the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
