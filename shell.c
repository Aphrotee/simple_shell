#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
extern char **environ;

/**
 * shell - receives and parses the command
 * @cmd: command string
 * @narg: command arguments
 *
 * Return: Nothing.
 */
void shell(char *cmd, char *narg[])
{
	size_t n = 0;
	char *tok;
	int j = 0;
	char *a = (char *)malloc(sizeof(char) * 1024);

	printf("aphrotee@21~$ ");
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
}
/**
 * main - shell
 *
 * Return: Always 0.
 */
int main(void)
{
	char *narg[21], *cmd = (char *)malloc(sizeof(char) * 100);
	int i = 0;

	while (1)
	{
		shell(cmd, narg);
		if (strcmp(cmd, "exit") == 0)
			break;
		if (fork() != 0)
			wait(NULL);
		else
		{
			i = execve(cmd, narg, environ);
				if (i == -1)
			{
				strcpy(cmd, "/bin/");
				strcat(cmd, narg[0]);
				strcpy(narg[0], cmd);
				i = execve(cmd, narg, environ);
			}
		}
	}
	exit(0);
	return (0);
}
