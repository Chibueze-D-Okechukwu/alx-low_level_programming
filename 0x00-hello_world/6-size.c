#include <stdio.h>
/**
 * main - a C program that prints the size of various types.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("The size of a char is: %zu byte(s)\n", sizeof(a));
printf("The size of an int is: %zu byte(s)\n", sizeof(b));
printf("The size of a long int is: %zu byte(s)\n", sizeof(c));
printf("The size of a long long int is: %zu byte(s)\n", sizeof(d));
printf("The size of a float is: %zu byte(s)\n", sizeof(f));
return (0);
}
