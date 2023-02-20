#include <stdio.h>
/**
 * main - a C program that prints the size of various types.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("The size of a char is: %zu byte(s)\n", sizeof(char));
	printf("The size of an int is: %zu byte(s)\n", sizeof(int));
	printf("The size of a long int is: %zu byte(s)\n", sizeof(long int));
	printf("The size of a long long int is: %zu byte(s)\n", sizeof(long long int));
	printf("The size of a float is: %zu byte(s)\n", sizeof(float));
	return (0);
}
