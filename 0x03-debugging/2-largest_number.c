#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third integer
 * Return: larger number
 */

int largest_number(int a, int b, int c)
{

	int tade;

	if (a >= b && a >= c)
	{
		tade  = a;
	}
	else if (b >= a && b >= c)
	{
		tade = b;
	}
	else
	{
		tade = c;
	}

	return (tade);
}
