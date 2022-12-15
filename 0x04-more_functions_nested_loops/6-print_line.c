#include "main.h"

/**
 * print_line - draw a strainght line in the terimal
 * @a: number of times the character _ should be printed
 */
void print_line(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i < = a; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
