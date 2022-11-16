#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - a program that prints the PID of the parent process
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	pid_t myppid;

	myppid = getppid();
	printf("%u\n", myppid);
	return (0);
}
