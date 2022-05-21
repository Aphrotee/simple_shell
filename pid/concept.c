#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <strings.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
extern char **environ;

/**
 * main - concept excercises
 * @ac: argument counter
 * @av: argument array
 * @env: environtmental variables array
 *
 * Return: 0 Always
 */
int main(void)
{
	char *a, *b, *c;

	a = _getenv("HOME");
	b = _getenv("_");
	c = _getenv("LS_COLOURS");
	printf("%s\n%s\n%s\n", a, b, c);
	return (0);
}
