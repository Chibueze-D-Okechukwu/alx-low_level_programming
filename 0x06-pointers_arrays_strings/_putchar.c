#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: Character to print
 *
 * Return: on succes 1.
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
