#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it rcieved
 * @argc: number of command line argument
 * @aegv: array that contains the program command line
 * Return: (0) when successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
