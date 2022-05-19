#include <stdio.h>

/**
 * main - entry point
 * @ac: argument counter
 * @av: command arguments
 *
 * Return: 0
 */
int main(int ac, const char **av)
{
	int a = 0;

	while (a < ac)
	{
		printf("argv[%d]: %s\n", a, av[a]);
		a++;
	}
	printf("Betty is beautiful\n");
	return (0);
}
