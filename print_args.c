#include <stdio.h>

/**
 * main - Prints all the arguments, without using ac
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0
 *
 */
int main(int __attribute__((unused)) ac, char *av[])
{
	int i;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
