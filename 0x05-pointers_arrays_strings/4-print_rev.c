#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * retuen: 0
 */
void print_rev(char *s)
{
	int mko = 0;
	int o;

	while (*s != '\0')
	{
		mko++;
		s++;
	}
	s--;
	for (o = mko; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
