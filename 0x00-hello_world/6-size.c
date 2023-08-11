#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */

int main(void)
{
	printf("Size of a char: %ln byte(S)\n", sizeof(char));
	printf("Size of an int: %ln byte(S)\n", sizeof(int));
	printf("Size of a long int: %ln byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %ln byte(S)\n", sizeof(long long int));
	printf("Size of a float: %ln byte(S)\n", sizeof(float));
	return (0);
}
