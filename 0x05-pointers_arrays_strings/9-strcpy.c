#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies a string pointed to
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (c >= 0)
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
		c++;
	}
	return (dest);
}
