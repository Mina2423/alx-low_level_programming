#include "main.h"

/**
 * print_most_numbers - num except 2 and 4
 * return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		putchar(num + 48);
	}
	putchar('\n');
}
