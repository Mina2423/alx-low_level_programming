#include "main.h"

/**
 * print_square - print a square unsig #
 * @size: is the size of the square
 * return: always 0
 */
void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			putchar('#');
		putchar('\n');
	}
}
