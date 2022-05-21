#include <stdio.h>
#include <stdlib.h>
extern char **environ;

/**
 * _getenv - gets the value of a particular env. variable
 * @name: name of the environmental variable
 *
 * Return: pointer to value
 */
char *_getenv(const char *name)
{
	char temp[] = {'\0'};
	char *d = NULL;
	int i, j = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		printf("$\n");
		i++;
	}
	i = 0;
	while (environ[i])
	{printf("7\n");
		while (*environ[i] != '=')
		{
			printf("6\n");
			if (*environ[i] != *name)
			{
				printf("5\n");
				break;
			}
			(environ[i])++;
			name++;
		}
		if (*environ[i] == '=')
		{printf("=");
			while (*(environ[i] + 1) != '\0')
			{
				(environ[i])++;
				temp[j] = *environ[i];
				j++;
			}
			d = temp;
		}
		i++;
	}
	return (d);
}
