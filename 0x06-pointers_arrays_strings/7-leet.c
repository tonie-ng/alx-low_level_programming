#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	int tracker = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + tracker) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + tracker) == low_letters[i] || *(s + tracker) == upp_letters[i])
			{
				*(s + tracker) = numbers[i];
				break;
			}
		}
	tracker++;
	}

	return (s);
}
