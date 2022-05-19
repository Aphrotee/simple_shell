#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	char *line = NULL;
	size_t n = 0;

	printf("$");
	getline(&line, &n, stdin);
	printf("%s\n", line);
	return (0);
}
