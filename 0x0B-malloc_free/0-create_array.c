#include "main.h"
/**
 * *create_array - creates an array of chairs,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to the array intialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

			if (size == 0 || n == 0)
			return (0);
			while (size--)
			n[size] = c;
			return (n);
}
