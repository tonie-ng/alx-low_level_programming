#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int v;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);

	for (v = 0; v < size; v++)
		string[v] = c;
	return (string);
}
