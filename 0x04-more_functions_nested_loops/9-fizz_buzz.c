#include "main.h"

/**
 * main - Prints numbers 1 - 100 followed by a new line
 * numbers that are multiples of 3 print Fizz
 * numbers that are multiples of 5 prints Buzz
 * numbers that are multiples of 3 and 5 print FizzBuzz
 * each number and word to be separated by space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && !(x % 5 == 0))
			printf("Fizz");
		else if (x % 5 == 0 && !(x % 3 == 0))
			printf("Buzz");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", x);
		if (x != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
