#include "main.h"
/**
 * _strcat -  concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	*dest = *dest + *src;
	return (dest);
}
