#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *s)
{
	int v, t;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (v = 0; s[v] != '\0'; v++)
	{
		for (t = 0; x[t] != '\0'; t++)
		{
			if (s[v] == x[t])
			{
				s[v] = y[t];
				break;
			}
		}
	}
	return (s);
}
