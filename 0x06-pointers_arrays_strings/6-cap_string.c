#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @s: string to enter
 * Return: s
 */

char *cap_string(char *s)
{
	int n, i;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122 &&
		(s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
		s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
		|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
		|| s[i] == '}'))
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
