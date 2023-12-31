#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i, c = 0;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
