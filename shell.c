#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

/**
 * main - shell
 * @ac: argument counter
 * @av: argument array
 *
 * Return: Always 0.
 */
int main(int ac, const char *av[])
{
	size_t n = 0;
	char *narg[] = {NULL, NULL};

	printf("aphrotee@2106~$");
	getline(&narg[0], &n, stdin);
	execve(narg[0], narg, NULL);
	main(ac, av);
	return (0);
}
