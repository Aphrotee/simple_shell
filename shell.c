#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

/**
 * main - shell
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t n = 0;
	char *narg[21], *tok, *cmd = (char *)malloc(sizeof(char) * 100);
	char *a = (char *)malloc(sizeof(char) * 1024);
	char *nenv[100] = {(char *)"PATH=/bin", 0};
	int i = 0, j = 0;

	printf("aphrotee@2106~$ ");
	getline(&a, &n, stdin);
	tok = strtok(a, " \n");
	while (tok != NULL)
	{
		narg[j] = strdup(tok);
		tok = strtok(NULL, " \n");
		j++;
	}
	narg[j] = NULL;
	strcpy(cmd, narg[0]);
	if (strcmp(cmd, "exit") == 0)
	{
		printf("!");
		return (0);
	}
	if (fork() != 0)
		wait(NULL);
	else
	{
		i = execve(cmd, narg, nenv);
		if (i == -1)
		{
			strcpy(cmd, "/bin/");
			strcat(cmd, narg[0]);
			strcpy(narg[0], cmd);
			i = execve(cmd, narg, nenv);
		}
	}
	main();
	return(0);
}
