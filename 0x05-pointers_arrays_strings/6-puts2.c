#include "main.h"
/**
 * puts2 -  prints every other character of a string,
 * starting with the first character,
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int mko = 0;
	int y = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		mko++;
	}
	y = mko - 1;
	for (o = 0; o <= y; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
