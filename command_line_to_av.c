#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function that splits a string
 * and returns an array of each word of the string
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *token;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("buffer getline: %s", buffer);
	}
	token = strtok(buffer, " ");

	while (token)
	{
		printf("buffer strtok: %s\n", token);
		tooken = strtok(NULL, " ");
	}
	free(buffer);
	return (0);
}
