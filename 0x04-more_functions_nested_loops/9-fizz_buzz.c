#include <stdio.h>
/**
 * main - Fizz buzz program
 * Return: 0
 */
int main(void)
{
	int v;

	for (v = 1; v <= 100; v++)
	{
		if (v % 3 == 0 && v % 5 == 0)
			printf(" FizzBuzz");
		else if (v % 3 == 0)
			printf(" Fizz");
		else if (v % 5 == 0)
			printf(" Buzz");
		else if (v == 1)
			printf("%d", v);
		else
			printf(" %d", v);
	}
	printf("\n");
	return (0);
}
