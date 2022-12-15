#include "main.h"

/**
 * more_numbers - print the number from 0 to 14 with the multiplicity of 10
 * followed by the new line
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; ++i)
	{
		for (j = 0; j < 14; ++j)
		{
			_putchar(j + ' ');
		}

		_putchar('\n');
	}
}

