#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <strings.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
extern char **environ;

/**
 * main - prints environmental variables
 *
 * Return: 0 Always
 */
int main(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
