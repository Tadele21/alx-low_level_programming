#include "main.h"
#include <stdint.h>
/**
 * get_endianness - checks the endianness.
 *
 * Return: void
 */

int get_endianness(void)
{
	unsigned int y = 0x76543210;
	char *d = (char *)&y;

	return (*d == 0x10);
}
