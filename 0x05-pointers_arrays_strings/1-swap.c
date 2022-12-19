#include "main.h"

/**
 * swap_int-swapping 2 integer using a pointer
 * @a: integer
 * @b: integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
	return;

}
