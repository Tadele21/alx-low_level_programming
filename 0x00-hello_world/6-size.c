#include <stdio.h>
#inlcude <unistd.h>

/**
 * main - prints exaclty "ans that piece of art is useful"
 * - Dora korpar, 2015-10-19",
 *   followed by a new line, to the standard error.
 *   Return: Always 0 (Success)
 */
int main(void)
{ 
	write(2, "and that piece of art is useful\" - Dora korar, 2015-10-19\n", 59);
	return (1);
}
